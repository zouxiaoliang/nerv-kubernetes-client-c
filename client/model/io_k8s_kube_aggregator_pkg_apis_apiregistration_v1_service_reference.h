/*
 * io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference.h
 *
 * ServiceReference holds a reference to Service.legacy.k8s.io
 */

#ifndef _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_H_
#define _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t;




typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t {
    char *name; // string
    char *_namespace; // string
    int port; //numeric

} io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t;

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_create(
    char *name,
    char *_namespace,
    int port
);

void io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference);

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_parseFromJSON(cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_referenceJSON);

cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference);

#endif /* _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_H_ */

