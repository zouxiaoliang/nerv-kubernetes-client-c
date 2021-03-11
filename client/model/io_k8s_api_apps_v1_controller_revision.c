#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apps_v1_controller_revision.h"



io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision_create(
    char *api_version,
    object_t *data,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    long revision
    ) {
    io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision_local_var = malloc(sizeof(io_k8s_api_apps_v1_controller_revision_t));
    if (!io_k8s_api_apps_v1_controller_revision_local_var) {
        return NULL;
    }
    io_k8s_api_apps_v1_controller_revision_local_var->api_version = api_version;
    io_k8s_api_apps_v1_controller_revision_local_var->data = data;
    io_k8s_api_apps_v1_controller_revision_local_var->kind = kind;
    io_k8s_api_apps_v1_controller_revision_local_var->metadata = metadata;
    io_k8s_api_apps_v1_controller_revision_local_var->revision = revision;

    return io_k8s_api_apps_v1_controller_revision_local_var;
}


void io_k8s_api_apps_v1_controller_revision_free(io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision) {
    if(NULL == io_k8s_api_apps_v1_controller_revision){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apps_v1_controller_revision->api_version) {
        free(io_k8s_api_apps_v1_controller_revision->api_version);
        io_k8s_api_apps_v1_controller_revision->api_version = NULL;
    }
    if (io_k8s_api_apps_v1_controller_revision->data) {
        object_free(io_k8s_api_apps_v1_controller_revision->data);
        io_k8s_api_apps_v1_controller_revision->data = NULL;
    }
    if (io_k8s_api_apps_v1_controller_revision->kind) {
        free(io_k8s_api_apps_v1_controller_revision->kind);
        io_k8s_api_apps_v1_controller_revision->kind = NULL;
    }
    if (io_k8s_api_apps_v1_controller_revision->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_apps_v1_controller_revision->metadata);
        io_k8s_api_apps_v1_controller_revision->metadata = NULL;
    }
    free(io_k8s_api_apps_v1_controller_revision);
}

cJSON *io_k8s_api_apps_v1_controller_revision_convertToJSON(io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apps_v1_controller_revision->api_version
    if(io_k8s_api_apps_v1_controller_revision->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_apps_v1_controller_revision->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apps_v1_controller_revision->data
    if(io_k8s_api_apps_v1_controller_revision->data) { 
    cJSON *data_object = object_convertToJSON(io_k8s_api_apps_v1_controller_revision->data);
    if(data_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "data", data_object);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_apps_v1_controller_revision->kind
    if(io_k8s_api_apps_v1_controller_revision->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_apps_v1_controller_revision->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apps_v1_controller_revision->metadata
    if(io_k8s_api_apps_v1_controller_revision->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_apps_v1_controller_revision->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_apps_v1_controller_revision->revision
    if (!io_k8s_api_apps_v1_controller_revision->revision) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "revision", io_k8s_api_apps_v1_controller_revision->revision) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision_parseFromJSON(cJSON *io_k8s_api_apps_v1_controller_revisionJSON){

    io_k8s_api_apps_v1_controller_revision_t *io_k8s_api_apps_v1_controller_revision_local_var = NULL;

    // io_k8s_api_apps_v1_controller_revision->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_controller_revisionJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apps_v1_controller_revision->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_controller_revisionJSON, "data");
    object_t *data_local_object = NULL;
    if (data) { 
    data_local_object = object_parseFromJSON(data); //object
    }

    // io_k8s_api_apps_v1_controller_revision->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_controller_revisionJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apps_v1_controller_revision->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_controller_revisionJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_apps_v1_controller_revision->revision
    cJSON *revision = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_controller_revisionJSON, "revision");
    if (!revision) {
        goto end;
    }

    
    if(!cJSON_IsNumber(revision))
    {
    goto end; //Numeric
    }


    io_k8s_api_apps_v1_controller_revision_local_var = io_k8s_api_apps_v1_controller_revision_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        data ? data_local_object : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        revision->valuedouble
        );

    return io_k8s_api_apps_v1_controller_revision_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
