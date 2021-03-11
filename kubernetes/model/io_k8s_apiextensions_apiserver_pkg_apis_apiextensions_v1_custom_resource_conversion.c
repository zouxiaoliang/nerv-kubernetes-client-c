#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_create(
    char *strategy,
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_t *webhook
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_local_var->strategy = strategy;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_local_var->webhook = webhook;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->strategy) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->strategy);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->strategy = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->webhook) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->webhook);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->webhook = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->strategy
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->strategy) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "strategy", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->strategy) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->webhook
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->webhook) { 
    cJSON *webhook_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->webhook);
    if(webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "webhook", webhook_local_JSON);
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversionJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->strategy
    cJSON *strategy = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversionJSON, "strategy");
    if (!strategy) {
        goto end;
    }

    
    if(!cJSON_IsString(strategy))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion->webhook
    cJSON *webhook = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversionJSON, "webhook");
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_t *webhook_local_nonprim = NULL;
    if (webhook) { 
    webhook_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_parseFromJSON(webhook); //nonprimitive
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_create (
        strdup(strategy->valuestring),
        webhook ? webhook_local_nonprim : NULL
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_conversion_local_var;
end:
    if (webhook_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_free(webhook_local_nonprim);
        webhook_local_nonprim = NULL;
    }
    return NULL;

}
