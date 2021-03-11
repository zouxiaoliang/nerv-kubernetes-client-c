/*
 * io_k8s_api_networking_v1_network_policy_peer.h
 *
 * NetworkPolicyPeer describes a peer to allow traffic to/from. Only certain combinations of fields are allowed
 */

#ifndef _io_k8s_api_networking_v1_network_policy_peer_H_
#define _io_k8s_api_networking_v1_network_policy_peer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_network_policy_peer_t io_k8s_api_networking_v1_network_policy_peer_t;

#include "io_k8s_api_networking_v1_ip_block.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_networking_v1_network_policy_peer_t {
    struct io_k8s_api_networking_v1_ip_block_t *ip_block; //model
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector; //model
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *pod_selector; //model

} io_k8s_api_networking_v1_network_policy_peer_t;

io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer_create(
    io_k8s_api_networking_v1_ip_block_t *ip_block,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *pod_selector
);

void io_k8s_api_networking_v1_network_policy_peer_free(io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer);

io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policy_peerJSON);

cJSON *io_k8s_api_networking_v1_network_policy_peer_convertToJSON(io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer);

#endif /* _io_k8s_api_networking_v1_network_policy_peer_H_ */

