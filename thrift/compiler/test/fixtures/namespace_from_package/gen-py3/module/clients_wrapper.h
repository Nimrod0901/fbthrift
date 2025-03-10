/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/TestService.h>

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>
#include <thrift/lib/py3/clientcallbacks.h>
#include <thrift/lib/py3/client_wrapper.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace test {
namespace namespace_from_package {
namespace module {

class TestServiceClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;

    folly::Future<int64_t> init(
      apache::thrift::RpcOptions& rpcOptions,
      int64_t arg_int1);
};


} // namespace test
} // namespace namespace_from_package
} // namespace module
