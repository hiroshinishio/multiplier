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
class AllocSizeAttr;
class Attr;
class File;
class InheritableAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT AllocSizeAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<AllocSizeAttr> in(const Index &index);
  static gap::generator<AllocSizeAttr> in(const Fragment &frag);
  static gap::generator<AllocSizeAttr> in(const File &file);
  static gap::generator<AllocSizeAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::ALLOC_SIZE;
  }

  static std::optional<AllocSizeAttr> by_id(const Index &, EntityId);

  static std::optional<AllocSizeAttr> from_base(const Attr &parent);
  inline static std::optional<AllocSizeAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<AllocSizeAttr> from(const std::optional<Attr> &parent);
  static std::optional<AllocSizeAttr> from(const Reference &r);
  static std::optional<AllocSizeAttr> from(const VariantEntity &e);
  static std::optional<AllocSizeAttr> from(const TokenContext &t);

};

static_assert(sizeof(AllocSizeAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
