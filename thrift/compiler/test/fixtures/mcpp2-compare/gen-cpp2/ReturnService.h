/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ReturnServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.h"
#include <folly/small_vector.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace some { namespace valid { namespace ns {
class ReturnService;
class ReturnServiceAsyncProcessor;

class ReturnServiceServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
}}} // some::valid::ns

namespace apache::thrift {
template <>
class ServiceHandler<::some::valid::ns::ReturnService> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "ReturnService"; }

  typedef ::some::valid::ns::ReturnServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void async_eb_noReturn(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
  virtual bool boolReturn();
  virtual folly::Future<bool> future_boolReturn();
  virtual folly::SemiFuture<bool> semifuture_boolReturn();
  virtual void async_tm_boolReturn(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback);
  virtual ::std::int16_t i16Return();
  virtual folly::Future<::std::int16_t> future_i16Return();
  virtual folly::SemiFuture<::std::int16_t> semifuture_i16Return();
  virtual void async_tm_i16Return(std::unique_ptr<apache::thrift::HandlerCallback<::std::int16_t>> callback);
  virtual ::std::int32_t i32Return();
  virtual folly::Future<::std::int32_t> future_i32Return();
  virtual folly::SemiFuture<::std::int32_t> semifuture_i32Return();
  virtual void async_tm_i32Return(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback);
  virtual ::std::int64_t i64Return();
  virtual folly::Future<::std::int64_t> future_i64Return();
  virtual folly::SemiFuture<::std::int64_t> semifuture_i64Return();
  virtual void async_tm_i64Return(std::unique_ptr<apache::thrift::HandlerCallback<::std::int64_t>> callback);
  virtual float floatReturn();
  virtual folly::Future<float> future_floatReturn();
  virtual folly::SemiFuture<float> semifuture_floatReturn();
  virtual void async_tm_floatReturn(std::unique_ptr<apache::thrift::HandlerCallback<float>> callback);
  virtual double doubleReturn();
  virtual folly::Future<double> future_doubleReturn();
  virtual folly::SemiFuture<double> semifuture_doubleReturn();
  virtual void async_tm_doubleReturn(std::unique_ptr<apache::thrift::HandlerCallback<double>> callback);
  virtual void async_eb_stringReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback);
  virtual void binaryReturn(::std::string& /*_return*/);
  virtual folly::Future<std::unique_ptr<::std::string>> future_binaryReturn();
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_binaryReturn();
  virtual void async_tm_binaryReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback);
  virtual void mapReturn(::std::map<::std::string, ::std::int64_t>& /*_return*/);
  virtual folly::Future<std::unique_ptr<::std::map<::std::string, ::std::int64_t>>> future_mapReturn();
  virtual folly::SemiFuture<std::unique_ptr<::std::map<::std::string, ::std::int64_t>>> semifuture_mapReturn();
  virtual void async_tm_mapReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::std::string, ::std::int64_t>>>> callback);
  virtual ::some::valid::ns::simpleTypeDef simpleTypedefReturn();
  virtual folly::Future<::some::valid::ns::simpleTypeDef> future_simpleTypedefReturn();
  virtual folly::SemiFuture<::some::valid::ns::simpleTypeDef> semifuture_simpleTypedefReturn();
  virtual void async_tm_simpleTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<::some::valid::ns::simpleTypeDef>> callback);
  virtual void complexTypedefReturn(::some::valid::ns::complexStructTypeDef& /*_return*/);
  virtual folly::Future<std::unique_ptr<::some::valid::ns::complexStructTypeDef>> future_complexTypedefReturn();
  virtual folly::SemiFuture<std::unique_ptr<::some::valid::ns::complexStructTypeDef>> semifuture_complexTypedefReturn();
  virtual void async_tm_complexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::some::valid::ns::complexStructTypeDef>>> callback);
  virtual void list_mostComplexTypedefReturn(::std::vector<::some::valid::ns::mostComplexTypeDef>& /*_return*/);
  virtual folly::Future<std::unique_ptr<::std::vector<::some::valid::ns::mostComplexTypeDef>>> future_list_mostComplexTypedefReturn();
  virtual folly::SemiFuture<std::unique_ptr<::std::vector<::some::valid::ns::mostComplexTypeDef>>> semifuture_list_mostComplexTypedefReturn();
  virtual void async_tm_list_mostComplexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector<::some::valid::ns::mostComplexTypeDef>>>> callback);
  virtual void async_eb_enumReturn(std::unique_ptr<apache::thrift::HandlerCallback<::some::valid::ns::MyEnumA>> callback);
  virtual void async_eb_list_EnumReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector<::some::valid::ns::MyEnumA>>>> callback);
  virtual void structReturn(::some::valid::ns::MyStruct& /*_return*/);
  virtual folly::Future<std::unique_ptr<::some::valid::ns::MyStruct>> future_structReturn();
  virtual folly::SemiFuture<std::unique_ptr<::some::valid::ns::MyStruct>> semifuture_structReturn();
  virtual void async_tm_structReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::some::valid::ns::MyStruct>>> callback);
  virtual void set_StructReturn(::std::set<::some::valid::ns::MyStruct>& /*_return*/);
  virtual folly::Future<std::unique_ptr<::std::set<::some::valid::ns::MyStruct>>> future_set_StructReturn();
  virtual folly::SemiFuture<std::unique_ptr<::std::set<::some::valid::ns::MyStruct>>> semifuture_set_StructReturn();
  virtual void async_tm_set_StructReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::set<::some::valid::ns::MyStruct>>>> callback);
  virtual void async_eb_unionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::some::valid::ns::ComplexUnion>>> callback);
  virtual void list_UnionReturn(::std::vector<::some::valid::ns::ComplexUnion>& /*_return*/);
  virtual folly::Future<std::unique_ptr<::std::vector<::some::valid::ns::ComplexUnion>>> future_list_UnionReturn();
  virtual folly::SemiFuture<std::unique_ptr<::std::vector<::some::valid::ns::ComplexUnion>>> semifuture_list_UnionReturn();
  virtual void async_tm_list_UnionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector<::some::valid::ns::ComplexUnion>>>> callback);
  virtual void async_eb_readDataEb(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::some::valid::ns::IOBuf>>> callback, ::std::int64_t p_size);
  virtual void readData(::some::valid::ns::IOBufPtr& /*_return*/, ::std::int64_t /*size*/);
  virtual folly::Future<std::unique_ptr<::some::valid::ns::IOBufPtr>> future_readData(::std::int64_t p_size);
  virtual folly::SemiFuture<std::unique_ptr<::some::valid::ns::IOBufPtr>> semifuture_readData(::std::int64_t p_size);
  virtual void async_tm_readData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::some::valid::ns::IOBufPtr>>> callback, ::std::int64_t p_size);
 private:
  static ::some::valid::ns::ReturnServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_boolReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_i16Return{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_i32Return{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_i64Return{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_floatReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_doubleReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_binaryReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_mapReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_simpleTypedefReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_complexTypedefReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_list_mostComplexTypedefReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_structReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_set_StructReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_list_UnionReturn{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_readData{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace some { namespace valid { namespace ns {
using ReturnServiceSvIf = ::apache::thrift::ServiceHandler<ReturnService>;
}}} // some::valid::ns
namespace some { namespace valid { namespace ns {
class ReturnServiceSvNull : public ReturnServiceSvIf {
 public:
  bool boolReturn() override;
  ::std::int16_t i16Return() override;
  ::std::int32_t i32Return() override;
  ::std::int64_t i64Return() override;
  float floatReturn() override;
  double doubleReturn() override;
  void binaryReturn(::std::string& /*_return*/) override;
  void mapReturn(::std::map<::std::string, ::std::int64_t>& /*_return*/) override;
  ::some::valid::ns::simpleTypeDef simpleTypedefReturn() override;
  void complexTypedefReturn(::some::valid::ns::complexStructTypeDef& /*_return*/) override;
  void list_mostComplexTypedefReturn(::std::vector<::some::valid::ns::mostComplexTypeDef>& /*_return*/) override;
  void structReturn(::some::valid::ns::MyStruct& /*_return*/) override;
  void set_StructReturn(::std::set<::some::valid::ns::MyStruct>& /*_return*/) override;
  void list_UnionReturn(::std::vector<::some::valid::ns::ComplexUnion>& /*_return*/) override;
  void readData(::some::valid::ns::IOBufPtr& /*_return*/, ::std::int64_t /*size*/) override;
};

class ReturnServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::some::valid::ns::ReturnService>* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<ReturnServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const ReturnServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const ReturnServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_noReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_noReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_noReturn(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_noReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_boolReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_boolReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_boolReturn(apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_boolReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_i16Return(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_i16Return(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_i16Return(apache::thrift::ContextStack* ctx, ::std::int16_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_i16Return(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_i32Return(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_i32Return(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_i32Return(apache::thrift::ContextStack* ctx, ::std::int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_i32Return(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_i64Return(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_i64Return(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_i64Return(apache::thrift::ContextStack* ctx, ::std::int64_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_i64Return(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_floatReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_floatReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_floatReturn(apache::thrift::ContextStack* ctx, float const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_floatReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_doubleReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_doubleReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_doubleReturn(apache::thrift::ContextStack* ctx, double const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_doubleReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_stringReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_stringReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_stringReturn(apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_stringReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_binaryReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_binaryReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_binaryReturn(apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_binaryReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_mapReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_mapReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_mapReturn(apache::thrift::ContextStack* ctx, ::std::map<::std::string, ::std::int64_t> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_mapReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_simpleTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_simpleTypedefReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_simpleTypedefReturn(apache::thrift::ContextStack* ctx, ::some::valid::ns::simpleTypeDef const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_simpleTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_complexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_complexTypedefReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_complexTypedefReturn(apache::thrift::ContextStack* ctx, ::some::valid::ns::complexStructTypeDef const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_complexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_list_mostComplexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_list_mostComplexTypedefReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_list_mostComplexTypedefReturn(apache::thrift::ContextStack* ctx, ::std::vector<::some::valid::ns::mostComplexTypeDef> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_list_mostComplexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_enumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_enumReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_enumReturn(apache::thrift::ContextStack* ctx, ::some::valid::ns::MyEnumA const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_enumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_list_EnumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_list_EnumReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_list_EnumReturn(apache::thrift::ContextStack* ctx, ::std::vector<::some::valid::ns::MyEnumA> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_list_EnumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_structReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_structReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_structReturn(apache::thrift::ContextStack* ctx, ::some::valid::ns::MyStruct const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_structReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_set_StructReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_set_StructReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_set_StructReturn(apache::thrift::ContextStack* ctx, ::std::set<::some::valid::ns::MyStruct> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_set_StructReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_unionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_unionReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_unionReturn(apache::thrift::ContextStack* ctx, ::some::valid::ns::ComplexUnion const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_unionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_list_UnionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_list_UnionReturn(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_list_UnionReturn(apache::thrift::ContextStack* ctx, ::std::vector<::some::valid::ns::ComplexUnion> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_list_UnionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_readDataEb(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_readDataEb(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_readDataEb(apache::thrift::ContextStack* ctx, ::some::valid::ns::IOBuf const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_readDataEb(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_readData(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_readData(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_readData(apache::thrift::ContextStack* ctx, ::some::valid::ns::IOBufPtr const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_readData(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  ReturnServiceAsyncProcessor(::apache::thrift::ServiceHandler<::some::valid::ns::ReturnService>* iface) :
      iface_(iface) {}
  ~ReturnServiceAsyncProcessor() override {}
};

}}} // some::valid::ns
