// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Type.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Decl;
class SubstTemplateTypeParmType;
class TemplateTypeParmDecl;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT SubstTemplateTypeParmType : public Type {
 private:
  friend class FragmentImpl;
  friend class Type;
 public:
  static gap::generator<SubstTemplateTypeParmType> in(const Index &index);
  static gap::generator<SubstTemplateTypeParmType> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::SUBST_TEMPLATE_TYPE_PARM;
  }

  static std::optional<SubstTemplateTypeParmType> by_id(const Index &, EntityId);

  static std::optional<SubstTemplateTypeParmType> from_base(const Type &parent);
  inline static std::optional<SubstTemplateTypeParmType> from(const Type &parent) {
    return from_base(parent);
  }
  static std::optional<SubstTemplateTypeParmType> from(const std::optional<Type> &parent);
  static std::optional<SubstTemplateTypeParmType> from(const Reference &r);
  static std::optional<SubstTemplateTypeParmType> from(const VariantEntity &e);
  static std::optional<SubstTemplateTypeParmType> from(const TokenContext &t);

  Decl associated_declaration(void) const;
  uint32_t index(void) const;
  std::optional<uint32_t> pack_index(void) const;
  TemplateTypeParmDecl replaced_parameter(void) const;
  Type replacement_type(void) const;
  bool is_sugared(void) const;
};

static_assert(sizeof(SubstTemplateTypeParmType) == sizeof(Type));

#endif
} // namespace mx
