#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_rbac_v1alpha1_role_list.h"



io_k8s_api_rbac_v1alpha1_role_list_t *io_k8s_api_rbac_v1alpha1_role_list_create(
    char *api_version,
    list_t *items,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata
    ) {
    io_k8s_api_rbac_v1alpha1_role_list_t *io_k8s_api_rbac_v1alpha1_role_list_local_var = malloc(sizeof(io_k8s_api_rbac_v1alpha1_role_list_t));
    if (!io_k8s_api_rbac_v1alpha1_role_list_local_var) {
        return NULL;
    }
    io_k8s_api_rbac_v1alpha1_role_list_local_var->api_version = api_version;
    io_k8s_api_rbac_v1alpha1_role_list_local_var->items = items;
    io_k8s_api_rbac_v1alpha1_role_list_local_var->kind = kind;
    io_k8s_api_rbac_v1alpha1_role_list_local_var->metadata = metadata;

    return io_k8s_api_rbac_v1alpha1_role_list_local_var;
}


void io_k8s_api_rbac_v1alpha1_role_list_free(io_k8s_api_rbac_v1alpha1_role_list_t *io_k8s_api_rbac_v1alpha1_role_list) {
    if(NULL == io_k8s_api_rbac_v1alpha1_role_list){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_rbac_v1alpha1_role_list->api_version) {
        free(io_k8s_api_rbac_v1alpha1_role_list->api_version);
        io_k8s_api_rbac_v1alpha1_role_list->api_version = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_role_list->items) {
        list_ForEach(listEntry, io_k8s_api_rbac_v1alpha1_role_list->items) {
            io_k8s_api_rbac_v1alpha1_role_free(listEntry->data);
        }
        list_free(io_k8s_api_rbac_v1alpha1_role_list->items);
        io_k8s_api_rbac_v1alpha1_role_list->items = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_role_list->kind) {
        free(io_k8s_api_rbac_v1alpha1_role_list->kind);
        io_k8s_api_rbac_v1alpha1_role_list->kind = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_role_list->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_free(io_k8s_api_rbac_v1alpha1_role_list->metadata);
        io_k8s_api_rbac_v1alpha1_role_list->metadata = NULL;
    }
    free(io_k8s_api_rbac_v1alpha1_role_list);
}

cJSON *io_k8s_api_rbac_v1alpha1_role_list_convertToJSON(io_k8s_api_rbac_v1alpha1_role_list_t *io_k8s_api_rbac_v1alpha1_role_list) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_rbac_v1alpha1_role_list->api_version
    if(io_k8s_api_rbac_v1alpha1_role_list->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_rbac_v1alpha1_role_list->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_rbac_v1alpha1_role_list->items
    if (!io_k8s_api_rbac_v1alpha1_role_list->items) {
        goto fail;
    }
    
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (io_k8s_api_rbac_v1alpha1_role_list->items) {
    list_ForEach(itemsListEntry, io_k8s_api_rbac_v1alpha1_role_list->items) {
    cJSON *itemLocal = io_k8s_api_rbac_v1alpha1_role_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }


    // io_k8s_api_rbac_v1alpha1_role_list->kind
    if(io_k8s_api_rbac_v1alpha1_role_list->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_rbac_v1alpha1_role_list->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_rbac_v1alpha1_role_list->metadata
    if(io_k8s_api_rbac_v1alpha1_role_list->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_convertToJSON(io_k8s_api_rbac_v1alpha1_role_list->metadata);
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

io_k8s_api_rbac_v1alpha1_role_list_t *io_k8s_api_rbac_v1alpha1_role_list_parseFromJSON(cJSON *io_k8s_api_rbac_v1alpha1_role_listJSON){

    io_k8s_api_rbac_v1alpha1_role_list_t *io_k8s_api_rbac_v1alpha1_role_list_local_var = NULL;

    // io_k8s_api_rbac_v1alpha1_role_list->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_role_listJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_rbac_v1alpha1_role_list->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_role_listJSON, "items");
    if (!items) {
        goto end;
    }

    list_t *itemsList;
    
    cJSON *items_local_nonprimitive;
    if(!cJSON_IsArray(items)){
        goto end; //nonprimitive container
    }

    itemsList = list_create();

    cJSON_ArrayForEach(items_local_nonprimitive,items )
    {
        if(!cJSON_IsObject(items_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_rbac_v1alpha1_role_t *itemsItem = io_k8s_api_rbac_v1alpha1_role_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }

    // io_k8s_api_rbac_v1alpha1_role_list->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_role_listJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_rbac_v1alpha1_role_list->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_role_listJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_parseFromJSON(metadata); //nonprimitive
    }


    io_k8s_api_rbac_v1alpha1_role_list_local_var = io_k8s_api_rbac_v1alpha1_role_list_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        itemsList,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL
        );

    return io_k8s_api_rbac_v1alpha1_role_list_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
