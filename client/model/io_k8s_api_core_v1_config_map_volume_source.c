#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_config_map_volume_source.h"



io_k8s_api_core_v1_config_map_volume_source_t *io_k8s_api_core_v1_config_map_volume_source_create(
    int default_mode,
    list_t *items,
    char *name,
    int optional
    ) {
    io_k8s_api_core_v1_config_map_volume_source_t *io_k8s_api_core_v1_config_map_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_config_map_volume_source_t));
    if (!io_k8s_api_core_v1_config_map_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_config_map_volume_source_local_var->default_mode = default_mode;
    io_k8s_api_core_v1_config_map_volume_source_local_var->items = items;
    io_k8s_api_core_v1_config_map_volume_source_local_var->name = name;
    io_k8s_api_core_v1_config_map_volume_source_local_var->optional = optional;

    return io_k8s_api_core_v1_config_map_volume_source_local_var;
}


void io_k8s_api_core_v1_config_map_volume_source_free(io_k8s_api_core_v1_config_map_volume_source_t *io_k8s_api_core_v1_config_map_volume_source) {
    if(NULL == io_k8s_api_core_v1_config_map_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_config_map_volume_source->items) {
        list_ForEach(listEntry, io_k8s_api_core_v1_config_map_volume_source->items) {
            io_k8s_api_core_v1_key_to_path_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_config_map_volume_source->items);
        io_k8s_api_core_v1_config_map_volume_source->items = NULL;
    }
    if (io_k8s_api_core_v1_config_map_volume_source->name) {
        free(io_k8s_api_core_v1_config_map_volume_source->name);
        io_k8s_api_core_v1_config_map_volume_source->name = NULL;
    }
    free(io_k8s_api_core_v1_config_map_volume_source);
}

cJSON *io_k8s_api_core_v1_config_map_volume_source_convertToJSON(io_k8s_api_core_v1_config_map_volume_source_t *io_k8s_api_core_v1_config_map_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_config_map_volume_source->default_mode
    if(io_k8s_api_core_v1_config_map_volume_source->default_mode) { 
    if(cJSON_AddNumberToObject(item, "defaultMode", io_k8s_api_core_v1_config_map_volume_source->default_mode) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_config_map_volume_source->items
    if(io_k8s_api_core_v1_config_map_volume_source->items) { 
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (io_k8s_api_core_v1_config_map_volume_source->items) {
    list_ForEach(itemsListEntry, io_k8s_api_core_v1_config_map_volume_source->items) {
    cJSON *itemLocal = io_k8s_api_core_v1_key_to_path_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_config_map_volume_source->name
    if(io_k8s_api_core_v1_config_map_volume_source->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_config_map_volume_source->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_config_map_volume_source->optional
    if(io_k8s_api_core_v1_config_map_volume_source->optional) { 
    if(cJSON_AddBoolToObject(item, "optional", io_k8s_api_core_v1_config_map_volume_source->optional) == NULL) {
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

io_k8s_api_core_v1_config_map_volume_source_t *io_k8s_api_core_v1_config_map_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_config_map_volume_sourceJSON){

    io_k8s_api_core_v1_config_map_volume_source_t *io_k8s_api_core_v1_config_map_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_config_map_volume_source->default_mode
    cJSON *default_mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_volume_sourceJSON, "defaultMode");
    if (default_mode) { 
    if(!cJSON_IsNumber(default_mode))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_config_map_volume_source->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_volume_sourceJSON, "items");
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

    // io_k8s_api_core_v1_config_map_volume_source->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_volume_sourceJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_config_map_volume_source->optional
    cJSON *optional = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_volume_sourceJSON, "optional");
    if (optional) { 
    if(!cJSON_IsBool(optional))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_core_v1_config_map_volume_source_local_var = io_k8s_api_core_v1_config_map_volume_source_create (
        default_mode ? default_mode->valuedouble : 0,
        items ? itemsList : NULL,
        name ? strdup(name->valuestring) : NULL,
        optional ? optional->valueint : 0
        );

    return io_k8s_api_core_v1_config_map_volume_source_local_var;
end:
    return NULL;

}
