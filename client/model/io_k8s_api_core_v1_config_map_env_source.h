/*
 * io_k8s_api_core_v1_config_map_env_source.h
 *
 * ConfigMapEnvSource selects a ConfigMap to populate the environment variables with.  The contents of the target ConfigMap&#39;s Data field will represent the key-value pairs as environment variables.
 */

#ifndef _io_k8s_api_core_v1_config_map_env_source_H_
#define _io_k8s_api_core_v1_config_map_env_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_config_map_env_source_t io_k8s_api_core_v1_config_map_env_source_t;




typedef struct io_k8s_api_core_v1_config_map_env_source_t {
    char *name; // string
    int optional; //boolean

} io_k8s_api_core_v1_config_map_env_source_t;

io_k8s_api_core_v1_config_map_env_source_t *io_k8s_api_core_v1_config_map_env_source_create(
    char *name,
    int optional
);

void io_k8s_api_core_v1_config_map_env_source_free(io_k8s_api_core_v1_config_map_env_source_t *io_k8s_api_core_v1_config_map_env_source);

io_k8s_api_core_v1_config_map_env_source_t *io_k8s_api_core_v1_config_map_env_source_parseFromJSON(cJSON *io_k8s_api_core_v1_config_map_env_sourceJSON);

cJSON *io_k8s_api_core_v1_config_map_env_source_convertToJSON(io_k8s_api_core_v1_config_map_env_source_t *io_k8s_api_core_v1_config_map_env_source);

#endif /* _io_k8s_api_core_v1_config_map_env_source_H_ */

