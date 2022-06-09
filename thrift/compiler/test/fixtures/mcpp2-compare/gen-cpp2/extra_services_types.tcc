/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>
#include <thrift/lib/cpp2/op/Clear.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::extra::svc::containerStruct2> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace extra { namespace svc {

template <class Protocol_>
void containerStruct2::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_fieldA:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::readWithContext(*iprot, this->__fbthrift_field_fieldA, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          101,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_req_fieldA:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::readWithContext(*iprot, this->__fbthrift_field_req_fieldA, _readState);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          101,
          201,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_opt_fieldA:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::readWithContext(*iprot, this->__fbthrift_field_opt_fieldA, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          201,
          2,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_fieldB:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_fieldB = ::std::map<::std::string, bool>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::readWithContext(*iprot, this->__fbthrift_field_fieldB, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(2, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          102,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_req_fieldB:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_req_fieldB = ::std::map<::std::string, bool>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::readWithContext(*iprot, this->__fbthrift_field_req_fieldB, _readState);
    _readState.afterSubobject(iprot);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          102,
          202,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_opt_fieldB:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_opt_fieldB = ::std::map<::std::string, bool>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::readWithContext(*iprot, this->__fbthrift_field_opt_fieldB, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(3, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          202,
          3,
          apache::thrift::protocol::T_SET))) {
    goto _loop;
  }
_readField_fieldC:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_fieldC = ::std::set<::std::int32_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::readWithContext(*iprot, this->__fbthrift_field_fieldC, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(4, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          103,
          apache::thrift::protocol::T_SET))) {
    goto _loop;
  }
_readField_req_fieldC:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_req_fieldC = ::std::set<::std::int32_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::readWithContext(*iprot, this->__fbthrift_field_req_fieldC, _readState);
    _readState.afterSubobject(iprot);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          103,
          203,
          apache::thrift::protocol::T_SET))) {
    goto _loop;
  }
_readField_opt_fieldC:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_opt_fieldC = ::std::set<::std::int32_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::readWithContext(*iprot, this->__fbthrift_field_opt_fieldC, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(5, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          203,
          4,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_fieldD:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_fieldD, _readState);
    
  }
 this->__isset.set(6, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_fieldE:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_fieldE, _readState);
    
  }
 this->__isset.set(7, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          105,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_req_fieldE:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_req_fieldE, _readState);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          105,
          205,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_opt_fieldE:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_opt_fieldE, _readState);
    
  }
 this->__isset.set(8, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          205,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<containerStruct2>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_fieldA;
      } else {
        goto _skip;
      }
    }
    case 101:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_req_fieldA;
      } else {
        goto _skip;
      }
    }
    case 201:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_opt_fieldA;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_fieldB;
      } else {
        goto _skip;
      }
    }
    case 102:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_req_fieldB;
      } else {
        goto _skip;
      }
    }
    case 202:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_opt_fieldB;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_SET))) {
        goto _readField_fieldC;
      } else {
        goto _skip;
      }
    }
    case 103:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_SET))) {
        goto _readField_req_fieldC;
      } else {
        goto _skip;
      }
    }
    case 203:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_SET))) {
        goto _readField_opt_fieldC;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_fieldD;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_fieldE;
      } else {
        goto _skip;
      }
    }
    case 105:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_req_fieldE;
      } else {
        goto _skip;
      }
    }
    case 205:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_opt_fieldE;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t containerStruct2::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("containerStruct2");
  {
    xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_BOOL, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldA);
  }
  {
    xfer += prot_->serializedFieldSize("req_fieldA", apache::thrift::protocol::T_BOOL, 101);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::serializedSize<false>(*prot_, this->__fbthrift_field_req_fieldA);
  }
  if (this->__isset.get(1)) {
    xfer += prot_->serializedFieldSize("opt_fieldA", apache::thrift::protocol::T_BOOL, 201);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::serializedSize<false>(*prot_, this->__fbthrift_field_opt_fieldA);
  }
  {
    xfer += prot_->serializedFieldSize("fieldB", apache::thrift::protocol::T_MAP, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldB);
  }
  {
    xfer += prot_->serializedFieldSize("req_fieldB", apache::thrift::protocol::T_MAP, 102);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::serializedSize<false>(*prot_, this->__fbthrift_field_req_fieldB);
  }
  if (this->__isset.get(3)) {
    xfer += prot_->serializedFieldSize("opt_fieldB", apache::thrift::protocol::T_MAP, 202);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::serializedSize<false>(*prot_, this->__fbthrift_field_opt_fieldB);
  }
  {
    xfer += prot_->serializedFieldSize("fieldC", apache::thrift::protocol::T_SET, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldC);
  }
  {
    xfer += prot_->serializedFieldSize("req_fieldC", apache::thrift::protocol::T_SET, 103);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_req_fieldC);
  }
  if (this->__isset.get(5)) {
    xfer += prot_->serializedFieldSize("opt_fieldC", apache::thrift::protocol::T_SET, 203);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_opt_fieldC);
  }
  {
    xfer += prot_->serializedFieldSize("fieldD", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldD);
  }
  {
    xfer += prot_->serializedFieldSize("fieldE", apache::thrift::protocol::T_STRING, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldE);
  }
  {
    xfer += prot_->serializedFieldSize("req_fieldE", apache::thrift::protocol::T_STRING, 105);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_req_fieldE);
  }
  if (this->__isset.get(8)) {
    xfer += prot_->serializedFieldSize("opt_fieldE", apache::thrift::protocol::T_STRING, 205);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_opt_fieldE);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t containerStruct2::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("containerStruct2");
  {
    xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_BOOL, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldA);
  }
  {
    xfer += prot_->serializedFieldSize("req_fieldA", apache::thrift::protocol::T_BOOL, 101);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::serializedSize<false>(*prot_, this->__fbthrift_field_req_fieldA);
  }
  if (this->__isset.get(1)) {
    xfer += prot_->serializedFieldSize("opt_fieldA", apache::thrift::protocol::T_BOOL, 201);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::serializedSize<false>(*prot_, this->__fbthrift_field_opt_fieldA);
  }
  {
    xfer += prot_->serializedFieldSize("fieldB", apache::thrift::protocol::T_MAP, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldB);
  }
  {
    xfer += prot_->serializedFieldSize("req_fieldB", apache::thrift::protocol::T_MAP, 102);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::serializedSize<false>(*prot_, this->__fbthrift_field_req_fieldB);
  }
  if (this->__isset.get(3)) {
    xfer += prot_->serializedFieldSize("opt_fieldB", apache::thrift::protocol::T_MAP, 202);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::serializedSize<false>(*prot_, this->__fbthrift_field_opt_fieldB);
  }
  {
    xfer += prot_->serializedFieldSize("fieldC", apache::thrift::protocol::T_SET, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldC);
  }
  {
    xfer += prot_->serializedFieldSize("req_fieldC", apache::thrift::protocol::T_SET, 103);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_req_fieldC);
  }
  if (this->__isset.get(5)) {
    xfer += prot_->serializedFieldSize("opt_fieldC", apache::thrift::protocol::T_SET, 203);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_opt_fieldC);
  }
  {
    xfer += prot_->serializedFieldSize("fieldD", apache::thrift::protocol::T_STRING, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldD);
  }
  {
    xfer += prot_->serializedFieldSize("fieldE", apache::thrift::protocol::T_STRING, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_fieldE);
  }
  {
    xfer += prot_->serializedFieldSize("req_fieldE", apache::thrift::protocol::T_STRING, 105);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_req_fieldE);
  }
  if (this->__isset.get(8)) {
    xfer += prot_->serializedFieldSize("opt_fieldE", apache::thrift::protocol::T_STRING, 205);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_opt_fieldE);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t containerStruct2::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("containerStruct2");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_BOOL, 1, kPrevFieldId>(*prot_, "fieldA", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::write(*prot_, this->__fbthrift_field_fieldA);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_BOOL, 101, kPrevFieldId>(*prot_, "req_fieldA", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::write(*prot_, this->__fbthrift_field_req_fieldA);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.get(1)) {
    constexpr int16_t kPrevFieldId = 101;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_BOOL, 201, kPrevFieldId>(*prot_, "opt_fieldA", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::write(*prot_, this->__fbthrift_field_opt_fieldA);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  {
    constexpr int16_t kPrevFieldId = 201;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_MAP, 2, kPrevFieldId>(*prot_, "fieldB", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::write(*prot_, this->__fbthrift_field_fieldB);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_MAP, 102, kPrevFieldId>(*prot_, "req_fieldB", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::write(*prot_, this->__fbthrift_field_req_fieldB);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.get(3)) {
    constexpr int16_t kPrevFieldId = 102;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_MAP, 202, kPrevFieldId>(*prot_, "opt_fieldB", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, ::std::map<::std::string, bool>>::write(*prot_, this->__fbthrift_field_opt_fieldB);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  {
    constexpr int16_t kPrevFieldId = 202;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_SET, 3, kPrevFieldId>(*prot_, "fieldC", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::write(*prot_, this->__fbthrift_field_fieldC);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_SET, 103, kPrevFieldId>(*prot_, "req_fieldC", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::write(*prot_, this->__fbthrift_field_req_fieldC);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.get(5)) {
    constexpr int16_t kPrevFieldId = 103;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_SET, 203, kPrevFieldId>(*prot_, "opt_fieldC", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>>::write(*prot_, this->__fbthrift_field_opt_fieldC);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  {
    constexpr int16_t kPrevFieldId = 203;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 4, kPrevFieldId>(*prot_, "fieldD", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_fieldD);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 4;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 5, kPrevFieldId>(*prot_, "fieldE", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_fieldE);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 5;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 105, kPrevFieldId>(*prot_, "req_fieldE", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_req_fieldE);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.get(8)) {
    constexpr int16_t kPrevFieldId = 105;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 205, kPrevFieldId>(*prot_, "opt_fieldE", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_opt_fieldE);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void containerStruct2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t containerStruct2::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t containerStruct2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void containerStruct2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t containerStruct2::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t containerStruct2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template void containerStruct2::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t containerStruct2::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t containerStruct2::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

}} // extra::svc
