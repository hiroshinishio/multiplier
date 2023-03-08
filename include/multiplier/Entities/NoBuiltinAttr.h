// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "Attr.h"

namespace mx {
class EntityProvider;
class Index;
class Attr;
class NoBuiltinAttr;
class Token;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class NoBuiltinAttr : public Attr {
 private:
  friend class FragmentImpl;
  friend class Attr;
 public:
  static gap::generator<NoBuiltinAttr> in(const Fragment &frag);
  static gap::generator<NoBuiltinAttr> in(const File &file);
  static gap::generator<NoBuiltinAttr> in(const Index &index);
  static gap::generator<NoBuiltinAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<NoBuiltinAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::NO_BUILTIN;
  }

  static std::optional<NoBuiltinAttr> from(const Attr &parent);

  inline static std::optional<NoBuiltinAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return NoBuiltinAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<NoBuiltinAttr> from(const Reference &r);
  static std::optional<NoBuiltinAttr> from(const TokenContext &t);

};

static_assert(sizeof(NoBuiltinAttr) == sizeof(Attr));

#endif
} // namespace mx
