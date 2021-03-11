#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_resource_policy_rule.h"



io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_create(
    list_t *api_groups,
    int cluster_scope,
    list_t *namespaces,
    list_t *resources,
    list_t *verbs
    ) {
    io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_t));
    if (!io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var->api_groups = api_groups;
    io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var->cluster_scope = cluster_scope;
    io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var->namespaces = namespaces;
    io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var->resources = resources;
    io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var->verbs = verbs;

    return io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_free(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_resource_policy_rule) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_resource_policy_rule){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->api_groups) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->api_groups) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->api_groups);
        io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->api_groups = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->namespaces) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->namespaces) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->namespaces);
        io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->namespaces = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->resources) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->resources) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->resources);
        io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->resources = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->verbs) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->verbs) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->verbs);
        io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->verbs = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_convertToJSON(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_resource_policy_rule) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->api_groups
    if (!io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->api_groups) {
        goto fail;
    }
    
    cJSON *api_groups = cJSON_AddArrayToObject(item, "apiGroups");
    if(api_groups == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *api_groupsListEntry;
    list_ForEach(api_groupsListEntry, io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->api_groups) {
    if(cJSON_AddStringToObject(api_groups, "", (char*)api_groupsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->cluster_scope
    if(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->cluster_scope) { 
    if(cJSON_AddBoolToObject(item, "clusterScope", io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->cluster_scope) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->namespaces
    if(io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->namespaces) { 
    cJSON *namespaces = cJSON_AddArrayToObject(item, "namespaces");
    if(namespaces == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *namespacesListEntry;
    list_ForEach(namespacesListEntry, io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->namespaces) {
    if(cJSON_AddStringToObject(namespaces, "", (char*)namespacesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->resources
    if (!io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->resources) {
        goto fail;
    }
    
    cJSON *resources = cJSON_AddArrayToObject(item, "resources");
    if(resources == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *resourcesListEntry;
    list_ForEach(resourcesListEntry, io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->resources) {
    if(cJSON_AddStringToObject(resources, "", (char*)resourcesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->verbs
    if (!io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->verbs) {
        goto fail;
    }
    
    cJSON *verbs = cJSON_AddArrayToObject(item, "verbs");
    if(verbs == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *verbsListEntry;
    list_ForEach(verbsListEntry, io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->verbs) {
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

io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_resource_policy_ruleJSON){

    io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_t *io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->api_groups
    cJSON *api_groups = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_resource_policy_ruleJSON, "apiGroups");
    if (!api_groups) {
        goto end;
    }

    list_t *api_groupsList;
    
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

    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->cluster_scope
    cJSON *cluster_scope = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_resource_policy_ruleJSON, "clusterScope");
    if (cluster_scope) { 
    if(!cJSON_IsBool(cluster_scope))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->namespaces
    cJSON *namespaces = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_resource_policy_ruleJSON, "namespaces");
    list_t *namespacesList;
    if (namespaces) { 
    cJSON *namespaces_local;
    if(!cJSON_IsArray(namespaces)) {
        goto end;//primitive container
    }
    namespacesList = list_create();

    cJSON_ArrayForEach(namespaces_local, namespaces)
    {
        if(!cJSON_IsString(namespaces_local))
        {
            goto end;
        }
        list_addElement(namespacesList , strdup(namespaces_local->valuestring));
    }
    }

    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_resource_policy_ruleJSON, "resources");
    if (!resources) {
        goto end;
    }

    list_t *resourcesList;
    
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

    // io_k8s_api_flowcontrol_v1beta1_resource_policy_rule->verbs
    cJSON *verbs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_resource_policy_ruleJSON, "verbs");
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


    io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var = io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_create (
        api_groupsList,
        cluster_scope ? cluster_scope->valueint : 0,
        namespaces ? namespacesList : NULL,
        resourcesList,
        verbsList
        );

    return io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_local_var;
end:
    return NULL;

}
