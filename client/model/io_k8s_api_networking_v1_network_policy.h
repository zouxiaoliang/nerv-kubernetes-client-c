/*
 * io_k8s_api_networking_v1_network_policy.h
 *
 * NetworkPolicy describes what network traffic is allowed for a set of Pods
 */

#ifndef _io_k8s_api_networking_v1_network_policy_H_
#define _io_k8s_api_networking_v1_network_policy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_network_policy_t io_k8s_api_networking_v1_network_policy_t;

#include "io_k8s_api_networking_v1_network_policy_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_networking_v1_network_policy_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_networking_v1_network_policy_spec_t *spec; //model

} io_k8s_api_networking_v1_network_policy_t;

io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_networking_v1_network_policy_spec_t *spec
);

void io_k8s_api_networking_v1_network_policy_free(io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy);

io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policyJSON);

cJSON *io_k8s_api_networking_v1_network_policy_convertToJSON(io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy);

#endif /* _io_k8s_api_networking_v1_network_policy_H_ */

