/*
 * io_k8s_api_core_v1_resource_quota_spec.h
 *
 * ResourceQuotaSpec defines the desired hard limits to enforce for Quota.
 */

#ifndef _io_k8s_api_core_v1_resource_quota_spec_H_
#define _io_k8s_api_core_v1_resource_quota_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_resource_quota_spec_t io_k8s_api_core_v1_resource_quota_spec_t;

#include "io_k8s_api_core_v1_scope_selector.h"



typedef struct io_k8s_api_core_v1_resource_quota_spec_t {
    list_t* hard; //map
    struct io_k8s_api_core_v1_scope_selector_t *scope_selector; //model
    list_t *scopes; //primitive container

} io_k8s_api_core_v1_resource_quota_spec_t;

io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec_create(
    list_t* hard,
    io_k8s_api_core_v1_scope_selector_t *scope_selector,
    list_t *scopes
);

void io_k8s_api_core_v1_resource_quota_spec_free(io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec);

io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_resource_quota_specJSON);

cJSON *io_k8s_api_core_v1_resource_quota_spec_convertToJSON(io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec);

#endif /* _io_k8s_api_core_v1_resource_quota_spec_H_ */

