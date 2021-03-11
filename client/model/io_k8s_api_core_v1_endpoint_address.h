/*
 * io_k8s_api_core_v1_endpoint_address.h
 *
 * EndpointAddress is a tuple that describes single IP address.
 */

#ifndef _io_k8s_api_core_v1_endpoint_address_H_
#define _io_k8s_api_core_v1_endpoint_address_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_endpoint_address_t io_k8s_api_core_v1_endpoint_address_t;

#include "io_k8s_api_core_v1_object_reference.h"



typedef struct io_k8s_api_core_v1_endpoint_address_t {
    char *hostname; // string
    char *ip; // string
    char *node_name; // string
    struct io_k8s_api_core_v1_object_reference_t *target_ref; //model

} io_k8s_api_core_v1_endpoint_address_t;

io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address_create(
    char *hostname,
    char *ip,
    char *node_name,
    io_k8s_api_core_v1_object_reference_t *target_ref
);

void io_k8s_api_core_v1_endpoint_address_free(io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address);

io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address_parseFromJSON(cJSON *io_k8s_api_core_v1_endpoint_addressJSON);

cJSON *io_k8s_api_core_v1_endpoint_address_convertToJSON(io_k8s_api_core_v1_endpoint_address_t *io_k8s_api_core_v1_endpoint_address);

#endif /* _io_k8s_api_core_v1_endpoint_address_H_ */

