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
enum class TestTypestateAttrConsumedState : unsigned char {
  CONSUMED,
  UNCONSUMED,
};

inline static const char *EnumerationName(TestTypestateAttrConsumedState) {
  return "TestTypestateAttrConsumedState";
}

inline static constexpr unsigned NumEnumerators(TestTypestateAttrConsumedState) {
  return 2;
}

MX_EXPORT const char *EnumeratorName(TestTypestateAttrConsumedState);

} // namespace mx
