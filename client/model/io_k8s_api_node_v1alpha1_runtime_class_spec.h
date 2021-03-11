/*
 * io_k8s_api_node_v1alpha1_runtime_class_spec.h
 *
 * RuntimeClassSpec is a specification of a RuntimeClass. It contains parameters that are required to describe the RuntimeClass to the Container Runtime Interface (CRI) implementation, as well as any other components that need to understand how the pod will be run. The RuntimeClassSpec is immutable.
 */

#ifndef _io_k8s_api_node_v1alpha1_runtime_class_spec_H_
#define _io_k8s_api_node_v1alpha1_runtime_class_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_node_v1alpha1_runtime_class_spec_t io_k8s_api_node_v1alpha1_runtime_class_spec_t;

#include "io_k8s_api_node_v1alpha1_overhead.h"
#include "io_k8s_api_node_v1alpha1_scheduling.h"



typedef struct io_k8s_api_node_v1alpha1_runtime_class_spec_t {
    struct io_k8s_api_node_v1alpha1_overhead_t *overhead; //model
    char *runtime_handler; // string
    struct io_k8s_api_node_v1alpha1_scheduling_t *scheduling; //model

} io_k8s_api_node_v1alpha1_runtime_class_spec_t;

io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec_create(
    io_k8s_api_node_v1alpha1_overhead_t *overhead,
    char *runtime_handler,
    io_k8s_api_node_v1alpha1_scheduling_t *scheduling
);

void io_k8s_api_node_v1alpha1_runtime_class_spec_free(io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec);

io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec_parseFromJSON(cJSON *io_k8s_api_node_v1alpha1_runtime_class_specJSON);

cJSON *io_k8s_api_node_v1alpha1_runtime_class_spec_convertToJSON(io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec);

#endif /* _io_k8s_api_node_v1alpha1_runtime_class_spec_H_ */

