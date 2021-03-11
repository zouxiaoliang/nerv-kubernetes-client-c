/*
 * io_k8s_api_networking_v1_network_policy_egress_rule.h
 *
 * NetworkPolicyEgressRule describes a particular set of traffic that is allowed out of pods matched by a NetworkPolicySpec&#39;s podSelector. The traffic must match both ports and to. This type is beta-level in 1.8
 */

#ifndef _io_k8s_api_networking_v1_network_policy_egress_rule_H_
#define _io_k8s_api_networking_v1_network_policy_egress_rule_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_network_policy_egress_rule_t io_k8s_api_networking_v1_network_policy_egress_rule_t;

#include "io_k8s_api_networking_v1_network_policy_peer.h"
#include "io_k8s_api_networking_v1_network_policy_port.h"



typedef struct io_k8s_api_networking_v1_network_policy_egress_rule_t {
    list_t *ports; //nonprimitive container
    list_t *to; //nonprimitive container

} io_k8s_api_networking_v1_network_policy_egress_rule_t;

io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule_create(
    list_t *ports,
    list_t *to
);

void io_k8s_api_networking_v1_network_policy_egress_rule_free(io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule);

io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policy_egress_ruleJSON);

cJSON *io_k8s_api_networking_v1_network_policy_egress_rule_convertToJSON(io_k8s_api_networking_v1_network_policy_egress_rule_t *io_k8s_api_networking_v1_network_policy_egress_rule);

#endif /* _io_k8s_api_networking_v1_network_policy_egress_rule_H_ */

