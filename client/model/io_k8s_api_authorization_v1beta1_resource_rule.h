/*
 * io_k8s_api_authorization_v1beta1_resource_rule.h
 *
 * ResourceRule is the list of actions the subject is allowed to perform on resources. The list ordering isn&#39;t significant, may contain duplicates, and possibly be incomplete.
 */

#ifndef _io_k8s_api_authorization_v1beta1_resource_rule_H_
#define _io_k8s_api_authorization_v1beta1_resource_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authorization_v1beta1_resource_rule_t io_k8s_api_authorization_v1beta1_resource_rule_t;




typedef struct io_k8s_api_authorization_v1beta1_resource_rule_t {
    list_t *api_groups; //primitive container
    list_t *resource_names; //primitive container
    list_t *resources; //primitive container
    list_t *verbs; //primitive container

} io_k8s_api_authorization_v1beta1_resource_rule_t;

io_k8s_api_authorization_v1beta1_resource_rule_t *io_k8s_api_authorization_v1beta1_resource_rule_create(
    list_t *api_groups,
    list_t *resource_names,
    list_t *resources,
    list_t *verbs
);

void io_k8s_api_authorization_v1beta1_resource_rule_free(io_k8s_api_authorization_v1beta1_resource_rule_t *io_k8s_api_authorization_v1beta1_resource_rule);

io_k8s_api_authorization_v1beta1_resource_rule_t *io_k8s_api_authorization_v1beta1_resource_rule_parseFromJSON(cJSON *io_k8s_api_authorization_v1beta1_resource_ruleJSON);

cJSON *io_k8s_api_authorization_v1beta1_resource_rule_convertToJSON(io_k8s_api_authorization_v1beta1_resource_rule_t *io_k8s_api_authorization_v1beta1_resource_rule);

#endif /* _io_k8s_api_authorization_v1beta1_resource_rule_H_ */

