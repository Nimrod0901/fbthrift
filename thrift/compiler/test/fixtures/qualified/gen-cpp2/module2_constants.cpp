/**
 * Autogenerated by Thrift for src/module2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>

#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module0_constants.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_constants.h"

namespace module2 {

::module2::Struct const& module2_constants::c2() {
  static folly::Indestructible<::module2::Struct> const instance(::apache::thrift::detail::make_constant< ::module2::Struct>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::first>(static_cast<::module0::Struct>(::module0::module0_constants::c0())), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::second>(static_cast<::module1::Struct>(::module1::module1_constants::c1()))));
  return *instance;
}

::module2::Struct const& module2_constants::c3() {
  static folly::Indestructible<::module2::Struct> const instance(::module2::module2_constants::c2());
  return *instance;
}

::module2::Struct const& module2_constants::c4() {
  static folly::Indestructible<::module2::Struct> const instance(::module2::module2_constants::c2());
  return *instance;
}

} // module2
