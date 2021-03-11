/*
 * io_k8s_api_core_v1_env_var.h
 *
 * EnvVar represents an environment variable present in a Container.
 */

#ifndef _io_k8s_api_core_v1_env_var_H_
#define _io_k8s_api_core_v1_env_var_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_env_var_t io_k8s_api_core_v1_env_var_t;

#include "io_k8s_api_core_v1_env_var_source.h"



typedef struct io_k8s_api_core_v1_env_var_t {
    char *name; // string
    char *value; // string
    struct io_k8s_api_core_v1_env_var_source_t *value_from; //model

} io_k8s_api_core_v1_env_var_t;

io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var_create(
    char *name,
    char *value,
    io_k8s_api_core_v1_env_var_source_t *value_from
);

void io_k8s_api_core_v1_env_var_free(io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var);

io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var_parseFromJSON(cJSON *io_k8s_api_core_v1_env_varJSON);

cJSON *io_k8s_api_core_v1_env_var_convertToJSON(io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var);

#endif /* _io_k8s_api_core_v1_env_var_H_ */

