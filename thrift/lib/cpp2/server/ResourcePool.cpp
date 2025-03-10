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

#include <stdexcept>
#include <folly/executors/ThreadPoolExecutor.h>
#include <thrift/lib/cpp2/server/ResourcePool.h>

namespace apache::thrift {

// ResourcePool

ResourcePool::ResourcePool(
    std::unique_ptr<RequestPileInterface>&& requestPile,
    std::shared_ptr<folly::Executor> executor,
    std::unique_ptr<ConcurrencyControllerInterface>&& concurrencyController,
    std::string_view name)
    : requestPile_(std::move(requestPile)),
      executor_(executor),
      concurrencyController_(std::move(concurrencyController)),
      name_(name) {
  // Current preconditions - either we have all three of these or none of them
  if (requestPile_ && concurrencyController_ && executor_) {
    // This is an async pool - that's allowed.
  } else {
    // This is a sync/eb pool.
    DCHECK(!requestPile_ && !concurrencyController && !executor_);
  }
}

void ResourcePool::stop() {
  if (concurrencyController_) {
    concurrencyController_->stop();
  }
  if (executor_) {
    if (auto threadPoolExecutor =
            dynamic_cast<folly::ThreadPoolExecutor*>(executor_.get())) {
      threadPoolExecutor->join();
    } else {
      LOG(WARNING) << "Could not join executor threads";
    }
  }
}

ResourcePool::~ResourcePool() {}

std::optional<ServerRequestRejection> ResourcePool::accept(
    ServerRequest&& request) {
  if (requestPile_) {
    // This pool is async, enqueue it on the requestPile
    auto result = requestPile_->enqueue(std::move(request));
    if (result) {
      return result;
    }
    concurrencyController_->onEnqueued();
    return std::optional<ServerRequestRejection>(std::nullopt);
  } else {
    // Trigger processing of request and check for queue timeouts.
    if (!request.request()->getShouldStartProcessing()) {
      auto eb = detail::ServerRequestHelper::eventBase(request);
      HandlerCallbackBase::releaseRequest(
          detail::ServerRequestHelper::request(std::move(request)), eb);
      return std::optional<ServerRequestRejection>(std::nullopt);
    }

    // This pool is sync, just now we execute the request inline.
    AsyncProcessorHelper::executeRequest(std::move(request));
    return std::optional<ServerRequestRejection>(std::nullopt);
  }
}

// ResourcePoolSet

void ResourcePoolSet::setResourcePool(
    ResourcePoolHandle const& handle,
    std::unique_ptr<RequestPileInterface>&& requestPile,
    std::shared_ptr<folly::Executor> executor,
    std::unique_ptr<ConcurrencyControllerInterface>&& concurrencyController,
    std::optional<concurrency::PRIORITY> priorityHint_deprecated) {
  std::lock_guard<std::mutex> lock(mutex_);
  if (locked_) {
    throw std::logic_error("Cannot setResourcePool() after lock()");
  }
  resourcePools_.resize(std::max(resourcePools_.size(), handle.index() + 1));
  if (resourcePools_.at(handle.index())) {
    LOG(ERROR) << "Cannot overwrite resourcePool:" << handle.name();
    throw std::invalid_argument("Cannot overwrite resourcePool");
  }
  std::unique_ptr<ResourcePool> pool{new ResourcePool{
      std::move(requestPile),
      executor,
      std::move(concurrencyController),
      handle.name()}};
  resourcePools_.at(handle.index()) = std::move(pool);

  priorities_.resize(std::max(priorities_.size(), handle.index() + 1));
  priorities_.at(handle.index()) = priorityHint_deprecated;
}

ResourcePoolHandle ResourcePoolSet::addResourcePool(
    std::string_view poolName,
    std::unique_ptr<RequestPileInterface>&& requestPile,
    std::shared_ptr<folly::Executor> executor,
    std::unique_ptr<ConcurrencyControllerInterface>&& concurrencyController,
    std::optional<concurrency::PRIORITY> priorityHint_deprecated) {
  std::lock_guard<std::mutex> lock(mutex_);
  if (locked_) {
    throw std::logic_error("Cannot addResourcePool() after lock()");
  }
  std::unique_ptr<ResourcePool> pool{new ResourcePool{
      std::move(requestPile),
      executor,
      std::move(concurrencyController),
      poolName}};
  // Ensure that any default slots have been initialized (with empty unique_ptr
  // if necessary).
  resourcePools_.resize(std::max(
      resourcePools_.size(), ResourcePoolHandle::kMaxReservedHandle + 1));
  resourcePools_.emplace_back(std::move(pool));

  priorities_.resize(
      std::max(priorities_.size(), ResourcePoolHandle::kMaxReservedHandle + 1));
  priorities_.emplace_back(priorityHint_deprecated);

  return ResourcePoolHandle::makeHandle(poolName, resourcePools_.size() - 1);
}

void ResourcePoolSet::lock() {
  std::lock_guard<std::mutex> lock(mutex_);
  locked_ = true;
  calculatePriorityMapping();
}

size_t ResourcePoolSet::numQueued() const {
  if (!locked_) {
    return 0;
  }
  size_t sum = 0;
  for (auto& pool : resourcePools_) {
    if (auto rp = pool->requestPile()) {
      sum += rp.value()->requestCount();
    }
  }
  return sum;
}

size_t ResourcePoolSet::numInExecution() const {
  if (!locked_) {
    return 0;
  }
  size_t sum = 0;
  for (auto& pool : resourcePools_) {
    if (auto cc = pool->concurrencyController()) {
      sum += cc.value()->requestCount();
    }
  }
  return sum;
}

size_t ResourcePoolSet::numPendingDeque() const {
  if (!locked_) {
    return 0;
  }
  size_t sum = 0;
  for (auto& pool : resourcePools_) {
    if (auto cc = pool->concurrencyController()) {
      sum += cc.value()->numPendingDequeRequest();
    }
  }
  return sum;
}

std::optional<ResourcePoolHandle> ResourcePoolSet::findResourcePool(
    std::string_view poolName) const {
  auto guard = locked_ ? std::unique_lock<std::mutex>()
                       : std::unique_lock<std::mutex>(mutex_);
  for (std::size_t i = 0; i < resourcePools_.size(); ++i) {
    if (resourcePools_.at(i) && resourcePools_.at(i)->name() == poolName) {
      return ResourcePoolHandle::makeHandle(poolName, i);
    }
  }
  return std::nullopt;
}

bool ResourcePoolSet::hasResourcePool(const ResourcePoolHandle& handle) const {
  auto guard = locked_ ? std::unique_lock<std::mutex>()
                       : std::unique_lock<std::mutex>(mutex_);
  if (handle.index() >= resourcePools_.size()) {
    return false;
  }
  return static_cast<bool>(resourcePools_[handle.index()]);
}

ResourcePool& ResourcePoolSet::resourcePool(
    const ResourcePoolHandle& handle) const {
  auto guard = locked_ ? std::unique_lock<std::mutex>()
                       : std::unique_lock<std::mutex>(mutex_);
  DCHECK_LT(handle.index(), resourcePools_.size());
  DCHECK(resourcePools_[handle.index()]);
  return *resourcePools_[handle.index()];
}

ResourcePool& ResourcePoolSet::resourcePoolByPriority_deprecated(
    concurrency::PRIORITY priority) const {
  auto guard = locked_ ? std::unique_lock<std::mutex>()
                       : std::unique_lock<std::mutex>(mutex_);
  DCHECK_LT(poolByPriority_[priority], resourcePools_.size());
  DCHECK(resourcePools_[poolByPriority_[priority]]);
  return *resourcePools_[poolByPriority_[priority]];
}

bool ResourcePoolSet::empty() const {
  auto guard = locked_ ? std::unique_lock<std::mutex>()
                       : std::unique_lock<std::mutex>(mutex_);
  return resourcePools_.empty();
}

void ResourcePoolSet::stopAndJoin() {
  {
    // This is called during shutdown - the ResourcePoolSet should have been
    // locked by this point.
    std::lock_guard<std::mutex> lock(mutex_);
    CHECK(locked_);
  }
  for (auto& resourcePool : resourcePools_) {
    if (resourcePool) {
      resourcePool->stop();
    }
  }
}

void ResourcePoolSet::calculatePriorityMapping() {
  // Calculate the best resource pool to return for each concurrency::PRIORITY
  // value

  // Fill with sentinel.
  auto sentinel = resourcePools_.size();
  std::fill_n(std::begin(poolByPriority_), poolByPriority_.size(), sentinel);

  // First put any resource pool with a priority hint into the approriate slot.
  DCHECK_EQ(priorities_.size(), resourcePools_.size());
  for (std::size_t i = 0; i < resourcePools_.size(); ++i) {
    if (priorities_[i]) {
      poolByPriority_[priorities_[i].value()] = i;
    }
  }

  // Check that NORMAL is filled - if not fill it with default async
  if (poolByPriority_[concurrency::NORMAL] == sentinel) {
    if (hasResourcePool(ResourcePoolHandle::defaultAsync())) {
      poolByPriority_[concurrency::NORMAL] =
          ResourcePoolHandle::defaultAsync().index();
    }
  }

  // Then fill out the rest of the slots moving away from NORMAL, copying the
  // nearest assigned value into empty slots.
  for (std::size_t i = concurrency::NORMAL; i < (concurrency::N_PRIORITIES - 1);
       ++i) {
    if (poolByPriority_[i + 1] == sentinel) {
      poolByPriority_[i + 1] = poolByPriority_[i];
    }
  }

  for (std::size_t i = concurrency::NORMAL; i > 0; i--) {
    if (poolByPriority_[i - 1] == sentinel) {
      poolByPriority_[i - 1] = poolByPriority_[i];
    }
  }
}

} // namespace apache::thrift
