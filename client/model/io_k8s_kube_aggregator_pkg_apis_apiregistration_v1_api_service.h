/*
 * io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service.h
 *
 * APIService represents a server for a particular GroupVersion. Name must be \&quot;version.group\&quot;.
 */

#ifndef _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_H_
#define _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"
#include "io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_spec.h"
#include "io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status.h"



typedef struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_spec_t *spec; //model
    struct io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t *status; //model

} io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t;

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_spec_t *spec,
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_status_t *status
);

void io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service);

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_parseFromJSON(cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_serviceJSON);

cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service);

#endif /* _io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_api_service_H_ */

