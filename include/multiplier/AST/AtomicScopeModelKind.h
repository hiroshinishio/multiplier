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
enum class AtomicScopeModelKind : unsigned char {
  NONE,
  OPEN_CL,
  HIP,
  GENERIC,
};

inline static const char *EnumerationName(AtomicScopeModelKind) {
  return "AtomicScopeModelKind";
}

inline static constexpr unsigned NumEnumerators(AtomicScopeModelKind) {
  return 4;
}

MX_EXPORT const char *EnumeratorName(AtomicScopeModelKind);

} // namespace mx
