#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_admissionregistration_v1_webhook_client_config.h"



io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config_create(
    char ca_bundle,
    io_k8s_api_admissionregistration_v1_service_reference_t *service,
    char *url
    ) {
    io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config_local_var = malloc(sizeof(io_k8s_api_admissionregistration_v1_webhook_client_config_t));
    if (!io_k8s_api_admissionregistration_v1_webhook_client_config_local_var) {
        return NULL;
    }
    io_k8s_api_admissionregistration_v1_webhook_client_config_local_var->ca_bundle = ca_bundle;
    io_k8s_api_admissionregistration_v1_webhook_client_config_local_var->service = service;
    io_k8s_api_admissionregistration_v1_webhook_client_config_local_var->url = url;

    return io_k8s_api_admissionregistration_v1_webhook_client_config_local_var;
}


void io_k8s_api_admissionregistration_v1_webhook_client_config_free(io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config) {
    if(NULL == io_k8s_api_admissionregistration_v1_webhook_client_config){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_admissionregistration_v1_webhook_client_config->service) {
        io_k8s_api_admissionregistration_v1_service_reference_free(io_k8s_api_admissionregistration_v1_webhook_client_config->service);
        io_k8s_api_admissionregistration_v1_webhook_client_config->service = NULL;
    }
    if (io_k8s_api_admissionregistration_v1_webhook_client_config->url) {
        free(io_k8s_api_admissionregistration_v1_webhook_client_config->url);
        io_k8s_api_admissionregistration_v1_webhook_client_config->url = NULL;
    }
    free(io_k8s_api_admissionregistration_v1_webhook_client_config);
}

cJSON *io_k8s_api_admissionregistration_v1_webhook_client_config_convertToJSON(io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_admissionregistration_v1_webhook_client_config->ca_bundle
    if(io_k8s_api_admissionregistration_v1_webhook_client_config->ca_bundle) { 
    if(cJSON_AddNumberToObject(item, "caBundle", io_k8s_api_admissionregistration_v1_webhook_client_config->ca_bundle) == NULL) {
    goto fail; //Byte
    }
     } 


    // io_k8s_api_admissionregistration_v1_webhook_client_config->service
    if(io_k8s_api_admissionregistration_v1_webhook_client_config->service) { 
    cJSON *service_local_JSON = io_k8s_api_admissionregistration_v1_service_reference_convertToJSON(io_k8s_api_admissionregistration_v1_webhook_client_config->service);
    if(service_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "service", service_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_admissionregistration_v1_webhook_client_config->url
    if(io_k8s_api_admissionregistration_v1_webhook_client_config->url) { 
    if(cJSON_AddStringToObject(item, "url", io_k8s_api_admissionregistration_v1_webhook_client_config->url) == NULL) {
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

io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config_parseFromJSON(cJSON *io_k8s_api_admissionregistration_v1_webhook_client_configJSON){

    io_k8s_api_admissionregistration_v1_webhook_client_config_t *io_k8s_api_admissionregistration_v1_webhook_client_config_local_var = NULL;

    // io_k8s_api_admissionregistration_v1_webhook_client_config->ca_bundle
    cJSON *ca_bundle = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_webhook_client_configJSON, "caBundle");
    if (ca_bundle) { 
    if(!cJSON_IsNumber(ca_bundle))
    {
    goto end; //Byte
    }
    }

    // io_k8s_api_admissionregistration_v1_webhook_client_config->service
    cJSON *service = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_webhook_client_configJSON, "service");
    io_k8s_api_admissionregistration_v1_service_reference_t *service_local_nonprim = NULL;
    if (service) { 
    service_local_nonprim = io_k8s_api_admissionregistration_v1_service_reference_parseFromJSON(service); //nonprimitive
    }

    // io_k8s_api_admissionregistration_v1_webhook_client_config->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_webhook_client_configJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url))
    {
    goto end; //String
    }
    }


    io_k8s_api_admissionregistration_v1_webhook_client_config_local_var = io_k8s_api_admissionregistration_v1_webhook_client_config_create (
        ca_bundle ? ca_bundle->valueint : 0,
        service ? service_local_nonprim : NULL,
        url ? strdup(url->valuestring) : NULL
        );

    return io_k8s_api_admissionregistration_v1_webhook_client_config_local_var;
end:
    if (service_local_nonprim) {
        io_k8s_api_admissionregistration_v1_service_reference_free(service_local_nonprim);
        service_local_nonprim = NULL;
    }
    return NULL;

}
