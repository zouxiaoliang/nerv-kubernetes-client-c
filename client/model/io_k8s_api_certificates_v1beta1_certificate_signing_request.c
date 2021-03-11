#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_certificates_v1beta1_certificate_signing_request.h"



io_k8s_api_certificates_v1beta1_certificate_signing_request_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *spec,
    io_k8s_api_certificates_v1beta1_certificate_signing_request_status_t *status
    ) {
    io_k8s_api_certificates_v1beta1_certificate_signing_request_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var = malloc(sizeof(io_k8s_api_certificates_v1beta1_certificate_signing_request_t));
    if (!io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var) {
        return NULL;
    }
    io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var->api_version = api_version;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var->kind = kind;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var->metadata = metadata;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var->spec = spec;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var->status = status;

    return io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var;
}


void io_k8s_api_certificates_v1beta1_certificate_signing_request_free(io_k8s_api_certificates_v1beta1_certificate_signing_request_t *io_k8s_api_certificates_v1beta1_certificate_signing_request) {
    if(NULL == io_k8s_api_certificates_v1beta1_certificate_signing_request){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request->api_version) {
        free(io_k8s_api_certificates_v1beta1_certificate_signing_request->api_version);
        io_k8s_api_certificates_v1beta1_certificate_signing_request->api_version = NULL;
    }
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request->kind) {
        free(io_k8s_api_certificates_v1beta1_certificate_signing_request->kind);
        io_k8s_api_certificates_v1beta1_certificate_signing_request->kind = NULL;
    }
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_certificates_v1beta1_certificate_signing_request->metadata);
        io_k8s_api_certificates_v1beta1_certificate_signing_request->metadata = NULL;
    }
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request->spec) {
        io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_free(io_k8s_api_certificates_v1beta1_certificate_signing_request->spec);
        io_k8s_api_certificates_v1beta1_certificate_signing_request->spec = NULL;
    }
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request->status) {
        io_k8s_api_certificates_v1beta1_certificate_signing_request_status_free(io_k8s_api_certificates_v1beta1_certificate_signing_request->status);
        io_k8s_api_certificates_v1beta1_certificate_signing_request->status = NULL;
    }
    free(io_k8s_api_certificates_v1beta1_certificate_signing_request);
}

cJSON *io_k8s_api_certificates_v1beta1_certificate_signing_request_convertToJSON(io_k8s_api_certificates_v1beta1_certificate_signing_request_t *io_k8s_api_certificates_v1beta1_certificate_signing_request) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_certificates_v1beta1_certificate_signing_request->api_version
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_certificates_v1beta1_certificate_signing_request->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_certificates_v1beta1_certificate_signing_request->kind
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_certificates_v1beta1_certificate_signing_request->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_certificates_v1beta1_certificate_signing_request->metadata
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_certificates_v1beta1_certificate_signing_request->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_certificates_v1beta1_certificate_signing_request->spec
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request->spec) { 
    cJSON *spec_local_JSON = io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_convertToJSON(io_k8s_api_certificates_v1beta1_certificate_signing_request->spec);
    if(spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "spec", spec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_certificates_v1beta1_certificate_signing_request->status
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request->status) { 
    cJSON *status_local_JSON = io_k8s_api_certificates_v1beta1_certificate_signing_request_status_convertToJSON(io_k8s_api_certificates_v1beta1_certificate_signing_request->status);
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

io_k8s_api_certificates_v1beta1_certificate_signing_request_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_parseFromJSON(cJSON *io_k8s_api_certificates_v1beta1_certificate_signing_requestJSON){

    io_k8s_api_certificates_v1beta1_certificate_signing_request_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var = NULL;

    // io_k8s_api_certificates_v1beta1_certificate_signing_request->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_requestJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_requestJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_requestJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_requestJSON, "spec");
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *spec_local_nonprim = NULL;
    if (spec) { 
    spec_local_nonprim = io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_parseFromJSON(spec); //nonprimitive
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_requestJSON, "status");
    io_k8s_api_certificates_v1beta1_certificate_signing_request_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = io_k8s_api_certificates_v1beta1_certificate_signing_request_status_parseFromJSON(status); //nonprimitive
    }


    io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var = io_k8s_api_certificates_v1beta1_certificate_signing_request_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        spec ? spec_local_nonprim : NULL,
        status ? status_local_nonprim : NULL
        );

    return io_k8s_api_certificates_v1beta1_certificate_signing_request_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (spec_local_nonprim) {
        io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_free(spec_local_nonprim);
        spec_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        io_k8s_api_certificates_v1beta1_certificate_signing_request_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
