// Copyright (c) 2023-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "../Type.h"

namespace mlir::LLVM {
class LLVMArrayType;
class LLVMFunctionType;
class LLVMPointerType;
class LLVMFixedVectorType;
class LLVMScalableVectorType;
class LLVMTargetExtType;
}  // namespace mlir::LLVM
namespace mx::ir::llvm {

class MX_EXPORT Type : public ::mx::ir::Type {
 public:
  static std::optional<Type> from(const ::mx::ir::Type &);
};
static_assert(sizeof(Type) == sizeof(::mx::ir::Type));

class MX_EXPORT ArrayType final : public Type {
 public:
  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::LLVM_ARRAY;
  }

  static std::optional<ArrayType> from(const ::mx::ir::Type &that);
  ::mlir::LLVM::LLVMArrayType underlying_repr(void) const noexcept;

  // Imported methods:
  //Type element_type(void) const;
  unsigned int num_elements(void) const;
  //::std::optional<DenseMap<Attribute, Type, DenseMapInfo<Attribute, void>, DenseMapPair<Attribute, Type>>> subelement_index_map(void) const;
};
static_assert(sizeof(ArrayType) == sizeof(Type));

class MX_EXPORT FunctionType final : public Type {
 public:
  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::LLVM_FUNCTION;
  }

  static std::optional<FunctionType> from(const ::mx::ir::Type &that);
  ::mlir::LLVM::LLVMFunctionType underlying_repr(void) const noexcept;

  // Imported methods:
  bool is_var_arg(void) const;
  //ArrayRef<Type> return_types(void) const;
  unsigned int num_params(void) const;
  //Type return_type(void) const;
  //::llvm::ArrayRef<Type> params(void) const;
  bool var_arg(void) const;
};
static_assert(sizeof(FunctionType) == sizeof(Type));

class MX_EXPORT PointerType final : public Type {
 public:
  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::LLVM_POINTER;
  }

  static std::optional<PointerType> from(const ::mx::ir::Type &that);
  ::mlir::LLVM::LLVMPointerType underlying_repr(void) const noexcept;

  // Imported methods:
  unsigned int address_space(void) const;
};
static_assert(sizeof(PointerType) == sizeof(Type));

class MX_EXPORT FixedVectorType final : public Type {
 public:
  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::LLVM_FIXED_VECTOR;
  }

  static std::optional<FixedVectorType> from(const ::mx::ir::Type &that);
  ::mlir::LLVM::LLVMFixedVectorType underlying_repr(void) const noexcept;

  // Imported methods:
  //Type element_type(void) const;
  unsigned int num_elements(void) const;
};
static_assert(sizeof(FixedVectorType) == sizeof(Type));

class MX_EXPORT ScalableVectorType final : public Type {
 public:
  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::LLVM_SCALABLE_VECTOR;
  }

  static std::optional<ScalableVectorType> from(const ::mx::ir::Type &that);
  ::mlir::LLVM::LLVMScalableVectorType underlying_repr(void) const noexcept;

  // Imported methods:
  //Type element_type(void) const;
  unsigned int min_num_elements(void) const;
};
static_assert(sizeof(ScalableVectorType) == sizeof(Type));

class MX_EXPORT TargetExtType final : public Type {
 public:
  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::LLVM_TARGET_EXT;
  }

  static std::optional<TargetExtType> from(const ::mx::ir::Type &that);
  ::mlir::LLVM::LLVMTargetExtType underlying_repr(void) const noexcept;

  // Imported methods:
  bool supports_mem_ops(void) const;
  std::string_view ext_type_name(void) const;
  //::llvm::ArrayRef<Type> type_params(void) const;
  //::llvm::ArrayRef<unsigned int> int_params(void) const;
};
static_assert(sizeof(TargetExtType) == sizeof(Type));

}  // namespace mx::ir::llvm
