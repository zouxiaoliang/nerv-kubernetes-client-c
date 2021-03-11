/*
 * io_k8s_api_policy_v1beta1_eviction.h
 *
 * Eviction evicts a pod from its node subject to certain policies and safety constraints. This is a subresource of Pod.  A request to cause such an eviction is created by POSTing to .../pods/&lt;pod name&gt;/evictions.
 */

#ifndef _io_k8s_api_policy_v1beta1_eviction_H_
#define _io_k8s_api_policy_v1beta1_eviction_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_eviction_t io_k8s_api_policy_v1beta1_eviction_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_policy_v1beta1_eviction_t {
    char *api_version; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *delete_options; //model
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model

} io_k8s_api_policy_v1beta1_eviction_t;

io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction_create(
    char *api_version,
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *delete_options,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata
);

void io_k8s_api_policy_v1beta1_eviction_free(io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction);

io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_evictionJSON);

cJSON *io_k8s_api_policy_v1beta1_eviction_convertToJSON(io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction);

#endif /* _io_k8s_api_policy_v1beta1_eviction_H_ */

