/*
 * io_k8s_api_core_v1_load_balancer_ingress.h
 *
 * LoadBalancerIngress represents the status of a load-balancer ingress point: traffic intended for the service should be sent to an ingress point.
 */

#ifndef _io_k8s_api_core_v1_load_balancer_ingress_H_
#define _io_k8s_api_core_v1_load_balancer_ingress_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_load_balancer_ingress_t io_k8s_api_core_v1_load_balancer_ingress_t;

#include "io_k8s_api_core_v1_port_status.h"



typedef struct io_k8s_api_core_v1_load_balancer_ingress_t {
    char *hostname; // string
    char *ip; // string
    list_t *ports; //nonprimitive container

} io_k8s_api_core_v1_load_balancer_ingress_t;

io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress_create(
    char *hostname,
    char *ip,
    list_t *ports
);

void io_k8s_api_core_v1_load_balancer_ingress_free(io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress);

io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress_parseFromJSON(cJSON *io_k8s_api_core_v1_load_balancer_ingressJSON);

cJSON *io_k8s_api_core_v1_load_balancer_ingress_convertToJSON(io_k8s_api_core_v1_load_balancer_ingress_t *io_k8s_api_core_v1_load_balancer_ingress);

#endif /* _io_k8s_api_core_v1_load_balancer_ingress_H_ */

