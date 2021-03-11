#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_scale_io_volume_source.h"



io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source_create(
    char *fs_type,
    char *gateway,
    char *protection_domain,
    int read_only,
    io_k8s_api_core_v1_local_object_reference_t *secret_ref,
    int ssl_enabled,
    char *storage_mode,
    char *storage_pool,
    char *system,
    char *volume_name
    ) {
    io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_scale_io_volume_source_t));
    if (!io_k8s_api_core_v1_scale_io_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_scale_io_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_scale_io_volume_source_local_var->gateway = gateway;
    io_k8s_api_core_v1_scale_io_volume_source_local_var->protection_domain = protection_domain;
    io_k8s_api_core_v1_scale_io_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_scale_io_volume_source_local_var->secret_ref = secret_ref;
    io_k8s_api_core_v1_scale_io_volume_source_local_var->ssl_enabled = ssl_enabled;
    io_k8s_api_core_v1_scale_io_volume_source_local_var->storage_mode = storage_mode;
    io_k8s_api_core_v1_scale_io_volume_source_local_var->storage_pool = storage_pool;
    io_k8s_api_core_v1_scale_io_volume_source_local_var->system = system;
    io_k8s_api_core_v1_scale_io_volume_source_local_var->volume_name = volume_name;

    return io_k8s_api_core_v1_scale_io_volume_source_local_var;
}


void io_k8s_api_core_v1_scale_io_volume_source_free(io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source) {
    if(NULL == io_k8s_api_core_v1_scale_io_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_scale_io_volume_source->fs_type) {
        free(io_k8s_api_core_v1_scale_io_volume_source->fs_type);
        io_k8s_api_core_v1_scale_io_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_scale_io_volume_source->gateway) {
        free(io_k8s_api_core_v1_scale_io_volume_source->gateway);
        io_k8s_api_core_v1_scale_io_volume_source->gateway = NULL;
    }
    if (io_k8s_api_core_v1_scale_io_volume_source->protection_domain) {
        free(io_k8s_api_core_v1_scale_io_volume_source->protection_domain);
        io_k8s_api_core_v1_scale_io_volume_source->protection_domain = NULL;
    }
    if (io_k8s_api_core_v1_scale_io_volume_source->secret_ref) {
        io_k8s_api_core_v1_local_object_reference_free(io_k8s_api_core_v1_scale_io_volume_source->secret_ref);
        io_k8s_api_core_v1_scale_io_volume_source->secret_ref = NULL;
    }
    if (io_k8s_api_core_v1_scale_io_volume_source->storage_mode) {
        free(io_k8s_api_core_v1_scale_io_volume_source->storage_mode);
        io_k8s_api_core_v1_scale_io_volume_source->storage_mode = NULL;
    }
    if (io_k8s_api_core_v1_scale_io_volume_source->storage_pool) {
        free(io_k8s_api_core_v1_scale_io_volume_source->storage_pool);
        io_k8s_api_core_v1_scale_io_volume_source->storage_pool = NULL;
    }
    if (io_k8s_api_core_v1_scale_io_volume_source->system) {
        free(io_k8s_api_core_v1_scale_io_volume_source->system);
        io_k8s_api_core_v1_scale_io_volume_source->system = NULL;
    }
    if (io_k8s_api_core_v1_scale_io_volume_source->volume_name) {
        free(io_k8s_api_core_v1_scale_io_volume_source->volume_name);
        io_k8s_api_core_v1_scale_io_volume_source->volume_name = NULL;
    }
    free(io_k8s_api_core_v1_scale_io_volume_source);
}

cJSON *io_k8s_api_core_v1_scale_io_volume_source_convertToJSON(io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_scale_io_volume_source->fs_type
    if(io_k8s_api_core_v1_scale_io_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_scale_io_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_scale_io_volume_source->gateway
    if (!io_k8s_api_core_v1_scale_io_volume_source->gateway) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "gateway", io_k8s_api_core_v1_scale_io_volume_source->gateway) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_scale_io_volume_source->protection_domain
    if(io_k8s_api_core_v1_scale_io_volume_source->protection_domain) { 
    if(cJSON_AddStringToObject(item, "protectionDomain", io_k8s_api_core_v1_scale_io_volume_source->protection_domain) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_scale_io_volume_source->read_only
    if(io_k8s_api_core_v1_scale_io_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_scale_io_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_scale_io_volume_source->secret_ref
    if (!io_k8s_api_core_v1_scale_io_volume_source->secret_ref) {
        goto fail;
    }
    
    cJSON *secret_ref_local_JSON = io_k8s_api_core_v1_local_object_reference_convertToJSON(io_k8s_api_core_v1_scale_io_volume_source->secret_ref);
    if(secret_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secretRef", secret_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_core_v1_scale_io_volume_source->ssl_enabled
    if(io_k8s_api_core_v1_scale_io_volume_source->ssl_enabled) { 
    if(cJSON_AddBoolToObject(item, "sslEnabled", io_k8s_api_core_v1_scale_io_volume_source->ssl_enabled) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_scale_io_volume_source->storage_mode
    if(io_k8s_api_core_v1_scale_io_volume_source->storage_mode) { 
    if(cJSON_AddStringToObject(item, "storageMode", io_k8s_api_core_v1_scale_io_volume_source->storage_mode) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_scale_io_volume_source->storage_pool
    if(io_k8s_api_core_v1_scale_io_volume_source->storage_pool) { 
    if(cJSON_AddStringToObject(item, "storagePool", io_k8s_api_core_v1_scale_io_volume_source->storage_pool) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_scale_io_volume_source->system
    if (!io_k8s_api_core_v1_scale_io_volume_source->system) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "system", io_k8s_api_core_v1_scale_io_volume_source->system) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_scale_io_volume_source->volume_name
    if(io_k8s_api_core_v1_scale_io_volume_source->volume_name) { 
    if(cJSON_AddStringToObject(item, "volumeName", io_k8s_api_core_v1_scale_io_volume_source->volume_name) == NULL) {
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

io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_scale_io_volume_sourceJSON){

    io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_scale_io_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_scale_io_volume_source->gateway
    cJSON *gateway = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "gateway");
    if (!gateway) {
        goto end;
    }

    
    if(!cJSON_IsString(gateway))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_scale_io_volume_source->protection_domain
    cJSON *protection_domain = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "protectionDomain");
    if (protection_domain) { 
    if(!cJSON_IsString(protection_domain))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_scale_io_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_scale_io_volume_source->secret_ref
    cJSON *secret_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "secretRef");
    if (!secret_ref) {
        goto end;
    }

    io_k8s_api_core_v1_local_object_reference_t *secret_ref_local_nonprim = NULL;
    
    secret_ref_local_nonprim = io_k8s_api_core_v1_local_object_reference_parseFromJSON(secret_ref); //nonprimitive

    // io_k8s_api_core_v1_scale_io_volume_source->ssl_enabled
    cJSON *ssl_enabled = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "sslEnabled");
    if (ssl_enabled) { 
    if(!cJSON_IsBool(ssl_enabled))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_scale_io_volume_source->storage_mode
    cJSON *storage_mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "storageMode");
    if (storage_mode) { 
    if(!cJSON_IsString(storage_mode))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_scale_io_volume_source->storage_pool
    cJSON *storage_pool = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "storagePool");
    if (storage_pool) { 
    if(!cJSON_IsString(storage_pool))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_scale_io_volume_source->system
    cJSON *system = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "system");
    if (!system) {
        goto end;
    }

    
    if(!cJSON_IsString(system))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_scale_io_volume_source->volume_name
    cJSON *volume_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scale_io_volume_sourceJSON, "volumeName");
    if (volume_name) { 
    if(!cJSON_IsString(volume_name))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_scale_io_volume_source_local_var = io_k8s_api_core_v1_scale_io_volume_source_create (
        fs_type ? strdup(fs_type->valuestring) : NULL,
        strdup(gateway->valuestring),
        protection_domain ? strdup(protection_domain->valuestring) : NULL,
        read_only ? read_only->valueint : 0,
        secret_ref_local_nonprim,
        ssl_enabled ? ssl_enabled->valueint : 0,
        storage_mode ? strdup(storage_mode->valuestring) : NULL,
        storage_pool ? strdup(storage_pool->valuestring) : NULL,
        strdup(system->valuestring),
        volume_name ? strdup(volume_name->valuestring) : NULL
        );

    return io_k8s_api_core_v1_scale_io_volume_source_local_var;
end:
    if (secret_ref_local_nonprim) {
        io_k8s_api_core_v1_local_object_reference_free(secret_ref_local_nonprim);
        secret_ref_local_nonprim = NULL;
    }
    return NULL;

}
