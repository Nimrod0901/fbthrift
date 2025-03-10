/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/cpp2/server/BaseThriftServer.h>

#include <fcntl.h>

#include <iostream>
#include <random>
#include <sstream>
#include <thread>

#include <folly/Conv.h>
#include <folly/GLog.h>
#include <folly/Memory.h>
#include <folly/Portability.h>
#include <folly/Random.h>
#include <folly/ScopeGuard.h>
#include <folly/portability/Sockets.h>

THRIFT_FLAG_DEFINE_int64(server_default_socket_queue_timeout_ms, 100);
THRIFT_FLAG_DEFINE_int64(server_default_queue_timeout_ms, 100);

THRIFT_FLAG_DEFINE_int64(server_polled_service_health_liveness_ms, 100);
THRIFT_FLAG_DEFINE_int64(
    server_ingress_memory_limit_enforcement_payload_size_min_bytes, 1024);

THRIFT_FLAG_DEFINE_bool(server_reject_header_connections, false);

namespace apache {
namespace thrift {

namespace detail {

THRIFT_PLUGGABLE_FUNC_REGISTER(
    folly::observer::Observer<AdaptiveConcurrencyController::Config>,
    makeAdaptiveConcurrencyConfig) {
  return folly::observer::makeStaticObserver(
      AdaptiveConcurrencyController::Config{});
}

} // namespace detail

using namespace std;

const size_t BaseThriftServer::T_ASYNC_DEFAULT_WORKER_THREADS =
    std::thread::hardware_concurrency();

BaseThriftServer::BaseThriftServer()
    : adaptiveConcurrencyController_{apache::thrift::detail::
          makeAdaptiveConcurrencyConfig(), maxRequests_.getObserver()},
      addresses_(1) {}

void BaseThriftServer::CumulativeFailureInjection::set(
    const FailureInjection& fi) {
  CHECK_GE(fi.errorFraction, 0);
  CHECK_GE(fi.dropFraction, 0);
  CHECK_GE(fi.disconnectFraction, 0);
  CHECK_LE(fi.errorFraction + fi.dropFraction + fi.disconnectFraction, 1);

  std::lock_guard<std::mutex> lock(mutex_);
  errorThreshold_ = fi.errorFraction;
  dropThreshold_ = errorThreshold_ + fi.dropFraction;
  disconnectThreshold_ = dropThreshold_ + fi.disconnectFraction;
  empty_.store((disconnectThreshold_ == 0), std::memory_order_relaxed);
}

BaseThriftServer::InjectedFailure
BaseThriftServer::CumulativeFailureInjection::test() const {
  if (empty_.load(std::memory_order_relaxed)) {
    return InjectedFailure::NONE;
  }

  static folly::ThreadLocalPtr<std::mt19937> rng;
  if (!rng) {
    rng.reset(new std::mt19937(folly::randomNumberSeed()));
  }

  std::uniform_real_distribution<float> dist(0, 1);
  float val = dist(*rng);

  std::lock_guard<std::mutex> lock(mutex_);
  if (val <= errorThreshold_) {
    return InjectedFailure::ERROR;
  } else if (val <= dropThreshold_) {
    return InjectedFailure::DROP;
  } else if (val <= disconnectThreshold_) {
    return InjectedFailure::DISCONNECT;
  }
  return InjectedFailure::NONE;
}

bool BaseThriftServer::getTaskExpireTimeForRequest(
    const apache::thrift::transport::THeader& requestHeader,
    std::chrono::milliseconds& queueTimeout,
    std::chrono::milliseconds& taskTimeout) const {
  return getTaskExpireTimeForRequest(
      requestHeader.getClientQueueTimeout(),
      requestHeader.getClientTimeout(),
      queueTimeout,
      taskTimeout);
}

bool BaseThriftServer::getTaskExpireTimeForRequest(
    std::chrono::milliseconds clientQueueTimeoutMs,
    std::chrono::milliseconds clientTimeoutMs,
    std::chrono::milliseconds& queueTimeout,
    std::chrono::milliseconds& taskTimeout) const {
  taskTimeout = getTaskExpireTime();

  queueTimeout = clientQueueTimeoutMs;
  if (queueTimeout == std::chrono::milliseconds(0)) {
    queueTimeout = getQueueTimeout();
  }

  if (taskTimeout != std::chrono::milliseconds(0) && getUseClientTimeout()) {
    // we add 10% to the client timeout so that the request is much more likely
    // to timeout on the client side than to read the timeout from the server
    // as a TApplicationException (which can be confusing)
    taskTimeout =
        std::chrono::milliseconds((uint32_t)(clientTimeoutMs.count() * 1.1));
  }
  // Queue timeout shouldn't be greater than task timeout
  if (taskTimeout < queueTimeout &&
      taskTimeout != std::chrono::milliseconds(0)) {
    queueTimeout = taskTimeout;
  }
  return queueTimeout != taskTimeout;
}

int64_t BaseThriftServer::getLoad(
    const std::string& counter, bool check_custom) const {
  if (check_custom && getLoad_) {
    return getLoad_(counter);
  }

  const auto activeRequests = getActiveRequests();

  if (VLOG_IS_ON(1)) {
    FB_LOG_EVERY_MS(INFO, 1000 * 10) << getLoadInfo(activeRequests);
  }

  return activeRequests;
}

std::string BaseThriftServer::getLoadInfo(int64_t load) const {
  std::stringstream stream;
  stream << "Load is: " << load << "% requests";
  return stream.str();
}

std::string BaseThriftServer::RuntimeServerActions::explain() const {
  std::string result;
  result = std::string(userSuppliedThreadManager ? "setThreadManager, " : "") +
      (interactionInService ? "interactionInService, " : "") +
      (wildcardMethods ? "wildcardMethods, " : "") +
      (noServiceRequestInfo ? "noServiceRequestInfo, " : "") +
      (activeRequestTrackingDisabled ? "activeRequestTrackingDisabled, " : "") +
      (setPreprocess ? "setPreprocess, " : "") +
      (setIsOverloaded ? "setIsOverloaded, " : "") +
      (codelEnabled ? "codelEnabled, " : "") +
      (!resourcePoolFlagSet ? "flagsNotSet, " : "");
  return result;
}

} // namespace thrift
} // namespace apache
