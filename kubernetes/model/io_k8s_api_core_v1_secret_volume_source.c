#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_secret_volume_source.h"



io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source_create(
    int default_mode,
    list_t *items,
    int optional,
    char *secret_name
    ) {
    io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_secret_volume_source_t));
    if (!io_k8s_api_core_v1_secret_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_secret_volume_source_local_var->default_mode = default_mode;
    io_k8s_api_core_v1_secret_volume_source_local_var->items = items;
    io_k8s_api_core_v1_secret_volume_source_local_var->optional = optional;
    io_k8s_api_core_v1_secret_volume_source_local_var->secret_name = secret_name;

    return io_k8s_api_core_v1_secret_volume_source_local_var;
}


void io_k8s_api_core_v1_secret_volume_source_free(io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source) {
    if(NULL == io_k8s_api_core_v1_secret_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_secret_volume_source->items) {
        list_ForEach(listEntry, io_k8s_api_core_v1_secret_volume_source->items) {
            io_k8s_api_core_v1_key_to_path_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_secret_volume_source->items);
        io_k8s_api_core_v1_secret_volume_source->items = NULL;
    }
    if (io_k8s_api_core_v1_secret_volume_source->secret_name) {
        free(io_k8s_api_core_v1_secret_volume_source->secret_name);
        io_k8s_api_core_v1_secret_volume_source->secret_name = NULL;
    }
    free(io_k8s_api_core_v1_secret_volume_source);
}

cJSON *io_k8s_api_core_v1_secret_volume_source_convertToJSON(io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_secret_volume_source->default_mode
    if(io_k8s_api_core_v1_secret_volume_source->default_mode) { 
    if(cJSON_AddNumberToObject(item, "defaultMode", io_k8s_api_core_v1_secret_volume_source->default_mode) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_secret_volume_source->items
    if(io_k8s_api_core_v1_secret_volume_source->items) { 
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (io_k8s_api_core_v1_secret_volume_source->items) {
    list_ForEach(itemsListEntry, io_k8s_api_core_v1_secret_volume_source->items) {
    cJSON *itemLocal = io_k8s_api_core_v1_key_to_path_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_secret_volume_source->optional
    if(io_k8s_api_core_v1_secret_volume_source->optional) { 
    if(cJSON_AddBoolToObject(item, "optional", io_k8s_api_core_v1_secret_volume_source->optional) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_secret_volume_source->secret_name
    if(io_k8s_api_core_v1_secret_volume_source->secret_name) { 
    if(cJSON_AddStringToObject(item, "secretName", io_k8s_api_core_v1_secret_volume_source->secret_name) == NULL) {
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

io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_secret_volume_sourceJSON){

    io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_secret_volume_source->default_mode
    cJSON *default_mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secret_volume_sourceJSON, "defaultMode");
    if (default_mode) { 
    if(!cJSON_IsNumber(default_mode))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_secret_volume_source->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secret_volume_sourceJSON, "items");
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

    // io_k8s_api_core_v1_secret_volume_source->optional
    cJSON *optional = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secret_volume_sourceJSON, "optional");
    if (optional) { 
    if(!cJSON_IsBool(optional))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_secret_volume_source->secret_name
    cJSON *secret_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secret_volume_sourceJSON, "secretName");
    if (secret_name) { 
    if(!cJSON_IsString(secret_name))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_secret_volume_source_local_var = io_k8s_api_core_v1_secret_volume_source_create (
        default_mode ? default_mode->valuedouble : 0,
        items ? itemsList : NULL,
        optional ? optional->valueint : 0,
        secret_name ? strdup(secret_name->valuestring) : NULL
        );

    return io_k8s_api_core_v1_secret_volume_source_local_var;
end:
    return NULL;

}
