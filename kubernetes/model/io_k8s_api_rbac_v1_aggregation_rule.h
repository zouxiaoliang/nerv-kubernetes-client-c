/*
 * io_k8s_api_rbac_v1_aggregation_rule.h
 *
 * AggregationRule describes how to locate ClusterRoles to aggregate into the ClusterRole
 */

#ifndef _io_k8s_api_rbac_v1_aggregation_rule_H_
#define _io_k8s_api_rbac_v1_aggregation_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_rbac_v1_aggregation_rule_t io_k8s_api_rbac_v1_aggregation_rule_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_rbac_v1_aggregation_rule_t {
    list_t *cluster_role_selectors; //nonprimitive container

} io_k8s_api_rbac_v1_aggregation_rule_t;

io_k8s_api_rbac_v1_aggregation_rule_t *io_k8s_api_rbac_v1_aggregation_rule_create(
    list_t *cluster_role_selectors
);

void io_k8s_api_rbac_v1_aggregation_rule_free(io_k8s_api_rbac_v1_aggregation_rule_t *io_k8s_api_rbac_v1_aggregation_rule);

io_k8s_api_rbac_v1_aggregation_rule_t *io_k8s_api_rbac_v1_aggregation_rule_parseFromJSON(cJSON *io_k8s_api_rbac_v1_aggregation_ruleJSON);

cJSON *io_k8s_api_rbac_v1_aggregation_rule_convertToJSON(io_k8s_api_rbac_v1_aggregation_rule_t *io_k8s_api_rbac_v1_aggregation_rule);

#endif /* _io_k8s_api_rbac_v1_aggregation_rule_H_ */

