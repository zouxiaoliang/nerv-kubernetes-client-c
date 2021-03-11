/*
 * io_k8s_api_admissionregistration_v1beta1_rule_with_operations.h
 *
 * RuleWithOperations is a tuple of Operations and Resources. It is recommended to make sure that all the tuple expansions are valid.
 */

#ifndef _io_k8s_api_admissionregistration_v1beta1_rule_with_operations_H_
#define _io_k8s_api_admissionregistration_v1beta1_rule_with_operations_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_admissionregistration_v1beta1_rule_with_operations_t io_k8s_api_admissionregistration_v1beta1_rule_with_operations_t;




typedef struct io_k8s_api_admissionregistration_v1beta1_rule_with_operations_t {
    list_t *api_groups; //primitive container
    list_t *api_versions; //primitive container
    list_t *operations; //primitive container
    list_t *resources; //primitive container
    char *scope; // string

} io_k8s_api_admissionregistration_v1beta1_rule_with_operations_t;

io_k8s_api_admissionregistration_v1beta1_rule_with_operations_t *io_k8s_api_admissionregistration_v1beta1_rule_with_operations_create(
    list_t *api_groups,
    list_t *api_versions,
    list_t *operations,
    list_t *resources,
    char *scope
);

void io_k8s_api_admissionregistration_v1beta1_rule_with_operations_free(io_k8s_api_admissionregistration_v1beta1_rule_with_operations_t *io_k8s_api_admissionregistration_v1beta1_rule_with_operations);

io_k8s_api_admissionregistration_v1beta1_rule_with_operations_t *io_k8s_api_admissionregistration_v1beta1_rule_with_operations_parseFromJSON(cJSON *io_k8s_api_admissionregistration_v1beta1_rule_with_operationsJSON);

cJSON *io_k8s_api_admissionregistration_v1beta1_rule_with_operations_convertToJSON(io_k8s_api_admissionregistration_v1beta1_rule_with_operations_t *io_k8s_api_admissionregistration_v1beta1_rule_with_operations);

#endif /* _io_k8s_api_admissionregistration_v1beta1_rule_with_operations_H_ */

