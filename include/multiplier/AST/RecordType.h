// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/TagType.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class RecordType;
class TagType;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT RecordType : public TagType {
 private:
  friend class FragmentImpl;
  friend class TagType;
  friend class Type;
 public:
  static gap::generator<RecordType> in(const Index &index);
  static gap::generator<RecordType> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::RECORD;
  }

  static std::optional<RecordType> by_id(const Index &, EntityId);

  static std::optional<RecordType> from_base(const Type &parent);
  inline static std::optional<RecordType> from(const Type &parent) {
    return from_base(parent);
  }
  static std::optional<RecordType> from(const std::optional<Type> &parent);
  static std::optional<RecordType> from(const Reference &r);
  static std::optional<RecordType> from(const VariantEntity &e);
  static std::optional<RecordType> from(const TokenContext &t);

  bool has_const_fields(void) const;
  bool is_sugared(void) const;
};

static_assert(sizeof(RecordType) == sizeof(TagType));

#endif
} // namespace mx
