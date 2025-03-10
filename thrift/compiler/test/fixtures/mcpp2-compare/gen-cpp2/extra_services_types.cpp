/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::extra::svc::containerStruct2>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::extra::svc::containerStruct2>;
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

namespace extra { namespace svc {

containerStruct2::containerStruct2(const containerStruct2&) = default;
containerStruct2& containerStruct2::operator=(const containerStruct2&) = default;
containerStruct2::containerStruct2() :
      __fbthrift_field_fieldA(),
      __fbthrift_field_req_fieldA(),
      __fbthrift_field_opt_fieldA(),
      __fbthrift_field_fieldC(static_cast<::std::set<::std::int32_t>>(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4})),
      __fbthrift_field_req_fieldC(static_cast<::std::set<::std::int32_t>>(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4})),
      __fbthrift_field_opt_fieldC(static_cast<::std::set<::std::int32_t>>(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4})),
      __fbthrift_field_fieldE(apache::thrift::StringTraits<std::string>::fromStringLiteral("somestring")),
      __fbthrift_field_req_fieldE(apache::thrift::StringTraits<std::string>::fromStringLiteral("somestring")),
      __fbthrift_field_opt_fieldE(apache::thrift::StringTraits<std::string>::fromStringLiteral("somestring")) {
}


containerStruct2::~containerStruct2() {}

containerStruct2::containerStruct2(containerStruct2&& other) noexcept  :
    __fbthrift_field_fieldA(std::move(other.__fbthrift_field_fieldA)),
    __fbthrift_field_req_fieldA(std::move(other.__fbthrift_field_req_fieldA)),
    __fbthrift_field_opt_fieldA(std::move(other.__fbthrift_field_opt_fieldA)),
    __fbthrift_field_fieldB(std::move(other.__fbthrift_field_fieldB)),
    __fbthrift_field_req_fieldB(std::move(other.__fbthrift_field_req_fieldB)),
    __fbthrift_field_opt_fieldB(std::move(other.__fbthrift_field_opt_fieldB)),
    __fbthrift_field_fieldC(std::move(other.__fbthrift_field_fieldC)),
    __fbthrift_field_req_fieldC(std::move(other.__fbthrift_field_req_fieldC)),
    __fbthrift_field_opt_fieldC(std::move(other.__fbthrift_field_opt_fieldC)),
    __fbthrift_field_fieldD(std::move(other.__fbthrift_field_fieldD)),
    __fbthrift_field_fieldE(std::move(other.__fbthrift_field_fieldE)),
    __fbthrift_field_req_fieldE(std::move(other.__fbthrift_field_req_fieldE)),
    __fbthrift_field_opt_fieldE(std::move(other.__fbthrift_field_opt_fieldE)),
    __isset(other.__isset) {
}

containerStruct2& containerStruct2::operator=(FOLLY_MAYBE_UNUSED containerStruct2&& other) noexcept {
    this->__fbthrift_field_fieldA = std::move(other.__fbthrift_field_fieldA);
    this->__fbthrift_field_req_fieldA = std::move(other.__fbthrift_field_req_fieldA);
    this->__fbthrift_field_opt_fieldA = std::move(other.__fbthrift_field_opt_fieldA);
    this->__fbthrift_field_fieldB = std::move(other.__fbthrift_field_fieldB);
    this->__fbthrift_field_req_fieldB = std::move(other.__fbthrift_field_req_fieldB);
    this->__fbthrift_field_opt_fieldB = std::move(other.__fbthrift_field_opt_fieldB);
    this->__fbthrift_field_fieldC = std::move(other.__fbthrift_field_fieldC);
    this->__fbthrift_field_req_fieldC = std::move(other.__fbthrift_field_req_fieldC);
    this->__fbthrift_field_opt_fieldC = std::move(other.__fbthrift_field_opt_fieldC);
    this->__fbthrift_field_fieldD = std::move(other.__fbthrift_field_fieldD);
    this->__fbthrift_field_fieldE = std::move(other.__fbthrift_field_fieldE);
    this->__fbthrift_field_req_fieldE = std::move(other.__fbthrift_field_req_fieldE);
    this->__fbthrift_field_opt_fieldE = std::move(other.__fbthrift_field_opt_fieldE);
    __isset = other.__isset;
    return *this;
}


containerStruct2::containerStruct2(apache::thrift::FragileConstructor, bool fieldA__arg, bool req_fieldA__arg, bool opt_fieldA__arg, ::std::map<::std::string, bool> fieldB__arg, ::std::map<::std::string, bool> req_fieldB__arg, ::std::map<::std::string, bool> opt_fieldB__arg, ::std::set<::std::int32_t> fieldC__arg, ::std::set<::std::int32_t> req_fieldC__arg, ::std::set<::std::int32_t> opt_fieldC__arg, ::std::string fieldD__arg, ::std::string fieldE__arg, ::std::string req_fieldE__arg, ::std::string opt_fieldE__arg) :
    __fbthrift_field_fieldA(std::move(fieldA__arg)),
    __fbthrift_field_req_fieldA(std::move(req_fieldA__arg)),
    __fbthrift_field_opt_fieldA(std::move(opt_fieldA__arg)),
    __fbthrift_field_fieldB(std::move(fieldB__arg)),
    __fbthrift_field_req_fieldB(std::move(req_fieldB__arg)),
    __fbthrift_field_opt_fieldB(std::move(opt_fieldB__arg)),
    __fbthrift_field_fieldC(std::move(fieldC__arg)),
    __fbthrift_field_req_fieldC(std::move(req_fieldC__arg)),
    __fbthrift_field_opt_fieldC(std::move(opt_fieldC__arg)),
    __fbthrift_field_fieldD(std::move(fieldD__arg)),
    __fbthrift_field_fieldE(std::move(fieldE__arg)),
    __fbthrift_field_req_fieldE(std::move(req_fieldE__arg)),
    __fbthrift_field_opt_fieldE(std::move(opt_fieldE__arg)) {
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


void containerStruct2::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_fieldA = bool();
  this->__fbthrift_field_req_fieldA = bool();
  this->__fbthrift_field_opt_fieldA = bool();
  this->__fbthrift_field_fieldB.clear();
  this->__fbthrift_field_req_fieldB.clear();
  this->__fbthrift_field_opt_fieldB.clear();
  this->__fbthrift_field_fieldC.clear();
  this->__fbthrift_field_req_fieldC.clear();
  this->__fbthrift_field_opt_fieldC.clear();
  this->__fbthrift_field_fieldD = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_fieldE = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_req_fieldE = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_opt_fieldE = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void containerStruct2::__fbthrift_clear_terse_fields() {
}

bool containerStruct2::__fbthrift_is_empty() const {
  return false;
}

bool containerStruct2::operator==(const containerStruct2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return false;
  }
  if (!(lhs.req_fieldA_ref() == rhs.req_fieldA_ref())) {
    return false;
  }
  if (!(lhs.opt_fieldA_ref() == rhs.opt_fieldA_ref())) {
    return false;
  }
  if (!(lhs.fieldB_ref() == rhs.fieldB_ref())) {
    return false;
  }
  if (!(lhs.req_fieldB_ref() == rhs.req_fieldB_ref())) {
    return false;
  }
  if (!(lhs.opt_fieldB_ref() == rhs.opt_fieldB_ref())) {
    return false;
  }
  if (!(lhs.fieldC_ref() == rhs.fieldC_ref())) {
    return false;
  }
  if (!(lhs.req_fieldC_ref() == rhs.req_fieldC_ref())) {
    return false;
  }
  if (!(lhs.opt_fieldC_ref() == rhs.opt_fieldC_ref())) {
    return false;
  }
  if (!(lhs.fieldD_ref() == rhs.fieldD_ref())) {
    return false;
  }
  if (!(lhs.fieldE_ref() == rhs.fieldE_ref())) {
    return false;
  }
  if (!(lhs.req_fieldE_ref() == rhs.req_fieldE_ref())) {
    return false;
  }
  if (!(lhs.opt_fieldE_ref() == rhs.opt_fieldE_ref())) {
    return false;
  }
  return true;
}

bool containerStruct2::operator<(const containerStruct2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return lhs.fieldA_ref() < rhs.fieldA_ref();
  }
  if (!(lhs.req_fieldA_ref() == rhs.req_fieldA_ref())) {
    return lhs.req_fieldA_ref() < rhs.req_fieldA_ref();
  }
  if (!(lhs.opt_fieldA_ref() == rhs.opt_fieldA_ref())) {
    return lhs.opt_fieldA_ref() < rhs.opt_fieldA_ref();
  }
  if (!(lhs.fieldB_ref() == rhs.fieldB_ref())) {
    return lhs.fieldB_ref() < rhs.fieldB_ref();
  }
  if (!(lhs.req_fieldB_ref() == rhs.req_fieldB_ref())) {
    return lhs.req_fieldB_ref() < rhs.req_fieldB_ref();
  }
  if (!(lhs.opt_fieldB_ref() == rhs.opt_fieldB_ref())) {
    return lhs.opt_fieldB_ref() < rhs.opt_fieldB_ref();
  }
  if (!(lhs.fieldC_ref() == rhs.fieldC_ref())) {
    return lhs.fieldC_ref() < rhs.fieldC_ref();
  }
  if (!(lhs.req_fieldC_ref() == rhs.req_fieldC_ref())) {
    return lhs.req_fieldC_ref() < rhs.req_fieldC_ref();
  }
  if (!(lhs.opt_fieldC_ref() == rhs.opt_fieldC_ref())) {
    return lhs.opt_fieldC_ref() < rhs.opt_fieldC_ref();
  }
  if (!(lhs.fieldD_ref() == rhs.fieldD_ref())) {
    return lhs.fieldD_ref() < rhs.fieldD_ref();
  }
  if (!(lhs.fieldE_ref() == rhs.fieldE_ref())) {
    return lhs.fieldE_ref() < rhs.fieldE_ref();
  }
  if (!(lhs.req_fieldE_ref() == rhs.req_fieldE_ref())) {
    return lhs.req_fieldE_ref() < rhs.req_fieldE_ref();
  }
  if (!(lhs.opt_fieldE_ref() == rhs.opt_fieldE_ref())) {
    return lhs.opt_fieldE_ref() < rhs.opt_fieldE_ref();
  }
  return false;
}

const ::std::map<::std::string, bool>& containerStruct2::get_fieldB() const& {
  return __fbthrift_field_fieldB;
}

::std::map<::std::string, bool> containerStruct2::get_fieldB() && {
  return std::move(__fbthrift_field_fieldB);
}

const ::std::map<::std::string, bool>& containerStruct2::get_req_fieldB() const& {
  return __fbthrift_field_req_fieldB;
}

::std::map<::std::string, bool> containerStruct2::get_req_fieldB() && {
  return std::move(__fbthrift_field_req_fieldB);
}

const ::std::map<::std::string, bool>* containerStruct2::get_opt_fieldB() const& {
  return opt_fieldB_ref().has_value() ? std::addressof(__fbthrift_field_opt_fieldB) : nullptr;
}

::std::map<::std::string, bool>* containerStruct2::get_opt_fieldB() & {
  return opt_fieldB_ref().has_value() ? std::addressof(__fbthrift_field_opt_fieldB) : nullptr;
}

const ::std::set<::std::int32_t>& containerStruct2::get_fieldC() const& {
  return __fbthrift_field_fieldC;
}

::std::set<::std::int32_t> containerStruct2::get_fieldC() && {
  return std::move(__fbthrift_field_fieldC);
}

const ::std::set<::std::int32_t>& containerStruct2::get_req_fieldC() const& {
  return __fbthrift_field_req_fieldC;
}

::std::set<::std::int32_t> containerStruct2::get_req_fieldC() && {
  return std::move(__fbthrift_field_req_fieldC);
}

const ::std::set<::std::int32_t>* containerStruct2::get_opt_fieldC() const& {
  return opt_fieldC_ref().has_value() ? std::addressof(__fbthrift_field_opt_fieldC) : nullptr;
}

::std::set<::std::int32_t>* containerStruct2::get_opt_fieldC() & {
  return opt_fieldC_ref().has_value() ? std::addressof(__fbthrift_field_opt_fieldC) : nullptr;
}


void swap(containerStruct2& a, containerStruct2& b) {
  using ::std::swap;
  swap(a.fieldA_ref().value(), b.fieldA_ref().value());
  swap(a.req_fieldA_ref().value(), b.req_fieldA_ref().value());
  swap(a.opt_fieldA_ref().value_unchecked(), b.opt_fieldA_ref().value_unchecked());
  swap(a.fieldB_ref().value(), b.fieldB_ref().value());
  swap(a.req_fieldB_ref().value(), b.req_fieldB_ref().value());
  swap(a.opt_fieldB_ref().value_unchecked(), b.opt_fieldB_ref().value_unchecked());
  swap(a.fieldC_ref().value(), b.fieldC_ref().value());
  swap(a.req_fieldC_ref().value(), b.req_fieldC_ref().value());
  swap(a.opt_fieldC_ref().value_unchecked(), b.opt_fieldC_ref().value_unchecked());
  swap(a.fieldD_ref().value(), b.fieldD_ref().value());
  swap(a.fieldE_ref().value(), b.fieldE_ref().value());
  swap(a.req_fieldE_ref().value(), b.req_fieldE_ref().value());
  swap(a.opt_fieldE_ref().value_unchecked(), b.opt_fieldE_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void containerStruct2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t containerStruct2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t containerStruct2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void containerStruct2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t containerStruct2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t containerStruct2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void containerStruct2::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t containerStruct2::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t containerStruct2::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;


}} // extra::svc

namespace extra { namespace svc { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}} // extra::svc
