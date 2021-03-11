/*
 * io_k8s_api_core_v1_load_balancer_status.h
 *
 * LoadBalancerStatus represents the status of a load-balancer.
 */

#ifndef _io_k8s_api_core_v1_load_balancer_status_H_
#define _io_k8s_api_core_v1_load_balancer_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_load_balancer_status_t io_k8s_api_core_v1_load_balancer_status_t;

#include "io_k8s_api_core_v1_load_balancer_ingress.h"



typedef struct io_k8s_api_core_v1_load_balancer_status_t {
    list_t *ingress; //nonprimitive container

} io_k8s_api_core_v1_load_balancer_status_t;

io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status_create(
    list_t *ingress
);

void io_k8s_api_core_v1_load_balancer_status_free(io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status);

io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status_parseFromJSON(cJSON *io_k8s_api_core_v1_load_balancer_statusJSON);

cJSON *io_k8s_api_core_v1_load_balancer_status_convertToJSON(io_k8s_api_core_v1_load_balancer_status_t *io_k8s_api_core_v1_load_balancer_status);

#endif /* _io_k8s_api_core_v1_load_balancer_status_H_ */

