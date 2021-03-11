/*
 * io_k8s_api_core_v1_resource_field_selector.h
 *
 * ResourceFieldSelector represents container resources (cpu, memory) and their output format
 */

#ifndef _io_k8s_api_core_v1_resource_field_selector_H_
#define _io_k8s_api_core_v1_resource_field_selector_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_resource_field_selector_t io_k8s_api_core_v1_resource_field_selector_t;




typedef struct io_k8s_api_core_v1_resource_field_selector_t {
    char *container_name; // string
    char *divisor; // string
    char *resource; // string

} io_k8s_api_core_v1_resource_field_selector_t;

io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector_create(
    char *container_name,
    char *divisor,
    char *resource
);

void io_k8s_api_core_v1_resource_field_selector_free(io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector);

io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_resource_field_selectorJSON);

cJSON *io_k8s_api_core_v1_resource_field_selector_convertToJSON(io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector);

#endif /* _io_k8s_api_core_v1_resource_field_selector_H_ */

