/*
 * io_k8s_api_core_v1_config_map_key_selector.h
 *
 * Selects a key from a ConfigMap.
 */

#ifndef _io_k8s_api_core_v1_config_map_key_selector_H_
#define _io_k8s_api_core_v1_config_map_key_selector_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_config_map_key_selector_t io_k8s_api_core_v1_config_map_key_selector_t;




typedef struct io_k8s_api_core_v1_config_map_key_selector_t {
    char *key; // string
    char *name; // string
    int optional; //boolean

} io_k8s_api_core_v1_config_map_key_selector_t;

io_k8s_api_core_v1_config_map_key_selector_t *io_k8s_api_core_v1_config_map_key_selector_create(
    char *key,
    char *name,
    int optional
);

void io_k8s_api_core_v1_config_map_key_selector_free(io_k8s_api_core_v1_config_map_key_selector_t *io_k8s_api_core_v1_config_map_key_selector);

io_k8s_api_core_v1_config_map_key_selector_t *io_k8s_api_core_v1_config_map_key_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_config_map_key_selectorJSON);

cJSON *io_k8s_api_core_v1_config_map_key_selector_convertToJSON(io_k8s_api_core_v1_config_map_key_selector_t *io_k8s_api_core_v1_config_map_key_selector);

#endif /* _io_k8s_api_core_v1_config_map_key_selector_H_ */

