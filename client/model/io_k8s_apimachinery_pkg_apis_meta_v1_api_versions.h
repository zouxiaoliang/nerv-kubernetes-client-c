/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_api_versions.h
 *
 * APIVersions lists the versions that are available, to allow clients to discover the API at /api, which is the root path of the legacy v1 API.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t {
    char *api_version; // string
    char *kind; // string
    list_t *server_address_by_client_cidrs; //nonprimitive container
    list_t *versions; //primitive container

} io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t;

io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_create(
    char *api_version,
    char *kind,
    list_t *server_address_by_client_cidrs,
    list_t *versions
);

void io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions);

io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_versionsJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_H_ */

