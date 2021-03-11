/*
 * io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition.h
 *
 * Describes the state of the storageVersion at a certain point.
 */

#ifndef _io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_H_
#define _io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t;




typedef struct io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t {
    char *last_transition_time; //date time
    char *message; // string
    long observed_generation; //numeric
    char *reason; // string
    char *status; // string
    char *type; // string

} io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t;

io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_create(
    char *last_transition_time,
    char *message,
    long observed_generation,
    char *reason,
    char *status,
    char *type
);

void io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition);

io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_parseFromJSON(cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_conditionJSON);

cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition);

#endif /* _io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_H_ */

