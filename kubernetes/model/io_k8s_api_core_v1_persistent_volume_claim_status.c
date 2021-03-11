#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_persistent_volume_claim_status.h"



io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status_create(
    list_t *access_modes,
    list_t* capacity,
    list_t *conditions,
    char *phase
    ) {
    io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status_local_var = malloc(sizeof(io_k8s_api_core_v1_persistent_volume_claim_status_t));
    if (!io_k8s_api_core_v1_persistent_volume_claim_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_persistent_volume_claim_status_local_var->access_modes = access_modes;
    io_k8s_api_core_v1_persistent_volume_claim_status_local_var->capacity = capacity;
    io_k8s_api_core_v1_persistent_volume_claim_status_local_var->conditions = conditions;
    io_k8s_api_core_v1_persistent_volume_claim_status_local_var->phase = phase;

    return io_k8s_api_core_v1_persistent_volume_claim_status_local_var;
}


void io_k8s_api_core_v1_persistent_volume_claim_status_free(io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status) {
    if(NULL == io_k8s_api_core_v1_persistent_volume_claim_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_persistent_volume_claim_status->access_modes) {
        list_ForEach(listEntry, io_k8s_api_core_v1_persistent_volume_claim_status->access_modes) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_persistent_volume_claim_status->access_modes);
        io_k8s_api_core_v1_persistent_volume_claim_status->access_modes = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_status->capacity) {
        list_ForEach(listEntry, io_k8s_api_core_v1_persistent_volume_claim_status->capacity) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_persistent_volume_claim_status->capacity);
        io_k8s_api_core_v1_persistent_volume_claim_status->capacity = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_core_v1_persistent_volume_claim_status->conditions) {
            io_k8s_api_core_v1_persistent_volume_claim_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_persistent_volume_claim_status->conditions);
        io_k8s_api_core_v1_persistent_volume_claim_status->conditions = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_status->phase) {
        free(io_k8s_api_core_v1_persistent_volume_claim_status->phase);
        io_k8s_api_core_v1_persistent_volume_claim_status->phase = NULL;
    }
    free(io_k8s_api_core_v1_persistent_volume_claim_status);
}

cJSON *io_k8s_api_core_v1_persistent_volume_claim_status_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_persistent_volume_claim_status->access_modes
    if(io_k8s_api_core_v1_persistent_volume_claim_status->access_modes) { 
    cJSON *access_modes = cJSON_AddArrayToObject(item, "accessModes");
    if(access_modes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *access_modesListEntry;
    list_ForEach(access_modesListEntry, io_k8s_api_core_v1_persistent_volume_claim_status->access_modes) {
    if(cJSON_AddStringToObject(access_modes, "", (char*)access_modesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_status->capacity
    if(io_k8s_api_core_v1_persistent_volume_claim_status->capacity) { 
    cJSON *capacity = cJSON_AddObjectToObject(item, "capacity");
    if(capacity == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = capacity;
    listEntry_t *capacityListEntry;
    if (io_k8s_api_core_v1_persistent_volume_claim_status->capacity) {
    list_ForEach(capacityListEntry, io_k8s_api_core_v1_persistent_volume_claim_status->capacity) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)capacityListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_status->conditions
    if(io_k8s_api_core_v1_persistent_volume_claim_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_core_v1_persistent_volume_claim_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_core_v1_persistent_volume_claim_status->conditions) {
    cJSON *itemLocal = io_k8s_api_core_v1_persistent_volume_claim_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_status->phase
    if(io_k8s_api_core_v1_persistent_volume_claim_status->phase) { 
    if(cJSON_AddStringToObject(item, "phase", io_k8s_api_core_v1_persistent_volume_claim_status->phase) == NULL) {
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

io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_claim_statusJSON){

    io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status_local_var = NULL;

    // io_k8s_api_core_v1_persistent_volume_claim_status->access_modes
    cJSON *access_modes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_statusJSON, "accessModes");
    list_t *access_modesList;
    if (access_modes) { 
    cJSON *access_modes_local;
    if(!cJSON_IsArray(access_modes)) {
        goto end;//primitive container
    }
    access_modesList = list_create();

    cJSON_ArrayForEach(access_modes_local, access_modes)
    {
        if(!cJSON_IsString(access_modes_local))
        {
            goto end;
        }
        list_addElement(access_modesList , strdup(access_modes_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_persistent_volume_claim_status->capacity
    cJSON *capacity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_statusJSON, "capacity");
    list_t *capacityList;
    if (capacity) { 
    cJSON *capacity_local_map;
    if(!cJSON_IsObject(capacity)) {
        goto end;//primitive map container
    }
    capacityList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(capacity_local_map, capacity)
    {
		cJSON *localMapObject = capacity_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(capacityList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_persistent_volume_claim_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_statusJSON, "conditions");
    list_t *conditionsList;
    if (conditions) { 
    cJSON *conditions_local_nonprimitive;
    if(!cJSON_IsArray(conditions)){
        goto end; //nonprimitive container
    }

    conditionsList = list_create();

    cJSON_ArrayForEach(conditions_local_nonprimitive,conditions )
    {
        if(!cJSON_IsObject(conditions_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_persistent_volume_claim_condition_t *conditionsItem = io_k8s_api_core_v1_persistent_volume_claim_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // io_k8s_api_core_v1_persistent_volume_claim_status->phase
    cJSON *phase = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_statusJSON, "phase");
    if (phase) { 
    if(!cJSON_IsString(phase))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_persistent_volume_claim_status_local_var = io_k8s_api_core_v1_persistent_volume_claim_status_create (
        access_modes ? access_modesList : NULL,
        capacity ? capacityList : NULL,
        conditions ? conditionsList : NULL,
        phase ? strdup(phase->valuestring) : NULL
        );

    return io_k8s_api_core_v1_persistent_volume_claim_status_local_var;
end:
    return NULL;

}
