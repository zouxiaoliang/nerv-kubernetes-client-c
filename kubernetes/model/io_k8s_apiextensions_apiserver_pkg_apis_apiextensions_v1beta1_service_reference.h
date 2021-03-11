/*
 * io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference.h
 *
 * ServiceReference holds a reference to Service.legacy.k8s.io
 */

#ifndef _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_H_
#define _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_t io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_t;




typedef struct io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_t {
    char *name; // string
    char *_namespace; // string
    char *path; // string
    int port; //numeric

} io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_t;

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_create(
    char *name,
    char *_namespace,
    char *path,
    int port
);

void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference);

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_referenceJSON);

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference);

#endif /* _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_service_reference_H_ */

