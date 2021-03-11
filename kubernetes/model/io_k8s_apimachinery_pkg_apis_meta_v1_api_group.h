/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_api_group.h
 *
 * APIGroup contains the name, the supported versions, and the preferred version of a group.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_api_group_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_api_group_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t {
    char *api_version; // string
    char *kind; // string
    char *name; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *preferred_version; //model
    list_t *server_address_by_client_cidrs; //nonprimitive container
    list_t *versions; //nonprimitive container

} io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t;

io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_create(
    char *api_version,
    char *kind,
    char *name,
    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *preferred_version,
    list_t *server_address_by_client_cidrs,
    list_t *versions
);

void io_k8s_apimachinery_pkg_apis_meta_v1_api_group_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group);

io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_groupJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_api_group_H_ */

