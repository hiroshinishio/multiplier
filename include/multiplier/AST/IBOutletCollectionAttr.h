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
class IBOutletCollectionAttr;
class InheritableAttr;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT IBOutletCollectionAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<IBOutletCollectionAttr> in(const Index &index);
  static gap::generator<IBOutletCollectionAttr> in(const Fragment &frag);
  static gap::generator<IBOutletCollectionAttr> in(const File &file);
  static gap::generator<IBOutletCollectionAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::IB_OUTLET_COLLECTION;
  }

  static std::optional<IBOutletCollectionAttr> by_id(const Index &, EntityId);

  static std::optional<IBOutletCollectionAttr> from_base(const Attr &parent);
  inline static std::optional<IBOutletCollectionAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<IBOutletCollectionAttr> from(const std::optional<Attr> &parent);
  static std::optional<IBOutletCollectionAttr> from(const Reference &r);
  static std::optional<IBOutletCollectionAttr> from(const VariantEntity &e);
  static std::optional<IBOutletCollectionAttr> from(const TokenContext &t);

  Type interface(void) const;
  Type interface_token(void) const;
};

static_assert(sizeof(IBOutletCollectionAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
