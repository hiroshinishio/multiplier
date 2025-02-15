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
enum class GetBuiltinTypeError : unsigned char {
  NONE,
  MISSING_TYPE,
  MISSING_STDIO,
  MISSING,
  MISSING_UCONTEXT,
};

inline static const char *EnumerationName(GetBuiltinTypeError) {
  return "GetBuiltinTypeError";
}

inline static constexpr unsigned NumEnumerators(GetBuiltinTypeError) {
  return 5;
}

MX_EXPORT const char *EnumeratorName(GetBuiltinTypeError);

} // namespace mx
