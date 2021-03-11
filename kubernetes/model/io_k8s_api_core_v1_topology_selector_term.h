/*
 * io_k8s_api_core_v1_topology_selector_term.h
 *
 * A topology selector term represents the result of label queries. A null or empty topology selector term matches no objects. The requirements of them are ANDed. It provides a subset of functionality as NodeSelectorTerm. This is an alpha feature and may change in the future.
 */

#ifndef _io_k8s_api_core_v1_topology_selector_term_H_
#define _io_k8s_api_core_v1_topology_selector_term_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_topology_selector_term_t io_k8s_api_core_v1_topology_selector_term_t;

#include "io_k8s_api_core_v1_topology_selector_label_requirement.h"



typedef struct io_k8s_api_core_v1_topology_selector_term_t {
    list_t *match_label_expressions; //nonprimitive container

} io_k8s_api_core_v1_topology_selector_term_t;

io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term_create(
    list_t *match_label_expressions
);

void io_k8s_api_core_v1_topology_selector_term_free(io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term);

io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term_parseFromJSON(cJSON *io_k8s_api_core_v1_topology_selector_termJSON);

cJSON *io_k8s_api_core_v1_topology_selector_term_convertToJSON(io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term);

#endif /* _io_k8s_api_core_v1_topology_selector_term_H_ */

