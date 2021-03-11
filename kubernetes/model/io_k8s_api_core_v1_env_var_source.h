/*
 * io_k8s_api_core_v1_env_var_source.h
 *
 * EnvVarSource represents a source for the value of an EnvVar.
 */

#ifndef _io_k8s_api_core_v1_env_var_source_H_
#define _io_k8s_api_core_v1_env_var_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_env_var_source_t io_k8s_api_core_v1_env_var_source_t;

#include "io_k8s_api_core_v1_config_map_key_selector.h"
#include "io_k8s_api_core_v1_object_field_selector.h"
#include "io_k8s_api_core_v1_resource_field_selector.h"
#include "io_k8s_api_core_v1_secret_key_selector.h"



typedef struct io_k8s_api_core_v1_env_var_source_t {
    struct io_k8s_api_core_v1_config_map_key_selector_t *config_map_key_ref; //model
    struct io_k8s_api_core_v1_object_field_selector_t *field_ref; //model
    struct io_k8s_api_core_v1_resource_field_selector_t *resource_field_ref; //model
    struct io_k8s_api_core_v1_secret_key_selector_t *secret_key_ref; //model

} io_k8s_api_core_v1_env_var_source_t;

io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source_create(
    io_k8s_api_core_v1_config_map_key_selector_t *config_map_key_ref,
    io_k8s_api_core_v1_object_field_selector_t *field_ref,
    io_k8s_api_core_v1_resource_field_selector_t *resource_field_ref,
    io_k8s_api_core_v1_secret_key_selector_t *secret_key_ref
);

void io_k8s_api_core_v1_env_var_source_free(io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source);

io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source_parseFromJSON(cJSON *io_k8s_api_core_v1_env_var_sourceJSON);

cJSON *io_k8s_api_core_v1_env_var_source_convertToJSON(io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source);

#endif /* _io_k8s_api_core_v1_env_var_source_H_ */

