// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/FunctionType.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class FunctionNoProtoType;
class FunctionType;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT FunctionNoProtoType : public FunctionType {
 private:
  friend class FragmentImpl;
  friend class FunctionType;
  friend class Type;
 public:
  static gap::generator<FunctionNoProtoType> in(const Index &index);
  static gap::generator<FunctionNoProtoType> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::FUNCTION_NO_PROTO;
  }

  static std::optional<FunctionNoProtoType> by_id(const Index &, EntityId);

  static std::optional<FunctionNoProtoType> from_base(const Type &parent);
  inline static std::optional<FunctionNoProtoType> from(const Type &parent) {
    return from_base(parent);
  }
  static std::optional<FunctionNoProtoType> from(const std::optional<Type> &parent);
  static std::optional<FunctionNoProtoType> from(const Reference &r);
  static std::optional<FunctionNoProtoType> from(const VariantEntity &e);
  static std::optional<FunctionNoProtoType> from(const TokenContext &t);

  bool is_sugared(void) const;
};

static_assert(sizeof(FunctionNoProtoType) == sizeof(FunctionType));

#endif
} // namespace mx
