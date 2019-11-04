//-----------------------------------------------------------------------------
// Copyright (C) 2019 merlokk
//
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// Proxmark3 RDV40 AID list library
//-----------------------------------------------------------------------------

#ifndef AIDSEARCH_H__
#define AIDSEARCH_H__

#include "common.h"

#include <stdint.h>
#include <stdbool.h>

#include <jansson.h>

int PrintAIDDescription(char *aid, bool verbose);
json_t *AIDSearchInit(json_t *root);
json_t *AIDSearchGetElm(json_t *root, int elmindx);
int AIDSearchFree();

#endif