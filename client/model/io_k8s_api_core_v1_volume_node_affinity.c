#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_volume_node_affinity.h"



io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity_create(
    io_k8s_api_core_v1_node_selector_t *required
    ) {
    io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity_local_var = malloc(sizeof(io_k8s_api_core_v1_volume_node_affinity_t));
    if (!io_k8s_api_core_v1_volume_node_affinity_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_volume_node_affinity_local_var->required = required;

    return io_k8s_api_core_v1_volume_node_affinity_local_var;
}


void io_k8s_api_core_v1_volume_node_affinity_free(io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity) {
    if(NULL == io_k8s_api_core_v1_volume_node_affinity){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_volume_node_affinity->required) {
        io_k8s_api_core_v1_node_selector_free(io_k8s_api_core_v1_volume_node_affinity->required);
        io_k8s_api_core_v1_volume_node_affinity->required = NULL;
    }
    free(io_k8s_api_core_v1_volume_node_affinity);
}

cJSON *io_k8s_api_core_v1_volume_node_affinity_convertToJSON(io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_volume_node_affinity->required
    if(io_k8s_api_core_v1_volume_node_affinity->required) { 
    cJSON *required_local_JSON = io_k8s_api_core_v1_node_selector_convertToJSON(io_k8s_api_core_v1_volume_node_affinity->required);
    if(required_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "required", required_local_JSON);
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

io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity_parseFromJSON(cJSON *io_k8s_api_core_v1_volume_node_affinityJSON){

    io_k8s_api_core_v1_volume_node_affinity_t *io_k8s_api_core_v1_volume_node_affinity_local_var = NULL;

    // io_k8s_api_core_v1_volume_node_affinity->required
    cJSON *required = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_node_affinityJSON, "required");
    io_k8s_api_core_v1_node_selector_t *required_local_nonprim = NULL;
    if (required) { 
    required_local_nonprim = io_k8s_api_core_v1_node_selector_parseFromJSON(required); //nonprimitive
    }


    io_k8s_api_core_v1_volume_node_affinity_local_var = io_k8s_api_core_v1_volume_node_affinity_create (
        required ? required_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_volume_node_affinity_local_var;
end:
    if (required_local_nonprim) {
        io_k8s_api_core_v1_node_selector_free(required_local_nonprim);
        required_local_nonprim = NULL;
    }
    return NULL;

}
