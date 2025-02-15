// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "../Compiler.h"

#include <cstdint>

namespace mx {
enum class CallingConv : unsigned char {
  C,
  X86_STD_CALL,
  X86_FAST_CALL,
  X86_THIS_CALL,
  X86_VECTOR_CALL,
  X86_PASCAL,
  WIN64,
  X8664_SYS_V,
  X86_REG_CALL,
  AAPCS,
  AAPCSVFP,
  INTEL_OCL_BICC,
  SPIR_FUNCTION,
  OPEN_CL_KERNEL,
  SWIFT,
  SWIFT_ASYNC,
  PRESERVE_MOST,
  PRESERVE_ALL,
  A_ARCH64_VECTOR_CALL,
  A_ARCH64_SVEPCS,
  AMDGPU_KERNEL_CALL,
  M68K_RTD,
};

inline static const char *EnumerationName(CallingConv) {
  return "CallingConv";
}

inline static constexpr unsigned NumEnumerators(CallingConv) {
  return 22;
}

MX_EXPORT const char *EnumeratorName(CallingConv);

} // namespace mx
