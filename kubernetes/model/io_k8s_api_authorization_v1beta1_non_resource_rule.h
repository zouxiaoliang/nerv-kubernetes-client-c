/*
 * io_k8s_api_authorization_v1beta1_non_resource_rule.h
 *
 * NonResourceRule holds information that describes a rule for the non-resource
 */

#ifndef _io_k8s_api_authorization_v1beta1_non_resource_rule_H_
#define _io_k8s_api_authorization_v1beta1_non_resource_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authorization_v1beta1_non_resource_rule_t io_k8s_api_authorization_v1beta1_non_resource_rule_t;




typedef struct io_k8s_api_authorization_v1beta1_non_resource_rule_t {
    list_t *non_resource_urls; //primitive container
    list_t *verbs; //primitive container

} io_k8s_api_authorization_v1beta1_non_resource_rule_t;

io_k8s_api_authorization_v1beta1_non_resource_rule_t *io_k8s_api_authorization_v1beta1_non_resource_rule_create(
    list_t *non_resource_urls,
    list_t *verbs
);

void io_k8s_api_authorization_v1beta1_non_resource_rule_free(io_k8s_api_authorization_v1beta1_non_resource_rule_t *io_k8s_api_authorization_v1beta1_non_resource_rule);

io_k8s_api_authorization_v1beta1_non_resource_rule_t *io_k8s_api_authorization_v1beta1_non_resource_rule_parseFromJSON(cJSON *io_k8s_api_authorization_v1beta1_non_resource_ruleJSON);

cJSON *io_k8s_api_authorization_v1beta1_non_resource_rule_convertToJSON(io_k8s_api_authorization_v1beta1_non_resource_rule_t *io_k8s_api_authorization_v1beta1_non_resource_rule);

#endif /* _io_k8s_api_authorization_v1beta1_non_resource_rule_H_ */

