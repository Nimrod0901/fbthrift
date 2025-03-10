/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/compiler/ast/t_typedef.h>

#include <thrift/compiler/ast/t_program.h>

namespace apache {
namespace thrift {
namespace compiler {

const std::string* t_typedef::get_first_annotation_or_null(
    const t_type* type, alias_span name) {
  const std::string* result = nullptr;
  find_type_if(type, [&result, name](const t_type* type) {
    return (result = type->find_annotation_or_null(name)) != nullptr;
  });
  return result;
}

const t_const* t_typedef::get_first_structured_annotation_or_null(
    const t_type* type, const char* uri) {
  const t_const* result = nullptr;
  find_type_if(type, [&result, uri](const t_type* type) {
    return (result = type->find_structured_annotation_or_null(uri)) != nullptr;
  });
  return result;
}

bool t_typedef::is_defined() const {
  return dynamic_cast<const t_placeholder_typedef*>(this) == nullptr;
}

bool t_placeholder_typedef::resolve() {
  if (type_.empty()) {
    type_ = t_type_ref::from_ptr(
        program()->scope()->find_type(program()->name() + "." + name()));
  }
  return !type_.empty();
}

} // namespace compiler
} // namespace thrift
} // namespace apache
