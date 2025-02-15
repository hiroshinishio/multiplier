// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Attr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class AliasAttr;
class Attr;
class File;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT AliasAttr : public Attr {
 private:
  friend class FragmentImpl;
  friend class Attr;
 public:
  static gap::generator<AliasAttr> in(const Index &index);
  static gap::generator<AliasAttr> in(const Fragment &frag);
  static gap::generator<AliasAttr> in(const File &file);
  static gap::generator<AliasAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::ALIAS;
  }

  static std::optional<AliasAttr> by_id(const Index &, EntityId);

  static std::optional<AliasAttr> from_base(const Attr &parent);
  inline static std::optional<AliasAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<AliasAttr> from(const std::optional<Attr> &parent);
  static std::optional<AliasAttr> from(const Reference &r);
  static std::optional<AliasAttr> from(const VariantEntity &e);
  static std::optional<AliasAttr> from(const TokenContext &t);

  std::string_view aliasee(void) const;
  uint32_t aliasee_length(void) const;
};

static_assert(sizeof(AliasAttr) == sizeof(Attr));

#endif
} // namespace mx
