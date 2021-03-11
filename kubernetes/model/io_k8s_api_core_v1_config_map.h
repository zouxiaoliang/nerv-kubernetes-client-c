/*
 * io_k8s_api_core_v1_config_map.h
 *
 * ConfigMap holds configuration data for pods to consume.
 */

#ifndef _io_k8s_api_core_v1_config_map_H_
#define _io_k8s_api_core_v1_config_map_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_config_map_t io_k8s_api_core_v1_config_map_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_config_map_t {
    char *api_version; // string
    list_t* binary_data; //map
    list_t* data; //map
    int immutable; //boolean
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model

} io_k8s_api_core_v1_config_map_t;

io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map_create(
    char *api_version,
    list_t* binary_data,
    list_t* data,
    int immutable,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata
);

void io_k8s_api_core_v1_config_map_free(io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map);

io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map_parseFromJSON(cJSON *io_k8s_api_core_v1_config_mapJSON);

cJSON *io_k8s_api_core_v1_config_map_convertToJSON(io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map);

#endif /* _io_k8s_api_core_v1_config_map_H_ */

