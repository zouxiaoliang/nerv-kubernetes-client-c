#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_node_daemon_endpoints.h"



io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints_create(
    io_k8s_api_core_v1_daemon_endpoint_t *kubelet_endpoint
    ) {
    io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints_local_var = malloc(sizeof(io_k8s_api_core_v1_node_daemon_endpoints_t));
    if (!io_k8s_api_core_v1_node_daemon_endpoints_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_node_daemon_endpoints_local_var->kubelet_endpoint = kubelet_endpoint;

    return io_k8s_api_core_v1_node_daemon_endpoints_local_var;
}


void io_k8s_api_core_v1_node_daemon_endpoints_free(io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints) {
    if(NULL == io_k8s_api_core_v1_node_daemon_endpoints){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_node_daemon_endpoints->kubelet_endpoint) {
        io_k8s_api_core_v1_daemon_endpoint_free(io_k8s_api_core_v1_node_daemon_endpoints->kubelet_endpoint);
        io_k8s_api_core_v1_node_daemon_endpoints->kubelet_endpoint = NULL;
    }
    free(io_k8s_api_core_v1_node_daemon_endpoints);
}

cJSON *io_k8s_api_core_v1_node_daemon_endpoints_convertToJSON(io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_node_daemon_endpoints->kubelet_endpoint
    if(io_k8s_api_core_v1_node_daemon_endpoints->kubelet_endpoint) { 
    cJSON *kubelet_endpoint_local_JSON = io_k8s_api_core_v1_daemon_endpoint_convertToJSON(io_k8s_api_core_v1_node_daemon_endpoints->kubelet_endpoint);
    if(kubelet_endpoint_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "kubeletEndpoint", kubelet_endpoint_local_JSON);
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

io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints_parseFromJSON(cJSON *io_k8s_api_core_v1_node_daemon_endpointsJSON){

    io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints_local_var = NULL;

    // io_k8s_api_core_v1_node_daemon_endpoints->kubelet_endpoint
    cJSON *kubelet_endpoint = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_daemon_endpointsJSON, "kubeletEndpoint");
    io_k8s_api_core_v1_daemon_endpoint_t *kubelet_endpoint_local_nonprim = NULL;
    if (kubelet_endpoint) { 
    kubelet_endpoint_local_nonprim = io_k8s_api_core_v1_daemon_endpoint_parseFromJSON(kubelet_endpoint); //nonprimitive
    }


    io_k8s_api_core_v1_node_daemon_endpoints_local_var = io_k8s_api_core_v1_node_daemon_endpoints_create (
        kubelet_endpoint ? kubelet_endpoint_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_node_daemon_endpoints_local_var;
end:
    if (kubelet_endpoint_local_nonprim) {
        io_k8s_api_core_v1_daemon_endpoint_free(kubelet_endpoint_local_nonprim);
        kubelet_endpoint_local_nonprim = NULL;
    }
    return NULL;

}
