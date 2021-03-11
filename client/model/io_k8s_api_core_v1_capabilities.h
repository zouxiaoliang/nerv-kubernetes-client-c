/*
 * io_k8s_api_core_v1_capabilities.h
 *
 * Adds and removes POSIX capabilities from running containers.
 */

#ifndef _io_k8s_api_core_v1_capabilities_H_
#define _io_k8s_api_core_v1_capabilities_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_capabilities_t io_k8s_api_core_v1_capabilities_t;




typedef struct io_k8s_api_core_v1_capabilities_t {
    list_t *add; //primitive container
    list_t *drop; //primitive container

} io_k8s_api_core_v1_capabilities_t;

io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities_create(
    list_t *add,
    list_t *drop
);

void io_k8s_api_core_v1_capabilities_free(io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities);

io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities_parseFromJSON(cJSON *io_k8s_api_core_v1_capabilitiesJSON);

cJSON *io_k8s_api_core_v1_capabilities_convertToJSON(io_k8s_api_core_v1_capabilities_t *io_k8s_api_core_v1_capabilities);

#endif /* _io_k8s_api_core_v1_capabilities_H_ */

