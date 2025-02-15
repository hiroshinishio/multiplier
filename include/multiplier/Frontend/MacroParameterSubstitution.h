// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/Frontend/MacroSubstitution.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class File;
class Macro;
class MacroParameter;
class MacroParameterSubstitution;
class MacroSubstitution;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT MacroParameterSubstitution : public MacroSubstitution {
 private:
  friend class FragmentImpl;
  friend class MacroSubstitution;
  friend class Macro;
 public:
  static gap::generator<MacroParameterSubstitution> in(const Index &index);
  static gap::generator<MacroParameterSubstitution> in(const Fragment &frag);
  static gap::generator<MacroParameterSubstitution> in(const File &file);
  inline static constexpr MacroKind static_kind(void) {
    return MacroKind::PARAMETER_SUBSTITUTION;
  }

  static gap::generator<MacroParameterSubstitution> containing(const Macro &macro);
  bool contains(const Macro &macro);

  static gap::generator<MacroParameterSubstitution> containing(const Token &token);
  bool contains(const Token &token);

  static std::optional<MacroParameterSubstitution> by_id(const Index &, EntityId);

  static std::optional<MacroParameterSubstitution> from_base(const Macro &parent);
  inline static std::optional<MacroParameterSubstitution> from(const Macro &parent) {
    return from_base(parent);
  }
  static std::optional<MacroParameterSubstitution> from(const std::optional<Macro> &parent);
  static std::optional<MacroParameterSubstitution> from(const Reference &r);
  static std::optional<MacroParameterSubstitution> from(const VariantEntity &e);
  static std::optional<MacroParameterSubstitution> from(const TokenContext &t);

  MacroParameter parameter(void) const;
  Token parameter_use(void) const;
};

static_assert(sizeof(MacroParameterSubstitution) == sizeof(MacroSubstitution));

#endif
} // namespace mx
