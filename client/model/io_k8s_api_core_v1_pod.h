/*
 * io_k8s_api_core_v1_pod.h
 *
 * Pod is a collection of containers that can run on a host. This resource is created by clients and scheduled onto hosts.
 */

#ifndef _io_k8s_api_core_v1_pod_H_
#define _io_k8s_api_core_v1_pod_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_t io_k8s_api_core_v1_pod_t;

#include "io_k8s_api_core_v1_pod_spec.h"
#include "io_k8s_api_core_v1_pod_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_pod_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_pod_spec_t *spec; //model
    struct io_k8s_api_core_v1_pod_status_t *status; //model

} io_k8s_api_core_v1_pod_t;

io_k8s_api_core_v1_pod_t *io_k8s_api_core_v1_pod_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_pod_spec_t *spec,
    io_k8s_api_core_v1_pod_status_t *status
);

void io_k8s_api_core_v1_pod_free(io_k8s_api_core_v1_pod_t *io_k8s_api_core_v1_pod);

io_k8s_api_core_v1_pod_t *io_k8s_api_core_v1_pod_parseFromJSON(cJSON *io_k8s_api_core_v1_podJSON);

cJSON *io_k8s_api_core_v1_pod_convertToJSON(io_k8s_api_core_v1_pod_t *io_k8s_api_core_v1_pod);

#endif /* _io_k8s_api_core_v1_pod_H_ */

