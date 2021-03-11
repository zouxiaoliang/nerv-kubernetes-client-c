/*
 * io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition.h
 *
 * APIServiceCondition describes the state of an APIService at a particular point
 */

#ifndef _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_H_
#define _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_t io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_t;




typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_t {
    char *last_transition_time; //date time
    char *message; // string
    char *reason; // string
    char *status; // string
    char *type; // string

} io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_t;

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_create(
    char *last_transition_time,
    char *message,
    char *reason,
    char *status,
    char *type
);

void io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition);

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_parseFromJSON(cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_conditionJSON);

cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition);

#endif /* _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_condition_H_ */

