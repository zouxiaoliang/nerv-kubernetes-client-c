/*
 * io_k8s_api_core_v1_config_map_node_config_source.h
 *
 * ConfigMapNodeConfigSource contains the information to reference a ConfigMap as a config source for the Node.
 */

#ifndef _io_k8s_api_core_v1_config_map_node_config_source_H_
#define _io_k8s_api_core_v1_config_map_node_config_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_config_map_node_config_source_t io_k8s_api_core_v1_config_map_node_config_source_t;




typedef struct io_k8s_api_core_v1_config_map_node_config_source_t {
    char *kubelet_config_key; // string
    char *name; // string
    char *_namespace; // string
    char *resource_version; // string
    char *uid; // string

} io_k8s_api_core_v1_config_map_node_config_source_t;

io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source_create(
    char *kubelet_config_key,
    char *name,
    char *_namespace,
    char *resource_version,
    char *uid
);

void io_k8s_api_core_v1_config_map_node_config_source_free(io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source);

io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source_parseFromJSON(cJSON *io_k8s_api_core_v1_config_map_node_config_sourceJSON);

cJSON *io_k8s_api_core_v1_config_map_node_config_source_convertToJSON(io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source);

#endif /* _io_k8s_api_core_v1_config_map_node_config_source_H_ */

