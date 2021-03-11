#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list.h"



io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_create(
    char *api_version,
    list_t *groups,
    char *kind
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_local_var->api_version = api_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_local_var->groups = groups;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_local_var->kind = kind;

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->api_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->api_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->api_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->groups) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->groups) {
            io_k8s_apimachinery_pkg_apis_meta_v1_api_group_free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->groups);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->groups = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->kind) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->kind);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->kind = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->api_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->groups
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->groups) {
        goto fail;
    }
    
    cJSON *groups = cJSON_AddArrayToObject(item, "groups");
    if(groups == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *groupsListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->groups) {
    list_ForEach(groupsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->groups) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_api_group_convertToJSON(groupsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(groups, itemLocal);
    }
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->kind
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->kind) == NULL) {
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

io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_listJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_listJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->groups
    cJSON *groups = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_listJSON, "groups");
    if (!groups) {
        goto end;
    }

    list_t *groupsList;
    
    cJSON *groups_local_nonprimitive;
    if(!cJSON_IsArray(groups)){
        goto end; //nonprimitive container
    }

    groupsList = list_create();

    cJSON_ArrayForEach(groups_local_nonprimitive,groups )
    {
        if(!cJSON_IsObject(groups_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *groupsItem = io_k8s_apimachinery_pkg_apis_meta_v1_api_group_parseFromJSON(groups_local_nonprimitive);

        list_addElement(groupsList, groupsItem);
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_listJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        groupsList,
        kind ? strdup(kind->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_group_list_local_var;
end:
    return NULL;

}
