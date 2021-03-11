#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_resource_quota_status.h"



io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status_create(
    list_t* hard,
    list_t* used
    ) {
    io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status_local_var = malloc(sizeof(io_k8s_api_core_v1_resource_quota_status_t));
    if (!io_k8s_api_core_v1_resource_quota_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_resource_quota_status_local_var->hard = hard;
    io_k8s_api_core_v1_resource_quota_status_local_var->used = used;

    return io_k8s_api_core_v1_resource_quota_status_local_var;
}


void io_k8s_api_core_v1_resource_quota_status_free(io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status) {
    if(NULL == io_k8s_api_core_v1_resource_quota_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_resource_quota_status->hard) {
        list_ForEach(listEntry, io_k8s_api_core_v1_resource_quota_status->hard) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_resource_quota_status->hard);
        io_k8s_api_core_v1_resource_quota_status->hard = NULL;
    }
    if (io_k8s_api_core_v1_resource_quota_status->used) {
        list_ForEach(listEntry, io_k8s_api_core_v1_resource_quota_status->used) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_resource_quota_status->used);
        io_k8s_api_core_v1_resource_quota_status->used = NULL;
    }
    free(io_k8s_api_core_v1_resource_quota_status);
}

cJSON *io_k8s_api_core_v1_resource_quota_status_convertToJSON(io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_resource_quota_status->hard
    if(io_k8s_api_core_v1_resource_quota_status->hard) { 
    cJSON *hard = cJSON_AddObjectToObject(item, "hard");
    if(hard == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = hard;
    listEntry_t *hardListEntry;
    if (io_k8s_api_core_v1_resource_quota_status->hard) {
    list_ForEach(hardListEntry, io_k8s_api_core_v1_resource_quota_status->hard) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)hardListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_resource_quota_status->used
    if(io_k8s_api_core_v1_resource_quota_status->used) { 
    cJSON *used = cJSON_AddObjectToObject(item, "used");
    if(used == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = used;
    listEntry_t *usedListEntry;
    if (io_k8s_api_core_v1_resource_quota_status->used) {
    list_ForEach(usedListEntry, io_k8s_api_core_v1_resource_quota_status->used) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)usedListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status_parseFromJSON(cJSON *io_k8s_api_core_v1_resource_quota_statusJSON){

    io_k8s_api_core_v1_resource_quota_status_t *io_k8s_api_core_v1_resource_quota_status_local_var = NULL;

    // io_k8s_api_core_v1_resource_quota_status->hard
    cJSON *hard = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_quota_statusJSON, "hard");
    list_t *hardList;
    if (hard) { 
    cJSON *hard_local_map;
    if(!cJSON_IsObject(hard)) {
        goto end;//primitive map container
    }
    hardList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(hard_local_map, hard)
    {
		cJSON *localMapObject = hard_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(hardList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_resource_quota_status->used
    cJSON *used = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_quota_statusJSON, "used");
    list_t *usedList;
    if (used) { 
    cJSON *used_local_map;
    if(!cJSON_IsObject(used)) {
        goto end;//primitive map container
    }
    usedList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(used_local_map, used)
    {
		cJSON *localMapObject = used_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(usedList , localMapKeyPair);
    }
    }


    io_k8s_api_core_v1_resource_quota_status_local_var = io_k8s_api_core_v1_resource_quota_status_create (
        hard ? hardList : NULL,
        used ? usedList : NULL
        );

    return io_k8s_api_core_v1_resource_quota_status_local_var;
end:
    return NULL;

}
