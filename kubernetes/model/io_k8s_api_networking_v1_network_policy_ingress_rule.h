/*
 * io_k8s_api_networking_v1_network_policy_ingress_rule.h
 *
 * NetworkPolicyIngressRule describes a particular set of traffic that is allowed to the pods matched by a NetworkPolicySpec&#39;s podSelector. The traffic must match both ports and from.
 */

#ifndef _io_k8s_api_networking_v1_network_policy_ingress_rule_H_
#define _io_k8s_api_networking_v1_network_policy_ingress_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_network_policy_ingress_rule_t io_k8s_api_networking_v1_network_policy_ingress_rule_t;

#include "io_k8s_api_networking_v1_network_policy_peer.h"
#include "io_k8s_api_networking_v1_network_policy_port.h"



typedef struct io_k8s_api_networking_v1_network_policy_ingress_rule_t {
    list_t *from; //nonprimitive container
    list_t *ports; //nonprimitive container

} io_k8s_api_networking_v1_network_policy_ingress_rule_t;

io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule_create(
    list_t *from,
    list_t *ports
);

void io_k8s_api_networking_v1_network_policy_ingress_rule_free(io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule);

io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policy_ingress_ruleJSON);

cJSON *io_k8s_api_networking_v1_network_policy_ingress_rule_convertToJSON(io_k8s_api_networking_v1_network_policy_ingress_rule_t *io_k8s_api_networking_v1_network_policy_ingress_rule);

#endif /* _io_k8s_api_networking_v1_network_policy_ingress_rule_H_ */

