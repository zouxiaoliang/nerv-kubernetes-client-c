/*
 * io_k8s_api_policy_v1beta1_pod_disruption_budget_spec.h
 *
 * PodDisruptionBudgetSpec is a description of a PodDisruptionBudget.
 */

#ifndef _io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_H_
#define _io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t {
    char *max_unavailable; // string
    char *min_available; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector; //model

} io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t;

io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_create(
    char *max_unavailable,
    char *min_available,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector
);

void io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_free(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec);

io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_pod_disruption_budget_specJSON);

cJSON *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_convertToJSON(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec);

#endif /* _io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_H_ */

