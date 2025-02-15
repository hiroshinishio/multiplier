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
class BPFPreserveAccessIndexAttr;
class File;
class InheritableAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT BPFPreserveAccessIndexAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<BPFPreserveAccessIndexAttr> in(const Index &index);
  static gap::generator<BPFPreserveAccessIndexAttr> in(const Fragment &frag);
  static gap::generator<BPFPreserveAccessIndexAttr> in(const File &file);
  static gap::generator<BPFPreserveAccessIndexAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::BPF_PRESERVE_ACCESS_INDEX;
  }

  static std::optional<BPFPreserveAccessIndexAttr> by_id(const Index &, EntityId);

  static std::optional<BPFPreserveAccessIndexAttr> from_base(const Attr &parent);
  inline static std::optional<BPFPreserveAccessIndexAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<BPFPreserveAccessIndexAttr> from(const std::optional<Attr> &parent);
  static std::optional<BPFPreserveAccessIndexAttr> from(const Reference &r);
  static std::optional<BPFPreserveAccessIndexAttr> from(const VariantEntity &e);
  static std::optional<BPFPreserveAccessIndexAttr> from(const TokenContext &t);

};

static_assert(sizeof(BPFPreserveAccessIndexAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
