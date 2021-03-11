#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_affinity.h"



io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity_create(
    io_k8s_api_core_v1_node_affinity_t *node_affinity,
    io_k8s_api_core_v1_pod_affinity_t *pod_affinity,
    io_k8s_api_core_v1_pod_anti_affinity_t *pod_anti_affinity
    ) {
    io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity_local_var = malloc(sizeof(io_k8s_api_core_v1_affinity_t));
    if (!io_k8s_api_core_v1_affinity_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_affinity_local_var->node_affinity = node_affinity;
    io_k8s_api_core_v1_affinity_local_var->pod_affinity = pod_affinity;
    io_k8s_api_core_v1_affinity_local_var->pod_anti_affinity = pod_anti_affinity;

    return io_k8s_api_core_v1_affinity_local_var;
}


void io_k8s_api_core_v1_affinity_free(io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity) {
    if(NULL == io_k8s_api_core_v1_affinity){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_affinity->node_affinity) {
        io_k8s_api_core_v1_node_affinity_free(io_k8s_api_core_v1_affinity->node_affinity);
        io_k8s_api_core_v1_affinity->node_affinity = NULL;
    }
    if (io_k8s_api_core_v1_affinity->pod_affinity) {
        io_k8s_api_core_v1_pod_affinity_free(io_k8s_api_core_v1_affinity->pod_affinity);
        io_k8s_api_core_v1_affinity->pod_affinity = NULL;
    }
    if (io_k8s_api_core_v1_affinity->pod_anti_affinity) {
        io_k8s_api_core_v1_pod_anti_affinity_free(io_k8s_api_core_v1_affinity->pod_anti_affinity);
        io_k8s_api_core_v1_affinity->pod_anti_affinity = NULL;
    }
    free(io_k8s_api_core_v1_affinity);
}

cJSON *io_k8s_api_core_v1_affinity_convertToJSON(io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_affinity->node_affinity
    if(io_k8s_api_core_v1_affinity->node_affinity) { 
    cJSON *node_affinity_local_JSON = io_k8s_api_core_v1_node_affinity_convertToJSON(io_k8s_api_core_v1_affinity->node_affinity);
    if(node_affinity_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nodeAffinity", node_affinity_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_affinity->pod_affinity
    if(io_k8s_api_core_v1_affinity->pod_affinity) { 
    cJSON *pod_affinity_local_JSON = io_k8s_api_core_v1_pod_affinity_convertToJSON(io_k8s_api_core_v1_affinity->pod_affinity);
    if(pod_affinity_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "podAffinity", pod_affinity_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_affinity->pod_anti_affinity
    if(io_k8s_api_core_v1_affinity->pod_anti_affinity) { 
    cJSON *pod_anti_affinity_local_JSON = io_k8s_api_core_v1_pod_anti_affinity_convertToJSON(io_k8s_api_core_v1_affinity->pod_anti_affinity);
    if(pod_anti_affinity_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "podAntiAffinity", pod_anti_affinity_local_JSON);
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

io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity_parseFromJSON(cJSON *io_k8s_api_core_v1_affinityJSON){

    io_k8s_api_core_v1_affinity_t *io_k8s_api_core_v1_affinity_local_var = NULL;

    // io_k8s_api_core_v1_affinity->node_affinity
    cJSON *node_affinity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_affinityJSON, "nodeAffinity");
    io_k8s_api_core_v1_node_affinity_t *node_affinity_local_nonprim = NULL;
    if (node_affinity) { 
    node_affinity_local_nonprim = io_k8s_api_core_v1_node_affinity_parseFromJSON(node_affinity); //nonprimitive
    }

    // io_k8s_api_core_v1_affinity->pod_affinity
    cJSON *pod_affinity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_affinityJSON, "podAffinity");
    io_k8s_api_core_v1_pod_affinity_t *pod_affinity_local_nonprim = NULL;
    if (pod_affinity) { 
    pod_affinity_local_nonprim = io_k8s_api_core_v1_pod_affinity_parseFromJSON(pod_affinity); //nonprimitive
    }

    // io_k8s_api_core_v1_affinity->pod_anti_affinity
    cJSON *pod_anti_affinity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_affinityJSON, "podAntiAffinity");
    io_k8s_api_core_v1_pod_anti_affinity_t *pod_anti_affinity_local_nonprim = NULL;
    if (pod_anti_affinity) { 
    pod_anti_affinity_local_nonprim = io_k8s_api_core_v1_pod_anti_affinity_parseFromJSON(pod_anti_affinity); //nonprimitive
    }


    io_k8s_api_core_v1_affinity_local_var = io_k8s_api_core_v1_affinity_create (
        node_affinity ? node_affinity_local_nonprim : NULL,
        pod_affinity ? pod_affinity_local_nonprim : NULL,
        pod_anti_affinity ? pod_anti_affinity_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_affinity_local_var;
end:
    if (node_affinity_local_nonprim) {
        io_k8s_api_core_v1_node_affinity_free(node_affinity_local_nonprim);
        node_affinity_local_nonprim = NULL;
    }
    if (pod_affinity_local_nonprim) {
        io_k8s_api_core_v1_pod_affinity_free(pod_affinity_local_nonprim);
        pod_affinity_local_nonprim = NULL;
    }
    if (pod_anti_affinity_local_nonprim) {
        io_k8s_api_core_v1_pod_anti_affinity_free(pod_anti_affinity_local_nonprim);
        pod_anti_affinity_local_nonprim = NULL;
    }
    return NULL;

}
