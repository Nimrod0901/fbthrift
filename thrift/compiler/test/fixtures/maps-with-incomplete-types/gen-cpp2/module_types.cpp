/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/maps-with-incomplete-types/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/maps-with-incomplete-types/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/maps-with-incomplete-types/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::B>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::B>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace test {


B::B(apache::thrift::FragileConstructor, ::std::int32_t field__arg) :
    __fbthrift_field_field(std::move(field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void B::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field = ::std::int32_t();
  __isset = {};
}

void B::__fbthrift_clear_terse_fields() {
}

bool B::__fbthrift_is_empty() const {
  return !(this->__isset.get(0));
}

bool B::operator==(const B& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field_ref() == rhs.field_ref())) {
    return false;
  }
  return true;
}

bool B::operator<(const B& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field_ref() == rhs.field_ref())) {
    return lhs.field_ref() < rhs.field_ref();
  }
  return false;
}


void swap(B& a, B& b) {
  using ::std::swap;
  swap(a.field_ref().value_unchecked(), b.field_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void B::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t B::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t B::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t B::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void B::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t B::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t B::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t B::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}}} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::A>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::A>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace test {

A::A(const A&) = default;
A& A::operator=(const A&) = default;
A::A(A&& other) noexcept  :
    __fbthrift_field_some_map(std::move(other.__fbthrift_field_some_map)),
    __isset(other.__isset) {
}

A& A::operator=(FOLLY_MAYBE_UNUSED A&& other) noexcept {
    this->__fbthrift_field_some_map = std::move(other.__fbthrift_field_some_map);
    __isset = other.__isset;
    return *this;
}


A::A(apache::thrift::FragileConstructor, std::unordered_map<::std::int32_t, ::apache::thrift::test::B> some_map__arg) :
    __fbthrift_field_some_map(std::move(some_map__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void A::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_some_map.clear();
  __isset = {};
}

void A::__fbthrift_clear_terse_fields() {
}

bool A::__fbthrift_is_empty() const {
  return !(this->__isset.get(0));
}

bool A::operator==(const A& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.some_map_ref() == rhs.some_map_ref())) {
    return false;
  }
  return true;
}

const std::unordered_map<::std::int32_t, ::apache::thrift::test::B>* A::get_some_map() const& {
  return some_map_ref().has_value() ? std::addressof(__fbthrift_field_some_map) : nullptr;
}

std::unordered_map<::std::int32_t, ::apache::thrift::test::B>* A::get_some_map() & {
  return some_map_ref().has_value() ? std::addressof(__fbthrift_field_some_map) : nullptr;
}


void swap(A& a, A& b) {
  using ::std::swap;
  swap(a.some_map_ref().value_unchecked(), b.some_map_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void A::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t A::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void A::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t A::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t A::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t A::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}}} // apache::thrift::test

namespace apache { namespace thrift { namespace test { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}}} // apache::thrift::test
