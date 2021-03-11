#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list.h"



io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_create(
    char *api_version,
    char *group_version,
    char *kind,
    list_t *resources
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var->api_version = api_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var->group_version = group_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var->kind = kind;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var->resources = resources;

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->api_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->api_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->api_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->group_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->group_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->group_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->kind) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->kind);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->kind = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->resources) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->resources) {
            io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->resources);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->resources = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->api_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->group_version
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->group_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "groupVersion", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->group_version) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->kind
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->resources
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->resources) {
        goto fail;
    }
    
    cJSON *resources = cJSON_AddArrayToObject(item, "resources");
    if(resources == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resourcesListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->resources) {
    list_ForEach(resourcesListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->resources) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_convertToJSON(resourcesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(resources, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_listJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_listJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->group_version
    cJSON *group_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_listJSON, "groupVersion");
    if (!group_version) {
        goto end;
    }

    
    if(!cJSON_IsString(group_version))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_listJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_listJSON, "resources");
    if (!resources) {
        goto end;
    }

    list_t *resourcesList;
    
    cJSON *resources_local_nonprimitive;
    if(!cJSON_IsArray(resources)){
        goto end; //nonprimitive container
    }

    resourcesList = list_create();

    cJSON_ArrayForEach(resources_local_nonprimitive,resources )
    {
        if(!cJSON_IsObject(resources_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_t *resourcesItem = io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_parseFromJSON(resources_local_nonprimitive);

        list_addElement(resourcesList, resourcesItem);
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        strdup(group_version->valuestring),
        kind ? strdup(kind->valuestring) : NULL,
        resourcesList
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_resource_list_local_var;
end:
    return NULL;

}
