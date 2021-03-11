/*
 * io_k8s_api_core_v1_node.h
 *
 * Node is a worker node in Kubernetes. Each node will have a unique identifier in the cache (i.e. in etcd).
 */

#ifndef _io_k8s_api_core_v1_node_H_
#define _io_k8s_api_core_v1_node_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_t io_k8s_api_core_v1_node_t;

#include "io_k8s_api_core_v1_node_spec.h"
#include "io_k8s_api_core_v1_node_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_node_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_node_spec_t *spec; //model
    struct io_k8s_api_core_v1_node_status_t *status; //model

} io_k8s_api_core_v1_node_t;

io_k8s_api_core_v1_node_t *io_k8s_api_core_v1_node_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_node_spec_t *spec,
    io_k8s_api_core_v1_node_status_t *status
);

void io_k8s_api_core_v1_node_free(io_k8s_api_core_v1_node_t *io_k8s_api_core_v1_node);

io_k8s_api_core_v1_node_t *io_k8s_api_core_v1_node_parseFromJSON(cJSON *io_k8s_api_core_v1_nodeJSON);

cJSON *io_k8s_api_core_v1_node_convertToJSON(io_k8s_api_core_v1_node_t *io_k8s_api_core_v1_node);

#endif /* _io_k8s_api_core_v1_node_H_ */

