// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/InheritableAttr.h>
#include <multiplier/AST/RISCVInterruptAttrInterruptType.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Attr;
class File;
class InheritableAttr;
class RISCVInterruptAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT RISCVInterruptAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<RISCVInterruptAttr> in(const Index &index);
  static gap::generator<RISCVInterruptAttr> in(const Fragment &frag);
  static gap::generator<RISCVInterruptAttr> in(const File &file);
  static gap::generator<RISCVInterruptAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::RISCV_INTERRUPT;
  }

  static std::optional<RISCVInterruptAttr> by_id(const Index &, EntityId);

  static std::optional<RISCVInterruptAttr> from_base(const Attr &parent);
  inline static std::optional<RISCVInterruptAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<RISCVInterruptAttr> from(const std::optional<Attr> &parent);
  static std::optional<RISCVInterruptAttr> from(const Reference &r);
  static std::optional<RISCVInterruptAttr> from(const VariantEntity &e);
  static std::optional<RISCVInterruptAttr> from(const TokenContext &t);

  RISCVInterruptAttrInterruptType interrupt(void) const;
};

static_assert(sizeof(RISCVInterruptAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
