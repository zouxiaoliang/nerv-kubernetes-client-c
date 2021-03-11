/*
 * io_k8s_api_core_v1_component_status.h
 *
 * ComponentStatus (and ComponentStatusList) holds the cluster validation info. Deprecated: This API is deprecated in v1.19+
 */

#ifndef _io_k8s_api_core_v1_component_status_H_
#define _io_k8s_api_core_v1_component_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_component_status_t io_k8s_api_core_v1_component_status_t;

#include "io_k8s_api_core_v1_component_condition.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_component_status_t {
    char *api_version; // string
    list_t *conditions; //nonprimitive container
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model

} io_k8s_api_core_v1_component_status_t;

io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status_create(
    char *api_version,
    list_t *conditions,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata
);

void io_k8s_api_core_v1_component_status_free(io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status);

io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status_parseFromJSON(cJSON *io_k8s_api_core_v1_component_statusJSON);

cJSON *io_k8s_api_core_v1_component_status_convertToJSON(io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status);

#endif /* _io_k8s_api_core_v1_component_status_H_ */

