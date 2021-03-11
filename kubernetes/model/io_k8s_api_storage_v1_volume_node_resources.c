#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1_volume_node_resources.h"



io_k8s_api_storage_v1_volume_node_resources_t *io_k8s_api_storage_v1_volume_node_resources_create(
    int count
    ) {
    io_k8s_api_storage_v1_volume_node_resources_t *io_k8s_api_storage_v1_volume_node_resources_local_var = malloc(sizeof(io_k8s_api_storage_v1_volume_node_resources_t));
    if (!io_k8s_api_storage_v1_volume_node_resources_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1_volume_node_resources_local_var->count = count;

    return io_k8s_api_storage_v1_volume_node_resources_local_var;
}


void io_k8s_api_storage_v1_volume_node_resources_free(io_k8s_api_storage_v1_volume_node_resources_t *io_k8s_api_storage_v1_volume_node_resources) {
    if(NULL == io_k8s_api_storage_v1_volume_node_resources){
        return ;
    }
    listEntry_t *listEntry;
    free(io_k8s_api_storage_v1_volume_node_resources);
}

cJSON *io_k8s_api_storage_v1_volume_node_resources_convertToJSON(io_k8s_api_storage_v1_volume_node_resources_t *io_k8s_api_storage_v1_volume_node_resources) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1_volume_node_resources->count
    if(io_k8s_api_storage_v1_volume_node_resources->count) { 
    if(cJSON_AddNumberToObject(item, "count", io_k8s_api_storage_v1_volume_node_resources->count) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_storage_v1_volume_node_resources_t *io_k8s_api_storage_v1_volume_node_resources_parseFromJSON(cJSON *io_k8s_api_storage_v1_volume_node_resourcesJSON){

    io_k8s_api_storage_v1_volume_node_resources_t *io_k8s_api_storage_v1_volume_node_resources_local_var = NULL;

    // io_k8s_api_storage_v1_volume_node_resources->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_volume_node_resourcesJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_storage_v1_volume_node_resources_local_var = io_k8s_api_storage_v1_volume_node_resources_create (
        count ? count->valuedouble : 0
        );

    return io_k8s_api_storage_v1_volume_node_resources_local_var;
end:
    return NULL;

}
