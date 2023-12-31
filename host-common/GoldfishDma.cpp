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

#include "aemu/base/files/Stream.h"

#include "host-common/GoldfishDma.h"
#include "host-common/DmaMap.h"

#include "host-common/address_space_device.h"
#include "host-common/android_pipe_host.h"

static void android_goldfish_dma_add_buffer(void* pipe, uint64_t guest_paddr, uint64_t sz) {
    android::DmaMap::get()->addBuffer(pipe, guest_paddr, sz);
}

static void android_goldfish_dma_remove_buffer(uint64_t guest_paddr) {
    android::DmaMap::get()->removeBuffer(guest_paddr);
}

static void* android_goldfish_dma_get_host_addr(uint64_t guest_paddr) {
    void *host_ptr;

    host_ptr = get_address_space_device_control_ops()->get_host_ptr(guest_paddr);
    if (host_ptr) {
        return host_ptr;
    }

    return android::DmaMap::get()->getHostAddr(guest_paddr);
}

static void android_goldfish_dma_invalidate_host_mappings() {
    android::DmaMap::get()->invalidateHostMappings();
}

static void android_goldfish_dma_unlock(uint64_t guest_paddr) {
    void* hwpipe = android::DmaMap::get()->getPipeInstance(guest_paddr);

    if (hwpipe) {
        /*
         * DMA regions allocated with AddressSpaceHostMemoryAllocatorContext
         * don't have hwpipe associated with them.
         */
        android_pipe_host_signal_wake(hwpipe, PIPE_WAKE_UNLOCK_DMA);
    }
}

static void android_goldfish_dma_reset_host_mappings() {
    android::DmaMap::get()->resetHostMappings();
}

static void android_goldfish_dma_save_mappings(android::base::Stream* stream) {
    android::DmaMap::get()->save(stream);
}

static void android_goldfish_dma_load_mappings(android::base::Stream* stream) {
    android::DmaMap::get()->load(stream);
}

const GoldfishDmaOps android_goldfish_dma_ops = {
    .add_buffer = android_goldfish_dma_add_buffer,
    .remove_buffer = android_goldfish_dma_remove_buffer,
    .get_host_addr = android_goldfish_dma_get_host_addr,
    .invalidate_host_mappings = android_goldfish_dma_invalidate_host_mappings,
    .unlock = android_goldfish_dma_unlock,
    .reset_host_mappings = android_goldfish_dma_reset_host_mappings,
    .save_mappings = android_goldfish_dma_save_mappings,
    .load_mappings = android_goldfish_dma_load_mappings,
};
