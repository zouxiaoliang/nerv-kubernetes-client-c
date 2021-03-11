#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_empty_dir_volume_source.h"



io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source_create(
    char *medium,
    char *size_limit
    ) {
    io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_empty_dir_volume_source_t));
    if (!io_k8s_api_core_v1_empty_dir_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_empty_dir_volume_source_local_var->medium = medium;
    io_k8s_api_core_v1_empty_dir_volume_source_local_var->size_limit = size_limit;

    return io_k8s_api_core_v1_empty_dir_volume_source_local_var;
}


void io_k8s_api_core_v1_empty_dir_volume_source_free(io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source) {
    if(NULL == io_k8s_api_core_v1_empty_dir_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_empty_dir_volume_source->medium) {
        free(io_k8s_api_core_v1_empty_dir_volume_source->medium);
        io_k8s_api_core_v1_empty_dir_volume_source->medium = NULL;
    }
    if (io_k8s_api_core_v1_empty_dir_volume_source->size_limit) {
        free(io_k8s_api_core_v1_empty_dir_volume_source->size_limit);
        io_k8s_api_core_v1_empty_dir_volume_source->size_limit = NULL;
    }
    free(io_k8s_api_core_v1_empty_dir_volume_source);
}

cJSON *io_k8s_api_core_v1_empty_dir_volume_source_convertToJSON(io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_empty_dir_volume_source->medium
    if(io_k8s_api_core_v1_empty_dir_volume_source->medium) { 
    if(cJSON_AddStringToObject(item, "medium", io_k8s_api_core_v1_empty_dir_volume_source->medium) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_empty_dir_volume_source->size_limit
    if(io_k8s_api_core_v1_empty_dir_volume_source->size_limit) { 
    if(cJSON_AddStringToObject(item, "sizeLimit", io_k8s_api_core_v1_empty_dir_volume_source->size_limit) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_empty_dir_volume_sourceJSON){

    io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_empty_dir_volume_source->medium
    cJSON *medium = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_empty_dir_volume_sourceJSON, "medium");
    if (medium) { 
    if(!cJSON_IsString(medium))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_empty_dir_volume_source->size_limit
    cJSON *size_limit = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_empty_dir_volume_sourceJSON, "sizeLimit");
    if (size_limit) { 
    if(!cJSON_IsString(size_limit))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_empty_dir_volume_source_local_var = io_k8s_api_core_v1_empty_dir_volume_source_create (
        medium ? strdup(medium->valuestring) : NULL,
        size_limit ? strdup(size_limit->valuestring) : NULL
        );

    return io_k8s_api_core_v1_empty_dir_volume_source_local_var;
end:
    return NULL;

}
