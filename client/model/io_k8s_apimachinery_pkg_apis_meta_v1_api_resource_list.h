/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h
 *
 * APIResourceList is a list of APIResource, it is used to expose the name of the resources supported in a specific group and version, and if the resource is namespaced.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_api_resource.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t {
    char *api_version; // string
    char *group_version; // string
    char *kind; // string
    list_t *resources; //nonprimitive container

} io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t;

io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_create(
    char *api_version,
    char *group_version,
    char *kind,
    list_t *resources
);

void io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list);

io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_listJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_H_ */

