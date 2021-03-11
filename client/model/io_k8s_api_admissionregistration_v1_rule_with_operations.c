#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_admissionregistration_v1_rule_with_operations.h"



io_k8s_api_admissionregistration_v1_rule_with_operations_t *io_k8s_api_admissionregistration_v1_rule_with_operations_create(
    list_t *api_groups,
    list_t *api_versions,
    list_t *operations,
    list_t *resources,
    char *scope
    ) {
    io_k8s_api_admissionregistration_v1_rule_with_operations_t *io_k8s_api_admissionregistration_v1_rule_with_operations_local_var = malloc(sizeof(io_k8s_api_admissionregistration_v1_rule_with_operations_t));
    if (!io_k8s_api_admissionregistration_v1_rule_with_operations_local_var) {
        return NULL;
    }
    io_k8s_api_admissionregistration_v1_rule_with_operations_local_var->api_groups = api_groups;
    io_k8s_api_admissionregistration_v1_rule_with_operations_local_var->api_versions = api_versions;
    io_k8s_api_admissionregistration_v1_rule_with_operations_local_var->operations = operations;
    io_k8s_api_admissionregistration_v1_rule_with_operations_local_var->resources = resources;
    io_k8s_api_admissionregistration_v1_rule_with_operations_local_var->scope = scope;

    return io_k8s_api_admissionregistration_v1_rule_with_operations_local_var;
}


void io_k8s_api_admissionregistration_v1_rule_with_operations_free(io_k8s_api_admissionregistration_v1_rule_with_operations_t *io_k8s_api_admissionregistration_v1_rule_with_operations) {
    if(NULL == io_k8s_api_admissionregistration_v1_rule_with_operations){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_admissionregistration_v1_rule_with_operations->api_groups) {
        list_ForEach(listEntry, io_k8s_api_admissionregistration_v1_rule_with_operations->api_groups) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_admissionregistration_v1_rule_with_operations->api_groups);
        io_k8s_api_admissionregistration_v1_rule_with_operations->api_groups = NULL;
    }
    if (io_k8s_api_admissionregistration_v1_rule_with_operations->api_versions) {
        list_ForEach(listEntry, io_k8s_api_admissionregistration_v1_rule_with_operations->api_versions) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_admissionregistration_v1_rule_with_operations->api_versions);
        io_k8s_api_admissionregistration_v1_rule_with_operations->api_versions = NULL;
    }
    if (io_k8s_api_admissionregistration_v1_rule_with_operations->operations) {
        list_ForEach(listEntry, io_k8s_api_admissionregistration_v1_rule_with_operations->operations) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_admissionregistration_v1_rule_with_operations->operations);
        io_k8s_api_admissionregistration_v1_rule_with_operations->operations = NULL;
    }
    if (io_k8s_api_admissionregistration_v1_rule_with_operations->resources) {
        list_ForEach(listEntry, io_k8s_api_admissionregistration_v1_rule_with_operations->resources) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_admissionregistration_v1_rule_with_operations->resources);
        io_k8s_api_admissionregistration_v1_rule_with_operations->resources = NULL;
    }
    if (io_k8s_api_admissionregistration_v1_rule_with_operations->scope) {
        free(io_k8s_api_admissionregistration_v1_rule_with_operations->scope);
        io_k8s_api_admissionregistration_v1_rule_with_operations->scope = NULL;
    }
    free(io_k8s_api_admissionregistration_v1_rule_with_operations);
}

cJSON *io_k8s_api_admissionregistration_v1_rule_with_operations_convertToJSON(io_k8s_api_admissionregistration_v1_rule_with_operations_t *io_k8s_api_admissionregistration_v1_rule_with_operations) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_admissionregistration_v1_rule_with_operations->api_groups
    if(io_k8s_api_admissionregistration_v1_rule_with_operations->api_groups) { 
    cJSON *api_groups = cJSON_AddArrayToObject(item, "apiGroups");
    if(api_groups == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *api_groupsListEntry;
    list_ForEach(api_groupsListEntry, io_k8s_api_admissionregistration_v1_rule_with_operations->api_groups) {
    if(cJSON_AddStringToObject(api_groups, "", (char*)api_groupsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_admissionregistration_v1_rule_with_operations->api_versions
    if(io_k8s_api_admissionregistration_v1_rule_with_operations->api_versions) { 
    cJSON *api_versions = cJSON_AddArrayToObject(item, "apiVersions");
    if(api_versions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *api_versionsListEntry;
    list_ForEach(api_versionsListEntry, io_k8s_api_admissionregistration_v1_rule_with_operations->api_versions) {
    if(cJSON_AddStringToObject(api_versions, "", (char*)api_versionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_admissionregistration_v1_rule_with_operations->operations
    if(io_k8s_api_admissionregistration_v1_rule_with_operations->operations) { 
    cJSON *operations = cJSON_AddArrayToObject(item, "operations");
    if(operations == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *operationsListEntry;
    list_ForEach(operationsListEntry, io_k8s_api_admissionregistration_v1_rule_with_operations->operations) {
    if(cJSON_AddStringToObject(operations, "", (char*)operationsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_admissionregistration_v1_rule_with_operations->resources
    if(io_k8s_api_admissionregistration_v1_rule_with_operations->resources) { 
    cJSON *resources = cJSON_AddArrayToObject(item, "resources");
    if(resources == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *resourcesListEntry;
    list_ForEach(resourcesListEntry, io_k8s_api_admissionregistration_v1_rule_with_operations->resources) {
    if(cJSON_AddStringToObject(resources, "", (char*)resourcesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_admissionregistration_v1_rule_with_operations->scope
    if(io_k8s_api_admissionregistration_v1_rule_with_operations->scope) { 
    if(cJSON_AddStringToObject(item, "scope", io_k8s_api_admissionregistration_v1_rule_with_operations->scope) == NULL) {
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

io_k8s_api_admissionregistration_v1_rule_with_operations_t *io_k8s_api_admissionregistration_v1_rule_with_operations_parseFromJSON(cJSON *io_k8s_api_admissionregistration_v1_rule_with_operationsJSON){

    io_k8s_api_admissionregistration_v1_rule_with_operations_t *io_k8s_api_admissionregistration_v1_rule_with_operations_local_var = NULL;

    // io_k8s_api_admissionregistration_v1_rule_with_operations->api_groups
    cJSON *api_groups = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_rule_with_operationsJSON, "apiGroups");
    list_t *api_groupsList;
    if (api_groups) { 
    cJSON *api_groups_local;
    if(!cJSON_IsArray(api_groups)) {
        goto end;//primitive container
    }
    api_groupsList = list_create();

    cJSON_ArrayForEach(api_groups_local, api_groups)
    {
        if(!cJSON_IsString(api_groups_local))
        {
            goto end;
        }
        list_addElement(api_groupsList , strdup(api_groups_local->valuestring));
    }
    }

    // io_k8s_api_admissionregistration_v1_rule_with_operations->api_versions
    cJSON *api_versions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_rule_with_operationsJSON, "apiVersions");
    list_t *api_versionsList;
    if (api_versions) { 
    cJSON *api_versions_local;
    if(!cJSON_IsArray(api_versions)) {
        goto end;//primitive container
    }
    api_versionsList = list_create();

    cJSON_ArrayForEach(api_versions_local, api_versions)
    {
        if(!cJSON_IsString(api_versions_local))
        {
            goto end;
        }
        list_addElement(api_versionsList , strdup(api_versions_local->valuestring));
    }
    }

    // io_k8s_api_admissionregistration_v1_rule_with_operations->operations
    cJSON *operations = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_rule_with_operationsJSON, "operations");
    list_t *operationsList;
    if (operations) { 
    cJSON *operations_local;
    if(!cJSON_IsArray(operations)) {
        goto end;//primitive container
    }
    operationsList = list_create();

    cJSON_ArrayForEach(operations_local, operations)
    {
        if(!cJSON_IsString(operations_local))
        {
            goto end;
        }
        list_addElement(operationsList , strdup(operations_local->valuestring));
    }
    }

    // io_k8s_api_admissionregistration_v1_rule_with_operations->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_rule_with_operationsJSON, "resources");
    list_t *resourcesList;
    if (resources) { 
    cJSON *resources_local;
    if(!cJSON_IsArray(resources)) {
        goto end;//primitive container
    }
    resourcesList = list_create();

    cJSON_ArrayForEach(resources_local, resources)
    {
        if(!cJSON_IsString(resources_local))
        {
            goto end;
        }
        list_addElement(resourcesList , strdup(resources_local->valuestring));
    }
    }

    // io_k8s_api_admissionregistration_v1_rule_with_operations->scope
    cJSON *scope = cJSON_GetObjectItemCaseSensitive(io_k8s_api_admissionregistration_v1_rule_with_operationsJSON, "scope");
    if (scope) { 
    if(!cJSON_IsString(scope))
    {
    goto end; //String
    }
    }


    io_k8s_api_admissionregistration_v1_rule_with_operations_local_var = io_k8s_api_admissionregistration_v1_rule_with_operations_create (
        api_groups ? api_groupsList : NULL,
        api_versions ? api_versionsList : NULL,
        operations ? operationsList : NULL,
        resources ? resourcesList : NULL,
        scope ? strdup(scope->valuestring) : NULL
        );

    return io_k8s_api_admissionregistration_v1_rule_with_operations_local_var;
end:
    return NULL;

}
