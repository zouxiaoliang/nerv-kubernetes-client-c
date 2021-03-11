/*
 * io_k8s_api_rbac_v1_policy_rule.h
 *
 * PolicyRule holds information that describes a policy rule, but does not contain information about who the rule applies to or which namespace the rule applies to.
 */

#ifndef _io_k8s_api_rbac_v1_policy_rule_H_
#define _io_k8s_api_rbac_v1_policy_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_rbac_v1_policy_rule_t io_k8s_api_rbac_v1_policy_rule_t;




typedef struct io_k8s_api_rbac_v1_policy_rule_t {
    list_t *api_groups; //primitive container
    list_t *non_resource_urls; //primitive container
    list_t *resource_names; //primitive container
    list_t *resources; //primitive container
    list_t *verbs; //primitive container

} io_k8s_api_rbac_v1_policy_rule_t;

io_k8s_api_rbac_v1_policy_rule_t *io_k8s_api_rbac_v1_policy_rule_create(
    list_t *api_groups,
    list_t *non_resource_urls,
    list_t *resource_names,
    list_t *resources,
    list_t *verbs
);

void io_k8s_api_rbac_v1_policy_rule_free(io_k8s_api_rbac_v1_policy_rule_t *io_k8s_api_rbac_v1_policy_rule);

io_k8s_api_rbac_v1_policy_rule_t *io_k8s_api_rbac_v1_policy_rule_parseFromJSON(cJSON *io_k8s_api_rbac_v1_policy_ruleJSON);

cJSON *io_k8s_api_rbac_v1_policy_rule_convertToJSON(io_k8s_api_rbac_v1_policy_rule_t *io_k8s_api_rbac_v1_policy_rule);

#endif /* _io_k8s_api_rbac_v1_policy_rule_H_ */

