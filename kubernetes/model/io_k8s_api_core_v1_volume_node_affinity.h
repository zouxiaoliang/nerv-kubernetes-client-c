/*
 * io_k8s_api_core_v1_volume_node_affinity.h
 *
 * VolumeNodeAffinity defines constraints that limit what nodes this volume can be accessed from.
 */

#ifndef _io_k8s_api_core_v1_volume_node_affinity_H_
#define _io_k8s_api_core_v1_volume_node_affinity_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_volume_node_affinity_t io_k8s_api_core_v1_volume_node_affinity_t;

#include "io_k8s_api_core_v1_node_selector.h"



typedef struct io_k8s_api_core_v1_volume_node_affinity_t {
    struct io_k8s_api_core_v1_node_selector_t *required; //model

} io_k8s_api_core_v1_volume_node_affinity_t;

io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity_create(
    io_k8s_api_core_v1_node_selector_t *required
);

void io_k8s_api_core_v1_volume_node_affinity_free(io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity);

io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity_parseFromJSON(cJSON *io_k8s_api_core_v1_volume_node_affinityJSON);

cJSON *io_k8s_api_core_v1_volume_node_affinity_convertToJSON(io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity);

#endif /* _io_k8s_api_core_v1_volume_node_affinity_H_ */

