/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/deprecated-clear/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>
#include <thrift/lib/cpp2/op/Clear.h>

namespace apache { namespace thrift { namespace test {

}}} // apache::thrift::test
namespace std {

} // std


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::apache::thrift::test::StructWithDefaultStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace test {

template <class Protocol_>
void StructWithDefaultStruct::readNoXfer(Protocol_* iprot) {
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
_readField_bool_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::readWithContext(*iprot, this->__fbthrift_field_bool_field, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_BYTE))) {
    goto _loop;
  }
_readField_byte_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int8_t>::readWithContext(*iprot, this->__fbthrift_field_byte_field, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_short_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int16_t>::readWithContext(*iprot, this->__fbthrift_field_short_field, _readState);
    
  }
 this->__isset.set(2, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_int_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_int_field, _readState);
    
  }
 this->__isset.set(3, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_long_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::readWithContext(*iprot, this->__fbthrift_field_long_field, _readState);
    
  }
 this->__isset.set(4, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          6,
          apache::thrift::protocol::T_FLOAT))) {
    goto _loop;
  }
_readField_float_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::floating_point, float>::readWithContext(*iprot, this->__fbthrift_field_float_field, _readState);
    
  }
 this->__isset.set(5, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          6,
          7,
          apache::thrift::protocol::T_DOUBLE))) {
    goto _loop;
  }
_readField_double_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::floating_point, double>::readWithContext(*iprot, this->__fbthrift_field_double_field, _readState);
    
  }
 this->__isset.set(6, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          7,
          8,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_string_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_string_field, _readState);
    
  }
 this->__isset.set(7, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          8,
          9,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_binary_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::binary, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_binary_field, _readState);
    
  }
 this->__isset.set(8, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          9,
          10,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_enum_field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::apache::thrift::test::MyEnum>::readWithContext(*iprot, this->__fbthrift_field_enum_field, _readState);
    
  }
 this->__isset.set(9, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          10,
          11,
          apache::thrift::protocol::T_LIST))) {
    goto _loop;
  }
_readField_list_field:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_list_field = ::std::vector<::std::int16_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int16_t>>::readWithContext(*iprot, this->__fbthrift_field_list_field, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(10, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          11,
          12,
          apache::thrift::protocol::T_SET))) {
    goto _loop;
  }
_readField_set_field:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_set_field = ::std::set<::std::int16_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int16_t>>::readWithContext(*iprot, this->__fbthrift_field_set_field, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(11, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          12,
          13,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_map_field:
  {
    _readState.beforeSubobject(iprot);
    this->__fbthrift_field_map_field = ::std::map<::std::int16_t, ::std::int16_t>();
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::integral>, ::std::map<::std::int16_t, ::std::int16_t>>::readWithContext(*iprot, this->__fbthrift_field_map_field, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(12, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          13,
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
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<StructWithDefaultStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_bool_field;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BYTE))) {
        goto _readField_byte_field;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I16))) {
        goto _readField_short_field;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_int_field;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_long_field;
      } else {
        goto _skip;
      }
    }
    case 6:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_FLOAT))) {
        goto _readField_float_field;
      } else {
        goto _skip;
      }
    }
    case 7:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_DOUBLE))) {
        goto _readField_double_field;
      } else {
        goto _skip;
      }
    }
    case 8:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_string_field;
      } else {
        goto _skip;
      }
    }
    case 9:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_binary_field;
      } else {
        goto _skip;
      }
    }
    case 10:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_enum_field;
      } else {
        goto _skip;
      }
    }
    case 11:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_LIST))) {
        goto _readField_list_field;
      } else {
        goto _skip;
      }
    }
    case 12:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_SET))) {
        goto _readField_set_field;
      } else {
        goto _skip;
      }
    }
    case 13:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_map_field;
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
uint32_t StructWithDefaultStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructWithDefaultStruct");
  {
    xfer += prot_->serializedFieldSize("bool_field", apache::thrift::protocol::T_BOOL, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::serializedSize<false>(*prot_, this->__fbthrift_field_bool_field);
  }
  {
    xfer += prot_->serializedFieldSize("byte_field", apache::thrift::protocol::T_BYTE, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int8_t>::serializedSize<false>(*prot_, this->__fbthrift_field_byte_field);
  }
  {
    xfer += prot_->serializedFieldSize("short_field", apache::thrift::protocol::T_I16, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int16_t>::serializedSize<false>(*prot_, this->__fbthrift_field_short_field);
  }
  {
    xfer += prot_->serializedFieldSize("int_field", apache::thrift::protocol::T_I32, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_int_field);
  }
  {
    xfer += prot_->serializedFieldSize("long_field", apache::thrift::protocol::T_I64, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::serializedSize<false>(*prot_, this->__fbthrift_field_long_field);
  }
  {
    xfer += prot_->serializedFieldSize("float_field", apache::thrift::protocol::T_FLOAT, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::floating_point, float>::serializedSize<false>(*prot_, this->__fbthrift_field_float_field);
  }
  {
    xfer += prot_->serializedFieldSize("double_field", apache::thrift::protocol::T_DOUBLE, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::floating_point, double>::serializedSize<false>(*prot_, this->__fbthrift_field_double_field);
  }
  {
    xfer += prot_->serializedFieldSize("string_field", apache::thrift::protocol::T_STRING, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_string_field);
  }
  {
    xfer += prot_->serializedFieldSize("binary_field", apache::thrift::protocol::T_STRING, 9);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::binary, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_binary_field);
  }
  {
    xfer += prot_->serializedFieldSize("enum_field", apache::thrift::protocol::T_I32, 10);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::apache::thrift::test::MyEnum>::serializedSize<false>(*prot_, this->__fbthrift_field_enum_field);
  }
  {
    xfer += prot_->serializedFieldSize("list_field", apache::thrift::protocol::T_LIST, 11);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int16_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_list_field);
  }
  {
    xfer += prot_->serializedFieldSize("set_field", apache::thrift::protocol::T_SET, 12);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int16_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_set_field);
  }
  {
    xfer += prot_->serializedFieldSize("map_field", apache::thrift::protocol::T_MAP, 13);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::integral>, ::std::map<::std::int16_t, ::std::int16_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_map_field);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructWithDefaultStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructWithDefaultStruct");
  {
    xfer += prot_->serializedFieldSize("bool_field", apache::thrift::protocol::T_BOOL, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::serializedSize<false>(*prot_, this->__fbthrift_field_bool_field);
  }
  {
    xfer += prot_->serializedFieldSize("byte_field", apache::thrift::protocol::T_BYTE, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int8_t>::serializedSize<false>(*prot_, this->__fbthrift_field_byte_field);
  }
  {
    xfer += prot_->serializedFieldSize("short_field", apache::thrift::protocol::T_I16, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int16_t>::serializedSize<false>(*prot_, this->__fbthrift_field_short_field);
  }
  {
    xfer += prot_->serializedFieldSize("int_field", apache::thrift::protocol::T_I32, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_int_field);
  }
  {
    xfer += prot_->serializedFieldSize("long_field", apache::thrift::protocol::T_I64, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::serializedSize<false>(*prot_, this->__fbthrift_field_long_field);
  }
  {
    xfer += prot_->serializedFieldSize("float_field", apache::thrift::protocol::T_FLOAT, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::floating_point, float>::serializedSize<false>(*prot_, this->__fbthrift_field_float_field);
  }
  {
    xfer += prot_->serializedFieldSize("double_field", apache::thrift::protocol::T_DOUBLE, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::floating_point, double>::serializedSize<false>(*prot_, this->__fbthrift_field_double_field);
  }
  {
    xfer += prot_->serializedFieldSize("string_field", apache::thrift::protocol::T_STRING, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_string_field);
  }
  {
    xfer += prot_->serializedFieldSize("binary_field", apache::thrift::protocol::T_STRING, 9);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::binary, ::std::string>::serializedSize<true>(*prot_, this->__fbthrift_field_binary_field);
  }
  {
    xfer += prot_->serializedFieldSize("enum_field", apache::thrift::protocol::T_I32, 10);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::apache::thrift::test::MyEnum>::serializedSize<false>(*prot_, this->__fbthrift_field_enum_field);
  }
  {
    xfer += prot_->serializedFieldSize("list_field", apache::thrift::protocol::T_LIST, 11);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int16_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_list_field);
  }
  {
    xfer += prot_->serializedFieldSize("set_field", apache::thrift::protocol::T_SET, 12);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int16_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_set_field);
  }
  {
    xfer += prot_->serializedFieldSize("map_field", apache::thrift::protocol::T_MAP, 13);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::integral>, ::std::map<::std::int16_t, ::std::int16_t>>::serializedSize<false>(*prot_, this->__fbthrift_field_map_field);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructWithDefaultStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("StructWithDefaultStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_BOOL, 1, kPrevFieldId>(*prot_, "bool_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, bool>::write(*prot_, this->__fbthrift_field_bool_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_BYTE, 2, kPrevFieldId>(*prot_, "byte_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int8_t>::write(*prot_, this->__fbthrift_field_byte_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I16, 3, kPrevFieldId>(*prot_, "short_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int16_t>::write(*prot_, this->__fbthrift_field_short_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 4, kPrevFieldId>(*prot_, "int_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_int_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 4;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I64, 5, kPrevFieldId>(*prot_, "long_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::write(*prot_, this->__fbthrift_field_long_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 5;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_FLOAT, 6, kPrevFieldId>(*prot_, "float_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::floating_point, float>::write(*prot_, this->__fbthrift_field_float_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 6;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_DOUBLE, 7, kPrevFieldId>(*prot_, "double_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::floating_point, double>::write(*prot_, this->__fbthrift_field_double_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 7;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 8, kPrevFieldId>(*prot_, "string_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_string_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 8;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 9, kPrevFieldId>(*prot_, "binary_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::binary, ::std::string>::write(*prot_, this->__fbthrift_field_binary_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 9;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 10, kPrevFieldId>(*prot_, "enum_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::apache::thrift::test::MyEnum>::write(*prot_, this->__fbthrift_field_enum_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 10;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_LIST, 11, kPrevFieldId>(*prot_, "list_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<::std::int16_t>>::write(*prot_, this->__fbthrift_field_list_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 11;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_SET, 12, kPrevFieldId>(*prot_, "set_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int16_t>>::write(*prot_, this->__fbthrift_field_set_field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 12;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_MAP, 13, kPrevFieldId>(*prot_, "map_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::integral>, ::std::map<::std::int16_t, ::std::int16_t>>::write(*prot_, this->__fbthrift_field_map_field);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void StructWithDefaultStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t StructWithDefaultStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t StructWithDefaultStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t StructWithDefaultStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void StructWithDefaultStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t StructWithDefaultStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t StructWithDefaultStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t StructWithDefaultStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // apache::thrift::test
