#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_secret.h"



io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret_create(
    char *api_version,
    list_t* data,
    int immutable,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t* string_data,
    char *type
    ) {
    io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret_local_var = malloc(sizeof(io_k8s_api_core_v1_secret_t));
    if (!io_k8s_api_core_v1_secret_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_secret_local_var->api_version = api_version;
    io_k8s_api_core_v1_secret_local_var->data = data;
    io_k8s_api_core_v1_secret_local_var->immutable = immutable;
    io_k8s_api_core_v1_secret_local_var->kind = kind;
    io_k8s_api_core_v1_secret_local_var->metadata = metadata;
    io_k8s_api_core_v1_secret_local_var->string_data = string_data;
    io_k8s_api_core_v1_secret_local_var->type = type;

    return io_k8s_api_core_v1_secret_local_var;
}


void io_k8s_api_core_v1_secret_free(io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret) {
    if(NULL == io_k8s_api_core_v1_secret){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_secret->api_version) {
        free(io_k8s_api_core_v1_secret->api_version);
        io_k8s_api_core_v1_secret->api_version = NULL;
    }
    if (io_k8s_api_core_v1_secret->data) {
        list_ForEach(listEntry, io_k8s_api_core_v1_secret->data) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_secret->data);
        io_k8s_api_core_v1_secret->data = NULL;
    }
    if (io_k8s_api_core_v1_secret->kind) {
        free(io_k8s_api_core_v1_secret->kind);
        io_k8s_api_core_v1_secret->kind = NULL;
    }
    if (io_k8s_api_core_v1_secret->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_secret->metadata);
        io_k8s_api_core_v1_secret->metadata = NULL;
    }
    if (io_k8s_api_core_v1_secret->string_data) {
        list_ForEach(listEntry, io_k8s_api_core_v1_secret->string_data) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_secret->string_data);
        io_k8s_api_core_v1_secret->string_data = NULL;
    }
    if (io_k8s_api_core_v1_secret->type) {
        free(io_k8s_api_core_v1_secret->type);
        io_k8s_api_core_v1_secret->type = NULL;
    }
    free(io_k8s_api_core_v1_secret);
}

cJSON *io_k8s_api_core_v1_secret_convertToJSON(io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_secret->api_version
    if(io_k8s_api_core_v1_secret->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_secret->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_secret->data
    if(io_k8s_api_core_v1_secret->data) { 
    cJSON *data = cJSON_AddObjectToObject(item, "data");
    if(data == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = data;
    listEntry_t *dataListEntry;
    if (io_k8s_api_core_v1_secret->data) {
    list_ForEach(dataListEntry, io_k8s_api_core_v1_secret->data) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)dataListEntry->data;
    }
    }
     } 


    // io_k8s_api_core_v1_secret->immutable
    if(io_k8s_api_core_v1_secret->immutable) { 
    if(cJSON_AddBoolToObject(item, "immutable", io_k8s_api_core_v1_secret->immutable) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_secret->kind
    if(io_k8s_api_core_v1_secret->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_secret->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_secret->metadata
    if(io_k8s_api_core_v1_secret->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_secret->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_secret->string_data
    if(io_k8s_api_core_v1_secret->string_data) { 
    cJSON *string_data = cJSON_AddObjectToObject(item, "stringData");
    if(string_data == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = string_data;
    listEntry_t *string_dataListEntry;
    if (io_k8s_api_core_v1_secret->string_data) {
    list_ForEach(string_dataListEntry, io_k8s_api_core_v1_secret->string_data) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)string_dataListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_secret->type
    if(io_k8s_api_core_v1_secret->type) { 
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_secret->type) == NULL) {
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

io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret_parseFromJSON(cJSON *io_k8s_api_core_v1_secretJSON){

    io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret_local_var = NULL;

    // io_k8s_api_core_v1_secret->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secretJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_secret->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secretJSON, "data");
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
        list_addElement(dataList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_secret->immutable
    cJSON *immutable = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secretJSON, "immutable");
    if (immutable) { 
    if(!cJSON_IsBool(immutable))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_secret->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secretJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_secret->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secretJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_core_v1_secret->string_data
    cJSON *string_data = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secretJSON, "stringData");
    list_t *string_dataList;
    if (string_data) { 
    cJSON *string_data_local_map;
    if(!cJSON_IsObject(string_data)) {
        goto end;//primitive map container
    }
    string_dataList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(string_data_local_map, string_data)
    {
		cJSON *localMapObject = string_data_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(string_dataList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_secret->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secretJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_secret_local_var = io_k8s_api_core_v1_secret_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        data ? dataList : NULL,
        immutable ? immutable->valueint : 0,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        string_data ? string_dataList : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return io_k8s_api_core_v1_secret_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
