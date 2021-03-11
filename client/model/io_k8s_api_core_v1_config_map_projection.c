#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_config_map_projection.h"



io_k8s_api_core_v1_config_map_projection_t *io_k8s_api_core_v1_config_map_projection_create(
    list_t *items,
    char *name,
    int optional
    ) {
    io_k8s_api_core_v1_config_map_projection_t *io_k8s_api_core_v1_config_map_projection_local_var = malloc(sizeof(io_k8s_api_core_v1_config_map_projection_t));
    if (!io_k8s_api_core_v1_config_map_projection_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_config_map_projection_local_var->items = items;
    io_k8s_api_core_v1_config_map_projection_local_var->name = name;
    io_k8s_api_core_v1_config_map_projection_local_var->optional = optional;

    return io_k8s_api_core_v1_config_map_projection_local_var;
}


void io_k8s_api_core_v1_config_map_projection_free(io_k8s_api_core_v1_config_map_projection_t *io_k8s_api_core_v1_config_map_projection) {
    if(NULL == io_k8s_api_core_v1_config_map_projection){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_config_map_projection->items) {
        list_ForEach(listEntry, io_k8s_api_core_v1_config_map_projection->items) {
            io_k8s_api_core_v1_key_to_path_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_config_map_projection->items);
        io_k8s_api_core_v1_config_map_projection->items = NULL;
    }
    if (io_k8s_api_core_v1_config_map_projection->name) {
        free(io_k8s_api_core_v1_config_map_projection->name);
        io_k8s_api_core_v1_config_map_projection->name = NULL;
    }
    free(io_k8s_api_core_v1_config_map_projection);
}

cJSON *io_k8s_api_core_v1_config_map_projection_convertToJSON(io_k8s_api_core_v1_config_map_projection_t *io_k8s_api_core_v1_config_map_projection) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_config_map_projection->items
    if(io_k8s_api_core_v1_config_map_projection->items) { 
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (io_k8s_api_core_v1_config_map_projection->items) {
    list_ForEach(itemsListEntry, io_k8s_api_core_v1_config_map_projection->items) {
    cJSON *itemLocal = io_k8s_api_core_v1_key_to_path_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_config_map_projection->name
    if(io_k8s_api_core_v1_config_map_projection->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_config_map_projection->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_config_map_projection->optional
    if(io_k8s_api_core_v1_config_map_projection->optional) { 
    if(cJSON_AddBoolToObject(item, "optional", io_k8s_api_core_v1_config_map_projection->optional) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_config_map_projection_t *io_k8s_api_core_v1_config_map_projection_parseFromJSON(cJSON *io_k8s_api_core_v1_config_map_projectionJSON){

    io_k8s_api_core_v1_config_map_projection_t *io_k8s_api_core_v1_config_map_projection_local_var = NULL;

    // io_k8s_api_core_v1_config_map_projection->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_projectionJSON, "items");
    list_t *itemsList;
    if (items) { 
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
        io_k8s_api_core_v1_key_to_path_t *itemsItem = io_k8s_api_core_v1_key_to_path_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }
    }

    // io_k8s_api_core_v1_config_map_projection->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_projectionJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_config_map_projection->optional
    cJSON *optional = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_projectionJSON, "optional");
    if (optional) { 
    if(!cJSON_IsBool(optional))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_core_v1_config_map_projection_local_var = io_k8s_api_core_v1_config_map_projection_create (
        items ? itemsList : NULL,
        name ? strdup(name->valuestring) : NULL,
        optional ? optional->valueint : 0
        );

    return io_k8s_api_core_v1_config_map_projection_local_var;
end:
    return NULL;

}
