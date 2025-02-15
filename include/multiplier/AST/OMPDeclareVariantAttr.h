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
class Expr;
class File;
class InheritableAttr;
class OMPDeclareVariantAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT OMPDeclareVariantAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<OMPDeclareVariantAttr> in(const Index &index);
  static gap::generator<OMPDeclareVariantAttr> in(const Fragment &frag);
  static gap::generator<OMPDeclareVariantAttr> in(const File &file);
  static gap::generator<OMPDeclareVariantAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::OMP_DECLARE_VARIANT;
  }

  static std::optional<OMPDeclareVariantAttr> by_id(const Index &, EntityId);

  static std::optional<OMPDeclareVariantAttr> from_base(const Attr &parent);
  inline static std::optional<OMPDeclareVariantAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<OMPDeclareVariantAttr> from(const std::optional<Attr> &parent);
  static std::optional<OMPDeclareVariantAttr> from(const Reference &r);
  static std::optional<OMPDeclareVariantAttr> from(const VariantEntity &e);
  static std::optional<OMPDeclareVariantAttr> from(const TokenContext &t);

  Expr variant_func_reference(void) const;
};

static_assert(sizeof(OMPDeclareVariantAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
