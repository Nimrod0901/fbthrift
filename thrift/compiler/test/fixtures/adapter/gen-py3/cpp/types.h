/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/annotation/gen-cpp2/cpp_data.h"
#include "thrift/annotation/gen-cpp2/cpp_types.h"
#include "thrift/annotation/gen-cpp2/cpp_metadata.h"
namespace thrift {
namespace py3 {


template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::facebook::thrift::annotation::cpp::RefType>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}



template<>
void reset_field<::facebook::thrift::annotation::cpp::Ref>(
    ::facebook::thrift::annotation::cpp::Ref& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.type_ref().copy_from(default_inst<::facebook::thrift::annotation::cpp::Ref>().type_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::cpp::Lazy>(
    ::facebook::thrift::annotation::cpp::Lazy& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.ref_ref().copy_from(default_inst<::facebook::thrift::annotation::cpp::Lazy>().ref_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::cpp::DisableLazyChecksum>(
    ::facebook::thrift::annotation::cpp::DisableLazyChecksum& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::annotation::cpp::Adapter>(
    ::facebook::thrift::annotation::cpp::Adapter& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::cpp::Adapter>().name_ref());
      return;
    case 1:
      obj.adaptedType_ref().copy_from(default_inst<::facebook::thrift::annotation::cpp::Adapter>().adaptedType_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::cpp::PackIsset>(
    ::facebook::thrift::annotation::cpp::PackIsset& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.atomic_ref().copy_from(default_inst<::facebook::thrift::annotation::cpp::PackIsset>().atomic_ref());
      return;
  }
}

template<>
void reset_field<::facebook::thrift::annotation::cpp::MinimizePadding>(
    ::facebook::thrift::annotation::cpp::MinimizePadding& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::facebook::thrift::annotation::cpp::TriviallyRelocatable>(
    ::facebook::thrift::annotation::cpp::TriviallyRelocatable& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::cpp::Ref>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::cpp::Lazy>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::cpp::DisableLazyChecksum>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::cpp::Adapter>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::cpp::PackIsset>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::cpp::MinimizePadding>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::cpp::TriviallyRelocatable>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
