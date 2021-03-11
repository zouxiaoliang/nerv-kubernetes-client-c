#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_host_path_volume_source.h"



io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source_create(
    char *path,
    char *type
    ) {
    io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_host_path_volume_source_t));
    if (!io_k8s_api_core_v1_host_path_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_host_path_volume_source_local_var->path = path;
    io_k8s_api_core_v1_host_path_volume_source_local_var->type = type;

    return io_k8s_api_core_v1_host_path_volume_source_local_var;
}


void io_k8s_api_core_v1_host_path_volume_source_free(io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source) {
    if(NULL == io_k8s_api_core_v1_host_path_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_host_path_volume_source->path) {
        free(io_k8s_api_core_v1_host_path_volume_source->path);
        io_k8s_api_core_v1_host_path_volume_source->path = NULL;
    }
    if (io_k8s_api_core_v1_host_path_volume_source->type) {
        free(io_k8s_api_core_v1_host_path_volume_source->type);
        io_k8s_api_core_v1_host_path_volume_source->type = NULL;
    }
    free(io_k8s_api_core_v1_host_path_volume_source);
}

cJSON *io_k8s_api_core_v1_host_path_volume_source_convertToJSON(io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_host_path_volume_source->path
    if (!io_k8s_api_core_v1_host_path_volume_source->path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_core_v1_host_path_volume_source->path) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_host_path_volume_source->type
    if(io_k8s_api_core_v1_host_path_volume_source->type) { 
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_host_path_volume_source->type) == NULL) {
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

io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_host_path_volume_sourceJSON){

    io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_host_path_volume_source->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_host_path_volume_sourceJSON, "path");
    if (!path) {
        goto end;
    }

    
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_host_path_volume_source->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_host_path_volume_sourceJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_host_path_volume_source_local_var = io_k8s_api_core_v1_host_path_volume_source_create (
        strdup(path->valuestring),
        type ? strdup(type->valuestring) : NULL
        );

    return io_k8s_api_core_v1_host_path_volume_source_local_var;
end:
    return NULL;

}
