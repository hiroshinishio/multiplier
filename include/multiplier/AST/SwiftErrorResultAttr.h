// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/ParameterABIAttr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Attr;
class File;
class InheritableAttr;
class InheritableParamAttr;
class ParameterABIAttr;
class SwiftErrorResultAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT SwiftErrorResultAttr : public ParameterABIAttr {
 private:
  friend class FragmentImpl;
  friend class ParameterABIAttr;
  friend class InheritableParamAttr;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<SwiftErrorResultAttr> in(const Index &index);
  static gap::generator<SwiftErrorResultAttr> in(const Fragment &frag);
  static gap::generator<SwiftErrorResultAttr> in(const File &file);
  static gap::generator<SwiftErrorResultAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::SWIFT_ERROR_RESULT;
  }

  static std::optional<SwiftErrorResultAttr> by_id(const Index &, EntityId);

  static std::optional<SwiftErrorResultAttr> from_base(const Attr &parent);
  inline static std::optional<SwiftErrorResultAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<SwiftErrorResultAttr> from(const std::optional<Attr> &parent);
  static std::optional<SwiftErrorResultAttr> from(const Reference &r);
  static std::optional<SwiftErrorResultAttr> from(const VariantEntity &e);
  static std::optional<SwiftErrorResultAttr> from(const TokenContext &t);

};

static_assert(sizeof(SwiftErrorResultAttr) == sizeof(ParameterABIAttr));

#endif
} // namespace mx
