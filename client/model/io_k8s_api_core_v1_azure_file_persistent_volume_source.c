#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_azure_file_persistent_volume_source.h"



io_k8s_api_core_v1_azure_file_persistent_volume_source_t *io_k8s_api_core_v1_azure_file_persistent_volume_source_create(
    int read_only,
    char *secret_name,
    char *secret_namespace,
    char *share_name
    ) {
    io_k8s_api_core_v1_azure_file_persistent_volume_source_t *io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_azure_file_persistent_volume_source_t));
    if (!io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var->secret_name = secret_name;
    io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var->secret_namespace = secret_namespace;
    io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var->share_name = share_name;

    return io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var;
}


void io_k8s_api_core_v1_azure_file_persistent_volume_source_free(io_k8s_api_core_v1_azure_file_persistent_volume_source_t *io_k8s_api_core_v1_azure_file_persistent_volume_source) {
    if(NULL == io_k8s_api_core_v1_azure_file_persistent_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_name) {
        free(io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_name);
        io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_name = NULL;
    }
    if (io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_namespace) {
        free(io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_namespace);
        io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_namespace = NULL;
    }
    if (io_k8s_api_core_v1_azure_file_persistent_volume_source->share_name) {
        free(io_k8s_api_core_v1_azure_file_persistent_volume_source->share_name);
        io_k8s_api_core_v1_azure_file_persistent_volume_source->share_name = NULL;
    }
    free(io_k8s_api_core_v1_azure_file_persistent_volume_source);
}

cJSON *io_k8s_api_core_v1_azure_file_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_azure_file_persistent_volume_source_t *io_k8s_api_core_v1_azure_file_persistent_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_azure_file_persistent_volume_source->read_only
    if(io_k8s_api_core_v1_azure_file_persistent_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_azure_file_persistent_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_name
    if (!io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "secretName", io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_namespace
    if(io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_namespace) { 
    if(cJSON_AddStringToObject(item, "secretNamespace", io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_namespace) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_azure_file_persistent_volume_source->share_name
    if (!io_k8s_api_core_v1_azure_file_persistent_volume_source->share_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "shareName", io_k8s_api_core_v1_azure_file_persistent_volume_source->share_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_azure_file_persistent_volume_source_t *io_k8s_api_core_v1_azure_file_persistent_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_azure_file_persistent_volume_sourceJSON){

    io_k8s_api_core_v1_azure_file_persistent_volume_source_t *io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_azure_file_persistent_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_file_persistent_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_name
    cJSON *secret_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_file_persistent_volume_sourceJSON, "secretName");
    if (!secret_name) {
        goto end;
    }

    
    if(!cJSON_IsString(secret_name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_azure_file_persistent_volume_source->secret_namespace
    cJSON *secret_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_file_persistent_volume_sourceJSON, "secretNamespace");
    if (secret_namespace) { 
    if(!cJSON_IsString(secret_namespace))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_azure_file_persistent_volume_source->share_name
    cJSON *share_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_azure_file_persistent_volume_sourceJSON, "shareName");
    if (!share_name) {
        goto end;
    }

    
    if(!cJSON_IsString(share_name))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var = io_k8s_api_core_v1_azure_file_persistent_volume_source_create (
        read_only ? read_only->valueint : 0,
        strdup(secret_name->valuestring),
        secret_namespace ? strdup(secret_namespace->valuestring) : NULL,
        strdup(share_name->valuestring)
        );

    return io_k8s_api_core_v1_azure_file_persistent_volume_source_local_var;
end:
    return NULL;

}
