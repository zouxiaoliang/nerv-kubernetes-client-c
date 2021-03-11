/*
 * io_k8s_api_core_v1_pod_readiness_gate.h
 *
 * PodReadinessGate contains the reference to a pod condition
 */

#ifndef _io_k8s_api_core_v1_pod_readiness_gate_H_
#define _io_k8s_api_core_v1_pod_readiness_gate_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_readiness_gate_t io_k8s_api_core_v1_pod_readiness_gate_t;




typedef struct io_k8s_api_core_v1_pod_readiness_gate_t {
    char *condition_type; // string

} io_k8s_api_core_v1_pod_readiness_gate_t;

io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate_create(
    char *condition_type
);

void io_k8s_api_core_v1_pod_readiness_gate_free(io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate);

io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_readiness_gateJSON);

cJSON *io_k8s_api_core_v1_pod_readiness_gate_convertToJSON(io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate);

#endif /* _io_k8s_api_core_v1_pod_readiness_gate_H_ */

