// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "core/framework/kernel_registry.h"

namespace onnxruntime {
namespace contrib {
namespace cuda {

void RegisterCudaContribKernels(KernelRegistry& kernel_registry);

}  // namespace cuda
}  // namespace contrib
}  // namespace onnxruntime