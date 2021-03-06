/*
 * io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status.h
 *
 * APIServiceStatus contains derived information about an API server
 */

#ifndef _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_H_
#define _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t;

#include "io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_condition.h"



typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t {
    list_t *conditions; //nonprimitive container

} io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t;

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_create(
    list_t *conditions
);

void io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status);

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_parseFromJSON(cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_statusJSON);

cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status);

#endif /* _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_H_ */

