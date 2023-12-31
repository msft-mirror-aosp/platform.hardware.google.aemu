// Copyright 2015 The Android Open Source Project
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

#pragma once
#include <functional>
#include <unordered_set>
namespace android {
namespace featurecontrol {
enum Feature {
#define FEATURE_CONTROL_ITEM(item, idx) item = idx,
#include "FeatureControlDefGuest.h"
#include "FeatureControlDefHost.h"
#undef FEATURE_CONTROL_ITEM
    Feature_unknown = -1
};

static auto allFeatures = []() {
    return std::unordered_set<Feature>({
#define FEATURE_CONTROL_ITEM(item, idx) item,
#include "FeatureControlDefGuest.h"
#include "FeatureControlDefHost.h"
#undef FEATURE_CONTROL_ITEM
});
};

}  // namespace featurecontrol
}  // namespace android
