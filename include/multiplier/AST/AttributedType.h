// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/AttrKind.h>
#include <multiplier/AST/NullabilityKind.h>
#include <multiplier/AST/Type.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Attr;
class AttributedType;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT AttributedType : public Type {
 private:
  friend class FragmentImpl;
  friend class Type;
 public:
  static gap::generator<AttributedType> in(const Index &index);
  static gap::generator<AttributedType> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::ATTRIBUTED;
  }

  static std::optional<AttributedType> by_id(const Index &, EntityId);

  static std::optional<AttributedType> from_base(const Type &parent);
  inline static std::optional<AttributedType> from(const Type &parent) {
    return from_base(parent);
  }
  static std::optional<AttributedType> from(const std::optional<Type> &parent);
  static std::optional<AttributedType> from(const Reference &r);
  static std::optional<AttributedType> from(const VariantEntity &e);
  static std::optional<AttributedType> from(const TokenContext &t);

  std::optional<Attr> attribute(void) const;
  AttrKind attribute_kind(void) const;
  Type equivalent_type(void) const;
  std::optional<NullabilityKind> immediate_nullability(void) const;
  Type modified_type(void) const;
  bool has_attribute(void) const;
  bool is_calling_conv(void) const;
  bool is_ms_type_spec(void) const;
  bool is_qualifier(void) const;
  bool is_sugared(void) const;
  bool is_web_assembly_funcref_spec(void) const;
};

static_assert(sizeof(AttributedType) == sizeof(Type));

#endif
} // namespace mx
