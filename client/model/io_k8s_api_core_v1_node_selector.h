/*
 * io_k8s_api_core_v1_node_selector.h
 *
 * A node selector represents the union of the results of one or more label queries over a set of nodes; that is, it represents the OR of the selectors represented by the node selector terms.
 */

#ifndef _io_k8s_api_core_v1_node_selector_H_
#define _io_k8s_api_core_v1_node_selector_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_selector_t io_k8s_api_core_v1_node_selector_t;

#include "io_k8s_api_core_v1_node_selector_term.h"



typedef struct io_k8s_api_core_v1_node_selector_t {
    list_t *node_selector_terms; //nonprimitive container

} io_k8s_api_core_v1_node_selector_t;

io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector_create(
    list_t *node_selector_terms
);

void io_k8s_api_core_v1_node_selector_free(io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector);

io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_node_selectorJSON);

cJSON *io_k8s_api_core_v1_node_selector_convertToJSON(io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector);

#endif /* _io_k8s_api_core_v1_node_selector_H_ */

