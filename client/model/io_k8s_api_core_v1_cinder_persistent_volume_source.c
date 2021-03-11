#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_cinder_persistent_volume_source.h"



io_k8s_api_core_v1_cinder_persistent_volume_source_t *io_k8s_api_core_v1_cinder_persistent_volume_source_create(
    char *fs_type,
    int read_only,
    io_k8s_api_core_v1_secret_reference_t *secret_ref,
    char *volume_id
    ) {
    io_k8s_api_core_v1_cinder_persistent_volume_source_t *io_k8s_api_core_v1_cinder_persistent_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_cinder_persistent_volume_source_t));
    if (!io_k8s_api_core_v1_cinder_persistent_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_cinder_persistent_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_cinder_persistent_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_cinder_persistent_volume_source_local_var->secret_ref = secret_ref;
    io_k8s_api_core_v1_cinder_persistent_volume_source_local_var->volume_id = volume_id;

    return io_k8s_api_core_v1_cinder_persistent_volume_source_local_var;
}


void io_k8s_api_core_v1_cinder_persistent_volume_source_free(io_k8s_api_core_v1_cinder_persistent_volume_source_t *io_k8s_api_core_v1_cinder_persistent_volume_source) {
    if(NULL == io_k8s_api_core_v1_cinder_persistent_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_cinder_persistent_volume_source->fs_type) {
        free(io_k8s_api_core_v1_cinder_persistent_volume_source->fs_type);
        io_k8s_api_core_v1_cinder_persistent_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_cinder_persistent_volume_source->secret_ref) {
        io_k8s_api_core_v1_secret_reference_free(io_k8s_api_core_v1_cinder_persistent_volume_source->secret_ref);
        io_k8s_api_core_v1_cinder_persistent_volume_source->secret_ref = NULL;
    }
    if (io_k8s_api_core_v1_cinder_persistent_volume_source->volume_id) {
        free(io_k8s_api_core_v1_cinder_persistent_volume_source->volume_id);
        io_k8s_api_core_v1_cinder_persistent_volume_source->volume_id = NULL;
    }
    free(io_k8s_api_core_v1_cinder_persistent_volume_source);
}

cJSON *io_k8s_api_core_v1_cinder_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_cinder_persistent_volume_source_t *io_k8s_api_core_v1_cinder_persistent_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_cinder_persistent_volume_source->fs_type
    if(io_k8s_api_core_v1_cinder_persistent_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_cinder_persistent_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_cinder_persistent_volume_source->read_only
    if(io_k8s_api_core_v1_cinder_persistent_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_cinder_persistent_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_cinder_persistent_volume_source->secret_ref
    if(io_k8s_api_core_v1_cinder_persistent_volume_source->secret_ref) { 
    cJSON *secret_ref_local_JSON = io_k8s_api_core_v1_secret_reference_convertToJSON(io_k8s_api_core_v1_cinder_persistent_volume_source->secret_ref);
    if(secret_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secretRef", secret_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_cinder_persistent_volume_source->volume_id
    if (!io_k8s_api_core_v1_cinder_persistent_volume_source->volume_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "volumeID", io_k8s_api_core_v1_cinder_persistent_volume_source->volume_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_cinder_persistent_volume_source_t *io_k8s_api_core_v1_cinder_persistent_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_cinder_persistent_volume_sourceJSON){

    io_k8s_api_core_v1_cinder_persistent_volume_source_t *io_k8s_api_core_v1_cinder_persistent_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_cinder_persistent_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_cinder_persistent_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_cinder_persistent_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_cinder_persistent_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_cinder_persistent_volume_source->secret_ref
    cJSON *secret_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_cinder_persistent_volume_sourceJSON, "secretRef");
    io_k8s_api_core_v1_secret_reference_t *secret_ref_local_nonprim = NULL;
    if (secret_ref) { 
    secret_ref_local_nonprim = io_k8s_api_core_v1_secret_reference_parseFromJSON(secret_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_cinder_persistent_volume_source->volume_id
    cJSON *volume_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_cinder_persistent_volume_sourceJSON, "volumeID");
    if (!volume_id) {
        goto end;
    }

    
    if(!cJSON_IsString(volume_id))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_cinder_persistent_volume_source_local_var = io_k8s_api_core_v1_cinder_persistent_volume_source_create (
        fs_type ? strdup(fs_type->valuestring) : NULL,
        read_only ? read_only->valueint : 0,
        secret_ref ? secret_ref_local_nonprim : NULL,
        strdup(volume_id->valuestring)
        );

    return io_k8s_api_core_v1_cinder_persistent_volume_source_local_var;
end:
    if (secret_ref_local_nonprim) {
        io_k8s_api_core_v1_secret_reference_free(secret_ref_local_nonprim);
        secret_ref_local_nonprim = NULL;
    }
    return NULL;

}
