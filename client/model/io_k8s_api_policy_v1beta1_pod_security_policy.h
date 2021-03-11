/*
 * io_k8s_api_policy_v1beta1_pod_security_policy.h
 *
 * PodSecurityPolicy governs the ability to make requests that affect the Security Context that will be applied to a pod and container. Deprecated in 1.21.
 */

#ifndef _io_k8s_api_policy_v1beta1_pod_security_policy_H_
#define _io_k8s_api_policy_v1beta1_pod_security_policy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_pod_security_policy_t io_k8s_api_policy_v1beta1_pod_security_policy_t;

#include "io_k8s_api_policy_v1beta1_pod_security_policy_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_policy_v1beta1_pod_security_policy_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *spec; //model

} io_k8s_api_policy_v1beta1_pod_security_policy_t;

io_k8s_api_policy_v1beta1_pod_security_policy_t *io_k8s_api_policy_v1beta1_pod_security_policy_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_policy_v1beta1_pod_security_policy_spec_t *spec
);

void io_k8s_api_policy_v1beta1_pod_security_policy_free(io_k8s_api_policy_v1beta1_pod_security_policy_t *io_k8s_api_policy_v1beta1_pod_security_policy);

io_k8s_api_policy_v1beta1_pod_security_policy_t *io_k8s_api_policy_v1beta1_pod_security_policy_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_pod_security_policyJSON);

cJSON *io_k8s_api_policy_v1beta1_pod_security_policy_convertToJSON(io_k8s_api_policy_v1beta1_pod_security_policy_t *io_k8s_api_policy_v1beta1_pod_security_policy);

#endif /* _io_k8s_api_policy_v1beta1_pod_security_policy_H_ */

