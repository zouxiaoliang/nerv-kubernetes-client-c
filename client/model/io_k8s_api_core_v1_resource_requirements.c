#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_resource_requirements.h"



io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements_create(
    list_t* limits,
    list_t* requests
    ) {
    io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements_local_var = malloc(sizeof(io_k8s_api_core_v1_resource_requirements_t));
    if (!io_k8s_api_core_v1_resource_requirements_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_resource_requirements_local_var->limits = limits;
    io_k8s_api_core_v1_resource_requirements_local_var->requests = requests;

    return io_k8s_api_core_v1_resource_requirements_local_var;
}


void io_k8s_api_core_v1_resource_requirements_free(io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements) {
    if(NULL == io_k8s_api_core_v1_resource_requirements){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_resource_requirements->limits) {
        list_ForEach(listEntry, io_k8s_api_core_v1_resource_requirements->limits) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_resource_requirements->limits);
        io_k8s_api_core_v1_resource_requirements->limits = NULL;
    }
    if (io_k8s_api_core_v1_resource_requirements->requests) {
        list_ForEach(listEntry, io_k8s_api_core_v1_resource_requirements->requests) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_resource_requirements->requests);
        io_k8s_api_core_v1_resource_requirements->requests = NULL;
    }
    free(io_k8s_api_core_v1_resource_requirements);
}

cJSON *io_k8s_api_core_v1_resource_requirements_convertToJSON(io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_resource_requirements->limits
    if(io_k8s_api_core_v1_resource_requirements->limits) { 
    cJSON *limits = cJSON_AddObjectToObject(item, "limits");
    if(limits == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = limits;
    listEntry_t *limitsListEntry;
    if (io_k8s_api_core_v1_resource_requirements->limits) {
    list_ForEach(limitsListEntry, io_k8s_api_core_v1_resource_requirements->limits) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)limitsListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_resource_requirements->requests
    if(io_k8s_api_core_v1_resource_requirements->requests) { 
    cJSON *requests = cJSON_AddObjectToObject(item, "requests");
    if(requests == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = requests;
    listEntry_t *requestsListEntry;
    if (io_k8s_api_core_v1_resource_requirements->requests) {
    list_ForEach(requestsListEntry, io_k8s_api_core_v1_resource_requirements->requests) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)requestsListEntry->data;
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

io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements_parseFromJSON(cJSON *io_k8s_api_core_v1_resource_requirementsJSON){

    io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements_local_var = NULL;

    // io_k8s_api_core_v1_resource_requirements->limits
    cJSON *limits = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_requirementsJSON, "limits");
    list_t *limitsList;
    if (limits) { 
    cJSON *limits_local_map;
    if(!cJSON_IsObject(limits)) {
        goto end;//primitive map container
    }
    limitsList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(limits_local_map, limits)
    {
		cJSON *localMapObject = limits_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(limitsList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_resource_requirements->requests
    cJSON *requests = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_requirementsJSON, "requests");
    list_t *requestsList;
    if (requests) { 
    cJSON *requests_local_map;
    if(!cJSON_IsObject(requests)) {
        goto end;//primitive map container
    }
    requestsList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(requests_local_map, requests)
    {
		cJSON *localMapObject = requests_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(requestsList , localMapKeyPair);
    }
    }


    io_k8s_api_core_v1_resource_requirements_local_var = io_k8s_api_core_v1_resource_requirements_create (
        limits ? limitsList : NULL,
        requests ? requestsList : NULL
        );

    return io_k8s_api_core_v1_resource_requirements_local_var;
end:
    return NULL;

}
