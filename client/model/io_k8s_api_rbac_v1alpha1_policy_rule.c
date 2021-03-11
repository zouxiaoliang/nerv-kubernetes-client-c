#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_rbac_v1alpha1_policy_rule.h"



io_k8s_api_rbac_v1alpha1_policy_rule_t *io_k8s_api_rbac_v1alpha1_policy_rule_create(
    list_t *api_groups,
    list_t *non_resource_urls,
    list_t *resource_names,
    list_t *resources,
    list_t *verbs
    ) {
    io_k8s_api_rbac_v1alpha1_policy_rule_t *io_k8s_api_rbac_v1alpha1_policy_rule_local_var = malloc(sizeof(io_k8s_api_rbac_v1alpha1_policy_rule_t));
    if (!io_k8s_api_rbac_v1alpha1_policy_rule_local_var) {
        return NULL;
    }
    io_k8s_api_rbac_v1alpha1_policy_rule_local_var->api_groups = api_groups;
    io_k8s_api_rbac_v1alpha1_policy_rule_local_var->non_resource_urls = non_resource_urls;
    io_k8s_api_rbac_v1alpha1_policy_rule_local_var->resource_names = resource_names;
    io_k8s_api_rbac_v1alpha1_policy_rule_local_var->resources = resources;
    io_k8s_api_rbac_v1alpha1_policy_rule_local_var->verbs = verbs;

    return io_k8s_api_rbac_v1alpha1_policy_rule_local_var;
}


void io_k8s_api_rbac_v1alpha1_policy_rule_free(io_k8s_api_rbac_v1alpha1_policy_rule_t *io_k8s_api_rbac_v1alpha1_policy_rule) {
    if(NULL == io_k8s_api_rbac_v1alpha1_policy_rule){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_rbac_v1alpha1_policy_rule->api_groups) {
        list_ForEach(listEntry, io_k8s_api_rbac_v1alpha1_policy_rule->api_groups) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_rbac_v1alpha1_policy_rule->api_groups);
        io_k8s_api_rbac_v1alpha1_policy_rule->api_groups = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_policy_rule->non_resource_urls) {
        list_ForEach(listEntry, io_k8s_api_rbac_v1alpha1_policy_rule->non_resource_urls) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_rbac_v1alpha1_policy_rule->non_resource_urls);
        io_k8s_api_rbac_v1alpha1_policy_rule->non_resource_urls = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_policy_rule->resource_names) {
        list_ForEach(listEntry, io_k8s_api_rbac_v1alpha1_policy_rule->resource_names) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_rbac_v1alpha1_policy_rule->resource_names);
        io_k8s_api_rbac_v1alpha1_policy_rule->resource_names = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_policy_rule->resources) {
        list_ForEach(listEntry, io_k8s_api_rbac_v1alpha1_policy_rule->resources) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_rbac_v1alpha1_policy_rule->resources);
        io_k8s_api_rbac_v1alpha1_policy_rule->resources = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_policy_rule->verbs) {
        list_ForEach(listEntry, io_k8s_api_rbac_v1alpha1_policy_rule->verbs) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_rbac_v1alpha1_policy_rule->verbs);
        io_k8s_api_rbac_v1alpha1_policy_rule->verbs = NULL;
    }
    free(io_k8s_api_rbac_v1alpha1_policy_rule);
}

cJSON *io_k8s_api_rbac_v1alpha1_policy_rule_convertToJSON(io_k8s_api_rbac_v1alpha1_policy_rule_t *io_k8s_api_rbac_v1alpha1_policy_rule) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_rbac_v1alpha1_policy_rule->api_groups
    if(io_k8s_api_rbac_v1alpha1_policy_rule->api_groups) { 
    cJSON *api_groups = cJSON_AddArrayToObject(item, "apiGroups");
    if(api_groups == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *api_groupsListEntry;
    list_ForEach(api_groupsListEntry, io_k8s_api_rbac_v1alpha1_policy_rule->api_groups) {
    if(cJSON_AddStringToObject(api_groups, "", (char*)api_groupsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_rbac_v1alpha1_policy_rule->non_resource_urls
    if(io_k8s_api_rbac_v1alpha1_policy_rule->non_resource_urls) { 
    cJSON *non_resource_urls = cJSON_AddArrayToObject(item, "nonResourceURLs");
    if(non_resource_urls == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *non_resource_urlsListEntry;
    list_ForEach(non_resource_urlsListEntry, io_k8s_api_rbac_v1alpha1_policy_rule->non_resource_urls) {
    if(cJSON_AddStringToObject(non_resource_urls, "", (char*)non_resource_urlsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_rbac_v1alpha1_policy_rule->resource_names
    if(io_k8s_api_rbac_v1alpha1_policy_rule->resource_names) { 
    cJSON *resource_names = cJSON_AddArrayToObject(item, "resourceNames");
    if(resource_names == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *resource_namesListEntry;
    list_ForEach(resource_namesListEntry, io_k8s_api_rbac_v1alpha1_policy_rule->resource_names) {
    if(cJSON_AddStringToObject(resource_names, "", (char*)resource_namesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_rbac_v1alpha1_policy_rule->resources
    if(io_k8s_api_rbac_v1alpha1_policy_rule->resources) { 
    cJSON *resources = cJSON_AddArrayToObject(item, "resources");
    if(resources == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *resourcesListEntry;
    list_ForEach(resourcesListEntry, io_k8s_api_rbac_v1alpha1_policy_rule->resources) {
    if(cJSON_AddStringToObject(resources, "", (char*)resourcesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_rbac_v1alpha1_policy_rule->verbs
    if (!io_k8s_api_rbac_v1alpha1_policy_rule->verbs) {
        goto fail;
    }
    
    cJSON *verbs = cJSON_AddArrayToObject(item, "verbs");
    if(verbs == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *verbsListEntry;
    list_ForEach(verbsListEntry, io_k8s_api_rbac_v1alpha1_policy_rule->verbs) {
    if(cJSON_AddStringToObject(verbs, "", (char*)verbsListEntry->data) == NULL)
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

io_k8s_api_rbac_v1alpha1_policy_rule_t *io_k8s_api_rbac_v1alpha1_policy_rule_parseFromJSON(cJSON *io_k8s_api_rbac_v1alpha1_policy_ruleJSON){

    io_k8s_api_rbac_v1alpha1_policy_rule_t *io_k8s_api_rbac_v1alpha1_policy_rule_local_var = NULL;

    // io_k8s_api_rbac_v1alpha1_policy_rule->api_groups
    cJSON *api_groups = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_policy_ruleJSON, "apiGroups");
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

    // io_k8s_api_rbac_v1alpha1_policy_rule->non_resource_urls
    cJSON *non_resource_urls = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_policy_ruleJSON, "nonResourceURLs");
    list_t *non_resource_urlsList;
    if (non_resource_urls) { 
    cJSON *non_resource_urls_local;
    if(!cJSON_IsArray(non_resource_urls)) {
        goto end;//primitive container
    }
    non_resource_urlsList = list_create();

    cJSON_ArrayForEach(non_resource_urls_local, non_resource_urls)
    {
        if(!cJSON_IsString(non_resource_urls_local))
        {
            goto end;
        }
        list_addElement(non_resource_urlsList , strdup(non_resource_urls_local->valuestring));
    }
    }

    // io_k8s_api_rbac_v1alpha1_policy_rule->resource_names
    cJSON *resource_names = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_policy_ruleJSON, "resourceNames");
    list_t *resource_namesList;
    if (resource_names) { 
    cJSON *resource_names_local;
    if(!cJSON_IsArray(resource_names)) {
        goto end;//primitive container
    }
    resource_namesList = list_create();

    cJSON_ArrayForEach(resource_names_local, resource_names)
    {
        if(!cJSON_IsString(resource_names_local))
        {
            goto end;
        }
        list_addElement(resource_namesList , strdup(resource_names_local->valuestring));
    }
    }

    // io_k8s_api_rbac_v1alpha1_policy_rule->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_policy_ruleJSON, "resources");
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

    // io_k8s_api_rbac_v1alpha1_policy_rule->verbs
    cJSON *verbs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_policy_ruleJSON, "verbs");
    if (!verbs) {
        goto end;
    }

    list_t *verbsList;
    
    cJSON *verbs_local;
    if(!cJSON_IsArray(verbs)) {
        goto end;//primitive container
    }
    verbsList = list_create();

    cJSON_ArrayForEach(verbs_local, verbs)
    {
        if(!cJSON_IsString(verbs_local))
        {
            goto end;
        }
        list_addElement(verbsList , strdup(verbs_local->valuestring));
    }


    io_k8s_api_rbac_v1alpha1_policy_rule_local_var = io_k8s_api_rbac_v1alpha1_policy_rule_create (
        api_groups ? api_groupsList : NULL,
        non_resource_urls ? non_resource_urlsList : NULL,
        resource_names ? resource_namesList : NULL,
        resources ? resourcesList : NULL,
        verbsList
        );

    return io_k8s_api_rbac_v1alpha1_policy_rule_local_var;
end:
    return NULL;

}
