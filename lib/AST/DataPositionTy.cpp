// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/DataPositionTy.h>
namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(DataPositionTy e) {
  switch (e) {
    case DataPositionTy::POSX: return "POSX";
    case DataPositionTy::POSV: return "POSV";
    case DataPositionTy::POSE: return "POSE";
    case DataPositionTy::POS_UPDATE_EXPRESSION: return "POS_UPDATE_EXPRESSION";
    case DataPositionTy::POSD: return "POSD";
    case DataPositionTy::POS_CONDITION: return "POS_CONDITION";
    case DataPositionTy::POSR: return "POSR";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
