/*
 * io_k8s_api_core_v1_topology_spread_constraint.h
 *
 * TopologySpreadConstraint specifies how to spread matching pods among the given topology.
 */

#ifndef _io_k8s_api_core_v1_topology_spread_constraint_H_
#define _io_k8s_api_core_v1_topology_spread_constraint_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_topology_spread_constraint_t io_k8s_api_core_v1_topology_spread_constraint_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_core_v1_topology_spread_constraint_t {
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *label_selector; //model
    int max_skew; //numeric
    char *topology_key; // string
    char *when_unsatisfiable; // string

} io_k8s_api_core_v1_topology_spread_constraint_t;

io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint_create(
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *label_selector,
    int max_skew,
    char *topology_key,
    char *when_unsatisfiable
);

void io_k8s_api_core_v1_topology_spread_constraint_free(io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint);

io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint_parseFromJSON(cJSON *io_k8s_api_core_v1_topology_spread_constraintJSON);

cJSON *io_k8s_api_core_v1_topology_spread_constraint_convertToJSON(io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint);

#endif /* _io_k8s_api_core_v1_topology_spread_constraint_H_ */

