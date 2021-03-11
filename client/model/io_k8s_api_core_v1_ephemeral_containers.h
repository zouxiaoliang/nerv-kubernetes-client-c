/*
 * io_k8s_api_core_v1_ephemeral_containers.h
 *
 * A list of ephemeral containers used with the Pod ephemeralcontainers subresource.
 */

#ifndef _io_k8s_api_core_v1_ephemeral_containers_H_
#define _io_k8s_api_core_v1_ephemeral_containers_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_ephemeral_containers_t io_k8s_api_core_v1_ephemeral_containers_t;

#include "io_k8s_api_core_v1_ephemeral_container.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_ephemeral_containers_t {
    char *api_version; // string
    list_t *ephemeral_containers; //nonprimitive container
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model

} io_k8s_api_core_v1_ephemeral_containers_t;

io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers_create(
    char *api_version,
    list_t *ephemeral_containers,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata
);

void io_k8s_api_core_v1_ephemeral_containers_free(io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers);

io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers_parseFromJSON(cJSON *io_k8s_api_core_v1_ephemeral_containersJSON);

cJSON *io_k8s_api_core_v1_ephemeral_containers_convertToJSON(io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers);

#endif /* _io_k8s_api_core_v1_ephemeral_containers_H_ */

