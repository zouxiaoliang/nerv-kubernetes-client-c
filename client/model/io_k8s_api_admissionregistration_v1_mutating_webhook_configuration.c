#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_admissionregistration_v1_mutating_webhook_configuration.h"



io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *webhooks
    ) {
    io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var = malloc(sizeof(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t));
    if (!io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var) {
        return NULL;
    }
    io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var->api_version = api_version;
    io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var->kind = kind;
    io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var->metadata = metadata;
    io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var->webhooks = webhooks;

    return io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var;
}


void io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_free(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_mutating_webhook_configuration) {
    if(NULL == io_k8s_api_admissionregistration_v1_mutating_webhook_configuration){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->api_version) {
        free(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->api_version);
        io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->api_version = NULL;
    }
    if (io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->kind) {
        free(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->kind);
        io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->kind = NULL;
    }
    if (io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->metadata);
        io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->metadata = NULL;
    }
    if (io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->webhooks) {
        list_ForEach(listEntry, io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->webhooks) {
            io_k8s_api_admissionregistration_v1_mutating_webhook_free(listEntry->data);
        }
        list_free(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->webhooks);
        io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->webhooks = NULL;
    }
    free(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration);
}

cJSON *io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_convertToJSON(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_mutating_webhook_configuration) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->api_version
    if(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->kind
    if(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->metadata
    if(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->webhooks
    if(io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->webhooks) { 
    cJSON *webhooks = cJSON_AddArrayToObject(item, "webhooks");
    if(webhooks == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *webhooksListEntry;
    if (io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->webhooks) {
    list_ForEach(webhooksListEntry, io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->webhooks) {
    cJSON *itemLocal = io_k8s_api_admissionregistration_v1_mutating_webhook_convertToJSON(webhooksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(webhooks, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_parseFromJSON(cJSON *io_k8s_api_admissionregistration_v1_mutating_webhook_configurationJSON){

    io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_t *io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var = NULL;

    // io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_mutating_webhook_configurationJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_mutating_webhook_configurationJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_mutating_webhook_configurationJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_admissionregistration_v1_mutating_webhook_configuration->webhooks
    cJSON *webhooks = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_mutating_webhook_configurationJSON, "webhooks");
    list_t *webhooksList;
    if (webhooks) { 
    cJSON *webhooks_local_nonprimitive;
    if(!cJSON_IsArray(webhooks)){
        goto end; //nonprimitive container
    }

    webhooksList = list_create();

    cJSON_ArrayForEach(webhooks_local_nonprimitive,webhooks )
    {
        if(!cJSON_IsObject(webhooks_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_admissionregistration_v1_mutating_webhook_t *webhooksItem = io_k8s_api_admissionregistration_v1_mutating_webhook_parseFromJSON(webhooks_local_nonprimitive);

        list_addElement(webhooksList, webhooksItem);
    }
    }


    io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var = io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        webhooks ? webhooksList : NULL
        );

    return io_k8s_api_admissionregistration_v1_mutating_webhook_configuration_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
