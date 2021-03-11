/*
 * io_k8s_api_core_v1_namespace.h
 *
 * Namespace provides a scope for Names. Use of multiple namespaces is optional.
 */

#ifndef _io_k8s_api_core_v1_namespace_H_
#define _io_k8s_api_core_v1_namespace_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_namespace_t io_k8s_api_core_v1_namespace_t;

#include "io_k8s_api_core_v1_namespace_spec.h"
#include "io_k8s_api_core_v1_namespace_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_namespace_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_namespace_spec_t *spec; //model
    struct io_k8s_api_core_v1_namespace_status_t *status; //model

} io_k8s_api_core_v1_namespace_t;

io_k8s_api_core_v1_namespace_t *io_k8s_api_core_v1_namespace_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_namespace_spec_t *spec,
    io_k8s_api_core_v1_namespace_status_t *status
);

void io_k8s_api_core_v1_namespace_free(io_k8s_api_core_v1_namespace_t *io_k8s_api_core_v1_namespace);

io_k8s_api_core_v1_namespace_t *io_k8s_api_core_v1_namespace_parseFromJSON(cJSON *io_k8s_api_core_v1_namespaceJSON);

cJSON *io_k8s_api_core_v1_namespace_convertToJSON(io_k8s_api_core_v1_namespace_t *io_k8s_api_core_v1_namespace);

#endif /* _io_k8s_api_core_v1_namespace_H_ */

