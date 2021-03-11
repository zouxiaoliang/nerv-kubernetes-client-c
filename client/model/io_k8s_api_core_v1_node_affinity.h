/*
 * io_k8s_api_core_v1_node_affinity.h
 *
 * Node affinity is a group of node affinity scheduling rules.
 */

#ifndef _io_k8s_api_core_v1_node_affinity_H_
#define _io_k8s_api_core_v1_node_affinity_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_affinity_t io_k8s_api_core_v1_node_affinity_t;

#include "io_k8s_api_core_v1_node_selector.h"
#include "io_k8s_api_core_v1_preferred_scheduling_term.h"



typedef struct io_k8s_api_core_v1_node_affinity_t {
    list_t *preferred_during_scheduling_ignored_during_execution; //nonprimitive container
    struct io_k8s_api_core_v1_node_selector_t *required_during_scheduling_ignored_during_execution; //model

} io_k8s_api_core_v1_node_affinity_t;

io_k8s_api_core_v1_node_affinity_t *io_k8s_api_core_v1_node_affinity_create(
    list_t *preferred_during_scheduling_ignored_during_execution,
    io_k8s_api_core_v1_node_selector_t *required_during_scheduling_ignored_during_execution
);

void io_k8s_api_core_v1_node_affinity_free(io_k8s_api_core_v1_node_affinity_t *io_k8s_api_core_v1_node_affinity);

io_k8s_api_core_v1_node_affinity_t *io_k8s_api_core_v1_node_affinity_parseFromJSON(cJSON *io_k8s_api_core_v1_node_affinityJSON);

cJSON *io_k8s_api_core_v1_node_affinity_convertToJSON(io_k8s_api_core_v1_node_affinity_t *io_k8s_api_core_v1_node_affinity);

#endif /* _io_k8s_api_core_v1_node_affinity_H_ */

