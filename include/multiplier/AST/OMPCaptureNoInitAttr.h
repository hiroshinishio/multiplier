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
class OMPCaptureNoInitAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT OMPCaptureNoInitAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<OMPCaptureNoInitAttr> in(const Index &index);
  static gap::generator<OMPCaptureNoInitAttr> in(const Fragment &frag);
  static gap::generator<OMPCaptureNoInitAttr> in(const File &file);
  static gap::generator<OMPCaptureNoInitAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::OMP_CAPTURE_NO_INIT;
  }

  static std::optional<OMPCaptureNoInitAttr> by_id(const Index &, EntityId);

  static std::optional<OMPCaptureNoInitAttr> from_base(const Attr &parent);
  inline static std::optional<OMPCaptureNoInitAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<OMPCaptureNoInitAttr> from(const std::optional<Attr> &parent);
  static std::optional<OMPCaptureNoInitAttr> from(const Reference &r);
  static std::optional<OMPCaptureNoInitAttr> from(const VariantEntity &e);
  static std::optional<OMPCaptureNoInitAttr> from(const TokenContext &t);

};

static_assert(sizeof(OMPCaptureNoInitAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
