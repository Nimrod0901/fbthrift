/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "folly/sorted_vector_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct FieldA;
struct FieldA;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_FieldA
#define APACHE_THRIFT_ACCESSOR_FieldA
APACHE_THRIFT_DEFINE_ACCESSOR(FieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_FieldA
#define APACHE_THRIFT_ACCESSOR_FieldA
APACHE_THRIFT_DEFINE_ACCESSOR(FieldA);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace a { namespace different { namespace ns {

enum class AnEnum {
  FIELDA = 2,
  FIELDB = 4
};




}}} // a::different::ns
namespace std {


template<> struct hash<typename ::a::different::ns::AnEnum> : public apache::thrift::detail::enum_hash<typename ::a::different::ns::AnEnum> {};
template<> struct equal_to<typename ::a::different::ns::AnEnum> : public apache::thrift::detail::enum_equal_to<typename ::a::different::ns::AnEnum> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::a::different::ns::AnEnum>;

template <> struct TEnumTraits<::a::different::ns::AnEnum> {
  using type = ::a::different::ns::AnEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::FIELDA; }
  static constexpr type max() { return type::FIELDB; }
};


}} // apache::thrift

namespace a { namespace different { namespace ns {

using _AnEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<AnEnum>;
extern const _AnEnum_EnumMapFactory::ValuesToNamesMapType _AnEnum_VALUES_TO_NAMES;
extern const _AnEnum_EnumMapFactory::NamesToValuesMapType _AnEnum_NAMES_TO_VALUES;

}}} // a::different::ns

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace a { namespace different { namespace ns {
class AStruct;
class AStructB;
}}} // a::different::ns
// END forward_declare
// BEGIN typedefs
namespace a { namespace different { namespace ns {
typedef int64_t IncludedInt64;

}}} // a::different::ns
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace a { namespace different { namespace ns {
class AStruct final : private apache::thrift::detail::st::ComparisonOperators<AStruct> {
 public:

  AStruct() :
      FieldA(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  AStruct(apache::thrift::FragileConstructor, int32_t FieldA__arg);

  AStruct(AStruct&&) = default;

  AStruct(const AStruct&) = default;

  AStruct& operator=(AStruct&&) = default;

  AStruct& operator=(const AStruct&) = default;
  void __clear();
 public:
  int32_t FieldA;

 public:
  struct __isset {
    bool FieldA;
  } __isset = {};
  bool operator==(const AStruct& rhs) const;
  bool operator<(const AStruct& rhs) const;

  FOLLY_ERASE ::apache::thrift::field_ref<const int32_t&> FieldA_ref() const& {
    return {FieldA, __isset.FieldA};
  }

  FOLLY_ERASE ::apache::thrift::field_ref<const int32_t&&> FieldA_ref() const&& {
    return {std::move(FieldA), __isset.FieldA};
  }

  FOLLY_ERASE ::apache::thrift::field_ref<int32_t&> FieldA_ref() & {
    return {FieldA, __isset.FieldA};
  }

  FOLLY_ERASE ::apache::thrift::field_ref<int32_t&&> FieldA_ref() && {
    return {std::move(FieldA), __isset.FieldA};
  }

  int32_t get_FieldA() const {
    return FieldA;
  }

  int32_t& set_FieldA(int32_t FieldA_) {
    FieldA = FieldA_;
    __isset.FieldA = true;
    return FieldA;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< AStruct >;
};

void swap(AStruct& a, AStruct& b);

template <class Protocol_>
uint32_t AStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // a::different::ns
namespace a { namespace different { namespace ns {
class AStructB final : private apache::thrift::detail::st::ComparisonOperators<AStructB> {
 public:

  AStructB() :
      FieldA(std::make_shared< ::a::different::ns::AStruct>()) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  AStructB(apache::thrift::FragileConstructor, std::shared_ptr<const  ::a::different::ns::AStruct> FieldA__arg);

  AStructB(AStructB&&) = default;

  AStructB(const AStructB&) = default;

  AStructB& operator=(AStructB&&) = default;

  AStructB& operator=(const AStructB&) = default;
  void __clear();
 public:
  std::shared_ptr<const  ::a::different::ns::AStruct> FieldA;

 public:
  bool operator==(const AStructB& rhs) const;
  bool operator<(const AStructB& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< AStructB >;
};

void swap(AStructB& a, AStructB& b);

template <class Protocol_>
uint32_t AStructB::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // a::different::ns
