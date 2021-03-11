#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_glusterfs_volume_source.h"



io_k8s_api_core_v1_glusterfs_volume_source_t *io_k8s_api_core_v1_glusterfs_volume_source_create(
    char *endpoints,
    char *path,
    int read_only
    ) {
    io_k8s_api_core_v1_glusterfs_volume_source_t *io_k8s_api_core_v1_glusterfs_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_glusterfs_volume_source_t));
    if (!io_k8s_api_core_v1_glusterfs_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_glusterfs_volume_source_local_var->endpoints = endpoints;
    io_k8s_api_core_v1_glusterfs_volume_source_local_var->path = path;
    io_k8s_api_core_v1_glusterfs_volume_source_local_var->read_only = read_only;

    return io_k8s_api_core_v1_glusterfs_volume_source_local_var;
}


void io_k8s_api_core_v1_glusterfs_volume_source_free(io_k8s_api_core_v1_glusterfs_volume_source_t *io_k8s_api_core_v1_glusterfs_volume_source) {
    if(NULL == io_k8s_api_core_v1_glusterfs_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_glusterfs_volume_source->endpoints) {
        free(io_k8s_api_core_v1_glusterfs_volume_source->endpoints);
        io_k8s_api_core_v1_glusterfs_volume_source->endpoints = NULL;
    }
    if (io_k8s_api_core_v1_glusterfs_volume_source->path) {
        free(io_k8s_api_core_v1_glusterfs_volume_source->path);
        io_k8s_api_core_v1_glusterfs_volume_source->path = NULL;
    }
    free(io_k8s_api_core_v1_glusterfs_volume_source);
}

cJSON *io_k8s_api_core_v1_glusterfs_volume_source_convertToJSON(io_k8s_api_core_v1_glusterfs_volume_source_t *io_k8s_api_core_v1_glusterfs_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_glusterfs_volume_source->endpoints
    if (!io_k8s_api_core_v1_glusterfs_volume_source->endpoints) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "endpoints", io_k8s_api_core_v1_glusterfs_volume_source->endpoints) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_glusterfs_volume_source->path
    if (!io_k8s_api_core_v1_glusterfs_volume_source->path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_core_v1_glusterfs_volume_source->path) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_glusterfs_volume_source->read_only
    if(io_k8s_api_core_v1_glusterfs_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_glusterfs_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_glusterfs_volume_source_t *io_k8s_api_core_v1_glusterfs_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_glusterfs_volume_sourceJSON){

    io_k8s_api_core_v1_glusterfs_volume_source_t *io_k8s_api_core_v1_glusterfs_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_glusterfs_volume_source->endpoints
    cJSON *endpoints = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_glusterfs_volume_sourceJSON, "endpoints");
    if (!endpoints) {
        goto end;
    }

    
    if(!cJSON_IsString(endpoints))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_glusterfs_volume_source->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_glusterfs_volume_sourceJSON, "path");
    if (!path) {
        goto end;
    }

    
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_glusterfs_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_glusterfs_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_core_v1_glusterfs_volume_source_local_var = io_k8s_api_core_v1_glusterfs_volume_source_create (
        strdup(endpoints->valuestring),
        strdup(path->valuestring),
        read_only ? read_only->valueint : 0
        );

    return io_k8s_api_core_v1_glusterfs_volume_source_local_var;
end:
    return NULL;

}
