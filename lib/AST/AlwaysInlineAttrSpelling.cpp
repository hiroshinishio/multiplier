// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/AlwaysInlineAttrSpelling.h>
namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(AlwaysInlineAttrSpelling e) {
  switch (e) {
    case AlwaysInlineAttrSpelling::GNU_ALWAYS_INLINE: return "GNU_ALWAYS_INLINE";
    case AlwaysInlineAttrSpelling::CXX11_GNU_ALWAYS_INLINE: return "CXX11_GNU_ALWAYS_INLINE";
    case AlwaysInlineAttrSpelling::C23_GNU_ALWAYS_INLINE: return "C23_GNU_ALWAYS_INLINE";
    case AlwaysInlineAttrSpelling::CXX11_CLANG_ALWAYS_INLINE: return "CXX11_CLANG_ALWAYS_INLINE";
    case AlwaysInlineAttrSpelling::C23_CLANG_ALWAYS_INLINE: return "C23_CLANG_ALWAYS_INLINE";
    case AlwaysInlineAttrSpelling::KEYWORD_FORCEINLINE: return "KEYWORD_FORCEINLINE";
    case AlwaysInlineAttrSpelling::SPELLING_NOT_CALCULATED: return "SPELLING_NOT_CALCULATED";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
