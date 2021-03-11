#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_eviction.h"



io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction_create(
    char *api_version,
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *delete_options,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata
    ) {
    io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_eviction_t));
    if (!io_k8s_api_policy_v1beta1_eviction_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_eviction_local_var->api_version = api_version;
    io_k8s_api_policy_v1beta1_eviction_local_var->delete_options = delete_options;
    io_k8s_api_policy_v1beta1_eviction_local_var->kind = kind;
    io_k8s_api_policy_v1beta1_eviction_local_var->metadata = metadata;

    return io_k8s_api_policy_v1beta1_eviction_local_var;
}


void io_k8s_api_policy_v1beta1_eviction_free(io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction) {
    if(NULL == io_k8s_api_policy_v1beta1_eviction){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_policy_v1beta1_eviction->api_version) {
        free(io_k8s_api_policy_v1beta1_eviction->api_version);
        io_k8s_api_policy_v1beta1_eviction->api_version = NULL;
    }
    if (io_k8s_api_policy_v1beta1_eviction->delete_options) {
        io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_free(io_k8s_api_policy_v1beta1_eviction->delete_options);
        io_k8s_api_policy_v1beta1_eviction->delete_options = NULL;
    }
    if (io_k8s_api_policy_v1beta1_eviction->kind) {
        free(io_k8s_api_policy_v1beta1_eviction->kind);
        io_k8s_api_policy_v1beta1_eviction->kind = NULL;
    }
    if (io_k8s_api_policy_v1beta1_eviction->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_policy_v1beta1_eviction->metadata);
        io_k8s_api_policy_v1beta1_eviction->metadata = NULL;
    }
    free(io_k8s_api_policy_v1beta1_eviction);
}

cJSON *io_k8s_api_policy_v1beta1_eviction_convertToJSON(io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_eviction->api_version
    if(io_k8s_api_policy_v1beta1_eviction->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_policy_v1beta1_eviction->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_policy_v1beta1_eviction->delete_options
    if(io_k8s_api_policy_v1beta1_eviction->delete_options) { 
    cJSON *delete_options_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_convertToJSON(io_k8s_api_policy_v1beta1_eviction->delete_options);
    if(delete_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "deleteOptions", delete_options_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_policy_v1beta1_eviction->kind
    if(io_k8s_api_policy_v1beta1_eviction->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_policy_v1beta1_eviction->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_policy_v1beta1_eviction->metadata
    if(io_k8s_api_policy_v1beta1_eviction->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_policy_v1beta1_eviction->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_evictionJSON){

    io_k8s_api_policy_v1beta1_eviction_t *io_k8s_api_policy_v1beta1_eviction_local_var = NULL;

    // io_k8s_api_policy_v1beta1_eviction->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_evictionJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_policy_v1beta1_eviction->delete_options
    cJSON *delete_options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_evictionJSON, "deleteOptions");
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *delete_options_local_nonprim = NULL;
    if (delete_options) { 
    delete_options_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_parseFromJSON(delete_options); //nonprimitive
    }

    // io_k8s_api_policy_v1beta1_eviction->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_evictionJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_policy_v1beta1_eviction->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_evictionJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }


    io_k8s_api_policy_v1beta1_eviction_local_var = io_k8s_api_policy_v1beta1_eviction_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        delete_options ? delete_options_local_nonprim : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL
        );

    return io_k8s_api_policy_v1beta1_eviction_local_var;
end:
    if (delete_options_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_free(delete_options_local_nonprim);
        delete_options_local_nonprim = NULL;
    }
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
