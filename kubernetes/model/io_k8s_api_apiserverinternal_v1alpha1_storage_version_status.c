#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apiserverinternal_v1alpha1_storage_version_status.h"



io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_create(
    char *common_encoding_version,
    list_t *conditions,
    list_t *storage_versions
    ) {
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_local_var = malloc(sizeof(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t));
    if (!io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_local_var) {
        return NULL;
    }
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_local_var->common_encoding_version = common_encoding_version;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_local_var->conditions = conditions;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_local_var->storage_versions = storage_versions;

    return io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_local_var;
}


void io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status) {
    if(NULL == io_k8s_api_apiserverinternal_v1alpha1_storage_version_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->common_encoding_version) {
        free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->common_encoding_version);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->common_encoding_version = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->conditions) {
            io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->conditions);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->conditions = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->storage_versions) {
        list_ForEach(listEntry, io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->storage_versions) {
            io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_free(listEntry->data);
        }
        list_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->storage_versions);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->storage_versions = NULL;
    }
    free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status);
}

cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->common_encoding_version
    if(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->common_encoding_version) { 
    if(cJSON_AddStringToObject(item, "commonEncodingVersion", io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->common_encoding_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->conditions
    if(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->conditions) {
    cJSON *itemLocal = io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->storage_versions
    if(io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->storage_versions) { 
    cJSON *storage_versions = cJSON_AddArrayToObject(item, "storageVersions");
    if(storage_versions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *storage_versionsListEntry;
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->storage_versions) {
    list_ForEach(storage_versionsListEntry, io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->storage_versions) {
    cJSON *itemLocal = io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_convertToJSON(storage_versionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(storage_versions, itemLocal);
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

io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_parseFromJSON(cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_statusJSON){

    io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_local_var = NULL;

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->common_encoding_version
    cJSON *common_encoding_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_version_statusJSON, "commonEncodingVersion");
    if (common_encoding_version) { 
    if(!cJSON_IsString(common_encoding_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_version_statusJSON, "conditions");
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
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *conditionsItem = io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_status->storage_versions
    cJSON *storage_versions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_version_statusJSON, "storageVersions");
    list_t *storage_versionsList;
    if (storage_versions) { 
    cJSON *storage_versions_local_nonprimitive;
    if(!cJSON_IsArray(storage_versions)){
        goto end; //nonprimitive container
    }

    storage_versionsList = list_create();

    cJSON_ArrayForEach(storage_versions_local_nonprimitive,storage_versions )
    {
        if(!cJSON_IsObject(storage_versions_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *storage_versionsItem = io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_parseFromJSON(storage_versions_local_nonprimitive);

        list_addElement(storage_versionsList, storage_versionsItem);
    }
    }


    io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_local_var = io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_create (
        common_encoding_version ? strdup(common_encoding_version->valuestring) : NULL,
        conditions ? conditionsList : NULL,
        storage_versions ? storage_versionsList : NULL
        );

    return io_k8s_api_apiserverinternal_v1alpha1_storage_version_status_local_var;
end:
    return NULL;

}
