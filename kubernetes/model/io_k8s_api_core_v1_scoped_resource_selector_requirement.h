/*
 * io_k8s_api_core_v1_scoped_resource_selector_requirement.h
 *
 * A scoped-resource selector requirement is a selector that contains values, a scope name, and an operator that relates the scope name and values.
 */

#ifndef _io_k8s_api_core_v1_scoped_resource_selector_requirement_H_
#define _io_k8s_api_core_v1_scoped_resource_selector_requirement_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_scoped_resource_selector_requirement_t io_k8s_api_core_v1_scoped_resource_selector_requirement_t;




typedef struct io_k8s_api_core_v1_scoped_resource_selector_requirement_t {
    char *_operator; // string
    char *scope_name; // string
    list_t *values; //primitive container

} io_k8s_api_core_v1_scoped_resource_selector_requirement_t;

io_k8s_api_core_v1_scoped_resource_selector_requirement_t *io_k8s_api_core_v1_scoped_resource_selector_requirement_create(
    char *_operator,
    char *scope_name,
    list_t *values
);

void io_k8s_api_core_v1_scoped_resource_selector_requirement_free(io_k8s_api_core_v1_scoped_resource_selector_requirement_t *io_k8s_api_core_v1_scoped_resource_selector_requirement);

io_k8s_api_core_v1_scoped_resource_selector_requirement_t *io_k8s_api_core_v1_scoped_resource_selector_requirement_parseFromJSON(cJSON *io_k8s_api_core_v1_scoped_resource_selector_requirementJSON);

cJSON *io_k8s_api_core_v1_scoped_resource_selector_requirement_convertToJSON(io_k8s_api_core_v1_scoped_resource_selector_requirement_t *io_k8s_api_core_v1_scoped_resource_selector_requirement);

#endif /* _io_k8s_api_core_v1_scoped_resource_selector_requirement_H_ */

