/*
 * io_k8s_api_core_v1_preferred_scheduling_term.h
 *
 * An empty preferred scheduling term matches all objects with implicit weight 0 (i.e. it&#39;s a no-op). A null preferred scheduling term matches no objects (i.e. is also a no-op).
 */

#ifndef _io_k8s_api_core_v1_preferred_scheduling_term_H_
#define _io_k8s_api_core_v1_preferred_scheduling_term_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_preferred_scheduling_term_t io_k8s_api_core_v1_preferred_scheduling_term_t;

#include "io_k8s_api_core_v1_node_selector_term.h"



typedef struct io_k8s_api_core_v1_preferred_scheduling_term_t {
    struct io_k8s_api_core_v1_node_selector_term_t *preference; //model
    int weight; //numeric

} io_k8s_api_core_v1_preferred_scheduling_term_t;

io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term_create(
    io_k8s_api_core_v1_node_selector_term_t *preference,
    int weight
);

void io_k8s_api_core_v1_preferred_scheduling_term_free(io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term);

io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term_parseFromJSON(cJSON *io_k8s_api_core_v1_preferred_scheduling_termJSON);

cJSON *io_k8s_api_core_v1_preferred_scheduling_term_convertToJSON(io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term);

#endif /* _io_k8s_api_core_v1_preferred_scheduling_term_H_ */

