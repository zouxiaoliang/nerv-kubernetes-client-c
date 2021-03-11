#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_create(
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_t *accepted_names,
    list_t *conditions,
    list_t *stored_versions
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_local_var->accepted_names = accepted_names;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_local_var->conditions = conditions;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_local_var->stored_versions = stored_versions;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->accepted_names) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->accepted_names);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->accepted_names = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->conditions) {
        list_ForEach(listEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->conditions) {
            io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_condition_free(listEntry->data);
        }
        list_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->conditions);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->conditions = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->stored_versions) {
        list_ForEach(listEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->stored_versions) {
            free(listEntry->data);
        }
        list_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->stored_versions);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->stored_versions = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->accepted_names
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->accepted_names) { 
    cJSON *accepted_names_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->accepted_names);
    if(accepted_names_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "acceptedNames", accepted_names_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->conditions
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->conditions) {
    cJSON *itemLocal = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->stored_versions
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->stored_versions) { 
    cJSON *stored_versions = cJSON_AddArrayToObject(item, "storedVersions");
    if(stored_versions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stored_versionsListEntry;
    list_ForEach(stored_versionsListEntry, io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->stored_versions) {
    if(cJSON_AddStringToObject(stored_versions, "", (char*)stored_versionsListEntry->data) == NULL)
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_statusJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->accepted_names
    cJSON *accepted_names = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_statusJSON, "acceptedNames");
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_t *accepted_names_local_nonprim = NULL;
    if (accepted_names) { 
    accepted_names_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_parseFromJSON(accepted_names); //nonprimitive
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_statusJSON, "conditions");
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
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_condition_t *conditionsItem = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status->stored_versions
    cJSON *stored_versions = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_statusJSON, "storedVersions");
    list_t *stored_versionsList;
    if (stored_versions) { 
    cJSON *stored_versions_local;
    if(!cJSON_IsArray(stored_versions)) {
        goto end;//primitive container
    }
    stored_versionsList = list_create();

    cJSON_ArrayForEach(stored_versions_local, stored_versions)
    {
        if(!cJSON_IsString(stored_versions_local))
        {
            goto end;
        }
        list_addElement(stored_versionsList , strdup(stored_versions_local->valuestring));
    }
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_create (
        accepted_names ? accepted_names_local_nonprim : NULL,
        conditions ? conditionsList : NULL,
        stored_versions ? stored_versionsList : NULL
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_status_local_var;
end:
    if (accepted_names_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_definition_names_free(accepted_names_local_nonprim);
        accepted_names_local_nonprim = NULL;
    }
    return NULL;

}
