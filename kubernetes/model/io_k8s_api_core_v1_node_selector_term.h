/*
 * io_k8s_api_core_v1_node_selector_term.h
 *
 * A null or empty node selector term matches no objects. The requirements of them are ANDed. The TopologySelectorTerm type implements a subset of the NodeSelectorTerm.
 */

#ifndef _io_k8s_api_core_v1_node_selector_term_H_
#define _io_k8s_api_core_v1_node_selector_term_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_selector_term_t io_k8s_api_core_v1_node_selector_term_t;

#include "io_k8s_api_core_v1_node_selector_requirement.h"



typedef struct io_k8s_api_core_v1_node_selector_term_t {
    list_t *match_expressions; //nonprimitive container
    list_t *match_fields; //nonprimitive container

} io_k8s_api_core_v1_node_selector_term_t;

io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term_create(
    list_t *match_expressions,
    list_t *match_fields
);

void io_k8s_api_core_v1_node_selector_term_free(io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term);

io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term_parseFromJSON(cJSON *io_k8s_api_core_v1_node_selector_termJSON);

cJSON *io_k8s_api_core_v1_node_selector_term_convertToJSON(io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term);

#endif /* _io_k8s_api_core_v1_node_selector_term_H_ */

