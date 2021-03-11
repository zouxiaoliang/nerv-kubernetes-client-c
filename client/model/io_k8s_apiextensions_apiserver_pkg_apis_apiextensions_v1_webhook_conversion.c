#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_create(
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_client_config_t *client_config,
    list_t *conversion_review_versions
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_local_var->client_config = client_config;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_local_var->conversion_review_versions = conversion_review_versions;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->client_config) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_client_config_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->client_config);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->client_config = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->conversion_review_versions) {
        list_ForEach(listEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->conversion_review_versions) {
            free(listEntry->data);
        }
        list_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->conversion_review_versions);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->conversion_review_versions = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->client_config
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->client_config) { 
    cJSON *client_config_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_client_config_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->client_config);
    if(client_config_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "clientConfig", client_config_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->conversion_review_versions
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->conversion_review_versions) {
        goto fail;
    }
    
    cJSON *conversion_review_versions = cJSON_AddArrayToObject(item, "conversionReviewVersions");
    if(conversion_review_versions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *conversion_review_versionsListEntry;
    list_ForEach(conversion_review_versionsListEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->conversion_review_versions) {
    if(cJSON_AddStringToObject(conversion_review_versions, "", (char*)conversion_review_versionsListEntry->data) == NULL)
    {
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversionJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->client_config
    cJSON *client_config = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversionJSON, "clientConfig");
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_client_config_t *client_config_local_nonprim = NULL;
    if (client_config) { 
    client_config_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_client_config_parseFromJSON(client_config); //nonprimitive
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion->conversion_review_versions
    cJSON *conversion_review_versions = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversionJSON, "conversionReviewVersions");
    if (!conversion_review_versions) {
        goto end;
    }

    list_t *conversion_review_versionsList;
    
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


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_create (
        client_config ? client_config_local_nonprim : NULL,
        conversion_review_versionsList
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_conversion_local_var;
end:
    if (client_config_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_webhook_client_config_free(client_config_local_nonprim);
        client_config_local_nonprim = NULL;
    }
    return NULL;

}
