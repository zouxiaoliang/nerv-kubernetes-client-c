/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_api_resource.h
 *
 * APIResource specifies the name of a resource and whether it is namespaced.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t;




typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t {
    list_t *categories; //primitive container
    char *group; // string
    char *kind; // string
    char *name; // string
    int namespaced; //boolean
    list_t *short_names; //primitive container
    char *singular_name; // string
    char *storage_version_hash; // string
    list_t *verbs; //primitive container
    char *version; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t;

io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_create(
    list_t *categories,
    char *group,
    char *kind,
    char *name,
    int namespaced,
    list_t *short_names,
    char *singular_name,
    char *storage_version_hash,
    list_t *verbs,
    char *version
);

void io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource);

io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_resourceJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_H_ */

