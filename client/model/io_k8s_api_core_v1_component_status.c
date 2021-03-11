#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_component_status.h"



io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status_create(
    char *api_version,
    list_t *conditions,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata
    ) {
    io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status_local_var = malloc(sizeof(io_k8s_api_core_v1_component_status_t));
    if (!io_k8s_api_core_v1_component_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_component_status_local_var->api_version = api_version;
    io_k8s_api_core_v1_component_status_local_var->conditions = conditions;
    io_k8s_api_core_v1_component_status_local_var->kind = kind;
    io_k8s_api_core_v1_component_status_local_var->metadata = metadata;

    return io_k8s_api_core_v1_component_status_local_var;
}


void io_k8s_api_core_v1_component_status_free(io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status) {
    if(NULL == io_k8s_api_core_v1_component_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_component_status->api_version) {
        free(io_k8s_api_core_v1_component_status->api_version);
        io_k8s_api_core_v1_component_status->api_version = NULL;
    }
    if (io_k8s_api_core_v1_component_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_core_v1_component_status->conditions) {
            io_k8s_api_core_v1_component_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_component_status->conditions);
        io_k8s_api_core_v1_component_status->conditions = NULL;
    }
    if (io_k8s_api_core_v1_component_status->kind) {
        free(io_k8s_api_core_v1_component_status->kind);
        io_k8s_api_core_v1_component_status->kind = NULL;
    }
    if (io_k8s_api_core_v1_component_status->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_component_status->metadata);
        io_k8s_api_core_v1_component_status->metadata = NULL;
    }
    free(io_k8s_api_core_v1_component_status);
}

cJSON *io_k8s_api_core_v1_component_status_convertToJSON(io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_component_status->api_version
    if(io_k8s_api_core_v1_component_status->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_component_status->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_component_status->conditions
    if(io_k8s_api_core_v1_component_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_core_v1_component_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_core_v1_component_status->conditions) {
    cJSON *itemLocal = io_k8s_api_core_v1_component_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_component_status->kind
    if(io_k8s_api_core_v1_component_status->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_component_status->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_component_status->metadata
    if(io_k8s_api_core_v1_component_status->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_component_status->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
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

io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status_parseFromJSON(cJSON *io_k8s_api_core_v1_component_statusJSON){

    io_k8s_api_core_v1_component_status_t *io_k8s_api_core_v1_component_status_local_var = NULL;

    // io_k8s_api_core_v1_component_status->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_component_statusJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_component_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_component_statusJSON, "conditions");
    list_t *conditionsList;
    if (conditions) { 
    cJSON *conditions_local_nonprimitive;
    if(!cJSON_IsArray(conditions)){
        goto end; //nonprimitive container
    }

    conditionsList = list_create();

    cJSON_ArrayForEach(conditions_local_nonprimitive,conditions )
    {
        if(!cJSON_IsObject(conditions_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_component_condition_t *conditionsItem = io_k8s_api_core_v1_component_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // io_k8s_api_core_v1_component_status->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_component_statusJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_component_status->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_component_statusJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }


    io_k8s_api_core_v1_component_status_local_var = io_k8s_api_core_v1_component_status_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        conditions ? conditionsList : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_component_status_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
