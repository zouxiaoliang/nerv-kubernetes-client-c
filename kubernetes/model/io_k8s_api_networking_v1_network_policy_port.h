/*
 * io_k8s_api_networking_v1_network_policy_port.h
 *
 * NetworkPolicyPort describes a port to allow traffic on
 */

#ifndef _io_k8s_api_networking_v1_network_policy_port_H_
#define _io_k8s_api_networking_v1_network_policy_port_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_network_policy_port_t io_k8s_api_networking_v1_network_policy_port_t;




typedef struct io_k8s_api_networking_v1_network_policy_port_t {
    int end_port; //numeric
    char *port; // string
    char *protocol; // string

} io_k8s_api_networking_v1_network_policy_port_t;

io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port_create(
    int end_port,
    char *port,
    char *protocol
);

void io_k8s_api_networking_v1_network_policy_port_free(io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port);

io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policy_portJSON);

cJSON *io_k8s_api_networking_v1_network_policy_port_convertToJSON(io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port);

#endif /* _io_k8s_api_networking_v1_network_policy_port_H_ */

