/*
 * io_k8s_api_policy_v1beta1_pod_disruption_budget.h
 *
 * PodDisruptionBudget is an object to define the max disruption that can be caused to a collection of pods
 */

#ifndef _io_k8s_api_policy_v1beta1_pod_disruption_budget_H_
#define _io_k8s_api_policy_v1beta1_pod_disruption_budget_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_pod_disruption_budget_t io_k8s_api_policy_v1beta1_pod_disruption_budget_t;

#include "io_k8s_api_policy_v1beta1_pod_disruption_budget_spec.h"
#include "io_k8s_api_policy_v1beta1_pod_disruption_budget_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_policy_v1beta1_pod_disruption_budget_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *spec; //model
    struct io_k8s_api_policy_v1beta1_pod_disruption_budget_status_t *status; //model

} io_k8s_api_policy_v1beta1_pod_disruption_budget_t;

io_k8s_api_policy_v1beta1_pod_disruption_budget_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *spec,
    io_k8s_api_policy_v1beta1_pod_disruption_budget_status_t *status
);

void io_k8s_api_policy_v1beta1_pod_disruption_budget_free(io_k8s_api_policy_v1beta1_pod_disruption_budget_t *io_k8s_api_policy_v1beta1_pod_disruption_budget);

io_k8s_api_policy_v1beta1_pod_disruption_budget_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_pod_disruption_budgetJSON);

cJSON *io_k8s_api_policy_v1beta1_pod_disruption_budget_convertToJSON(io_k8s_api_policy_v1beta1_pod_disruption_budget_t *io_k8s_api_policy_v1beta1_pod_disruption_budget);

#endif /* _io_k8s_api_policy_v1beta1_pod_disruption_budget_H_ */

