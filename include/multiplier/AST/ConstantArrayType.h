// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/ArrayType.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class ArrayType;
class ConstantArrayType;
class Expr;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ConstantArrayType : public ArrayType {
 private:
  friend class FragmentImpl;
  friend class ArrayType;
  friend class Type;
 public:
  static gap::generator<ConstantArrayType> in(const Index &index);
  static gap::generator<ConstantArrayType> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::CONSTANT_ARRAY;
  }

  static std::optional<ConstantArrayType> by_id(const Index &, EntityId);

  static std::optional<ConstantArrayType> from_base(const Type &parent);
  inline static std::optional<ConstantArrayType> from(const Type &parent) {
    return from_base(parent);
  }
  static std::optional<ConstantArrayType> from(const std::optional<Type> &parent);
  static std::optional<ConstantArrayType> from(const Reference &r);
  static std::optional<ConstantArrayType> from(const VariantEntity &e);
  static std::optional<ConstantArrayType> from(const TokenContext &t);

  std::optional<Expr> size_expression(void) const;
  bool is_sugared(void) const;
};

static_assert(sizeof(ConstantArrayType) == sizeof(ArrayType));

#endif
} // namespace mx
