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
class TagDecl;
class TagType;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT TagType : public Type {
 private:
  friend class FragmentImpl;
  friend class Type;
 public:
  static gap::generator<TagType> in(const Index &index);
  static gap::generator<TagType> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<TagType> by_id(const Index &, EntityId);

  static std::optional<TagType> from_base(const Type &parent);
  inline static std::optional<TagType> from(const Type &parent) {
    return from_base(parent);
  }
  static std::optional<TagType> from(const std::optional<Type> &parent);
  static std::optional<TagType> from(const Reference &r);
  static std::optional<TagType> from(const VariantEntity &e);
  static std::optional<TagType> from(const TokenContext &t);

  TagDecl declaration(void) const;
  bool is_being_defined(void) const;
};

static_assert(sizeof(TagType) == sizeof(Type));

#endif
} // namespace mx
