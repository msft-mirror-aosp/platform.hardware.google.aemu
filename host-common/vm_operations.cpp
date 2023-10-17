// Copyright 2023 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "host-common/emugl_vm_operations.h"
#include "host-common/vm_operations.h"

namespace {

QAndroidVmOperations g_vm_operations;

}  // namespace

void set_emugl_vm_operations(const QAndroidVmOperations &vm_operations)
{
    g_vm_operations = vm_operations;
}

const QAndroidVmOperations &get_emugl_vm_operations()
{
    return g_vm_operations;
}
