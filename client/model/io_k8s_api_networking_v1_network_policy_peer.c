#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_network_policy_peer.h"



io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer_create(
    io_k8s_api_networking_v1_ip_block_t *ip_block,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *pod_selector
    ) {
    io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer_local_var = malloc(sizeof(io_k8s_api_networking_v1_network_policy_peer_t));
    if (!io_k8s_api_networking_v1_network_policy_peer_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_network_policy_peer_local_var->ip_block = ip_block;
    io_k8s_api_networking_v1_network_policy_peer_local_var->namespace_selector = namespace_selector;
    io_k8s_api_networking_v1_network_policy_peer_local_var->pod_selector = pod_selector;

    return io_k8s_api_networking_v1_network_policy_peer_local_var;
}


void io_k8s_api_networking_v1_network_policy_peer_free(io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer) {
    if(NULL == io_k8s_api_networking_v1_network_policy_peer){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_network_policy_peer->ip_block) {
        io_k8s_api_networking_v1_ip_block_free(io_k8s_api_networking_v1_network_policy_peer->ip_block);
        io_k8s_api_networking_v1_network_policy_peer->ip_block = NULL;
    }
    if (io_k8s_api_networking_v1_network_policy_peer->namespace_selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_networking_v1_network_policy_peer->namespace_selector);
        io_k8s_api_networking_v1_network_policy_peer->namespace_selector = NULL;
    }
    if (io_k8s_api_networking_v1_network_policy_peer->pod_selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_networking_v1_network_policy_peer->pod_selector);
        io_k8s_api_networking_v1_network_policy_peer->pod_selector = NULL;
    }
    free(io_k8s_api_networking_v1_network_policy_peer);
}

cJSON *io_k8s_api_networking_v1_network_policy_peer_convertToJSON(io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_network_policy_peer->ip_block
    if(io_k8s_api_networking_v1_network_policy_peer->ip_block) { 
    cJSON *ip_block_local_JSON = io_k8s_api_networking_v1_ip_block_convertToJSON(io_k8s_api_networking_v1_network_policy_peer->ip_block);
    if(ip_block_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ipBlock", ip_block_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_networking_v1_network_policy_peer->namespace_selector
    if(io_k8s_api_networking_v1_network_policy_peer->namespace_selector) { 
    cJSON *namespace_selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_networking_v1_network_policy_peer->namespace_selector);
    if(namespace_selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "namespaceSelector", namespace_selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_networking_v1_network_policy_peer->pod_selector
    if(io_k8s_api_networking_v1_network_policy_peer->pod_selector) { 
    cJSON *pod_selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_networking_v1_network_policy_peer->pod_selector);
    if(pod_selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "podSelector", pod_selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policy_peerJSON){

    io_k8s_api_networking_v1_network_policy_peer_t *io_k8s_api_networking_v1_network_policy_peer_local_var = NULL;

    // io_k8s_api_networking_v1_network_policy_peer->ip_block
    cJSON *ip_block = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_peerJSON, "ipBlock");
    io_k8s_api_networking_v1_ip_block_t *ip_block_local_nonprim = NULL;
    if (ip_block) { 
    ip_block_local_nonprim = io_k8s_api_networking_v1_ip_block_parseFromJSON(ip_block); //nonprimitive
    }

    // io_k8s_api_networking_v1_network_policy_peer->namespace_selector
    cJSON *namespace_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_peerJSON, "namespaceSelector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector_local_nonprim = NULL;
    if (namespace_selector) { 
    namespace_selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(namespace_selector); //nonprimitive
    }

    // io_k8s_api_networking_v1_network_policy_peer->pod_selector
    cJSON *pod_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_peerJSON, "podSelector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *pod_selector_local_nonprim = NULL;
    if (pod_selector) { 
    pod_selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(pod_selector); //nonprimitive
    }


    io_k8s_api_networking_v1_network_policy_peer_local_var = io_k8s_api_networking_v1_network_policy_peer_create (
        ip_block ? ip_block_local_nonprim : NULL,
        namespace_selector ? namespace_selector_local_nonprim : NULL,
        pod_selector ? pod_selector_local_nonprim : NULL
        );

    return io_k8s_api_networking_v1_network_policy_peer_local_var;
end:
    if (ip_block_local_nonprim) {
        io_k8s_api_networking_v1_ip_block_free(ip_block_local_nonprim);
        ip_block_local_nonprim = NULL;
    }
    if (namespace_selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(namespace_selector_local_nonprim);
        namespace_selector_local_nonprim = NULL;
    }
    if (pod_selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(pod_selector_local_nonprim);
        pod_selector_local_nonprim = NULL;
    }
    return NULL;

}
