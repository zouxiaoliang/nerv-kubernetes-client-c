#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_binding.h"



io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_object_reference_t *target
    ) {
    io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding_local_var = malloc(sizeof(io_k8s_api_core_v1_binding_t));
    if (!io_k8s_api_core_v1_binding_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_binding_local_var->api_version = api_version;
    io_k8s_api_core_v1_binding_local_var->kind = kind;
    io_k8s_api_core_v1_binding_local_var->metadata = metadata;
    io_k8s_api_core_v1_binding_local_var->target = target;

    return io_k8s_api_core_v1_binding_local_var;
}


void io_k8s_api_core_v1_binding_free(io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding) {
    if(NULL == io_k8s_api_core_v1_binding){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_binding->api_version) {
        free(io_k8s_api_core_v1_binding->api_version);
        io_k8s_api_core_v1_binding->api_version = NULL;
    }
    if (io_k8s_api_core_v1_binding->kind) {
        free(io_k8s_api_core_v1_binding->kind);
        io_k8s_api_core_v1_binding->kind = NULL;
    }
    if (io_k8s_api_core_v1_binding->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_binding->metadata);
        io_k8s_api_core_v1_binding->metadata = NULL;
    }
    if (io_k8s_api_core_v1_binding->target) {
        io_k8s_api_core_v1_object_reference_free(io_k8s_api_core_v1_binding->target);
        io_k8s_api_core_v1_binding->target = NULL;
    }
    free(io_k8s_api_core_v1_binding);
}

cJSON *io_k8s_api_core_v1_binding_convertToJSON(io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_binding->api_version
    if(io_k8s_api_core_v1_binding->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_binding->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_binding->kind
    if(io_k8s_api_core_v1_binding->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_binding->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_binding->metadata
    if(io_k8s_api_core_v1_binding->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_binding->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_binding->target
    if (!io_k8s_api_core_v1_binding->target) {
        goto fail;
    }
    
    cJSON *target_local_JSON = io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_core_v1_binding->target);
    if(target_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "target", target_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding_parseFromJSON(cJSON *io_k8s_api_core_v1_bindingJSON){

    io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding_local_var = NULL;

    // io_k8s_api_core_v1_binding->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_bindingJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_binding->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_bindingJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_binding->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_bindingJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_core_v1_binding->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_bindingJSON, "target");
    if (!target) {
        goto end;
    }

    io_k8s_api_core_v1_object_reference_t *target_local_nonprim = NULL;
    
    target_local_nonprim = io_k8s_api_core_v1_object_reference_parseFromJSON(target); //nonprimitive


    io_k8s_api_core_v1_binding_local_var = io_k8s_api_core_v1_binding_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        target_local_nonprim
        );

    return io_k8s_api_core_v1_binding_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (target_local_nonprim) {
        io_k8s_api_core_v1_object_reference_free(target_local_nonprim);
        target_local_nonprim = NULL;
    }
    return NULL;

}
