/*
 * io_k8s_api_core_v1_replication_controller.h
 *
 * ReplicationController represents the configuration of a replication controller.
 */

#ifndef _io_k8s_api_core_v1_replication_controller_H_
#define _io_k8s_api_core_v1_replication_controller_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_replication_controller_t io_k8s_api_core_v1_replication_controller_t;

#include "io_k8s_api_core_v1_replication_controller_spec.h"
#include "io_k8s_api_core_v1_replication_controller_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_replication_controller_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_replication_controller_spec_t *spec; //model
    struct io_k8s_api_core_v1_replication_controller_status_t *status; //model

} io_k8s_api_core_v1_replication_controller_t;

io_k8s_api_core_v1_replication_controller_t *io_k8s_api_core_v1_replication_controller_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_replication_controller_spec_t *spec,
    io_k8s_api_core_v1_replication_controller_status_t *status
);

void io_k8s_api_core_v1_replication_controller_free(io_k8s_api_core_v1_replication_controller_t *io_k8s_api_core_v1_replication_controller);

io_k8s_api_core_v1_replication_controller_t *io_k8s_api_core_v1_replication_controller_parseFromJSON(cJSON *io_k8s_api_core_v1_replication_controllerJSON);

cJSON *io_k8s_api_core_v1_replication_controller_convertToJSON(io_k8s_api_core_v1_replication_controller_t *io_k8s_api_core_v1_replication_controller);

#endif /* _io_k8s_api_core_v1_replication_controller_H_ */

