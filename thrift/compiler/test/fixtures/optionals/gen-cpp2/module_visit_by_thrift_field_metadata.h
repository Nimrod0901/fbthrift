/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::cpp2::Color> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).red_ref());
    case 2:
      return f(1, static_cast<T&&>(t).green_ref());
    case 3:
      return f(2, static_cast<T&&>(t).blue_ref());
    case 4:
      return f(3, static_cast<T&&>(t).alpha_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Color");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::Vehicle> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).color_ref());
    case 2:
      return f(1, static_cast<T&&>(t).licensePlate_ref());
    case 3:
      return f(2, static_cast<T&&>(t).description_ref());
    case 4:
      return f(3, static_cast<T&&>(t).name_ref());
    case 5:
      return f(4, static_cast<T&&>(t).hasAC_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Vehicle");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::Person> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).id_ref());
    case 2:
      return f(1, static_cast<T&&>(t).name_ref());
    case 3:
      return f(2, static_cast<T&&>(t).age_ref());
    case 4:
      return f(3, static_cast<T&&>(t).address_ref());
    case 5:
      return f(4, static_cast<T&&>(t).favoriteColor_ref());
    case 6:
      return f(5, static_cast<T&&>(t).friends_ref());
    case 7:
      return f(6, static_cast<T&&>(t).bestFriend_ref());
    case 8:
      return f(7, static_cast<T&&>(t).petNames_ref());
    case 9:
      return f(8, static_cast<T&&>(t).afraidOfAnimal_ref());
    case 10:
      return f(9, static_cast<T&&>(t).vehicles_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Person");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
