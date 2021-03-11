#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1_volume_attachment_source.h"



io_k8s_api_storage_v1_volume_attachment_source_t *io_k8s_api_storage_v1_volume_attachment_source_create(
    io_k8s_api_core_v1_persistent_volume_spec_t *inline_volume_spec,
    char *persistent_volume_name
    ) {
    io_k8s_api_storage_v1_volume_attachment_source_t *io_k8s_api_storage_v1_volume_attachment_source_local_var = malloc(sizeof(io_k8s_api_storage_v1_volume_attachment_source_t));
    if (!io_k8s_api_storage_v1_volume_attachment_source_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1_volume_attachment_source_local_var->inline_volume_spec = inline_volume_spec;
    io_k8s_api_storage_v1_volume_attachment_source_local_var->persistent_volume_name = persistent_volume_name;

    return io_k8s_api_storage_v1_volume_attachment_source_local_var;
}


void io_k8s_api_storage_v1_volume_attachment_source_free(io_k8s_api_storage_v1_volume_attachment_source_t *io_k8s_api_storage_v1_volume_attachment_source) {
    if(NULL == io_k8s_api_storage_v1_volume_attachment_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1_volume_attachment_source->inline_volume_spec) {
        io_k8s_api_core_v1_persistent_volume_spec_free(io_k8s_api_storage_v1_volume_attachment_source->inline_volume_spec);
        io_k8s_api_storage_v1_volume_attachment_source->inline_volume_spec = NULL;
    }
    if (io_k8s_api_storage_v1_volume_attachment_source->persistent_volume_name) {
        free(io_k8s_api_storage_v1_volume_attachment_source->persistent_volume_name);
        io_k8s_api_storage_v1_volume_attachment_source->persistent_volume_name = NULL;
    }
    free(io_k8s_api_storage_v1_volume_attachment_source);
}

cJSON *io_k8s_api_storage_v1_volume_attachment_source_convertToJSON(io_k8s_api_storage_v1_volume_attachment_source_t *io_k8s_api_storage_v1_volume_attachment_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1_volume_attachment_source->inline_volume_spec
    if(io_k8s_api_storage_v1_volume_attachment_source->inline_volume_spec) { 
    cJSON *inline_volume_spec_local_JSON = io_k8s_api_core_v1_persistent_volume_spec_convertToJSON(io_k8s_api_storage_v1_volume_attachment_source->inline_volume_spec);
    if(inline_volume_spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "inlineVolumeSpec", inline_volume_spec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_storage_v1_volume_attachment_source->persistent_volume_name
    if(io_k8s_api_storage_v1_volume_attachment_source->persistent_volume_name) { 
    if(cJSON_AddStringToObject(item, "persistentVolumeName", io_k8s_api_storage_v1_volume_attachment_source->persistent_volume_name) == NULL) {
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

io_k8s_api_storage_v1_volume_attachment_source_t *io_k8s_api_storage_v1_volume_attachment_source_parseFromJSON(cJSON *io_k8s_api_storage_v1_volume_attachment_sourceJSON){

    io_k8s_api_storage_v1_volume_attachment_source_t *io_k8s_api_storage_v1_volume_attachment_source_local_var = NULL;

    // io_k8s_api_storage_v1_volume_attachment_source->inline_volume_spec
    cJSON *inline_volume_spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_volume_attachment_sourceJSON, "inlineVolumeSpec");
    io_k8s_api_core_v1_persistent_volume_spec_t *inline_volume_spec_local_nonprim = NULL;
    if (inline_volume_spec) { 
    inline_volume_spec_local_nonprim = io_k8s_api_core_v1_persistent_volume_spec_parseFromJSON(inline_volume_spec); //nonprimitive
    }

    // io_k8s_api_storage_v1_volume_attachment_source->persistent_volume_name
    cJSON *persistent_volume_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_volume_attachment_sourceJSON, "persistentVolumeName");
    if (persistent_volume_name) { 
    if(!cJSON_IsString(persistent_volume_name))
    {
    goto end; //String
    }
    }


    io_k8s_api_storage_v1_volume_attachment_source_local_var = io_k8s_api_storage_v1_volume_attachment_source_create (
        inline_volume_spec ? inline_volume_spec_local_nonprim : NULL,
        persistent_volume_name ? strdup(persistent_volume_name->valuestring) : NULL
        );

    return io_k8s_api_storage_v1_volume_attachment_source_local_var;
end:
    if (inline_volume_spec_local_nonprim) {
        io_k8s_api_core_v1_persistent_volume_spec_free(inline_volume_spec_local_nonprim);
        inline_volume_spec_local_nonprim = NULL;
    }
    return NULL;

}
