/*
 * io_k8s_api_core_v1_component_condition.h
 *
 * Information about the condition of a component.
 */

#ifndef _io_k8s_api_core_v1_component_condition_H_
#define _io_k8s_api_core_v1_component_condition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_component_condition_t io_k8s_api_core_v1_component_condition_t;




typedef struct io_k8s_api_core_v1_component_condition_t {
    char *error; // string
    char *message; // string
    char *status; // string
    char *type; // string

} io_k8s_api_core_v1_component_condition_t;

io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition_create(
    char *error,
    char *message,
    char *status,
    char *type
);

void io_k8s_api_core_v1_component_condition_free(io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition);

io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition_parseFromJSON(cJSON *io_k8s_api_core_v1_component_conditionJSON);

cJSON *io_k8s_api_core_v1_component_condition_convertToJSON(io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition);

#endif /* _io_k8s_api_core_v1_component_condition_H_ */

