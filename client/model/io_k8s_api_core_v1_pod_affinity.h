/*
 * io_k8s_api_core_v1_pod_affinity.h
 *
 * Pod affinity is a group of inter pod affinity scheduling rules.
 */

#ifndef _io_k8s_api_core_v1_pod_affinity_H_
#define _io_k8s_api_core_v1_pod_affinity_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_affinity_t io_k8s_api_core_v1_pod_affinity_t;

#include "io_k8s_api_core_v1_pod_affinity_term.h"
#include "io_k8s_api_core_v1_weighted_pod_affinity_term.h"



typedef struct io_k8s_api_core_v1_pod_affinity_t {
    list_t *preferred_during_scheduling_ignored_during_execution; //nonprimitive container
    list_t *required_during_scheduling_ignored_during_execution; //nonprimitive container

} io_k8s_api_core_v1_pod_affinity_t;

io_k8s_api_core_v1_pod_affinity_t *io_k8s_api_core_v1_pod_affinity_create(
    list_t *preferred_during_scheduling_ignored_during_execution,
    list_t *required_during_scheduling_ignored_during_execution
);

void io_k8s_api_core_v1_pod_affinity_free(io_k8s_api_core_v1_pod_affinity_t *io_k8s_api_core_v1_pod_affinity);

io_k8s_api_core_v1_pod_affinity_t *io_k8s_api_core_v1_pod_affinity_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_affinityJSON);

cJSON *io_k8s_api_core_v1_pod_affinity_convertToJSON(io_k8s_api_core_v1_pod_affinity_t *io_k8s_api_core_v1_pod_affinity);

#endif /* _io_k8s_api_core_v1_pod_affinity_H_ */

