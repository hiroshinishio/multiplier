/*
  Copyright (c) 2021-present, Trail of Bits, Inc.
  All rights reserved.

  This source code is licensed in accordance with the terms specified in
  the LICENSE file found in the root directory of this source tree.
*/

#include "translationunitindex.h"

#include <multiplier/widgets/itranslationunitindex.h>

namespace multiplier {

ITranslationUnitIndex *ITranslationUnitIndex::create(QWidget *parent) {
  return new (std::nothrow) TranslationUnitIndex(parent);
}

} // namespace multiplier
