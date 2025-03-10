/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_types.h"

namespace py3 {
namespace simple {
class SimpleService;
}} // namespace py3::simple
namespace py3 {
namespace simple {
class DerivedService;
}} // namespace py3::simple
namespace py3 {
namespace simple {
class RederivedService;
}} // namespace py3::simple

namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class EnumMetadata<::py3::simple::AnEnum> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::py3::simple::Flags> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::py3::simple::SimpleException> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::py3::simple::OptionalRefStruct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::py3::simple::SimpleStruct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::py3::simple::ComplexStruct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::py3::simple::BinaryUnion> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::py3::simple::BinaryUnionStruct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class ExceptionMetadata<::py3::simple::SimpleException> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::py3::simple::SimpleService>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_get_five(ThriftMetadata& metadata, ThriftService& context);
  static void gen_add_five(ThriftMetadata& metadata, ThriftService& context);
  static void gen_do_nothing(ThriftMetadata& metadata, ThriftService& context);
  static void gen_concat(ThriftMetadata& metadata, ThriftService& context);
  static void gen_get_value(ThriftMetadata& metadata, ThriftService& context);
  static void gen_negate(ThriftMetadata& metadata, ThriftService& context);
  static void gen_tiny(ThriftMetadata& metadata, ThriftService& context);
  static void gen_small(ThriftMetadata& metadata, ThriftService& context);
  static void gen_big(ThriftMetadata& metadata, ThriftService& context);
  static void gen_two(ThriftMetadata& metadata, ThriftService& context);
  static void gen_expected_exception(ThriftMetadata& metadata, ThriftService& context);
  static void gen_unexpected_exception(ThriftMetadata& metadata, ThriftService& context);
  static void gen_sum_i16_list(ThriftMetadata& metadata, ThriftService& context);
  static void gen_sum_i32_list(ThriftMetadata& metadata, ThriftService& context);
  static void gen_sum_i64_list(ThriftMetadata& metadata, ThriftService& context);
  static void gen_concat_many(ThriftMetadata& metadata, ThriftService& context);
  static void gen_count_structs(ThriftMetadata& metadata, ThriftService& context);
  static void gen_sum_set(ThriftMetadata& metadata, ThriftService& context);
  static void gen_contains_word(ThriftMetadata& metadata, ThriftService& context);
  static void gen_get_map_value(ThriftMetadata& metadata, ThriftService& context);
  static void gen_map_length(ThriftMetadata& metadata, ThriftService& context);
  static void gen_sum_map_values(ThriftMetadata& metadata, ThriftService& context);
  static void gen_complex_sum_i32(ThriftMetadata& metadata, ThriftService& context);
  static void gen_repeat_name(ThriftMetadata& metadata, ThriftService& context);
  static void gen_get_struct(ThriftMetadata& metadata, ThriftService& context);
  static void gen_fib(ThriftMetadata& metadata, ThriftService& context);
  static void gen_unique_words(ThriftMetadata& metadata, ThriftService& context);
  static void gen_words_count(ThriftMetadata& metadata, ThriftService& context);
  static void gen_set_enum(ThriftMetadata& metadata, ThriftService& context);
  static void gen_list_of_lists(ThriftMetadata& metadata, ThriftService& context);
  static void gen_word_character_frequency(ThriftMetadata& metadata, ThriftService& context);
  static void gen_list_of_sets(ThriftMetadata& metadata, ThriftService& context);
  static void gen_nested_map_argument(ThriftMetadata& metadata, ThriftService& context);
  static void gen_make_sentence(ThriftMetadata& metadata, ThriftService& context);
  static void gen_get_union(ThriftMetadata& metadata, ThriftService& context);
  static void gen_get_keys(ThriftMetadata& metadata, ThriftService& context);
  static void gen_lookup_double(ThriftMetadata& metadata, ThriftService& context);
  static void gen_retrieve_binary(ThriftMetadata& metadata, ThriftService& context);
  static void gen_contain_binary(ThriftMetadata& metadata, ThriftService& context);
  static void gen_contain_enum(ThriftMetadata& metadata, ThriftService& context);
  static void gen_get_binary_union_struct(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::py3::simple::DerivedService>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_get_six(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::py3::simple::RederivedService>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_get_seven(ThriftMetadata& metadata, ThriftService& context);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
