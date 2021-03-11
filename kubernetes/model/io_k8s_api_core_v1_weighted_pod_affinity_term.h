/*
 * io_k8s_api_core_v1_weighted_pod_affinity_term.h
 *
 * The weights of all of the matched WeightedPodAffinityTerm fields are added per-node to find the most preferred node(s)
 */

#ifndef _io_k8s_api_core_v1_weighted_pod_affinity_term_H_
#define _io_k8s_api_core_v1_weighted_pod_affinity_term_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_weighted_pod_affinity_term_t io_k8s_api_core_v1_weighted_pod_affinity_term_t;

#include "io_k8s_api_core_v1_pod_affinity_term.h"



typedef struct io_k8s_api_core_v1_weighted_pod_affinity_term_t {
    struct io_k8s_api_core_v1_pod_affinity_term_t *pod_affinity_term; //model
    int weight; //numeric

} io_k8s_api_core_v1_weighted_pod_affinity_term_t;

io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term_create(
    io_k8s_api_core_v1_pod_affinity_term_t *pod_affinity_term,
    int weight
);

void io_k8s_api_core_v1_weighted_pod_affinity_term_free(io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term);

io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term_parseFromJSON(cJSON *io_k8s_api_core_v1_weighted_pod_affinity_termJSON);

cJSON *io_k8s_api_core_v1_weighted_pod_affinity_term_convertToJSON(io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term);

#endif /* _io_k8s_api_core_v1_weighted_pod_affinity_term_H_ */

