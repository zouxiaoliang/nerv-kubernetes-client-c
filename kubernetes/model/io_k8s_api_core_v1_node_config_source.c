#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_node_config_source.h"



io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source_create(
    io_k8s_api_core_v1_config_map_node_config_source_t *config_map
    ) {
    io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source_local_var = malloc(sizeof(io_k8s_api_core_v1_node_config_source_t));
    if (!io_k8s_api_core_v1_node_config_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_node_config_source_local_var->config_map = config_map;

    return io_k8s_api_core_v1_node_config_source_local_var;
}


void io_k8s_api_core_v1_node_config_source_free(io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source) {
    if(NULL == io_k8s_api_core_v1_node_config_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_node_config_source->config_map) {
        io_k8s_api_core_v1_config_map_node_config_source_free(io_k8s_api_core_v1_node_config_source->config_map);
        io_k8s_api_core_v1_node_config_source->config_map = NULL;
    }
    free(io_k8s_api_core_v1_node_config_source);
}

cJSON *io_k8s_api_core_v1_node_config_source_convertToJSON(io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_node_config_source->config_map
    if(io_k8s_api_core_v1_node_config_source->config_map) { 
    cJSON *config_map_local_JSON = io_k8s_api_core_v1_config_map_node_config_source_convertToJSON(io_k8s_api_core_v1_node_config_source->config_map);
    if(config_map_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "configMap", config_map_local_JSON);
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

io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source_parseFromJSON(cJSON *io_k8s_api_core_v1_node_config_sourceJSON){

    io_k8s_api_core_v1_node_config_source_t *io_k8s_api_core_v1_node_config_source_local_var = NULL;

    // io_k8s_api_core_v1_node_config_source->config_map
    cJSON *config_map = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_config_sourceJSON, "configMap");
    io_k8s_api_core_v1_config_map_node_config_source_t *config_map_local_nonprim = NULL;
    if (config_map) { 
    config_map_local_nonprim = io_k8s_api_core_v1_config_map_node_config_source_parseFromJSON(config_map); //nonprimitive
    }


    io_k8s_api_core_v1_node_config_source_local_var = io_k8s_api_core_v1_node_config_source_create (
        config_map ? config_map_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_node_config_source_local_var;
end:
    if (config_map_local_nonprim) {
        io_k8s_api_core_v1_config_map_node_config_source_free(config_map_local_nonprim);
        config_map_local_nonprim = NULL;
    }
    return NULL;

}
