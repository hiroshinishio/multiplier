// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/TypeAttr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Attr;
class File;
class Ptr32Attr;
class Token;
class TypeAttr;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT Ptr32Attr : public TypeAttr {
 private:
  friend class FragmentImpl;
  friend class TypeAttr;
  friend class Attr;
 public:
  static gap::generator<Ptr32Attr> in(const Index &index);
  static gap::generator<Ptr32Attr> in(const Fragment &frag);
  static gap::generator<Ptr32Attr> in(const File &file);
  static gap::generator<Ptr32Attr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::PTR32;
  }

  static std::optional<Ptr32Attr> by_id(const Index &, EntityId);

  static std::optional<Ptr32Attr> from_base(const Attr &parent);
  inline static std::optional<Ptr32Attr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<Ptr32Attr> from(const std::optional<Attr> &parent);
  static std::optional<Ptr32Attr> from(const Reference &r);
  static std::optional<Ptr32Attr> from(const VariantEntity &e);
  static std::optional<Ptr32Attr> from(const TokenContext &t);

};

static_assert(sizeof(Ptr32Attr) == sizeof(TypeAttr));

#endif
} // namespace mx
