#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_dns_config.h"



io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config_create(
    list_t *nameservers,
    list_t *options,
    list_t *searches
    ) {
    io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_dns_config_t));
    if (!io_k8s_api_core_v1_pod_dns_config_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_dns_config_local_var->nameservers = nameservers;
    io_k8s_api_core_v1_pod_dns_config_local_var->options = options;
    io_k8s_api_core_v1_pod_dns_config_local_var->searches = searches;

    return io_k8s_api_core_v1_pod_dns_config_local_var;
}


void io_k8s_api_core_v1_pod_dns_config_free(io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config) {
    if(NULL == io_k8s_api_core_v1_pod_dns_config){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_dns_config->nameservers) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_dns_config->nameservers) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_dns_config->nameservers);
        io_k8s_api_core_v1_pod_dns_config->nameservers = NULL;
    }
    if (io_k8s_api_core_v1_pod_dns_config->options) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_dns_config->options) {
            io_k8s_api_core_v1_pod_dns_config_option_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_dns_config->options);
        io_k8s_api_core_v1_pod_dns_config->options = NULL;
    }
    if (io_k8s_api_core_v1_pod_dns_config->searches) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_dns_config->searches) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_dns_config->searches);
        io_k8s_api_core_v1_pod_dns_config->searches = NULL;
    }
    free(io_k8s_api_core_v1_pod_dns_config);
}

cJSON *io_k8s_api_core_v1_pod_dns_config_convertToJSON(io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_dns_config->nameservers
    if(io_k8s_api_core_v1_pod_dns_config->nameservers) { 
    cJSON *nameservers = cJSON_AddArrayToObject(item, "nameservers");
    if(nameservers == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *nameserversListEntry;
    list_ForEach(nameserversListEntry, io_k8s_api_core_v1_pod_dns_config->nameservers) {
    if(cJSON_AddStringToObject(nameservers, "", (char*)nameserversListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_pod_dns_config->options
    if(io_k8s_api_core_v1_pod_dns_config->options) { 
    cJSON *options = cJSON_AddArrayToObject(item, "options");
    if(options == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *optionsListEntry;
    if (io_k8s_api_core_v1_pod_dns_config->options) {
    list_ForEach(optionsListEntry, io_k8s_api_core_v1_pod_dns_config->options) {
    cJSON *itemLocal = io_k8s_api_core_v1_pod_dns_config_option_convertToJSON(optionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(options, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_dns_config->searches
    if(io_k8s_api_core_v1_pod_dns_config->searches) { 
    cJSON *searches = cJSON_AddArrayToObject(item, "searches");
    if(searches == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *searchesListEntry;
    list_ForEach(searchesListEntry, io_k8s_api_core_v1_pod_dns_config->searches) {
    if(cJSON_AddStringToObject(searches, "", (char*)searchesListEntry->data) == NULL)
    {
        goto fail;
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

io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_dns_configJSON){

    io_k8s_api_core_v1_pod_dns_config_t *io_k8s_api_core_v1_pod_dns_config_local_var = NULL;

    // io_k8s_api_core_v1_pod_dns_config->nameservers
    cJSON *nameservers = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_dns_configJSON, "nameservers");
    list_t *nameserversList;
    if (nameservers) { 
    cJSON *nameservers_local;
    if(!cJSON_IsArray(nameservers)) {
        goto end;//primitive container
    }
    nameserversList = list_create();

    cJSON_ArrayForEach(nameservers_local, nameservers)
    {
        if(!cJSON_IsString(nameservers_local))
        {
            goto end;
        }
        list_addElement(nameserversList , strdup(nameservers_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_pod_dns_config->options
    cJSON *options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_dns_configJSON, "options");
    list_t *optionsList;
    if (options) { 
    cJSON *options_local_nonprimitive;
    if(!cJSON_IsArray(options)){
        goto end; //nonprimitive container
    }

    optionsList = list_create();

    cJSON_ArrayForEach(options_local_nonprimitive,options )
    {
        if(!cJSON_IsObject(options_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_pod_dns_config_option_t *optionsItem = io_k8s_api_core_v1_pod_dns_config_option_parseFromJSON(options_local_nonprimitive);

        list_addElement(optionsList, optionsItem);
    }
    }

    // io_k8s_api_core_v1_pod_dns_config->searches
    cJSON *searches = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_dns_configJSON, "searches");
    list_t *searchesList;
    if (searches) { 
    cJSON *searches_local;
    if(!cJSON_IsArray(searches)) {
        goto end;//primitive container
    }
    searchesList = list_create();

    cJSON_ArrayForEach(searches_local, searches)
    {
        if(!cJSON_IsString(searches_local))
        {
            goto end;
        }
        list_addElement(searchesList , strdup(searches_local->valuestring));
    }
    }


    io_k8s_api_core_v1_pod_dns_config_local_var = io_k8s_api_core_v1_pod_dns_config_create (
        nameservers ? nameserversList : NULL,
        options ? optionsList : NULL,
        searches ? searchesList : NULL
        );

    return io_k8s_api_core_v1_pod_dns_config_local_var;
end:
    return NULL;

}
