/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::YourEnum>::size;
folly::Range<::cpp2::YourEnum const*> const TEnumTraits<::cpp2::YourEnum>::values = folly::range(TEnumDataStorage<::cpp2::YourEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::YourEnum>::names = folly::range(TEnumDataStorage<::cpp2::YourEnum>::names);

bool TEnumTraits<::cpp2::YourEnum>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::YourEnum>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift

namespace cpp2 {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _YourEnum_EnumMapFactory::ValuesToNamesMapType _YourEnum_VALUES_TO_NAMES = _YourEnum_EnumMapFactory::makeValuesToNamesMap();
const _YourEnum_EnumMapFactory::NamesToValuesMapType _YourEnum_NAMES_TO_VALUES = _YourEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING
#endif
} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyStructNestedAnnotation>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyStructNestedAnnotation>;
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

namespace cpp2 {

MyStructNestedAnnotation::MyStructNestedAnnotation(const MyStructNestedAnnotation&) = default;
MyStructNestedAnnotation& MyStructNestedAnnotation::operator=(const MyStructNestedAnnotation&) = default;
MyStructNestedAnnotation::MyStructNestedAnnotation(MyStructNestedAnnotation&& other) noexcept  :
    __fbthrift_field_name(std::move(other.__fbthrift_field_name)),
    __isset(other.__isset) {
}

MyStructNestedAnnotation& MyStructNestedAnnotation::operator=(FOLLY_MAYBE_UNUSED MyStructNestedAnnotation&& other) noexcept {
    this->__fbthrift_field_name = std::move(other.__fbthrift_field_name);
    __isset = other.__isset;
    return *this;
}


MyStructNestedAnnotation::MyStructNestedAnnotation(apache::thrift::FragileConstructor, ::std::string name__arg) :
    __fbthrift_field_name(std::move(name__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void MyStructNestedAnnotation::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_name = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void MyStructNestedAnnotation::__fbthrift_clear_terse_fields() {
}

bool MyStructNestedAnnotation::__fbthrift_is_empty() const {
  return false;
}

bool MyStructNestedAnnotation::operator==(const MyStructNestedAnnotation& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name_ref() == rhs.name_ref())) {
    return false;
  }
  return true;
}

bool MyStructNestedAnnotation::operator<(const MyStructNestedAnnotation& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name_ref() == rhs.name_ref())) {
    return lhs.name_ref() < rhs.name_ref();
  }
  return false;
}


void swap(MyStructNestedAnnotation& a, MyStructNestedAnnotation& b) {
  using ::std::swap;
  swap(a.name_ref().value(), b.name_ref().value());
  swap(a.__isset, b.__isset);
}

template void MyStructNestedAnnotation::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStructNestedAnnotation::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStructNestedAnnotation::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStructNestedAnnotation::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStructNestedAnnotation::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStructNestedAnnotation::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStructNestedAnnotation::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStructNestedAnnotation::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::YourUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::YourUnion>;
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

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::YourUnion::Type>::size;
folly::Range<::cpp2::YourUnion::Type const*> const TEnumTraits<::cpp2::YourUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::YourUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::YourUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::YourUnion::Type>::names);

bool TEnumTraits<::cpp2::YourUnion::Type>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::YourUnion::Type>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace cpp2 {

void YourUnion::__fbthrift_clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool YourUnion::__fbthrift_is_empty() const {
  return type_ == Type::__EMPTY__;
}

bool YourUnion::operator==(const YourUnion& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    default:
      return true;
  }
}

bool YourUnion::operator<(const YourUnion& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    default:
      return false;
  }
}

void swap(YourUnion& a, YourUnion& b) {
  YourUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void YourUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t YourUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t YourUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t YourUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void YourUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t YourUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t YourUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t YourUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::YourException>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::YourException>;
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

namespace cpp2 {

YourException::YourException(const YourException&) = default;
YourException& YourException::operator=(const YourException&) = default;
YourException::YourException() {
}


YourException::~YourException() {}

YourException::YourException(YourException&& other) noexcept { (void)other; }
YourException& YourException::operator=(FOLLY_MAYBE_UNUSED YourException&& other) noexcept {
    return *this;
}


YourException::YourException(apache::thrift::FragileConstructor) {}


void YourException::__fbthrift_clear() {
  // clear all fields
}

void YourException::__fbthrift_clear_terse_fields() {
}

bool YourException::__fbthrift_is_empty() const {
  return true;
}

bool YourException::operator==(const YourException& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return true;
}

bool YourException::operator<(const YourException& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return false;
}


void swap(YourException& a, YourException& b) {
  using ::std::swap;
  (void)a;
  (void)b;
}

template void YourException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t YourException::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t YourException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t YourException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void YourException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t YourException::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t YourException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t YourException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::YourStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::YourStruct>;
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

namespace cpp2 {

const char* YourStruct::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/compiler/test/fixtures/basic-annotations/src/module/MyStruct";
}

YourStruct::YourStruct(const YourStruct& srcObj) {
  __fbthrift_field_majorVer = srcObj.__fbthrift_field_majorVer;
  __isset.set(0,srcObj.__isset.get(0));
  __fbthrift_field_package = srcObj.__fbthrift_field_package;
  __isset.set(1,srcObj.__isset.get(1));
  __fbthrift_field_annotation_with_quote = srcObj.__fbthrift_field_annotation_with_quote;
  __isset.set(2,srcObj.__isset.get(2));
  __fbthrift_field_class_ = srcObj.__fbthrift_field_class_;
  __isset.set(3,srcObj.__isset.get(3));
  __fbthrift_field_annotation_with_trailing_comma = srcObj.__fbthrift_field_annotation_with_trailing_comma;
  __isset.set(4,srcObj.__isset.get(4));
  __fbthrift_field_empty_annotations = srcObj.__fbthrift_field_empty_annotations;
  __isset.set(5,srcObj.__isset.get(5));
  __fbthrift_field_my_enum = srcObj.__fbthrift_field_my_enum;
  __isset.set(6,srcObj.__isset.get(6));
  __fbthrift_field_cpp_type_annotation = srcObj.__fbthrift_field_cpp_type_annotation;
  __isset.set(7,srcObj.__isset.get(7));
  __fbthrift_field_my_union = srcObj.__fbthrift_field_my_union;
  __isset.set(8,srcObj.__isset.get(8));
  ::apache::thrift::adapt_detail::construct<StaticCast, 7>(__fbthrift_field_my_enum, *this);
  ::apache::thrift::adapt_detail::construct<StaticCast, 9>(__fbthrift_field_my_union, *this);
}

YourStruct& YourStruct::operator=(const YourStruct& src) {
  YourStruct tmp(src);
  swap(*this, tmp);
  return *this;
}

YourStruct::YourStruct() :
      __fbthrift_field_majorVer(),
      __fbthrift_field_my_enum() {
  ::apache::thrift::adapt_detail::construct<StaticCast, 7>(__fbthrift_field_my_enum, *this);
  ::apache::thrift::adapt_detail::construct<StaticCast, 9>(__fbthrift_field_my_union, *this);
}


YourStruct::~YourStruct() {}

YourStruct::YourStruct(YourStruct&& other) noexcept  :
    __fbthrift_field_majorVer(std::move(other.__fbthrift_field_majorVer)),
    __fbthrift_field_package(std::move(other.__fbthrift_field_package)),
    __fbthrift_field_annotation_with_quote(std::move(other.__fbthrift_field_annotation_with_quote)),
    __fbthrift_field_class_(std::move(other.__fbthrift_field_class_)),
    __fbthrift_field_annotation_with_trailing_comma(std::move(other.__fbthrift_field_annotation_with_trailing_comma)),
    __fbthrift_field_empty_annotations(std::move(other.__fbthrift_field_empty_annotations)),
    __fbthrift_field_my_enum(std::move(other.__fbthrift_field_my_enum)),
    __fbthrift_field_cpp_type_annotation(std::move(other.__fbthrift_field_cpp_type_annotation)),
    __fbthrift_field_my_union(std::move(other.__fbthrift_field_my_union)),
    __isset(other.__isset) {
  ::apache::thrift::adapt_detail::construct<StaticCast, 7>(__fbthrift_field_my_enum, *this);
  ::apache::thrift::adapt_detail::construct<StaticCast, 9>(__fbthrift_field_my_union, *this);
}

YourStruct& YourStruct::operator=(FOLLY_MAYBE_UNUSED YourStruct&& other) noexcept {
    this->__fbthrift_field_majorVer = std::move(other.__fbthrift_field_majorVer);
    this->__fbthrift_field_package = std::move(other.__fbthrift_field_package);
    this->__fbthrift_field_annotation_with_quote = std::move(other.__fbthrift_field_annotation_with_quote);
    this->__fbthrift_field_class_ = std::move(other.__fbthrift_field_class_);
    this->__fbthrift_field_annotation_with_trailing_comma = std::move(other.__fbthrift_field_annotation_with_trailing_comma);
    this->__fbthrift_field_empty_annotations = std::move(other.__fbthrift_field_empty_annotations);
    this->__fbthrift_field_my_enum = std::move(other.__fbthrift_field_my_enum);
    this->__fbthrift_field_cpp_type_annotation = std::move(other.__fbthrift_field_cpp_type_annotation);
    this->__fbthrift_field_my_union = std::move(other.__fbthrift_field_my_union);
    __isset = other.__isset;
    return *this;
}


YourStruct::YourStruct(apache::thrift::FragileConstructor, ::std::int64_t majorVer__arg, ::std::string package__arg, ::std::string annotation_with_quote__arg, ::std::string class___arg, ::std::string annotation_with_trailing_comma__arg, ::std::string empty_annotations__arg, ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourEnum> my_enum__arg, std::deque<std::string> cpp_type_annotation__arg, ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourUnion> my_union__arg) :
    __fbthrift_field_majorVer(std::move(majorVer__arg)),
    __fbthrift_field_package(std::move(package__arg)),
    __fbthrift_field_annotation_with_quote(std::move(annotation_with_quote__arg)),
    __fbthrift_field_class_(std::move(class___arg)),
    __fbthrift_field_annotation_with_trailing_comma(std::move(annotation_with_trailing_comma__arg)),
    __fbthrift_field_empty_annotations(std::move(empty_annotations__arg)),
    __fbthrift_field_my_enum(std::move(my_enum__arg)),
    __fbthrift_field_cpp_type_annotation(std::move(cpp_type_annotation__arg)),
    __fbthrift_field_my_union(std::move(my_union__arg)) {
  ::apache::thrift::adapt_detail::construct<StaticCast, 7>(__fbthrift_field_my_enum, *this);
  ::apache::thrift::adapt_detail::construct<StaticCast, 9>(__fbthrift_field_my_union, *this);
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
  __isset.set(folly::index_constant<6>(), true);
  __isset.set(folly::index_constant<7>(), true);
  __isset.set(folly::index_constant<8>(), true);
}


void YourStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_majorVer = ::std::int64_t();
  this->__fbthrift_field_package = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_annotation_with_quote = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_class_ = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_annotation_with_trailing_comma = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_empty_annotations = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  ::apache::thrift::adapt_detail::clear<StaticCast, 7>(__fbthrift_field_my_enum, *this);
  this->__fbthrift_field_cpp_type_annotation.clear();
  __isset = {};
}

void YourStruct::__fbthrift_clear_terse_fields() {
}

bool YourStruct::__fbthrift_is_empty() const {
  return false;
}

bool YourStruct::operator==(const YourStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.majorVer_ref() == rhs.majorVer_ref())) {
    return false;
  }
  if (!(lhs.package_ref() == rhs.package_ref())) {
    return false;
  }
  if (!(lhs.annotation_with_quote_ref() == rhs.annotation_with_quote_ref())) {
    return false;
  }
  if (!(lhs.class__ref() == rhs.class__ref())) {
    return false;
  }
  if (!(lhs.annotation_with_trailing_comma_ref() == rhs.annotation_with_trailing_comma_ref())) {
    return false;
  }
  if (!(lhs.empty_annotations_ref() == rhs.empty_annotations_ref())) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal<StaticCast>(lhs.__fbthrift_field_my_enum, rhs.__fbthrift_field_my_enum)) {
    return false;
  }
  if (!(lhs.cpp_type_annotation_ref() == rhs.cpp_type_annotation_ref())) {
    return false;
  }
  if (::apache::thrift::adapt_detail::not_equal<StaticCast>(lhs.__fbthrift_field_my_union, rhs.__fbthrift_field_my_union)) {
    return false;
  }
  return true;
}

bool YourStruct::operator<(const YourStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.majorVer_ref() == rhs.majorVer_ref())) {
    return lhs.majorVer_ref() < rhs.majorVer_ref();
  }
  if (!(lhs.package_ref() == rhs.package_ref())) {
    return lhs.package_ref() < rhs.package_ref();
  }
  if (!(lhs.annotation_with_quote_ref() == rhs.annotation_with_quote_ref())) {
    return lhs.annotation_with_quote_ref() < rhs.annotation_with_quote_ref();
  }
  if (!(lhs.class__ref() == rhs.class__ref())) {
    return lhs.class__ref() < rhs.class__ref();
  }
  if (!(lhs.annotation_with_trailing_comma_ref() == rhs.annotation_with_trailing_comma_ref())) {
    return lhs.annotation_with_trailing_comma_ref() < rhs.annotation_with_trailing_comma_ref();
  }
  if (!(lhs.empty_annotations_ref() == rhs.empty_annotations_ref())) {
    return lhs.empty_annotations_ref() < rhs.empty_annotations_ref();
  }
  if (::apache::thrift::adapt_detail::not_equal<StaticCast>(lhs.__fbthrift_field_my_enum, rhs.__fbthrift_field_my_enum)) {
    return ::apache::thrift::adapt_detail::less<StaticCast>(lhs.__fbthrift_field_my_enum, rhs.__fbthrift_field_my_enum);
  }
  if (!(lhs.cpp_type_annotation_ref() == rhs.cpp_type_annotation_ref())) {
    return lhs.cpp_type_annotation_ref() < rhs.cpp_type_annotation_ref();
  }
  if (::apache::thrift::adapt_detail::not_equal<StaticCast>(lhs.__fbthrift_field_my_union, rhs.__fbthrift_field_my_union)) {
    return ::apache::thrift::adapt_detail::less<StaticCast>(lhs.__fbthrift_field_my_union, rhs.__fbthrift_field_my_union);
  }
  return false;
}

const std::deque<std::string>& YourStruct::get_cpp_type_annotation() const& {
  return __fbthrift_field_cpp_type_annotation;
}

std::deque<std::string> YourStruct::get_cpp_type_annotation() && {
  return std::move(__fbthrift_field_cpp_type_annotation);
}


void swap(YourStruct& a, YourStruct& b) {
  using ::std::swap;
  swap(a.majorVer_ref().value(), b.majorVer_ref().value());
  swap(a.package_ref().value(), b.package_ref().value());
  swap(a.annotation_with_quote_ref().value(), b.annotation_with_quote_ref().value());
  swap(a.class__ref().value(), b.class__ref().value());
  swap(a.annotation_with_trailing_comma_ref().value(), b.annotation_with_trailing_comma_ref().value());
  swap(a.empty_annotations_ref().value(), b.empty_annotations_ref().value());
  swap(a.my_enum_ref().value(), b.my_enum_ref().value());
  swap(a.cpp_type_annotation_ref().value(), b.cpp_type_annotation_ref().value());
  swap(a.my_union_ref().value(), b.my_union_ref().value());
  swap(a.__isset, b.__isset);
}

template void YourStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t YourStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t YourStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t YourStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void YourStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t YourStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t YourStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t YourStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        YourStruct,
        ::apache::thrift::type_class::variant,
        ::apache::thrift::adapt_detail::adapted_t<StaticCast, ::cpp2::YourUnion>>,
    "inconsistent use of json option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SecretStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SecretStruct>;
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

namespace cpp2 {

SecretStruct::SecretStruct(const SecretStruct&) = default;
SecretStruct& SecretStruct::operator=(const SecretStruct&) = default;
SecretStruct::SecretStruct(SecretStruct&& other) noexcept  :
    __fbthrift_field_id(std::move(other.__fbthrift_field_id)),
    __fbthrift_field_password(std::move(other.__fbthrift_field_password)),
    __isset(other.__isset) {
}

SecretStruct& SecretStruct::operator=(FOLLY_MAYBE_UNUSED SecretStruct&& other) noexcept {
    this->__fbthrift_field_id = std::move(other.__fbthrift_field_id);
    this->__fbthrift_field_password = std::move(other.__fbthrift_field_password);
    __isset = other.__isset;
    return *this;
}


SecretStruct::SecretStruct(apache::thrift::FragileConstructor, ::std::int64_t id__arg, ::std::string password__arg) :
    __fbthrift_field_id(std::move(id__arg)),
    __fbthrift_field_password(std::move(password__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void SecretStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_id = ::std::int64_t();
  this->__fbthrift_field_password = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void SecretStruct::__fbthrift_clear_terse_fields() {
}

bool SecretStruct::__fbthrift_is_empty() const {
  return false;
}

bool SecretStruct::operator==(const SecretStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.id_ref() == rhs.id_ref())) {
    return false;
  }
  if (!(lhs.password_ref() == rhs.password_ref())) {
    return false;
  }
  return true;
}

bool SecretStruct::operator<(const SecretStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.id_ref() == rhs.id_ref())) {
    return lhs.id_ref() < rhs.id_ref();
  }
  if (!(lhs.password_ref() == rhs.password_ref())) {
    return lhs.password_ref() < rhs.password_ref();
  }
  return false;
}


void swap(SecretStruct& a, SecretStruct& b) {
  using ::std::swap;
  swap(a.id_ref().value(), b.id_ref().value());
  swap(a.password_ref().value(), b.password_ref().value());
  swap(a.__isset, b.__isset);
}

template void SecretStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SecretStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SecretStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SecretStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SecretStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SecretStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SecretStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SecretStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
  ::apache::thrift::adapt_detail::validateFieldAdapter<StaticCast, 7, ::cpp2::YourEnum, ::cpp2::YourStruct>();
  ::apache::thrift::adapt_detail::validateFieldAdapter<StaticCast, 9, ::cpp2::YourUnion, ::cpp2::YourStruct>();
}
}} // cpp2
