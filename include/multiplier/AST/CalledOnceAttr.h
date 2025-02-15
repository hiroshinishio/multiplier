// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Attr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Attr;
class CalledOnceAttr;
class File;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT CalledOnceAttr : public Attr {
 private:
  friend class FragmentImpl;
  friend class Attr;
 public:
  static gap::generator<CalledOnceAttr> in(const Index &index);
  static gap::generator<CalledOnceAttr> in(const Fragment &frag);
  static gap::generator<CalledOnceAttr> in(const File &file);
  static gap::generator<CalledOnceAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::CALLED_ONCE;
  }

  static std::optional<CalledOnceAttr> by_id(const Index &, EntityId);

  static std::optional<CalledOnceAttr> from_base(const Attr &parent);
  inline static std::optional<CalledOnceAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<CalledOnceAttr> from(const std::optional<Attr> &parent);
  static std::optional<CalledOnceAttr> from(const Reference &r);
  static std::optional<CalledOnceAttr> from(const VariantEntity &e);
  static std::optional<CalledOnceAttr> from(const TokenContext &t);

};

static_assert(sizeof(CalledOnceAttr) == sizeof(Attr));

#endif
} // namespace mx
