#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_vsphere_virtual_disk_volume_source.h"



io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_create(
    char *fs_type,
    char *storage_policy_id,
    char *storage_policy_name,
    char *volume_path
    ) {
    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t));
    if (!io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var->storage_policy_id = storage_policy_id;
    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var->storage_policy_name = storage_policy_name;
    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var->volume_path = volume_path;

    return io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var;
}


void io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_free(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source) {
    if(NULL == io_k8s_api_core_v1_vsphere_virtual_disk_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->fs_type) {
        free(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->fs_type);
        io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_id) {
        free(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_id);
        io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_id = NULL;
    }
    if (io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_name) {
        free(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_name);
        io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_name = NULL;
    }
    if (io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->volume_path) {
        free(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->volume_path);
        io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->volume_path = NULL;
    }
    free(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source);
}

cJSON *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_convertToJSON(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->fs_type
    if(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_id
    if(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_id) { 
    if(cJSON_AddStringToObject(item, "storagePolicyID", io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_id) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_name
    if(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_name) { 
    if(cJSON_AddStringToObject(item, "storagePolicyName", io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->volume_path
    if (!io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->volume_path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "volumePath", io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->volume_path) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_vsphere_virtual_disk_volume_sourceJSON){

    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_vsphere_virtual_disk_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_id
    cJSON *storage_policy_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_vsphere_virtual_disk_volume_sourceJSON, "storagePolicyID");
    if (storage_policy_id) { 
    if(!cJSON_IsString(storage_policy_id))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->storage_policy_name
    cJSON *storage_policy_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_vsphere_virtual_disk_volume_sourceJSON, "storagePolicyName");
    if (storage_policy_name) { 
    if(!cJSON_IsString(storage_policy_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_vsphere_virtual_disk_volume_source->volume_path
    cJSON *volume_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_vsphere_virtual_disk_volume_sourceJSON, "volumePath");
    if (!volume_path) {
        goto end;
    }

    
    if(!cJSON_IsString(volume_path))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var = io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_create (
        fs_type ? strdup(fs_type->valuestring) : NULL,
        storage_policy_id ? strdup(storage_policy_id->valuestring) : NULL,
        storage_policy_name ? strdup(storage_policy_name->valuestring) : NULL,
        strdup(volume_path->valuestring)
        );

    return io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_local_var;
end:
    return NULL;

}
