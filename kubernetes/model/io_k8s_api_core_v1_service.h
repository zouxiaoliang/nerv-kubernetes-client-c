/*
 * io_k8s_api_core_v1_service.h
 *
 * Service is a named abstraction of software service (for example, mysql) consisting of local port (for example 3306) that the proxy listens on, and the selector that determines which pods will answer requests sent through the proxy.
 */

#ifndef _io_k8s_api_core_v1_service_H_
#define _io_k8s_api_core_v1_service_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_service_t io_k8s_api_core_v1_service_t;

#include "io_k8s_api_core_v1_service_spec.h"
#include "io_k8s_api_core_v1_service_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_service_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_service_spec_t *spec; //model
    struct io_k8s_api_core_v1_service_status_t *status; //model

} io_k8s_api_core_v1_service_t;

io_k8s_api_core_v1_service_t *io_k8s_api_core_v1_service_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_service_spec_t *spec,
    io_k8s_api_core_v1_service_status_t *status
);

void io_k8s_api_core_v1_service_free(io_k8s_api_core_v1_service_t *io_k8s_api_core_v1_service);

io_k8s_api_core_v1_service_t *io_k8s_api_core_v1_service_parseFromJSON(cJSON *io_k8s_api_core_v1_serviceJSON);

cJSON *io_k8s_api_core_v1_service_convertToJSON(io_k8s_api_core_v1_service_t *io_k8s_api_core_v1_service);

#endif /* _io_k8s_api_core_v1_service_H_ */

