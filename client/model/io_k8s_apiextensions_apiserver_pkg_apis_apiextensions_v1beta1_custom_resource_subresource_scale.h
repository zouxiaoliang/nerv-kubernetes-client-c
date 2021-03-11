/*
 * io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale.h
 *
 * CustomResourceSubresourceScale defines how to serve the scale subresource for CustomResources.
 */

#ifndef _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_H_
#define _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t;




typedef struct io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t {
    char *label_selector_path; // string
    char *spec_replicas_path; // string
    char *status_replicas_path; // string

} io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t;

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_create(
    char *label_selector_path,
    char *spec_replicas_path,
    char *status_replicas_path
);

void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale);

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scaleJSON);

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale);

#endif /* _io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_H_ */

