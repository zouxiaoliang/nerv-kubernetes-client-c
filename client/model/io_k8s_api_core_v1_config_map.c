#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_config_map.h"



io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map_create(
    char *api_version,
    list_t* binary_data,
    list_t* data,
    int immutable,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata
    ) {
    io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map_local_var = malloc(sizeof(io_k8s_api_core_v1_config_map_t));
    if (!io_k8s_api_core_v1_config_map_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_config_map_local_var->api_version = api_version;
    io_k8s_api_core_v1_config_map_local_var->binary_data = binary_data;
    io_k8s_api_core_v1_config_map_local_var->data = data;
    io_k8s_api_core_v1_config_map_local_var->immutable = immutable;
    io_k8s_api_core_v1_config_map_local_var->kind = kind;
    io_k8s_api_core_v1_config_map_local_var->metadata = metadata;

    return io_k8s_api_core_v1_config_map_local_var;
}


void io_k8s_api_core_v1_config_map_free(io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map) {
    if(NULL == io_k8s_api_core_v1_config_map){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_config_map->api_version) {
        free(io_k8s_api_core_v1_config_map->api_version);
        io_k8s_api_core_v1_config_map->api_version = NULL;
    }
    if (io_k8s_api_core_v1_config_map->binary_data) {
        list_ForEach(listEntry, io_k8s_api_core_v1_config_map->binary_data) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_config_map->binary_data);
        io_k8s_api_core_v1_config_map->binary_data = NULL;
    }
    if (io_k8s_api_core_v1_config_map->data) {
        list_ForEach(listEntry, io_k8s_api_core_v1_config_map->data) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_config_map->data);
        io_k8s_api_core_v1_config_map->data = NULL;
    }
    if (io_k8s_api_core_v1_config_map->kind) {
        free(io_k8s_api_core_v1_config_map->kind);
        io_k8s_api_core_v1_config_map->kind = NULL;
    }
    if (io_k8s_api_core_v1_config_map->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_config_map->metadata);
        io_k8s_api_core_v1_config_map->metadata = NULL;
    }
    free(io_k8s_api_core_v1_config_map);
}

cJSON *io_k8s_api_core_v1_config_map_convertToJSON(io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_config_map->api_version
    if(io_k8s_api_core_v1_config_map->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_config_map->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_config_map->binary_data
    if(io_k8s_api_core_v1_config_map->binary_data) { 
    cJSON *binary_data = cJSON_AddObjectToObject(item, "binaryData");
    if(binary_data == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = binary_data;
    listEntry_t *binary_dataListEntry;
    if (io_k8s_api_core_v1_config_map->binary_data) {
    list_ForEach(binary_dataListEntry, io_k8s_api_core_v1_config_map->binary_data) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)binary_dataListEntry->data;
    }
    }
     } 


    // io_k8s_api_core_v1_config_map->data
    if(io_k8s_api_core_v1_config_map->data) { 
    cJSON *data = cJSON_AddObjectToObject(item, "data");
    if(data == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = data;
    listEntry_t *dataListEntry;
    if (io_k8s_api_core_v1_config_map->data) {
    list_ForEach(dataListEntry, io_k8s_api_core_v1_config_map->data) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)dataListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_config_map->immutable
    if(io_k8s_api_core_v1_config_map->immutable) { 
    if(cJSON_AddBoolToObject(item, "immutable", io_k8s_api_core_v1_config_map->immutable) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_config_map->kind
    if(io_k8s_api_core_v1_config_map->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_config_map->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_config_map->metadata
    if(io_k8s_api_core_v1_config_map->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_config_map->metadata);
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

io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map_parseFromJSON(cJSON *io_k8s_api_core_v1_config_mapJSON){

    io_k8s_api_core_v1_config_map_t *io_k8s_api_core_v1_config_map_local_var = NULL;

    // io_k8s_api_core_v1_config_map->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_mapJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_config_map->binary_data
    cJSON *binary_data = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_mapJSON, "binaryData");
    list_t *binary_dataList;
    if (binary_data) { 
    cJSON *binary_data_local_map;
    if(!cJSON_IsObject(binary_data)) {
        goto end;//primitive map container
    }
    binary_dataList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(binary_data_local_map, binary_data)
    {
		cJSON *localMapObject = binary_data_local_map;
        list_addElement(binary_dataList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_config_map->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_mapJSON, "data");
    list_t *dataList;
    if (data) { 
    cJSON *data_local_map;
    if(!cJSON_IsObject(data)) {
        goto end;//primitive map container
    }
    dataList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(data_local_map, data)
    {
		cJSON *localMapObject = data_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(dataList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_config_map->immutable
    cJSON *immutable = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_mapJSON, "immutable");
    if (immutable) { 
    if(!cJSON_IsBool(immutable))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_config_map->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_mapJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_config_map->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_mapJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }


    io_k8s_api_core_v1_config_map_local_var = io_k8s_api_core_v1_config_map_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        binary_data ? binary_dataList : NULL,
        data ? dataList : NULL,
        immutable ? immutable->valueint : 0,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_config_map_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
