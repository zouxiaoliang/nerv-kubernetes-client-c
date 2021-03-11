/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list.h
 *
 * APIGroupList is a list of APIGroup, to allow clients to discover the API at /apis.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_api_group.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t {
    char *api_version; // string
    list_t *groups; //nonprimitive container
    char *kind; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t;

io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_create(
    char *api_version,
    list_t *groups,
    char *kind
);

void io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list);

io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_listJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_H_ */

