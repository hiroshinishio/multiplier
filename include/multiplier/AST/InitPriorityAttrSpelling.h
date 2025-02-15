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
enum class InitPriorityAttrSpelling : unsigned char {
  GNU_INITIALIZER_PRIORITY,
  CXX11_GNU_INITIALIZER_PRIORITY,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(InitPriorityAttrSpelling) {
  return "InitPriorityAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(InitPriorityAttrSpelling) {
  return 3;
}

MX_EXPORT const char *EnumeratorName(InitPriorityAttrSpelling);

} // namespace mx
