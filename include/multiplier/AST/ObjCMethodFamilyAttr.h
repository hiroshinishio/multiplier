// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/InheritableAttr.h>
#include <multiplier/AST/ObjCMethodFamilyAttrFamilyKind.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Attr;
class File;
class InheritableAttr;
class ObjCMethodFamilyAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ObjCMethodFamilyAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<ObjCMethodFamilyAttr> in(const Index &index);
  static gap::generator<ObjCMethodFamilyAttr> in(const Fragment &frag);
  static gap::generator<ObjCMethodFamilyAttr> in(const File &file);
  static gap::generator<ObjCMethodFamilyAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::OBJ_C_METHOD_FAMILY;
  }

  static std::optional<ObjCMethodFamilyAttr> by_id(const Index &, EntityId);

  static std::optional<ObjCMethodFamilyAttr> from_base(const Attr &parent);
  inline static std::optional<ObjCMethodFamilyAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<ObjCMethodFamilyAttr> from(const std::optional<Attr> &parent);
  static std::optional<ObjCMethodFamilyAttr> from(const Reference &r);
  static std::optional<ObjCMethodFamilyAttr> from(const VariantEntity &e);
  static std::optional<ObjCMethodFamilyAttr> from(const TokenContext &t);

  ObjCMethodFamilyAttrFamilyKind family(void) const;
};

static_assert(sizeof(ObjCMethodFamilyAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
