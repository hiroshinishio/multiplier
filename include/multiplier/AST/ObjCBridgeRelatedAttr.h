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
class ObjCBridgeRelatedAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ObjCBridgeRelatedAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<ObjCBridgeRelatedAttr> in(const Index &index);
  static gap::generator<ObjCBridgeRelatedAttr> in(const Fragment &frag);
  static gap::generator<ObjCBridgeRelatedAttr> in(const File &file);
  static gap::generator<ObjCBridgeRelatedAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::OBJ_C_BRIDGE_RELATED;
  }

  static std::optional<ObjCBridgeRelatedAttr> by_id(const Index &, EntityId);

  static std::optional<ObjCBridgeRelatedAttr> from_base(const Attr &parent);
  inline static std::optional<ObjCBridgeRelatedAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<ObjCBridgeRelatedAttr> from(const std::optional<Attr> &parent);
  static std::optional<ObjCBridgeRelatedAttr> from(const Reference &r);
  static std::optional<ObjCBridgeRelatedAttr> from(const VariantEntity &e);
  static std::optional<ObjCBridgeRelatedAttr> from(const TokenContext &t);

};

static_assert(sizeof(ObjCBridgeRelatedAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
