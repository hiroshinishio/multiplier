// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/Frontend/Macro.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class File;
class Macro;
class MacroParameter;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT MacroParameter : public Macro {
 private:
  friend class FragmentImpl;
  friend class Macro;
 public:
  static gap::generator<MacroParameter> in(const Index &index);
  static gap::generator<MacroParameter> in(const Fragment &frag);
  static gap::generator<MacroParameter> in(const File &file);
  inline static constexpr MacroKind static_kind(void) {
    return MacroKind::PARAMETER;
  }

  static gap::generator<MacroParameter> containing(const Macro &macro);
  bool contains(const Macro &macro);

  static gap::generator<MacroParameter> containing(const Token &token);
  bool contains(const Token &token);

  static std::optional<MacroParameter> by_id(const Index &, EntityId);

  static std::optional<MacroParameter> from_base(const Macro &parent);
  inline static std::optional<MacroParameter> from(const Macro &parent) {
    return from_base(parent);
  }
  static std::optional<MacroParameter> from(const std::optional<Macro> &parent);
  static std::optional<MacroParameter> from(const Reference &r);
  static std::optional<MacroParameter> from(const VariantEntity &e);
  static std::optional<MacroParameter> from(const TokenContext &t);

  Token variadic_dots(void) const;
  Token name(void) const;
  uint32_t index(void) const;
};

static_assert(sizeof(MacroParameter) == sizeof(Macro));

#endif
} // namespace mx
