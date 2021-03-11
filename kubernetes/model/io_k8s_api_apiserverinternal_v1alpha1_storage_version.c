#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apiserverinternal_v1alpha1_storage_version.h"



io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    object_t *spec,
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *status
    ) {
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var = malloc(sizeof(io_k8s_api_apiserverinternal_v1alpha1_storage_version_t));
    if (!io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var) {
        return NULL;
    }
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var->api_version = api_version;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var->kind = kind;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var->metadata = metadata;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var->spec = spec;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var->status = status;

    return io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var;
}


void io_k8s_api_apiserverinternal_v1alpha1_storage_version_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version) {
    if(NULL == io_k8s_api_apiserverinternal_v1alpha1_storage_version){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version->api_version) {
        free(io_k8s_api_apiserverinternal_v1alpha1_storage_version->api_version);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version->api_version = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version->kind) {
        free(io_k8s_api_apiserverinternal_v1alpha1_storage_version->kind);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version->kind = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version->metadata);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version->metadata = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version->spec) {
        object_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version->spec);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version->spec = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version->status) {
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version->status);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version->status = NULL;
    }
    free(io_k8s_api_apiserverinternal_v1alpha1_storage_version);
}

cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->api_version
    if(io_k8s_api_apiserverinternal_v1alpha1_storage_version->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_apiserverinternal_v1alpha1_storage_version->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->kind
    if(io_k8s_api_apiserverinternal_v1alpha1_storage_version->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_apiserverinternal_v1alpha1_storage_version->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->metadata
    if(io_k8s_api_apiserverinternal_v1alpha1_storage_version->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->spec
    if (!io_k8s_api_apiserverinternal_v1alpha1_storage_version->spec) {
        goto fail;
    }
    
    cJSON *spec_object = object_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version->spec);
    if(spec_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "spec", spec_object);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->status
    if (!io_k8s_api_apiserverinternal_v1alpha1_storage_version->status) {
        goto fail;
    }
    
    cJSON *status_local_JSON = io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
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

io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_parseFromJSON(cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_versionJSON){

    io_k8s_api_apiserverinternal_v1alpha1_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var = NULL;

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_versionJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_versionJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_versionJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_versionJSON, "spec");
    if (!spec) {
        goto end;
    }

    object_t *spec_local_object = NULL;
    
    spec_local_object = object_parseFromJSON(spec); //object

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_versionJSON, "status");
    if (!status) {
        goto end;
    }

    io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *status_local_nonprim = NULL;
    
    status_local_nonprim = io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_parseFromJSON(status); //nonprimitive


    io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var = io_k8s_api_apiserverinternal_v1alpha1_storage_version_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        spec_local_object,
        status_local_nonprim
        );

    return io_k8s_api_apiserverinternal_v1alpha1_storage_version_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
