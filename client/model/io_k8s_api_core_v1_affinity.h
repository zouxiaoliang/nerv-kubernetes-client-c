/*
 * io_k8s_api_core_v1_affinity.h
 *
 * Affinity is a group of affinity scheduling rules.
 */

#ifndef _io_k8s_api_core_v1_affinity_H_
#define _io_k8s_api_core_v1_affinity_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_affinity_t io_k8s_api_core_v1_affinity_t;

#include "io_k8s_api_core_v1_node_affinity.h"
#include "io_k8s_api_core_v1_pod_affinity.h"
#include "io_k8s_api_core_v1_pod_anti_affinity.h"



typedef struct io_k8s_api_core_v1_affinity_t {
    struct io_k8s_api_core_v1_node_affinity_t *node_affinity; //model
    struct io_k8s_api_core_v1_pod_affinity_t *pod_affinity; //model
    struct io_k8s_api_core_v1_pod_anti_affinity_t *pod_anti_affinity; //model

} io_k8s_api_core_v1_affinity_t;

io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity_create(
    io_k8s_api_core_v1_node_affinity_t *node_affinity,
    io_k8s_api_core_v1_pod_affinity_t *pod_affinity,
    io_k8s_api_core_v1_pod_anti_affinity_t *pod_anti_affinity
);

void io_k8s_api_core_v1_affinity_free(io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity);

io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity_parseFromJSON(cJSON *io_k8s_api_core_v1_affinityJSON);

cJSON *io_k8s_api_core_v1_affinity_convertToJSON(io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity);

#endif /* _io_k8s_api_core_v1_affinity_H_ */

