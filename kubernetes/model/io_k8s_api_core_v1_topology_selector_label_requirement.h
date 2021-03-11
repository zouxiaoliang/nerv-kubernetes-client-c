/*
 * io_k8s_api_core_v1_topology_selector_label_requirement.h
 *
 * A topology selector requirement is a selector that matches given label. This is an alpha feature and may change in the future.
 */

#ifndef _io_k8s_api_core_v1_topology_selector_label_requirement_H_
#define _io_k8s_api_core_v1_topology_selector_label_requirement_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_topology_selector_label_requirement_t io_k8s_api_core_v1_topology_selector_label_requirement_t;




typedef struct io_k8s_api_core_v1_topology_selector_label_requirement_t {
    char *key; // string
    list_t *values; //primitive container

} io_k8s_api_core_v1_topology_selector_label_requirement_t;

io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement_create(
    char *key,
    list_t *values
);

void io_k8s_api_core_v1_topology_selector_label_requirement_free(io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement);

io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement_parseFromJSON(cJSON *io_k8s_api_core_v1_topology_selector_label_requirementJSON);

cJSON *io_k8s_api_core_v1_topology_selector_label_requirement_convertToJSON(io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement);

#endif /* _io_k8s_api_core_v1_topology_selector_label_requirement_H_ */

