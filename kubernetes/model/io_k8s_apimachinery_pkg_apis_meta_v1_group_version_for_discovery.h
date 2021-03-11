/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery.h
 *
 * GroupVersion contains the \&quot;group/version\&quot; and \&quot;version\&quot; string of a version. It is made a struct to keep extensibility.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t;




typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t {
    char *group_version; // string
    char *version; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t;

io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_create(
    char *group_version,
    char *version
);

void io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_free(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery);

io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discoveryJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_H_ */

