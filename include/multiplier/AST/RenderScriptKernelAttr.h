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
class File;
class RenderScriptKernelAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT RenderScriptKernelAttr : public Attr {
 private:
  friend class FragmentImpl;
  friend class Attr;
 public:
  static gap::generator<RenderScriptKernelAttr> in(const Index &index);
  static gap::generator<RenderScriptKernelAttr> in(const Fragment &frag);
  static gap::generator<RenderScriptKernelAttr> in(const File &file);
  static gap::generator<RenderScriptKernelAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::RENDER_SCRIPT_KERNEL;
  }

  static std::optional<RenderScriptKernelAttr> by_id(const Index &, EntityId);

  static std::optional<RenderScriptKernelAttr> from_base(const Attr &parent);
  inline static std::optional<RenderScriptKernelAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<RenderScriptKernelAttr> from(const std::optional<Attr> &parent);
  static std::optional<RenderScriptKernelAttr> from(const Reference &r);
  static std::optional<RenderScriptKernelAttr> from(const VariantEntity &e);
  static std::optional<RenderScriptKernelAttr> from(const TokenContext &t);

};

static_assert(sizeof(RenderScriptKernelAttr) == sizeof(Attr));

#endif
} // namespace mx
