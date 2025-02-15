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
enum class TextDiagnosticFormat : unsigned char {
  CLANG,
  MSVC,
  VI,
  SARIF,
};

inline static const char *EnumerationName(TextDiagnosticFormat) {
  return "TextDiagnosticFormat";
}

inline static constexpr unsigned NumEnumerators(TextDiagnosticFormat) {
  return 4;
}

MX_EXPORT const char *EnumeratorName(TextDiagnosticFormat);

} // namespace mx
