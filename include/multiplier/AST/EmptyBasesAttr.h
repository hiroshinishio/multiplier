// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/InheritableAttr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Attr;
class EmptyBasesAttr;
class File;
class InheritableAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT EmptyBasesAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<EmptyBasesAttr> in(const Index &index);
  static gap::generator<EmptyBasesAttr> in(const Fragment &frag);
  static gap::generator<EmptyBasesAttr> in(const File &file);
  static gap::generator<EmptyBasesAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::EMPTY_BASES;
  }

  static std::optional<EmptyBasesAttr> by_id(const Index &, EntityId);

  static std::optional<EmptyBasesAttr> from_base(const Attr &parent);
  inline static std::optional<EmptyBasesAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<EmptyBasesAttr> from(const std::optional<Attr> &parent);
  static std::optional<EmptyBasesAttr> from(const Reference &r);
  static std::optional<EmptyBasesAttr> from(const VariantEntity &e);
  static std::optional<EmptyBasesAttr> from(const TokenContext &t);

};

static_assert(sizeof(EmptyBasesAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
