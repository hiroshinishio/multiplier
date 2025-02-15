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
class File;
class InheritableAttr;
class ReqdWorkGroupSizeAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ReqdWorkGroupSizeAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<ReqdWorkGroupSizeAttr> in(const Index &index);
  static gap::generator<ReqdWorkGroupSizeAttr> in(const Fragment &frag);
  static gap::generator<ReqdWorkGroupSizeAttr> in(const File &file);
  static gap::generator<ReqdWorkGroupSizeAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::REQD_WORK_GROUP_SIZE;
  }

  static std::optional<ReqdWorkGroupSizeAttr> by_id(const Index &, EntityId);

  static std::optional<ReqdWorkGroupSizeAttr> from_base(const Attr &parent);
  inline static std::optional<ReqdWorkGroupSizeAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<ReqdWorkGroupSizeAttr> from(const std::optional<Attr> &parent);
  static std::optional<ReqdWorkGroupSizeAttr> from(const Reference &r);
  static std::optional<ReqdWorkGroupSizeAttr> from(const VariantEntity &e);
  static std::optional<ReqdWorkGroupSizeAttr> from(const TokenContext &t);

  uint32_t x_dim(void) const;
  uint32_t y_dim(void) const;
  uint32_t z_dim(void) const;
};

static_assert(sizeof(ReqdWorkGroupSizeAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
