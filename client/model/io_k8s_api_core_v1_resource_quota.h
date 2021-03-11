/*
 * io_k8s_api_core_v1_resource_quota.h
 *
 * ResourceQuota sets aggregate quota restrictions enforced per namespace
 */

#ifndef _io_k8s_api_core_v1_resource_quota_H_
#define _io_k8s_api_core_v1_resource_quota_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_resource_quota_t io_k8s_api_core_v1_resource_quota_t;

#include "io_k8s_api_core_v1_resource_quota_spec.h"
#include "io_k8s_api_core_v1_resource_quota_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_resource_quota_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_resource_quota_spec_t *spec; //model
    struct io_k8s_api_core_v1_resource_quota_status_t *status; //model

} io_k8s_api_core_v1_resource_quota_t;

io_k8s_api_core_v1_resource_quota_t *io_k8s_api_core_v1_resource_quota_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_resource_quota_spec_t *spec,
    io_k8s_api_core_v1_resource_quota_status_t *status
);

void io_k8s_api_core_v1_resource_quota_free(io_k8s_api_core_v1_resource_quota_t *io_k8s_api_core_v1_resource_quota);

io_k8s_api_core_v1_resource_quota_t *io_k8s_api_core_v1_resource_quota_parseFromJSON(cJSON *io_k8s_api_core_v1_resource_quotaJSON);

cJSON *io_k8s_api_core_v1_resource_quota_convertToJSON(io_k8s_api_core_v1_resource_quota_t *io_k8s_api_core_v1_resource_quota);

#endif /* _io_k8s_api_core_v1_resource_quota_H_ */

