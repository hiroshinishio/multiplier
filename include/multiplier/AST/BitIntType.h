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
class BitIntType;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT BitIntType : public Type {
 private:
  friend class FragmentImpl;
  friend class Type;
 public:
  static gap::generator<BitIntType> in(const Index &index);
  static gap::generator<BitIntType> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::BIT_INT;
  }

  static std::optional<BitIntType> by_id(const Index &, EntityId);

  static std::optional<BitIntType> from_base(const Type &parent);
  inline static std::optional<BitIntType> from(const Type &parent) {
    return from_base(parent);
  }
  static std::optional<BitIntType> from(const std::optional<Type> &parent);
  static std::optional<BitIntType> from(const Reference &r);
  static std::optional<BitIntType> from(const VariantEntity &e);
  static std::optional<BitIntType> from(const TokenContext &t);

  bool is_signed(void) const;
  bool is_sugared(void) const;
  bool is_unsigned(void) const;
};

static_assert(sizeof(BitIntType) == sizeof(Type));

#endif
} // namespace mx
