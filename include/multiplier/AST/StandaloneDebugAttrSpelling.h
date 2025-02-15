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
enum class StandaloneDebugAttrSpelling : unsigned char {
  GNU_STANDALONE_DEBUG,
  CXX11_CLANG_STANDALONE_DEBUG,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(StandaloneDebugAttrSpelling) {
  return "StandaloneDebugAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(StandaloneDebugAttrSpelling) {
  return 3;
}

MX_EXPORT const char *EnumeratorName(StandaloneDebugAttrSpelling);

} // namespace mx
