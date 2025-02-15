// Copyright (c) 2023-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/IR/Builtin/Operation.h>

#include <multiplier/IR/Attribute.h>
#include <multiplier/IR/Block.h>
#include <multiplier/IR/Region.h>
#include <multiplier/IR/Type.h>

#include <ios>
#include <string>

#include <mlir/Dialect/LLVMIR/LLVMDialect.h>

namespace mx::ir::builtin {
std::optional<Operation> Operation::from(const ::mx::ir::Operation &that) {
  if (IsBuiltinOperationKind(that.kind())) {
    return reinterpret_cast<const Operation &>(that);
  }
  return std::nullopt;
}

std::optional<ModuleOp> ModuleOp::from(const ::mx::ir::Operation &that) {
  if (that.kind() == OperationKind::BUILTIN_MODULE) {
    return reinterpret_cast<const ModuleOp &>(that);
  }
  return std::nullopt;
}

std::optional<ModuleOp> ModuleOp::producing(const ::mx::ir::Value &that) {
  if (auto op = ::mx::ir::Operation::producing(that)) {
    return from(op.value());
  }
  return std::nullopt;
}

::mlir::ModuleOp ModuleOp::underlying_repr(void) const noexcept {
  return ::mlir::ModuleOp(this->::mx::ir::Operation::op_);
}

::mx::ir::Region ModuleOp::body_region(void) const {
  auto &val = underlying_repr().getBodyRegion();
  return ::mx::ir::Region(module_, val);
}

std::optional<std::string_view> ModuleOp::sym_name(void) const {
  auto opt_val = underlying_repr().getSymName();
  if (!opt_val) {
    return std::nullopt;
  }
  auto &val = opt_val.value();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return {};
  }
}

std::optional<std::string_view> ModuleOp::sym_visibility(void) const {
  auto opt_val = underlying_repr().getSymVisibility();
  if (!opt_val) {
    return std::nullopt;
  }
  auto &val = opt_val.value();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return {};
  }
}

std::optional<std::string_view> ModuleOp::name(void) const {
  auto opt_val = underlying_repr().getName();
  if (!opt_val) {
    return std::nullopt;
  }
  auto &val = opt_val.value();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return {};
  }
}

bool ModuleOp::is_optional_symbol(void) const {
  auto val = underlying_repr().isOptionalSymbol();
  return val;
}

std::string_view ModuleOp::default_dialect(void) const {
  auto val = underlying_repr().getDefaultDialect();
  if (auto size = val.size()) {
    return std::string_view(val.data(), size);
  } else {
    return {};
  }
}

std::optional<UnrealizedConversionCastOp> UnrealizedConversionCastOp::from(const ::mx::ir::Operation &that) {
  if (that.kind() == OperationKind::BUILTIN_UNREALIZED_CONVERSION_CAST) {
    return reinterpret_cast<const UnrealizedConversionCastOp &>(that);
  }
  return std::nullopt;
}

std::optional<UnrealizedConversionCastOp> UnrealizedConversionCastOp::producing(const ::mx::ir::Value &that) {
  if (auto op = ::mx::ir::Operation::producing(that)) {
    return from(op.value());
  }
  return std::nullopt;
}

::mlir::UnrealizedConversionCastOp UnrealizedConversionCastOp::underlying_repr(void) const noexcept {
  return ::mlir::UnrealizedConversionCastOp(this->::mx::ir::Operation::op_);
}

}  // namespace mx::ir::builtin
