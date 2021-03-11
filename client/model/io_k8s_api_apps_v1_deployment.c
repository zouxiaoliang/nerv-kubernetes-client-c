#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apps_v1_deployment.h"



io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_apps_v1_deployment_spec_t *spec,
    io_k8s_api_apps_v1_deployment_status_t *status
    ) {
    io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment_local_var = malloc(sizeof(io_k8s_api_apps_v1_deployment_t));
    if (!io_k8s_api_apps_v1_deployment_local_var) {
        return NULL;
    }
    io_k8s_api_apps_v1_deployment_local_var->api_version = api_version;
    io_k8s_api_apps_v1_deployment_local_var->kind = kind;
    io_k8s_api_apps_v1_deployment_local_var->metadata = metadata;
    io_k8s_api_apps_v1_deployment_local_var->spec = spec;
    io_k8s_api_apps_v1_deployment_local_var->status = status;

    return io_k8s_api_apps_v1_deployment_local_var;
}


void io_k8s_api_apps_v1_deployment_free(io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment) {
    if(NULL == io_k8s_api_apps_v1_deployment){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apps_v1_deployment->api_version) {
        free(io_k8s_api_apps_v1_deployment->api_version);
        io_k8s_api_apps_v1_deployment->api_version = NULL;
    }
    if (io_k8s_api_apps_v1_deployment->kind) {
        free(io_k8s_api_apps_v1_deployment->kind);
        io_k8s_api_apps_v1_deployment->kind = NULL;
    }
    if (io_k8s_api_apps_v1_deployment->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_apps_v1_deployment->metadata);
        io_k8s_api_apps_v1_deployment->metadata = NULL;
    }
    if (io_k8s_api_apps_v1_deployment->spec) {
        io_k8s_api_apps_v1_deployment_spec_free(io_k8s_api_apps_v1_deployment->spec);
        io_k8s_api_apps_v1_deployment->spec = NULL;
    }
    if (io_k8s_api_apps_v1_deployment->status) {
        io_k8s_api_apps_v1_deployment_status_free(io_k8s_api_apps_v1_deployment->status);
        io_k8s_api_apps_v1_deployment->status = NULL;
    }
    free(io_k8s_api_apps_v1_deployment);
}

cJSON *io_k8s_api_apps_v1_deployment_convertToJSON(io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apps_v1_deployment->api_version
    if(io_k8s_api_apps_v1_deployment->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_apps_v1_deployment->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apps_v1_deployment->kind
    if(io_k8s_api_apps_v1_deployment->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_apps_v1_deployment->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apps_v1_deployment->metadata
    if(io_k8s_api_apps_v1_deployment->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_apps_v1_deployment->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_apps_v1_deployment->spec
    if(io_k8s_api_apps_v1_deployment->spec) { 
    cJSON *spec_local_JSON = io_k8s_api_apps_v1_deployment_spec_convertToJSON(io_k8s_api_apps_v1_deployment->spec);
    if(spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "spec", spec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_apps_v1_deployment->status
    if(io_k8s_api_apps_v1_deployment->status) { 
    cJSON *status_local_JSON = io_k8s_api_apps_v1_deployment_status_convertToJSON(io_k8s_api_apps_v1_deployment->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
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

io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment_parseFromJSON(cJSON *io_k8s_api_apps_v1_deploymentJSON){

    io_k8s_api_apps_v1_deployment_t *io_k8s_api_apps_v1_deployment_local_var = NULL;

    // io_k8s_api_apps_v1_deployment->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deploymentJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apps_v1_deployment->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deploymentJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apps_v1_deployment->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deploymentJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_apps_v1_deployment->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deploymentJSON, "spec");
    io_k8s_api_apps_v1_deployment_spec_t *spec_local_nonprim = NULL;
    if (spec) { 
    spec_local_nonprim = io_k8s_api_apps_v1_deployment_spec_parseFromJSON(spec); //nonprimitive
    }

    // io_k8s_api_apps_v1_deployment->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deploymentJSON, "status");
    io_k8s_api_apps_v1_deployment_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = io_k8s_api_apps_v1_deployment_status_parseFromJSON(status); //nonprimitive
    }


    io_k8s_api_apps_v1_deployment_local_var = io_k8s_api_apps_v1_deployment_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        spec ? spec_local_nonprim : NULL,
        status ? status_local_nonprim : NULL
        );

    return io_k8s_api_apps_v1_deployment_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (spec_local_nonprim) {
        io_k8s_api_apps_v1_deployment_spec_free(spec_local_nonprim);
        spec_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        io_k8s_api_apps_v1_deployment_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
