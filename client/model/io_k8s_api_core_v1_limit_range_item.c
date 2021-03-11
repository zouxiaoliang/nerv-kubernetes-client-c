#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_limit_range_item.h"



io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item_create(
    list_t* _default,
    list_t* default_request,
    list_t* max,
    list_t* max_limit_request_ratio,
    list_t* min,
    char *type
    ) {
    io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item_local_var = malloc(sizeof(io_k8s_api_core_v1_limit_range_item_t));
    if (!io_k8s_api_core_v1_limit_range_item_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_limit_range_item_local_var->_default = _default;
    io_k8s_api_core_v1_limit_range_item_local_var->default_request = default_request;
    io_k8s_api_core_v1_limit_range_item_local_var->max = max;
    io_k8s_api_core_v1_limit_range_item_local_var->max_limit_request_ratio = max_limit_request_ratio;
    io_k8s_api_core_v1_limit_range_item_local_var->min = min;
    io_k8s_api_core_v1_limit_range_item_local_var->type = type;

    return io_k8s_api_core_v1_limit_range_item_local_var;
}


void io_k8s_api_core_v1_limit_range_item_free(io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item) {
    if(NULL == io_k8s_api_core_v1_limit_range_item){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_limit_range_item->_default) {
        list_ForEach(listEntry, io_k8s_api_core_v1_limit_range_item->_default) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_limit_range_item->_default);
        io_k8s_api_core_v1_limit_range_item->_default = NULL;
    }
    if (io_k8s_api_core_v1_limit_range_item->default_request) {
        list_ForEach(listEntry, io_k8s_api_core_v1_limit_range_item->default_request) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_limit_range_item->default_request);
        io_k8s_api_core_v1_limit_range_item->default_request = NULL;
    }
    if (io_k8s_api_core_v1_limit_range_item->max) {
        list_ForEach(listEntry, io_k8s_api_core_v1_limit_range_item->max) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_limit_range_item->max);
        io_k8s_api_core_v1_limit_range_item->max = NULL;
    }
    if (io_k8s_api_core_v1_limit_range_item->max_limit_request_ratio) {
        list_ForEach(listEntry, io_k8s_api_core_v1_limit_range_item->max_limit_request_ratio) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_limit_range_item->max_limit_request_ratio);
        io_k8s_api_core_v1_limit_range_item->max_limit_request_ratio = NULL;
    }
    if (io_k8s_api_core_v1_limit_range_item->min) {
        list_ForEach(listEntry, io_k8s_api_core_v1_limit_range_item->min) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_limit_range_item->min);
        io_k8s_api_core_v1_limit_range_item->min = NULL;
    }
    if (io_k8s_api_core_v1_limit_range_item->type) {
        free(io_k8s_api_core_v1_limit_range_item->type);
        io_k8s_api_core_v1_limit_range_item->type = NULL;
    }
    free(io_k8s_api_core_v1_limit_range_item);
}

cJSON *io_k8s_api_core_v1_limit_range_item_convertToJSON(io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_limit_range_item->_default
    if(io_k8s_api_core_v1_limit_range_item->_default) { 
    cJSON *_default = cJSON_AddObjectToObject(item, "default");
    if(_default == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = _default;
    listEntry_t *_defaultListEntry;
    if (io_k8s_api_core_v1_limit_range_item->_default) {
    list_ForEach(_defaultListEntry, io_k8s_api_core_v1_limit_range_item->_default) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)_defaultListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_limit_range_item->default_request
    if(io_k8s_api_core_v1_limit_range_item->default_request) { 
    cJSON *default_request = cJSON_AddObjectToObject(item, "defaultRequest");
    if(default_request == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = default_request;
    listEntry_t *default_requestListEntry;
    if (io_k8s_api_core_v1_limit_range_item->default_request) {
    list_ForEach(default_requestListEntry, io_k8s_api_core_v1_limit_range_item->default_request) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)default_requestListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_limit_range_item->max
    if(io_k8s_api_core_v1_limit_range_item->max) { 
    cJSON *max = cJSON_AddObjectToObject(item, "max");
    if(max == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = max;
    listEntry_t *maxListEntry;
    if (io_k8s_api_core_v1_limit_range_item->max) {
    list_ForEach(maxListEntry, io_k8s_api_core_v1_limit_range_item->max) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)maxListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_limit_range_item->max_limit_request_ratio
    if(io_k8s_api_core_v1_limit_range_item->max_limit_request_ratio) { 
    cJSON *max_limit_request_ratio = cJSON_AddObjectToObject(item, "maxLimitRequestRatio");
    if(max_limit_request_ratio == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = max_limit_request_ratio;
    listEntry_t *max_limit_request_ratioListEntry;
    if (io_k8s_api_core_v1_limit_range_item->max_limit_request_ratio) {
    list_ForEach(max_limit_request_ratioListEntry, io_k8s_api_core_v1_limit_range_item->max_limit_request_ratio) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)max_limit_request_ratioListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_limit_range_item->min
    if(io_k8s_api_core_v1_limit_range_item->min) { 
    cJSON *min = cJSON_AddObjectToObject(item, "min");
    if(min == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = min;
    listEntry_t *minListEntry;
    if (io_k8s_api_core_v1_limit_range_item->min) {
    list_ForEach(minListEntry, io_k8s_api_core_v1_limit_range_item->min) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)minListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_limit_range_item->type
    if (!io_k8s_api_core_v1_limit_range_item->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_limit_range_item->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item_parseFromJSON(cJSON *io_k8s_api_core_v1_limit_range_itemJSON){

    io_k8s_api_core_v1_limit_range_item_t *io_k8s_api_core_v1_limit_range_item_local_var = NULL;

    // io_k8s_api_core_v1_limit_range_item->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_limit_range_itemJSON, "default");
    list_t *_defaultList;
    if (_default) { 
    cJSON *_default_local_map;
    if(!cJSON_IsObject(_default)) {
        goto end;//primitive map container
    }
    _defaultList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(_default_local_map, _default)
    {
		cJSON *localMapObject = _default_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(_defaultList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_limit_range_item->default_request
    cJSON *default_request = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_limit_range_itemJSON, "defaultRequest");
    list_t *default_requestList;
    if (default_request) { 
    cJSON *default_request_local_map;
    if(!cJSON_IsObject(default_request)) {
        goto end;//primitive map container
    }
    default_requestList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(default_request_local_map, default_request)
    {
		cJSON *localMapObject = default_request_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(default_requestList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_limit_range_item->max
    cJSON *max = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_limit_range_itemJSON, "max");
    list_t *maxList;
    if (max) { 
    cJSON *max_local_map;
    if(!cJSON_IsObject(max)) {
        goto end;//primitive map container
    }
    maxList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(max_local_map, max)
    {
		cJSON *localMapObject = max_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(maxList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_limit_range_item->max_limit_request_ratio
    cJSON *max_limit_request_ratio = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_limit_range_itemJSON, "maxLimitRequestRatio");
    list_t *max_limit_request_ratioList;
    if (max_limit_request_ratio) { 
    cJSON *max_limit_request_ratio_local_map;
    if(!cJSON_IsObject(max_limit_request_ratio)) {
        goto end;//primitive map container
    }
    max_limit_request_ratioList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(max_limit_request_ratio_local_map, max_limit_request_ratio)
    {
		cJSON *localMapObject = max_limit_request_ratio_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(max_limit_request_ratioList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_limit_range_item->min
    cJSON *min = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_limit_range_itemJSON, "min");
    list_t *minList;
    if (min) { 
    cJSON *min_local_map;
    if(!cJSON_IsObject(min)) {
        goto end;//primitive map container
    }
    minList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(min_local_map, min)
    {
		cJSON *localMapObject = min_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(minList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_limit_range_item->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_limit_range_itemJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_limit_range_item_local_var = io_k8s_api_core_v1_limit_range_item_create (
        _default ? _defaultList : NULL,
        default_request ? default_requestList : NULL,
        max ? maxList : NULL,
        max_limit_request_ratio ? max_limit_request_ratioList : NULL,
        min ? minList : NULL,
        strdup(type->valuestring)
        );

    return io_k8s_api_core_v1_limit_range_item_local_var;
end:
    return NULL;

}
