/*
 * io_k8s_api_core_v1_node_spec.h
 *
 * NodeSpec describes the attributes that a node is created with.
 */

#ifndef _io_k8s_api_core_v1_node_spec_H_
#define _io_k8s_api_core_v1_node_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_spec_t io_k8s_api_core_v1_node_spec_t;

#include "io_k8s_api_core_v1_node_config_source.h"
#include "io_k8s_api_core_v1_taint.h"



typedef struct io_k8s_api_core_v1_node_spec_t {
    struct io_k8s_api_core_v1_node_config_source_t *config_source; //model
    char *external_id; // string
    char *pod_cidr; // string
    list_t *pod_cidrs; //primitive container
    char *provider_id; // string
    list_t *taints; //nonprimitive container
    int unschedulable; //boolean

} io_k8s_api_core_v1_node_spec_t;

io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec_create(
    io_k8s_api_core_v1_node_config_source_t *config_source,
    char *external_id,
    char *pod_cidr,
    list_t *pod_cidrs,
    char *provider_id,
    list_t *taints,
    int unschedulable
);

void io_k8s_api_core_v1_node_spec_free(io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec);

io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_node_specJSON);

cJSON *io_k8s_api_core_v1_node_spec_convertToJSON(io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec);

#endif /* _io_k8s_api_core_v1_node_spec_H_ */

