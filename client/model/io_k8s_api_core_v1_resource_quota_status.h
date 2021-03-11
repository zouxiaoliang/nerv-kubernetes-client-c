/*
 * io_k8s_api_core_v1_resource_quota_status.h
 *
 * ResourceQuotaStatus defines the enforced hard limits and observed use.
 */

#ifndef _io_k8s_api_core_v1_resource_quota_status_H_
#define _io_k8s_api_core_v1_resource_quota_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_resource_quota_status_t io_k8s_api_core_v1_resource_quota_status_t;




typedef struct io_k8s_api_core_v1_resource_quota_status_t {
    list_t* hard; //map
    list_t* used; //map

} io_k8s_api_core_v1_resource_quota_status_t;

io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status_create(
    list_t* hard,
    list_t* used
);

void io_k8s_api_core_v1_resource_quota_status_free(io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status);

io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status_parseFromJSON(cJSON *io_k8s_api_core_v1_resource_quota_statusJSON);

cJSON *io_k8s_api_core_v1_resource_quota_status_convertToJSON(io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status);

#endif /* _io_k8s_api_core_v1_resource_quota_status_H_ */

