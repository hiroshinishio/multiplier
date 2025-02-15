// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/ARMInterruptAttrInterruptType.h>
#include <multiplier/AST/InheritableAttr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class ARMInterruptAttr;
class Attr;
class File;
class InheritableAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ARMInterruptAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<ARMInterruptAttr> in(const Index &index);
  static gap::generator<ARMInterruptAttr> in(const Fragment &frag);
  static gap::generator<ARMInterruptAttr> in(const File &file);
  static gap::generator<ARMInterruptAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::ARM_INTERRUPT;
  }

  static std::optional<ARMInterruptAttr> by_id(const Index &, EntityId);

  static std::optional<ARMInterruptAttr> from_base(const Attr &parent);
  inline static std::optional<ARMInterruptAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<ARMInterruptAttr> from(const std::optional<Attr> &parent);
  static std::optional<ARMInterruptAttr> from(const Reference &r);
  static std::optional<ARMInterruptAttr> from(const VariantEntity &e);
  static std::optional<ARMInterruptAttr> from(const TokenContext &t);

  ARMInterruptAttrInterruptType interrupt(void) const;
};

static_assert(sizeof(ARMInterruptAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
