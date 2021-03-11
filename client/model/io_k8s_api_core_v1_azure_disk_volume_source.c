#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_azure_disk_volume_source.h"



io_k8s_api_core_v1_azure_disk_volume_source_t *io_k8s_api_core_v1_azure_disk_volume_source_create(
    char *caching_mode,
    char *disk_name,
    char *disk_uri,
    char *fs_type,
    char *kind,
    int read_only
    ) {
    io_k8s_api_core_v1_azure_disk_volume_source_t *io_k8s_api_core_v1_azure_disk_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_azure_disk_volume_source_t));
    if (!io_k8s_api_core_v1_azure_disk_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_azure_disk_volume_source_local_var->caching_mode = caching_mode;
    io_k8s_api_core_v1_azure_disk_volume_source_local_var->disk_name = disk_name;
    io_k8s_api_core_v1_azure_disk_volume_source_local_var->disk_uri = disk_uri;
    io_k8s_api_core_v1_azure_disk_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_azure_disk_volume_source_local_var->kind = kind;
    io_k8s_api_core_v1_azure_disk_volume_source_local_var->read_only = read_only;

    return io_k8s_api_core_v1_azure_disk_volume_source_local_var;
}


void io_k8s_api_core_v1_azure_disk_volume_source_free(io_k8s_api_core_v1_azure_disk_volume_source_t *io_k8s_api_core_v1_azure_disk_volume_source) {
    if(NULL == io_k8s_api_core_v1_azure_disk_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_azure_disk_volume_source->caching_mode) {
        free(io_k8s_api_core_v1_azure_disk_volume_source->caching_mode);
        io_k8s_api_core_v1_azure_disk_volume_source->caching_mode = NULL;
    }
    if (io_k8s_api_core_v1_azure_disk_volume_source->disk_name) {
        free(io_k8s_api_core_v1_azure_disk_volume_source->disk_name);
        io_k8s_api_core_v1_azure_disk_volume_source->disk_name = NULL;
    }
    if (io_k8s_api_core_v1_azure_disk_volume_source->disk_uri) {
        free(io_k8s_api_core_v1_azure_disk_volume_source->disk_uri);
        io_k8s_api_core_v1_azure_disk_volume_source->disk_uri = NULL;
    }
    if (io_k8s_api_core_v1_azure_disk_volume_source->fs_type) {
        free(io_k8s_api_core_v1_azure_disk_volume_source->fs_type);
        io_k8s_api_core_v1_azure_disk_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_azure_disk_volume_source->kind) {
        free(io_k8s_api_core_v1_azure_disk_volume_source->kind);
        io_k8s_api_core_v1_azure_disk_volume_source->kind = NULL;
    }
    free(io_k8s_api_core_v1_azure_disk_volume_source);
}

cJSON *io_k8s_api_core_v1_azure_disk_volume_source_convertToJSON(io_k8s_api_core_v1_azure_disk_volume_source_t *io_k8s_api_core_v1_azure_disk_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_azure_disk_volume_source->caching_mode
    if(io_k8s_api_core_v1_azure_disk_volume_source->caching_mode) { 
    if(cJSON_AddStringToObject(item, "cachingMode", io_k8s_api_core_v1_azure_disk_volume_source->caching_mode) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_azure_disk_volume_source->disk_name
    if (!io_k8s_api_core_v1_azure_disk_volume_source->disk_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "diskName", io_k8s_api_core_v1_azure_disk_volume_source->disk_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_azure_disk_volume_source->disk_uri
    if (!io_k8s_api_core_v1_azure_disk_volume_source->disk_uri) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "diskURI", io_k8s_api_core_v1_azure_disk_volume_source->disk_uri) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_azure_disk_volume_source->fs_type
    if(io_k8s_api_core_v1_azure_disk_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_azure_disk_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_azure_disk_volume_source->kind
    if(io_k8s_api_core_v1_azure_disk_volume_source->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_azure_disk_volume_source->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_azure_disk_volume_source->read_only
    if(io_k8s_api_core_v1_azure_disk_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_azure_disk_volume_source->read_only) == NULL) {
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

io_k8s_api_core_v1_azure_disk_volume_source_t *io_k8s_api_core_v1_azure_disk_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_azure_disk_volume_sourceJSON){

    io_k8s_api_core_v1_azure_disk_volume_source_t *io_k8s_api_core_v1_azure_disk_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_azure_disk_volume_source->caching_mode
    cJSON *caching_mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_disk_volume_sourceJSON, "cachingMode");
    if (caching_mode) { 
    if(!cJSON_IsString(caching_mode))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_azure_disk_volume_source->disk_name
    cJSON *disk_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_disk_volume_sourceJSON, "diskName");
    if (!disk_name) {
        goto end;
    }

    
    if(!cJSON_IsString(disk_name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_azure_disk_volume_source->disk_uri
    cJSON *disk_uri = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_disk_volume_sourceJSON, "diskURI");
    if (!disk_uri) {
        goto end;
    }

    
    if(!cJSON_IsString(disk_uri))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_azure_disk_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_disk_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_azure_disk_volume_source->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_disk_volume_sourceJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_azure_disk_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_disk_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_core_v1_azure_disk_volume_source_local_var = io_k8s_api_core_v1_azure_disk_volume_source_create (
        caching_mode ? strdup(caching_mode->valuestring) : NULL,
        strdup(disk_name->valuestring),
        strdup(disk_uri->valuestring),
        fs_type ? strdup(fs_type->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        read_only ? read_only->valueint : 0
        );

    return io_k8s_api_core_v1_azure_disk_volume_source_local_var;
end:
    return NULL;

}
