/*
 * io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec.h
 *
 * APIServiceSpec contains information for locating and communicating with a server. Only https is supported, though you are able to disable certificate verification.
 */

#ifndef _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_H_
#define _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t;

#include "io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_service_reference.h"



typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t {
    char ca_bundle; //Byte
    char *group; // string
    int group_priority_minimum; //numeric
    int insecure_skip_tls_verify; //boolean
    struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_service_reference_t *service; //model
    char *version; // string
    int version_priority; //numeric

} io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t;

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_create(
    char ca_bundle,
    char *group,
    int group_priority_minimum,
    int insecure_skip_tls_verify,
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_service_reference_t *service,
    char *version,
    int version_priority
);

void io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec);

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_parseFromJSON(cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_specJSON);

cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec);

#endif /* _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_H_ */

