/*
 * io_k8s_api_discovery_v1beta1_endpoint_conditions.h
 *
 * EndpointConditions represents the current condition of an endpoint.
 */

#ifndef _io_k8s_api_discovery_v1beta1_endpoint_conditions_H_
#define _io_k8s_api_discovery_v1beta1_endpoint_conditions_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_discovery_v1beta1_endpoint_conditions_t io_k8s_api_discovery_v1beta1_endpoint_conditions_t;




typedef struct io_k8s_api_discovery_v1beta1_endpoint_conditions_t {
    int ready; //boolean
    int serving; //boolean
    int terminating; //boolean

} io_k8s_api_discovery_v1beta1_endpoint_conditions_t;

io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions_create(
    int ready,
    int serving,
    int terminating
);

void io_k8s_api_discovery_v1beta1_endpoint_conditions_free(io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions);

io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions_parseFromJSON(cJSON *io_k8s_api_discovery_v1beta1_endpoint_conditionsJSON);

cJSON *io_k8s_api_discovery_v1beta1_endpoint_conditions_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions);

#endif /* _io_k8s_api_discovery_v1beta1_endpoint_conditions_H_ */

