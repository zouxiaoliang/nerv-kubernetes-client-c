/*
 * io_k8s_api_core_v1_node_address.h
 *
 * NodeAddress contains information for the node&#39;s address.
 */

#ifndef _io_k8s_api_core_v1_node_address_H_
#define _io_k8s_api_core_v1_node_address_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_address_t io_k8s_api_core_v1_node_address_t;




typedef struct io_k8s_api_core_v1_node_address_t {
    char *address; // string
    char *type; // string

} io_k8s_api_core_v1_node_address_t;

io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address_create(
    char *address,
    char *type
);

void io_k8s_api_core_v1_node_address_free(io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address);

io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address_parseFromJSON(cJSON *io_k8s_api_core_v1_node_addressJSON);

cJSON *io_k8s_api_core_v1_node_address_convertToJSON(io_k8s_api_core_v1_node_address_t *io_k8s_api_core_v1_node_address);

#endif /* _io_k8s_api_core_v1_node_address_H_ */

