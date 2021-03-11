#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler.h"



io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *spec,
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_status_t *status
    ) {
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t));
    if (!io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var->api_version = api_version;
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var->kind = kind;
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var->metadata = metadata;
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var->spec = spec;
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var->status = status;

    return io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var;
}


void io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler) {
    if(NULL == io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->api_version) {
        free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->api_version);
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->api_version = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->kind) {
        free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->kind);
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->kind = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->metadata);
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->metadata = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->spec) {
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->spec);
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->spec = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->status) {
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_status_free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->status);
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->status = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler);
}

cJSON *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_convertToJSON(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->api_version
    if(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->kind
    if(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->metadata
    if(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->spec
    if(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->spec) { 
    cJSON *spec_local_JSON = io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_convertToJSON(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->spec);
    if(spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "spec", spec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->status
    if(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->status) { 
    cJSON *status_local_JSON = io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_status_convertToJSON(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->status);
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

io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscalerJSON){

    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscalerJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscalerJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscalerJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscalerJSON, "spec");
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *spec_local_nonprim = NULL;
    if (spec) { 
    spec_local_nonprim = io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_parseFromJSON(spec); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscalerJSON, "status");
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_status_parseFromJSON(status); //nonprimitive
    }


    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var = io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        spec ? spec_local_nonprim : NULL,
        status ? status_local_nonprim : NULL
        );

    return io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (spec_local_nonprim) {
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_free(spec_local_nonprim);
        spec_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
