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
enum class BuiltinTypeKind : unsigned short {
  OCL_IMAGE_1D_RO,
  OCL_IMAGE_1D_ARRAY_RO,
  OCL_IMAGE_1D_BUFFER_RO,
  OCL_IMAGE_2D_RO,
  OCL_IMAGE_2D_ARRAY_RO,
  OCL_IMAGE_2D_DEPTH_RO,
  OCL_IMAGE_2D_ARRAY_DEPTH_RO,
  OCL_IMAGE_2D_MSAARO,
  OCL_IMAGE_2D_ARRAY_MSAARO,
  OCL_IMAGE_2D_MSAA_DEPTH_RO,
  OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_RO,
  OCL_IMAGE_3D_RO,
  OCL_IMAGE_1D_WO,
  OCL_IMAGE_1D_ARRAY_WO,
  OCL_IMAGE_1D_BUFFER_WO,
  OCL_IMAGE_2D_WO,
  OCL_IMAGE_2D_ARRAY_WO,
  OCL_IMAGE_2D_DEPTH_WO,
  OCL_IMAGE_2D_ARRAY_DEPTH_WO,
  OCL_IMAGE_2D_MSAAWO,
  OCL_IMAGE_2D_ARRAY_MSAAWO,
  OCL_IMAGE_2D_MSAA_DEPTH_WO,
  OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_WO,
  OCL_IMAGE_3D_WO,
  OCL_IMAGE_1D_RW,
  OCL_IMAGE_1D_ARRAY_RW,
  OCL_IMAGE_1D_BUFFER_RW,
  OCL_IMAGE_2D_RW,
  OCL_IMAGE_2D_ARRAY_RW,
  OCL_IMAGE_2D_DEPTH_RW,
  OCL_IMAGE_2D_ARRAY_DEPTH_RW,
  OCL_IMAGE_2D_MSAARW,
  OCL_IMAGE_2D_ARRAY_MSAARW,
  OCL_IMAGE_2D_MSAA_DEPTH_RW,
  OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_RW,
  OCL_IMAGE_3D_RW,
  OCL_INTEL_SUBGROUP_AVC_MCE_PAYLOAD,
  OCL_INTEL_SUBGROUP_AVC_IME_PAYLOAD,
  OCL_INTEL_SUBGROUP_AVC_REF_PAYLOAD,
  OCL_INTEL_SUBGROUP_AVC_SIC_PAYLOAD,
  OCL_INTEL_SUBGROUP_AVC_MCE_RESULT,
  OCL_INTEL_SUBGROUP_AVC_IME_RESULT,
  OCL_INTEL_SUBGROUP_AVC_REF_RESULT,
  OCL_INTEL_SUBGROUP_AVC_SIC_RESULT,
  OCL_INTEL_SUBGROUP_AVC_IME_RESULT_SINGLE_REFERENCE_STREAMOUT,
  OCL_INTEL_SUBGROUP_AVC_IME_RESULT_DUAL_REFERENCE_STREAMOUT,
  OCL_INTEL_SUBGROUP_AVC_IME_SINGLE_REFERENCE_STREAMIN,
  OCL_INTEL_SUBGROUP_AVC_IME_DUAL_REFERENCE_STREAMIN,
  SVE_INT8,
  SVE_INT16,
  SVE_INT32,
  SVE_INT64,
  SVE_UINT8,
  SVE_UINT16,
  SVE_UINT32,
  SVE_UINT64,
  SVE_FLOAT16,
  SVE_FLOAT32,
  SVE_FLOAT64,
  SVE_B_FLOAT16,
  SVE_INT8X2,
  SVE_INT16X2,
  SVE_INT32X2,
  SVE_INT64X2,
  SVE_UINT8X2,
  SVE_UINT16X2,
  SVE_UINT32X2,
  SVE_UINT64X2,
  SVE_FLOAT16X2,
  SVE_FLOAT32X2,
  SVE_FLOAT64X2,
  SVE_B_FLOAT16X2,
  SVE_INT8X3,
  SVE_INT16X3,
  SVE_INT32X3,
  SVE_INT64X3,
  SVE_UINT8X3,
  SVE_UINT16X3,
  SVE_UINT32X3,
  SVE_UINT64X3,
  SVE_FLOAT16X3,
  SVE_FLOAT32X3,
  SVE_FLOAT64X3,
  SVE_B_FLOAT16X3,
  SVE_INT8X4,
  SVE_INT16X4,
  SVE_INT32X4,
  SVE_INT64X4,
  SVE_UINT8X4,
  SVE_UINT16X4,
  SVE_UINT32X4,
  SVE_UINT64X4,
  SVE_FLOAT16X4,
  SVE_FLOAT32X4,
  SVE_FLOAT64X4,
  SVE_B_FLOAT16X4,
  SVE_BOOLEAN,
  SVE_BOOLX2,
  SVE_BOOLX4,
  SVE_COUNT,
  VECTOR_QUAD,
  VECTOR_PAIR,
  RVV_INT8MF8,
  RVV_INT8MF4,
  RVV_INT8MF2,
  RVV_INT8M1,
  RVV_INT8M2,
  RVV_INT8M4,
  RVV_INT8M8,
  RVV_UINT8MF8,
  RVV_UINT8MF4,
  RVV_UINT8MF2,
  RVV_UINT8M1,
  RVV_UINT8M2,
  RVV_UINT8M4,
  RVV_UINT8M8,
  RVV_INT16MF4,
  RVV_INT16MF2,
  RVV_INT16M1,
  RVV_INT16M2,
  RVV_INT16M4,
  RVV_INT16M8,
  RVV_UINT16MF4,
  RVV_UINT16MF2,
  RVV_UINT16M1,
  RVV_UINT16M2,
  RVV_UINT16M4,
  RVV_UINT16M8,
  RVV_INT32MF2,
  RVV_INT32M1,
  RVV_INT32M2,
  RVV_INT32M4,
  RVV_INT32M8,
  RVV_UINT32MF2,
  RVV_UINT32M1,
  RVV_UINT32M2,
  RVV_UINT32M4,
  RVV_UINT32M8,
  RVV_INT64M1,
  RVV_INT64M2,
  RVV_INT64M4,
  RVV_INT64M8,
  RVV_UINT64M1,
  RVV_UINT64M2,
  RVV_UINT64M4,
  RVV_UINT64M8,
  RVV_FLOAT16MF4,
  RVV_FLOAT16MF2,
  RVV_FLOAT16M1,
  RVV_FLOAT16M2,
  RVV_FLOAT16M4,
  RVV_FLOAT16M8,
  RVV_B_FLOAT16MF4,
  RVV_B_FLOAT16MF2,
  RVV_B_FLOAT16M1,
  RVV_B_FLOAT16M2,
  RVV_B_FLOAT16M4,
  RVV_B_FLOAT16M8,
  RVV_FLOAT32MF2,
  RVV_FLOAT32M1,
  RVV_FLOAT32M2,
  RVV_FLOAT32M4,
  RVV_FLOAT32M8,
  RVV_FLOAT64M1,
  RVV_FLOAT64M2,
  RVV_FLOAT64M4,
  RVV_FLOAT64M8,
  RVV_BOOL1,
  RVV_BOOL2,
  RVV_BOOL4,
  RVV_BOOL8,
  RVV_BOOL16,
  RVV_BOOL32,
  RVV_BOOL64,
  RVV_INT8MF8X2,
  RVV_INT8MF8X3,
  RVV_INT8MF8X4,
  RVV_INT8MF8X5,
  RVV_INT8MF8X6,
  RVV_INT8MF8X7,
  RVV_INT8MF8X8,
  RVV_INT8MF4X2,
  RVV_INT8MF4X3,
  RVV_INT8MF4X4,
  RVV_INT8MF4X5,
  RVV_INT8MF4X6,
  RVV_INT8MF4X7,
  RVV_INT8MF4X8,
  RVV_INT8MF2X2,
  RVV_INT8MF2X3,
  RVV_INT8MF2X4,
  RVV_INT8MF2X5,
  RVV_INT8MF2X6,
  RVV_INT8MF2X7,
  RVV_INT8MF2X8,
  RVV_INT8M1X2,
  RVV_INT8M1X3,
  RVV_INT8M1X4,
  RVV_INT8M1X5,
  RVV_INT8M1X6,
  RVV_INT8M1X7,
  RVV_INT8M1X8,
  RVV_INT8M2X2,
  RVV_INT8M2X3,
  RVV_INT8M2X4,
  RVV_INT8M4X2,
  RVV_UINT8MF8X2,
  RVV_UINT8MF8X3,
  RVV_UINT8MF8X4,
  RVV_UINT8MF8X5,
  RVV_UINT8MF8X6,
  RVV_UINT8MF8X7,
  RVV_UINT8MF8X8,
  RVV_UINT8MF4X2,
  RVV_UINT8MF4X3,
  RVV_UINT8MF4X4,
  RVV_UINT8MF4X5,
  RVV_UINT8MF4X6,
  RVV_UINT8MF4X7,
  RVV_UINT8MF4X8,
  RVV_UINT8MF2X2,
  RVV_UINT8MF2X3,
  RVV_UINT8MF2X4,
  RVV_UINT8MF2X5,
  RVV_UINT8MF2X6,
  RVV_UINT8MF2X7,
  RVV_UINT8MF2X8,
  RVV_UINT8M1X2,
  RVV_UINT8M1X3,
  RVV_UINT8M1X4,
  RVV_UINT8M1X5,
  RVV_UINT8M1X6,
  RVV_UINT8M1X7,
  RVV_UINT8M1X8,
  RVV_UINT8M2X2,
  RVV_UINT8M2X3,
  RVV_UINT8M2X4,
  RVV_UINT8M4X2,
  RVV_INT16MF4X2,
  RVV_INT16MF4X3,
  RVV_INT16MF4X4,
  RVV_INT16MF4X5,
  RVV_INT16MF4X6,
  RVV_INT16MF4X7,
  RVV_INT16MF4X8,
  RVV_INT16MF2X2,
  RVV_INT16MF2X3,
  RVV_INT16MF2X4,
  RVV_INT16MF2X5,
  RVV_INT16MF2X6,
  RVV_INT16MF2X7,
  RVV_INT16MF2X8,
  RVV_INT16M1X2,
  RVV_INT16M1X3,
  RVV_INT16M1X4,
  RVV_INT16M1X5,
  RVV_INT16M1X6,
  RVV_INT16M1X7,
  RVV_INT16M1X8,
  RVV_INT16M2X2,
  RVV_INT16M2X3,
  RVV_INT16M2X4,
  RVV_INT16M4X2,
  RVV_UINT16MF4X2,
  RVV_UINT16MF4X3,
  RVV_UINT16MF4X4,
  RVV_UINT16MF4X5,
  RVV_UINT16MF4X6,
  RVV_UINT16MF4X7,
  RVV_UINT16MF4X8,
  RVV_UINT16MF2X2,
  RVV_UINT16MF2X3,
  RVV_UINT16MF2X4,
  RVV_UINT16MF2X5,
  RVV_UINT16MF2X6,
  RVV_UINT16MF2X7,
  RVV_UINT16MF2X8,
  RVV_UINT16M1X2,
  RVV_UINT16M1X3,
  RVV_UINT16M1X4,
  RVV_UINT16M1X5,
  RVV_UINT16M1X6,
  RVV_UINT16M1X7,
  RVV_UINT16M1X8,
  RVV_UINT16M2X2,
  RVV_UINT16M2X3,
  RVV_UINT16M2X4,
  RVV_UINT16M4X2,
  RVV_INT32MF2X2,
  RVV_INT32MF2X3,
  RVV_INT32MF2X4,
  RVV_INT32MF2X5,
  RVV_INT32MF2X6,
  RVV_INT32MF2X7,
  RVV_INT32MF2X8,
  RVV_INT32M1X2,
  RVV_INT32M1X3,
  RVV_INT32M1X4,
  RVV_INT32M1X5,
  RVV_INT32M1X6,
  RVV_INT32M1X7,
  RVV_INT32M1X8,
  RVV_INT32M2X2,
  RVV_INT32M2X3,
  RVV_INT32M2X4,
  RVV_INT32M4X2,
  RVV_UINT32MF2X2,
  RVV_UINT32MF2X3,
  RVV_UINT32MF2X4,
  RVV_UINT32MF2X5,
  RVV_UINT32MF2X6,
  RVV_UINT32MF2X7,
  RVV_UINT32MF2X8,
  RVV_UINT32M1X2,
  RVV_UINT32M1X3,
  RVV_UINT32M1X4,
  RVV_UINT32M1X5,
  RVV_UINT32M1X6,
  RVV_UINT32M1X7,
  RVV_UINT32M1X8,
  RVV_UINT32M2X2,
  RVV_UINT32M2X3,
  RVV_UINT32M2X4,
  RVV_UINT32M4X2,
  RVV_INT64M1X2,
  RVV_INT64M1X3,
  RVV_INT64M1X4,
  RVV_INT64M1X5,
  RVV_INT64M1X6,
  RVV_INT64M1X7,
  RVV_INT64M1X8,
  RVV_INT64M2X2,
  RVV_INT64M2X3,
  RVV_INT64M2X4,
  RVV_INT64M4X2,
  RVV_UINT64M1X2,
  RVV_UINT64M1X3,
  RVV_UINT64M1X4,
  RVV_UINT64M1X5,
  RVV_UINT64M1X6,
  RVV_UINT64M1X7,
  RVV_UINT64M1X8,
  RVV_UINT64M2X2,
  RVV_UINT64M2X3,
  RVV_UINT64M2X4,
  RVV_UINT64M4X2,
  RVV_FLOAT16MF4X2,
  RVV_FLOAT16MF4X3,
  RVV_FLOAT16MF4X4,
  RVV_FLOAT16MF4X5,
  RVV_FLOAT16MF4X6,
  RVV_FLOAT16MF4X7,
  RVV_FLOAT16MF4X8,
  RVV_FLOAT16MF2X2,
  RVV_FLOAT16MF2X3,
  RVV_FLOAT16MF2X4,
  RVV_FLOAT16MF2X5,
  RVV_FLOAT16MF2X6,
  RVV_FLOAT16MF2X7,
  RVV_FLOAT16MF2X8,
  RVV_FLOAT16M1X2,
  RVV_FLOAT16M1X3,
  RVV_FLOAT16M1X4,
  RVV_FLOAT16M1X5,
  RVV_FLOAT16M1X6,
  RVV_FLOAT16M1X7,
  RVV_FLOAT16M1X8,
  RVV_FLOAT16M2X2,
  RVV_FLOAT16M2X3,
  RVV_FLOAT16M2X4,
  RVV_FLOAT16M4X2,
  RVV_FLOAT32MF2X2,
  RVV_FLOAT32MF2X3,
  RVV_FLOAT32MF2X4,
  RVV_FLOAT32MF2X5,
  RVV_FLOAT32MF2X6,
  RVV_FLOAT32MF2X7,
  RVV_FLOAT32MF2X8,
  RVV_FLOAT32M1X2,
  RVV_FLOAT32M1X3,
  RVV_FLOAT32M1X4,
  RVV_FLOAT32M1X5,
  RVV_FLOAT32M1X6,
  RVV_FLOAT32M1X7,
  RVV_FLOAT32M1X8,
  RVV_FLOAT32M2X2,
  RVV_FLOAT32M2X3,
  RVV_FLOAT32M2X4,
  RVV_FLOAT32M4X2,
  RVV_FLOAT64M1X2,
  RVV_FLOAT64M1X3,
  RVV_FLOAT64M1X4,
  RVV_FLOAT64M1X5,
  RVV_FLOAT64M1X6,
  RVV_FLOAT64M1X7,
  RVV_FLOAT64M1X8,
  RVV_FLOAT64M2X2,
  RVV_FLOAT64M2X3,
  RVV_FLOAT64M2X4,
  RVV_FLOAT64M4X2,
  RVV_B_FLOAT16MF4X2,
  RVV_B_FLOAT16MF4X3,
  RVV_B_FLOAT16MF4X4,
  RVV_B_FLOAT16MF4X5,
  RVV_B_FLOAT16MF4X6,
  RVV_B_FLOAT16MF4X7,
  RVV_B_FLOAT16MF4X8,
  RVV_B_FLOAT16MF2X2,
  RVV_B_FLOAT16MF2X3,
  RVV_B_FLOAT16MF2X4,
  RVV_B_FLOAT16MF2X5,
  RVV_B_FLOAT16MF2X6,
  RVV_B_FLOAT16MF2X7,
  RVV_B_FLOAT16MF2X8,
  RVV_B_FLOAT16M1X2,
  RVV_B_FLOAT16M1X3,
  RVV_B_FLOAT16M1X4,
  RVV_B_FLOAT16M1X5,
  RVV_B_FLOAT16M1X6,
  RVV_B_FLOAT16M1X7,
  RVV_B_FLOAT16M1X8,
  RVV_B_FLOAT16M2X2,
  RVV_B_FLOAT16M2X3,
  RVV_B_FLOAT16M2X4,
  RVV_B_FLOAT16M4X2,
  WASM_EXTERN_REFERENCE,
  VOID,
  BOOLEAN,
  CHARACTER_U,
  U_CHAR,
  W_CHAR_U,
  CHAR8,
  CHAR16,
  CHAR32,
  U_SHORT,
  U_INT,
  U_LONG,
  U_LONG_LONG,
  U_INT128,
  CHARACTER_S,
  S_CHAR,
  W_CHAR_S,
  SHORT,
  INT,
  LONG,
  LONG_LONG,
  INT128,
  SHORT_ACCUM,
  ACCUM,
  LONG_ACCUM,
  U_SHORT_ACCUM,
  U_ACCUM,
  U_LONG_ACCUM,
  SHORT_FRACT,
  FRACT,
  LONG_FRACT,
  U_SHORT_FRACT,
  U_FRACT,
  U_LONG_FRACT,
  SAT_SHORT_ACCUM,
  SAT_ACCUM,
  SAT_LONG_ACCUM,
  SAT_U_SHORT_ACCUM,
  SAT_U_ACCUM,
  SAT_U_LONG_ACCUM,
  SAT_SHORT_FRACT,
  SAT_FRACT,
  SAT_LONG_FRACT,
  SAT_U_SHORT_FRACT,
  SAT_U_FRACT,
  SAT_U_LONG_FRACT,
  HALF,
  FLOAT,
  DOUBLE,
  LONG_DOUBLE,
  FLOAT16,
  B_FLOAT16,
  FLOAT128,
  IBM128,
  NULL_POINTER,
  OBJ_C_ID,
  OBJ_C_CLASS,
  OBJ_C_SEL,
  OCL_SAMPLER,
  OCL_EVENT,
  OCL_CLK_EVENT,
  OCL_QUEUE,
  OCL_RESERVE_ID,
  DEPENDENT,
  OVERLOAD,
  BOUND_MEMBER,
  PSEUDO_OBJECT,
  UNKNOWN_ANY,
  BUILTIN_FN,
  ARC_UNBRIDGED_CAST,
  INCOMPLETE_MATRIX_INDEX,
  OMP_ARRAY_SECTION,
  OMP_ARRAY_SHAPING,
  OMP_ITERATOR,
  UNRESOLVED,
};

inline static const char *EnumerationName(BuiltinTypeKind) {
  return "BuiltinTypeKind";
}

inline static constexpr unsigned NumEnumerators(BuiltinTypeKind) {
  return 500;
}

MX_EXPORT const char *EnumeratorName(BuiltinTypeKind);

} // namespace mx
