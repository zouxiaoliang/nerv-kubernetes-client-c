/*
 * io_k8s_api_core_v1_env_from_source.h
 *
 * EnvFromSource represents the source of a set of ConfigMaps
 */

#ifndef _io_k8s_api_core_v1_env_from_source_H_
#define _io_k8s_api_core_v1_env_from_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_env_from_source_t io_k8s_api_core_v1_env_from_source_t;

#include "io_k8s_api_core_v1_config_map_env_source.h"
#include "io_k8s_api_core_v1_secret_env_source.h"



typedef struct io_k8s_api_core_v1_env_from_source_t {
    struct io_k8s_api_core_v1_config_map_env_source_t *config_map_ref; //model
    char *prefix; // string
    struct io_k8s_api_core_v1_secret_env_source_t *secret_ref; //model

} io_k8s_api_core_v1_env_from_source_t;

io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source_create(
    io_k8s_api_core_v1_config_map_env_source_t *config_map_ref,
    char *prefix,
    io_k8s_api_core_v1_secret_env_source_t *secret_ref
);

void io_k8s_api_core_v1_env_from_source_free(io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source);

io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source_parseFromJSON(cJSON *io_k8s_api_core_v1_env_from_sourceJSON);

cJSON *io_k8s_api_core_v1_env_from_source_convertToJSON(io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source);

#endif /* _io_k8s_api_core_v1_env_from_source_H_ */

