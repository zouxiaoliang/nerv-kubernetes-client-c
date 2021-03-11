/*
 * io_k8s_api_discovery_v1beta1_endpoint.h
 *
 * Endpoint represents a single logical \&quot;backend\&quot; implementing a service.
 */

#ifndef _io_k8s_api_discovery_v1beta1_endpoint_H_
#define _io_k8s_api_discovery_v1beta1_endpoint_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_discovery_v1beta1_endpoint_t io_k8s_api_discovery_v1beta1_endpoint_t;

#include "io_k8s_api_core_v1_object_reference.h"
#include "io_k8s_api_discovery_v1beta1_endpoint_conditions.h"



typedef struct io_k8s_api_discovery_v1beta1_endpoint_t {
    list_t *addresses; //primitive container
    struct io_k8s_api_discovery_v1beta1_endpoint_conditions_t *conditions; //model
    char *hostname; // string
    char *node_name; // string
    struct io_k8s_api_core_v1_object_reference_t *target_ref; //model
    list_t* topology; //map

} io_k8s_api_discovery_v1beta1_endpoint_t;

io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint_create(
    list_t *addresses,
    io_k8s_api_discovery_v1beta1_endpoint_conditions_t *conditions,
    char *hostname,
    char *node_name,
    io_k8s_api_core_v1_object_reference_t *target_ref,
    list_t* topology
);

void io_k8s_api_discovery_v1beta1_endpoint_free(io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint);

io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint_parseFromJSON(cJSON *io_k8s_api_discovery_v1beta1_endpointJSON);

cJSON *io_k8s_api_discovery_v1beta1_endpoint_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_t *io_k8s_api_discovery_v1beta1_endpoint);

#endif /* _io_k8s_api_discovery_v1beta1_endpoint_H_ */

