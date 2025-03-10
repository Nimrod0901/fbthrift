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

#include <thrift/compiler/sema/patch_mutator.h>

#include <thrift/compiler/ast/diagnostic_context.h>
#include <thrift/compiler/ast/t_field.h>
#include <thrift/compiler/sema/standard_mutator_stage.h>

namespace apache {
namespace thrift {
namespace compiler {
namespace {

constexpr auto kGeneratePatchUri = "facebook.com/thrift/op/GeneratePatch";
constexpr auto kGenerateOptionalPatchUri =
    "facebook.com/thrift/op/GenerateOptionalPatch";

// TODO(afuller): Index all types by uri, and find them that way.
const char* getPatchTypeName(t_base_type::type base_type) {
  switch (base_type) {
    case t_base_type::type::t_bool:
      return "patch.BoolPatch";
    case t_base_type::type::t_byte:
      return "patch.BytePatch";
    case t_base_type::type::t_i16:
      return "patch.I16Patch";
    case t_base_type::type::t_i32:
      return "patch.I32Patch";
    case t_base_type::type::t_i64:
      return "patch.I64Patch";
    case t_base_type::type::t_float:
      return "patch.FloatPatch";
    case t_base_type::type::t_double:
      return "patch.DoublePatch";
    case t_base_type::type::t_string:
      return "patch.StringPatch";
    case t_base_type::type::t_binary:
      return "patch.BinaryPatch";
    default:
      return "";
  }
}
// TODO(afuller): Index all types by uri, and find them that way.
const char* getOptionalPatchTypeName(t_base_type::type base_type) {
  switch (base_type) {
    case t_base_type::type::t_bool:
      return "patch.OptionalBoolPatch";
    case t_base_type::type::t_byte:
      return "patch.OptionalBytePatch";
    case t_base_type::type::t_i16:
      return "patch.OptionalI16Patch";
    case t_base_type::type::t_i32:
      return "patch.OptionalI32Patch";
    case t_base_type::type::t_i64:
      return "patch.OptionalI64Patch";
    case t_base_type::type::t_float:
      return "patch.OptionalFloatPatch";
    case t_base_type::type::t_double:
      return "patch.OptionalDoublePatch";
    case t_base_type::type::t_string:
      return "patch.OptionalStringPatch";
    case t_base_type::type::t_binary:
      return "patch.OptionalBinaryPatch";
    default:
      return "";
  }
}

std::string getSibName(const std::string& sibling, const std::string& name) {
  return sibling.substr(0, sibling.find_last_of("/")) + name;
}

// A fluent function to set the doc string on a given node.
template <typename N>
N& doc(std::string txt, N& node) {
  node.set_doc(std::move(txt) + "\n");
  return node;
}

// A fluent function to box a given field.
t_field& box(t_field& node) {
  node.set_qualifier(t_field_qualifier::optional);
  // Box the field, if the underlying type is a struct.
  if (dynamic_cast<const t_struct*>(node.type()->get_true_type())) {
    node.set_annotation("thrift.box");
  }
  return node;
}

// Helper for generating a struct.
struct StructGen {
  // The annotation we are generating for.
  const t_node& annot;
  // The struct to add fields to.
  t_struct& generated;

  // Add a new field to generated, and return it.
  t_field& field(t_field_id id, t_type_ref type, std::string name) {
    generated.append_field(
        std::make_unique<t_field>(type, std::move(name), id));
    t_field& result = generated.fields().back();
    // TODO(afuller): Make terse when supported.
    // result.set_qualifier(t_field_qualifier::terse);
    result.set_lineno(annot.lineno());
    return result;
  }

  t_struct* operator->() { return &generated; }
  operator t_struct&() { return generated; }
  operator t_type_ref() { return generated; }

  void set_adapter(std::string name) {
    generated.set_annotation(
        "cpp.adapter", "::apache::thrift::op::detail::" + std::move(name));
    generated.set_annotation("cpp.name", generated.name() + "Struct");
    generated.set_annotation("cpp.detail.adapted_alias");
  }
};

// Helper for generating patch structs.
struct PatchGen : StructGen {
  // Standardized patch field ids.
  enum t_patch_field_id : t_field_id {
    kAssignId = 1,
    kClearId = 2,
    kPatchId = 3,

    // Optional, Union
    kEnsureId = 4,
    kPatchAfterId = 5,

    // List, String, Binary
    kPrependId = 4,
    kAppendId = 5,

    // Set, Map
    kRemoveId = 4,
    kAddId = 5,

    // TODO(afuller): Add 'replace' op.
    // kReplaceId = 6,
    kPutId = 7, // Map Patch
  };

  // {kAssignId}: optional {type} assign (thrift.box);
  t_field& assign(t_type_ref type) {
    return doc(
        "Assigns a value. If set, all other operations are ignored.",
        box(field(kAssignId, type, "assign")));
  }

  // {kClearId}: bool clear;
  t_field& clear() {
    return doc(
        "Clears a value. Applies first.",
        field(kClearId, t_base_type::t_bool(), "clear"));
  }
  t_field& clearOpt() {
    return doc("Clears any set value. Applies first.", clear());
  }

  // {kPatchId}: {patch_type} patch;
  t_field& patch(t_type_ref patch_type) {
    return doc(
        "Patches a value. Applies second.",
        field(kPatchId, patch_type, "patch"));
  }
  t_field& patchOpt(t_type_ref patch_type) {
    return doc("Patches any set value. Applies second.", patch(patch_type));
  }

  // {kEnsureId}: {type} ensure;
  t_field& ensure(t_type_ref type) {
    return doc(
        "Assigns the value, if not already set. Applies third.",
        field(kEnsureId, type, "ensure"));
  }

  // {kPatchAfterId}: {patch_type} patchAfter;
  t_field& patchAfter(t_type_ref patch_type) {
    return doc(
        "Patches any set value, including newly set values. Applies fourth.",
        field(kPatchAfterId, patch_type, "patchAfter"));
  }

  // {kPrependId}: {type} prepend;
  t_field& prepend(t_type_ref type) {
    return doc(
        "Prepends to the front of a given list.",
        field(kPrependId, type, "prepend"));
  }
  // {kAppendId}: {type} append;
  t_field& append(t_type_ref type) {
    return doc(
        "Appends to the back of a given list.",
        field(kAppendId, type, "append"));
  }

  // {kRemoveId}: {type} remove;
  t_field& remove(t_type_ref type) {
    return doc(
        "Removes entries, if present. Applies thrid.",
        field(kRemoveId, type, "remove"));
  }
  // {kAddId}: {type} add;
  t_field& add(t_type_ref type) {
    return doc(
        "Adds entries, if not already present. Applies fourth.",
        field(kAddId, type, "add"));
  }

  // {kPutId}: {type} put;
  t_field& put(t_type_ref type) {
    return doc(
        "Adds or replaces the given key/value pairs. Applies Second.",
        field(kPutId, type, "put"));
  }
};

t_type_ref resolve_value_type(t_struct& patch_type) {
  // All patch types must have an 'optional Value assign' field.
  t_type_ref result;
  if (const t_field* field = patch_type.get_field_by_name("assign")) {
    // The field type is the value_type.
    result = field->type();
  }
  return result;
}

// Generates an optional patch representation for any patch with the
// @patch.GenerateOptionalPatch annotation.
void generate_optional_patch(
    diagnostic_context& ctx, mutator_context& mctx, t_struct& node) {
  if (auto* annot =
          node.find_structured_annotation_or_null(kGenerateOptionalPatchUri)) {
    // Add a 'optional patch' for the given patch type.
    if (t_type_ref value_type = resolve_value_type(node)) {
      patch_generator::get_for(ctx, mctx).add_optional_patch(
          *annot, value_type, node);
    } else {
      ctx.failure(
          "Could not resolve the 'value' type, needed to generate the optional patch struct.");
    }
  }
}

// Generates a patch representation for any struct with the @patch.GeneratePatch
// annotation.
void generate_struct_patch(
    diagnostic_context& ctx, mutator_context& mctx, t_struct& node) {
  if (auto* annot =
          ctx.program().inherit_annotation_or_null(node, kGeneratePatchUri)) {
    auto& generator = patch_generator::get_for(ctx, mctx);

    // Add a 'structured patch' and 'struct value patch' using it.
    auto& struct_patch =
        generator.add_structured_patch(*annot, node, "StructPatchAdapter");
    auto& patch = generator.add_struct_value_patch(*annot, node, struct_patch);

    // Add an 'optional patch' based on the added patch type.
    generator.add_optional_patch(*annot, node, patch);
  }
}

void generate_union_patch(
    diagnostic_context& ctx, mutator_context& mctx, t_union& node) {
  if (auto* annot =
          ctx.program().inherit_annotation_or_null(node, kGeneratePatchUri)) {
    auto& generator = patch_generator::get_for(ctx, mctx);

    // Add a 'structured patch' and 'union value patch' using it.
    auto& struct_patch =
        generator.add_structured_patch(*annot, node, "UnionPatchAdapter");
    auto& patch = generator.add_union_value_patch(*annot, node, struct_patch);

    // Add an 'optional patch' based on the added patch type.
    generator.add_optional_patch(*annot, node, patch);
  }
}

} // namespace

void add_patch_mutators(ast_mutators& mutators) {
  auto& mutator = mutators[standard_mutator_stage::plugin];
  mutator.add_struct_visitor(&generate_struct_patch);
  mutator.add_struct_visitor(&generate_optional_patch);
  mutator.add_union_visitor(&generate_union_patch);
}

patch_generator& patch_generator::get_for(
    diagnostic_context& ctx, mutator_context& mctx) {
  t_program& program = dynamic_cast<t_program&>(*mctx.root());
  return ctx.cache().get(program, [&]() {
    return std::make_unique<patch_generator>(ctx, program);
  });
}

t_struct& patch_generator::add_optional_patch(
    const t_node& annot, t_type_ref value_type, t_struct& patch_type) {
  PatchGen gen{{annot, gen_prefix_struct(annot, patch_type, "Optional")}};
  gen.clearOpt();
  gen.patchOpt(patch_type);
  box(gen.ensure(value_type));
  gen.patchAfter(patch_type);
  gen.set_adapter("OptionalPatchAdapter");
  return gen;
}

t_struct& patch_generator::add_union_value_patch(
    const t_node& annot, t_union& value_type, t_type_ref patch_type) {
  PatchGen gen{{annot, gen_suffix_struct(annot, value_type, "ValuePatch")}};
  // TODO(afuller): Add 'assign`.
  gen.clearOpt();
  gen.patchOpt(patch_type);
  gen.ensure(value_type);
  // TODO(afuller): Add 'maybeEnsure'.
  gen.patchAfter(patch_type);
  gen.set_adapter("UnionValuePatchAdapter");
  return gen;
}

t_struct& patch_generator::add_structured_patch(
    const t_const& annot, t_structured& orig, const char* adapter) {
  StructGen gen{annot, gen_suffix_struct(annot, orig, "Patch")};
  for (const auto& field : orig.fields()) {
    if (t_type_ref patch_type = find_patch_type(annot, orig, field)) {
      gen.field(field.id(), patch_type, field.name());
    } else {
      ctx_.warning(field, "Could not resolve patch type for field.");
    }
  }
  gen.set_adapter(adapter);
  return gen;
}

t_struct& patch_generator::add_struct_value_patch(
    const t_node& annot, t_struct& value_type, t_type_ref patch_type) {
  PatchGen gen{{annot, gen_suffix_struct(annot, value_type, "ValuePatch")}};
  gen.assign(value_type);
  gen.clear();
  gen.patch(patch_type);
  gen.set_adapter("StructValuePatchAdapter");
  return gen;
}

t_type_ref patch_generator::find_patch_type(
    const t_const& annot, const t_structured& parent, const t_field& field) {
  // Base types use a shared representation defined in patch.thrift.
  const auto* type = field.type()->get_true_type();
  if (auto* base_type = dynamic_cast<const t_base_type*>(type)) {
    const char* name = field.qualifier() == t_field_qualifier::optional
        ? getOptionalPatchTypeName(base_type->base_type())
        : getPatchTypeName(base_type->base_type());
    if (const auto* result = program_.scope()->find_type(name)) {
      return t_type_ref::from_ptr(result);
    }
    // TODO(afuller): This look up hack only works for 'built-in' patch types.
    // Use a shared uri type registry instead.
    if (const auto* result =
            annot.type()->program()->scope()->find_type(name)) {
      return t_type_ref::from_ptr(result);
    }

    // These type should always be availabile because the are defined along
    // side the annoation used to trigger patch generation.
    ctx_.failure(field, [&](auto& os) {
      os << "Could not find expected patch type: " << name;
    });
    return {};
  }

  // Check the field for a custom patch type.
  if (auto* custom = field.find_annotation_or_null("thrift.patch.uri")) {
    if (const auto* result =
            dynamic_cast<const t_type*>(program_.scope()->find_def(*custom))) {
      return t_type_ref::from_ptr(result);
    }
    ctx_.warning(field, "Could not find custom type: {}", *custom);
  }

  // Check the field type for a custom patch type.
  if (auto* custom = t_typedef::get_first_annotation_or_null(
          field.type().get_type(), {"thrift.patch.uri"})) {
    if (const auto* result =
            dynamic_cast<const t_type*>(program_.scope()->find_def(*custom))) {
      return t_type_ref::from_ptr(result);
    }
    ctx_.warning(*field.type(), "Could not find custom type: {}", *custom);
  }

  if (auto* structured = dynamic_cast<const t_structured*>(type)) {
    std::string name = structured->name() + "ValuePatch";
    if (field.qualifier() == t_field_qualifier::optional) {
      name = "Optional" + std::move(name);
    }

    if (!structured->uri().empty()) { // Try to look up by URI.
      if (auto* result = dynamic_cast<const t_type*>(program_.scope()->find_def(
              getSibName(structured->uri(), name)))) {
        return t_type_ref::from_ptr(result);
      }
    }

    // Try to look up by Name.
    // Look for it in the same program as the type itself.
    t_type_ref result = program_.scope()->ref_type(
        *structured->program(), name, field.src_range());
    if (auto* ph = result.get_unresolved_type()) {
      // Try the current program.
      t_type_ref fallback =
          program_.scope()->ref_type(program_, name, field.src_range());
      if (fallback.resolved()) {
        return fallback; // TODO(afuller): Remove support for local fallbacks.
      }
      // Set the location info, in case the type can't be resolved later.
      ph->set_lineno(field.lineno());
      ph->set_src_range(field.src_range());
      ph->set_generated();
    }
    return result;
  }

  // Could not resolve a shared patch type, so generate a field specific one.
  // Give it a stable name.
  std::string suffix = "Field" + std::to_string(field.id()) + "Patch";
  PatchGen gen{{annot, gen_suffix_struct(annot, parent, suffix.c_str())}};
  // All value patches have an assign field.
  gen.assign(field.type());
  if (auto* container = dynamic_cast<const t_container*>(type)) {
    gen.clear();
    switch (container->container_type()) {
      case t_container::type::t_list:
        // TODO(afuller): support 'patch'.
        // TODO(afuller): support 'replace' op.
        // TODO(afuller): support 'removeIf' op.
        gen.prepend(field.type());
        gen.append(field.type());
        gen.set_adapter("ListPatchAdapter");
        break;
      case t_container::type::t_set:
        // TODO(afuller): support 'replace' op.
        gen.remove(field.type());
        gen.add(field.type());
        gen.set_adapter("SetPatchAdapter");
        break;
      case t_container::type::t_map:
        // TODO(afuller): support 'patch' op.
        // TODO(afuller): support 'remove' op.
        // TODO(afuller): support 'replace' op.
        // TODO(afuller): support 'removeIf' op.
        gen.put(field.type());
        // TODO(afuller): support 'add' op.
        gen.set_adapter("MapPatchAdapter");
        break;
    }
  } else {
    gen.set_adapter("AssignPatchAdapter");
  }

  if (field.qualifier() == t_field_qualifier::optional) {
    return add_optional_patch(annot, field.type(), gen);
  }
  return gen;
}

t_struct& patch_generator::gen_struct(
    const t_node& annot, std::string name, std::string uri) {
  auto generated = std::make_unique<t_struct>(&program_, std::move(name));
  generated->set_generated();
  generated->set_uri(std::move(uri));
  // Attribute the new struct to the anntation.
  generated->set_lineno(annot.lineno());
  program_.scope()->add_type(program_.scope_name(*generated), generated.get());
  return program_.add_def(std::move(generated));
}

t_struct& patch_generator::gen_suffix_struct(
    const t_node& annot, const t_named& orig, const char* suffix) {
  ctx_.check(!orig.uri().empty(), annot, "URI required to support patching.");
  t_struct& generated =
      gen_struct(annot, orig.name() + suffix, orig.uri() + suffix);
  if (const auto* cpp_name = orig.find_annotation_or_null("cpp.name")) {
    generated.set_annotation("cpp.name", *cpp_name + suffix);
  }
  return generated;
}

t_struct& patch_generator::gen_prefix_struct(
    const t_node& annot, const t_named& orig, const char* prefix) {
  t_struct& generated = gen_struct(
      annot, prefix + orig.name(), prefix_uri_name(orig.uri(), prefix));
  if (const auto* cpp_name = orig.find_annotation_or_null("cpp.name")) {
    generated.set_annotation("cpp.name", prefix + *cpp_name);
  }
  return generated;
}

} // namespace compiler
} // namespace thrift
} // namespace apache
