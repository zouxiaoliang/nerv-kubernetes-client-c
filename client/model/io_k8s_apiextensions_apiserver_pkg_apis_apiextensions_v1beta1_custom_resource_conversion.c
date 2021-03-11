#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_create(
    list_t *conversion_review_versions,
    char *strategy,
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_webhook_client_config_t *webhook_client_config
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_local_var->conversion_review_versions = conversion_review_versions;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_local_var->strategy = strategy;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_local_var->webhook_client_config = webhook_client_config;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->conversion_review_versions) {
        list_ForEach(listEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->conversion_review_versions) {
            free(listEntry->data);
        }
        list_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->conversion_review_versions);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->conversion_review_versions = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->strategy) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->strategy);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->strategy = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->webhook_client_config) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_webhook_client_config_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->webhook_client_config);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->webhook_client_config = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->conversion_review_versions
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->conversion_review_versions) { 
    cJSON *conversion_review_versions = cJSON_AddArrayToObject(item, "conversionReviewVersions");
    if(conversion_review_versions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *conversion_review_versionsListEntry;
    list_ForEach(conversion_review_versionsListEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->conversion_review_versions) {
    if(cJSON_AddStringToObject(conversion_review_versions, "", (char*)conversion_review_versionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->strategy
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->strategy) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "strategy", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->strategy) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->webhook_client_config
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->webhook_client_config) { 
    cJSON *webhook_client_config_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_webhook_client_config_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->webhook_client_config);
    if(webhook_client_config_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "webhookClientConfig", webhook_client_config_local_JSON);
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversionJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->conversion_review_versions
    cJSON *conversion_review_versions = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversionJSON, "conversionReviewVersions");
    list_t *conversion_review_versionsList;
    if (conversion_review_versions) { 
    cJSON *conversion_review_versions_local;
    if(!cJSON_IsArray(conversion_review_versions)) {
        goto end;//primitive container
    }
    conversion_review_versionsList = list_create();

    cJSON_ArrayForEach(conversion_review_versions_local, conversion_review_versions)
    {
        if(!cJSON_IsString(conversion_review_versions_local))
        {
            goto end;
        }
        list_addElement(conversion_review_versionsList , strdup(conversion_review_versions_local->valuestring));
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->strategy
    cJSON *strategy = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversionJSON, "strategy");
    if (!strategy) {
        goto end;
    }

    
    if(!cJSON_IsString(strategy))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion->webhook_client_config
    cJSON *webhook_client_config = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversionJSON, "webhookClientConfig");
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_webhook_client_config_t *webhook_client_config_local_nonprim = NULL;
    if (webhook_client_config) { 
    webhook_client_config_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_webhook_client_config_parseFromJSON(webhook_client_config); //nonprimitive
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_create (
        conversion_review_versions ? conversion_review_versionsList : NULL,
        strdup(strategy->valuestring),
        webhook_client_config ? webhook_client_config_local_nonprim : NULL
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_conversion_local_var;
end:
    if (webhook_client_config_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_webhook_client_config_free(webhook_client_config_local_nonprim);
        webhook_client_config_local_nonprim = NULL;
    }
    return NULL;

}
