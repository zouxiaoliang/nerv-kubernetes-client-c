/*
 * io_k8s_api_networking_v1_network_policy_spec.h
 *
 * NetworkPolicySpec provides the specification of a NetworkPolicy
 */

#ifndef _io_k8s_api_networking_v1_network_policy_spec_H_
#define _io_k8s_api_networking_v1_network_policy_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_network_policy_spec_t io_k8s_api_networking_v1_network_policy_spec_t;

#include "io_k8s_api_networking_v1_network_policy_egress_rule.h"
#include "io_k8s_api_networking_v1_network_policy_ingress_rule.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_networking_v1_network_policy_spec_t {
    list_t *egress; //nonprimitive container
    list_t *ingress; //nonprimitive container
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *pod_selector; //model
    list_t *policy_types; //primitive container

} io_k8s_api_networking_v1_network_policy_spec_t;

io_k8s_api_networking_v1_network_policy_spec_t *io_k8s_api_networking_v1_network_policy_spec_create(
    list_t *egress,
    list_t *ingress,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *pod_selector,
    list_t *policy_types
);

void io_k8s_api_networking_v1_network_policy_spec_free(io_k8s_api_networking_v1_network_policy_spec_t *io_k8s_api_networking_v1_network_policy_spec);

io_k8s_api_networking_v1_network_policy_spec_t *io_k8s_api_networking_v1_network_policy_spec_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policy_specJSON);

cJSON *io_k8s_api_networking_v1_network_policy_spec_convertToJSON(io_k8s_api_networking_v1_network_policy_spec_t *io_k8s_api_networking_v1_network_policy_spec);

#endif /* _io_k8s_api_networking_v1_network_policy_spec_H_ */

