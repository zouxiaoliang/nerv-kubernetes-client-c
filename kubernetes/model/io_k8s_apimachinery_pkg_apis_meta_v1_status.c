#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_status.h"



io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_create(
    char *api_version,
    int code,
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *details,
    char *kind,
    char *message,
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata,
    char *reason,
    char *status
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_status_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var->api_version = api_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var->code = code;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var->details = details;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var->kind = kind;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var->message = message;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var->metadata = metadata;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var->reason = reason;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var->status = status;

    return io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_status_free(io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status->api_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status->api_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_status->api_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status->details) {
        io_k8s_apimachinery_pkg_apis_meta_v1_status_details_free(io_k8s_apimachinery_pkg_apis_meta_v1_status->details);
        io_k8s_apimachinery_pkg_apis_meta_v1_status->details = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status->kind) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status->kind);
        io_k8s_apimachinery_pkg_apis_meta_v1_status->kind = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status->message) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status->message);
        io_k8s_apimachinery_pkg_apis_meta_v1_status->message = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_free(io_k8s_apimachinery_pkg_apis_meta_v1_status->metadata);
        io_k8s_apimachinery_pkg_apis_meta_v1_status->metadata = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status->reason) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status->reason);
        io_k8s_apimachinery_pkg_apis_meta_v1_status->reason = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status->status) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status->status);
        io_k8s_apimachinery_pkg_apis_meta_v1_status->status = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_status);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_status->api_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_apimachinery_pkg_apis_meta_v1_status->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status->code
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status->code) { 
    if(cJSON_AddNumberToObject(item, "code", io_k8s_apimachinery_pkg_apis_meta_v1_status->code) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status->details
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status->details) { 
    cJSON *details_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_status_details_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status->details);
    if(details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "details", details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status->kind
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apimachinery_pkg_apis_meta_v1_status->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status->message
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_apimachinery_pkg_apis_meta_v1_status->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status->metadata
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status->reason
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_apimachinery_pkg_apis_meta_v1_status->reason) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status->status
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status->status) { 
    if(cJSON_AddStringToObject(item, "status", io_k8s_apimachinery_pkg_apis_meta_v1_status->status) == NULL) {
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

io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_status->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON, "code");
    if (code) { 
    if(!cJSON_IsNumber(code))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status->details
    cJSON *details = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON, "details");
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *details_local_nonprim = NULL;
    if (details) { 
    details_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_status_details_parseFromJSON(details); //nonprimitive
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_status_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        code ? code->valuedouble : 0,
        details ? details_local_nonprim : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        reason ? strdup(reason->valuestring) : NULL,
        status ? strdup(status->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_status_local_var;
end:
    if (details_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_status_details_free(details_local_nonprim);
        details_local_nonprim = NULL;
    }
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
