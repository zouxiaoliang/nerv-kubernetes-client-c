/*
 * io_k8s_api_core_v1_node_config_source.h
 *
 * NodeConfigSource specifies a source of node configuration. Exactly one subfield (excluding metadata) must be non-nil.
 */

#ifndef _io_k8s_api_core_v1_node_config_source_H_
#define _io_k8s_api_core_v1_node_config_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_config_source_t io_k8s_api_core_v1_node_config_source_t;

#include "io_k8s_api_core_v1_config_map_node_config_source.h"



typedef struct io_k8s_api_core_v1_node_config_source_t {
    struct io_k8s_api_core_v1_config_map_node_config_source_t *config_map; //model

} io_k8s_api_core_v1_node_config_source_t;

io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source_create(
    io_k8s_api_core_v1_config_map_node_config_source_t *config_map
);

void io_k8s_api_core_v1_node_config_source_free(io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source);

io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source_parseFromJSON(cJSON *io_k8s_api_core_v1_node_config_sourceJSON);

cJSON *io_k8s_api_core_v1_node_config_source_convertToJSON(io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source);

#endif /* _io_k8s_api_core_v1_node_config_source_H_ */

