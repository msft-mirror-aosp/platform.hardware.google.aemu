/*
* Copyright (C) 2016 The Android Open Source Project
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "crash_reporter.h"

#include <stdio.h>
#include <inttypes.h>

static void doCrash() {
    *(uint32_t*)(1234) = 5;
}

EMUGL_COMMON_API void emugl_crash_reporter(const char* message) {
    fprintf(stderr, "%s: FATAL: [%s]\n", __func__, message);
    doCrash();
}