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
enum class MSVtorDispMode : unsigned char {
  NEVER,
  FOR_VIRTUAL_BASE_OVERRIDE,
  FOR_VF_TABLE,
};

inline static const char *EnumerationName(MSVtorDispMode) {
  return "MSVtorDispMode";
}

inline static constexpr unsigned NumEnumerators(MSVtorDispMode) {
  return 3;
}

MX_EXPORT const char *EnumeratorName(MSVtorDispMode);

} // namespace mx
