#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_local_volume_source.h"



io_k8s_api_core_v1_local_volume_source_t *io_k8s_api_core_v1_local_volume_source_create(
    char *fs_type,
    char *path
    ) {
    io_k8s_api_core_v1_local_volume_source_t *io_k8s_api_core_v1_local_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_local_volume_source_t));
    if (!io_k8s_api_core_v1_local_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_local_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_local_volume_source_local_var->path = path;

    return io_k8s_api_core_v1_local_volume_source_local_var;
}


void io_k8s_api_core_v1_local_volume_source_free(io_k8s_api_core_v1_local_volume_source_t *io_k8s_api_core_v1_local_volume_source) {
    if(NULL == io_k8s_api_core_v1_local_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_local_volume_source->fs_type) {
        free(io_k8s_api_core_v1_local_volume_source->fs_type);
        io_k8s_api_core_v1_local_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_local_volume_source->path) {
        free(io_k8s_api_core_v1_local_volume_source->path);
        io_k8s_api_core_v1_local_volume_source->path = NULL;
    }
    free(io_k8s_api_core_v1_local_volume_source);
}

cJSON *io_k8s_api_core_v1_local_volume_source_convertToJSON(io_k8s_api_core_v1_local_volume_source_t *io_k8s_api_core_v1_local_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_local_volume_source->fs_type
    if(io_k8s_api_core_v1_local_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_local_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_local_volume_source->path
    if (!io_k8s_api_core_v1_local_volume_source->path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_core_v1_local_volume_source->path) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_local_volume_source_t *io_k8s_api_core_v1_local_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_local_volume_sourceJSON){

    io_k8s_api_core_v1_local_volume_source_t *io_k8s_api_core_v1_local_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_local_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_local_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_local_volume_source->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_local_volume_sourceJSON, "path");
    if (!path) {
        goto end;
    }

    
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_local_volume_source_local_var = io_k8s_api_core_v1_local_volume_source_create (
        fs_type ? strdup(fs_type->valuestring) : NULL,
        strdup(path->valuestring)
        );

    return io_k8s_api_core_v1_local_volume_source_local_var;
end:
    return NULL;

}
