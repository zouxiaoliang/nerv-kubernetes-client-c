#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_node_status.h"



io_k8s_api_core_v1_node_status_t *io_k8s_api_core_v1_node_status_create(
    list_t *addresses,
    list_t* allocatable,
    list_t* capacity,
    list_t *conditions,
    io_k8s_api_core_v1_node_config_status_t *config,
    io_k8s_api_core_v1_node_daemon_endpoints_t *daemon_endpoints,
    list_t *images,
    io_k8s_api_core_v1_node_system_info_t *node_info,
    char *phase,
    list_t *volumes_attached,
    list_t *volumes_in_use
    ) {
    io_k8s_api_core_v1_node_status_t *io_k8s_api_core_v1_node_status_local_var = malloc(sizeof(io_k8s_api_core_v1_node_status_t));
    if (!io_k8s_api_core_v1_node_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_node_status_local_var->addresses = addresses;
    io_k8s_api_core_v1_node_status_local_var->allocatable = allocatable;
    io_k8s_api_core_v1_node_status_local_var->capacity = capacity;
    io_k8s_api_core_v1_node_status_local_var->conditions = conditions;
    io_k8s_api_core_v1_node_status_local_var->config = config;
    io_k8s_api_core_v1_node_status_local_var->daemon_endpoints = daemon_endpoints;
    io_k8s_api_core_v1_node_status_local_var->images = images;
    io_k8s_api_core_v1_node_status_local_var->node_info = node_info;
    io_k8s_api_core_v1_node_status_local_var->phase = phase;
    io_k8s_api_core_v1_node_status_local_var->volumes_attached = volumes_attached;
    io_k8s_api_core_v1_node_status_local_var->volumes_in_use = volumes_in_use;

    return io_k8s_api_core_v1_node_status_local_var;
}


void io_k8s_api_core_v1_node_status_free(io_k8s_api_core_v1_node_status_t *io_k8s_api_core_v1_node_status) {
    if(NULL == io_k8s_api_core_v1_node_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_node_status->addresses) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_status->addresses) {
            io_k8s_api_core_v1_node_address_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_status->addresses);
        io_k8s_api_core_v1_node_status->addresses = NULL;
    }
    if (io_k8s_api_core_v1_node_status->allocatable) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_status->allocatable) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_node_status->allocatable);
        io_k8s_api_core_v1_node_status->allocatable = NULL;
    }
    if (io_k8s_api_core_v1_node_status->capacity) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_status->capacity) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_node_status->capacity);
        io_k8s_api_core_v1_node_status->capacity = NULL;
    }
    if (io_k8s_api_core_v1_node_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_status->conditions) {
            io_k8s_api_core_v1_node_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_status->conditions);
        io_k8s_api_core_v1_node_status->conditions = NULL;
    }
    if (io_k8s_api_core_v1_node_status->config) {
        io_k8s_api_core_v1_node_config_status_free(io_k8s_api_core_v1_node_status->config);
        io_k8s_api_core_v1_node_status->config = NULL;
    }
    if (io_k8s_api_core_v1_node_status->daemon_endpoints) {
        io_k8s_api_core_v1_node_daemon_endpoints_free(io_k8s_api_core_v1_node_status->daemon_endpoints);
        io_k8s_api_core_v1_node_status->daemon_endpoints = NULL;
    }
    if (io_k8s_api_core_v1_node_status->images) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_status->images) {
            io_k8s_api_core_v1_container_image_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_status->images);
        io_k8s_api_core_v1_node_status->images = NULL;
    }
    if (io_k8s_api_core_v1_node_status->node_info) {
        io_k8s_api_core_v1_node_system_info_free(io_k8s_api_core_v1_node_status->node_info);
        io_k8s_api_core_v1_node_status->node_info = NULL;
    }
    if (io_k8s_api_core_v1_node_status->phase) {
        free(io_k8s_api_core_v1_node_status->phase);
        io_k8s_api_core_v1_node_status->phase = NULL;
    }
    if (io_k8s_api_core_v1_node_status->volumes_attached) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_status->volumes_attached) {
            io_k8s_api_core_v1_attached_volume_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_status->volumes_attached);
        io_k8s_api_core_v1_node_status->volumes_attached = NULL;
    }
    if (io_k8s_api_core_v1_node_status->volumes_in_use) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_status->volumes_in_use) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_status->volumes_in_use);
        io_k8s_api_core_v1_node_status->volumes_in_use = NULL;
    }
    free(io_k8s_api_core_v1_node_status);
}

cJSON *io_k8s_api_core_v1_node_status_convertToJSON(io_k8s_api_core_v1_node_status_t *io_k8s_api_core_v1_node_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_node_status->addresses
    if(io_k8s_api_core_v1_node_status->addresses) { 
    cJSON *addresses = cJSON_AddArrayToObject(item, "addresses");
    if(addresses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *addressesListEntry;
    if (io_k8s_api_core_v1_node_status->addresses) {
    list_ForEach(addressesListEntry, io_k8s_api_core_v1_node_status->addresses) {
    cJSON *itemLocal = io_k8s_api_core_v1_node_address_convertToJSON(addressesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(addresses, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_node_status->allocatable
    if(io_k8s_api_core_v1_node_status->allocatable) { 
    cJSON *allocatable = cJSON_AddObjectToObject(item, "allocatable");
    if(allocatable == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = allocatable;
    listEntry_t *allocatableListEntry;
    if (io_k8s_api_core_v1_node_status->allocatable) {
    list_ForEach(allocatableListEntry, io_k8s_api_core_v1_node_status->allocatable) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)allocatableListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_node_status->capacity
    if(io_k8s_api_core_v1_node_status->capacity) { 
    cJSON *capacity = cJSON_AddObjectToObject(item, "capacity");
    if(capacity == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = capacity;
    listEntry_t *capacityListEntry;
    if (io_k8s_api_core_v1_node_status->capacity) {
    list_ForEach(capacityListEntry, io_k8s_api_core_v1_node_status->capacity) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)capacityListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_node_status->conditions
    if(io_k8s_api_core_v1_node_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_core_v1_node_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_core_v1_node_status->conditions) {
    cJSON *itemLocal = io_k8s_api_core_v1_node_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_node_status->config
    if(io_k8s_api_core_v1_node_status->config) { 
    cJSON *config_local_JSON = io_k8s_api_core_v1_node_config_status_convertToJSON(io_k8s_api_core_v1_node_status->config);
    if(config_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "config", config_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_node_status->daemon_endpoints
    if(io_k8s_api_core_v1_node_status->daemon_endpoints) { 
    cJSON *daemon_endpoints_local_JSON = io_k8s_api_core_v1_node_daemon_endpoints_convertToJSON(io_k8s_api_core_v1_node_status->daemon_endpoints);
    if(daemon_endpoints_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "daemonEndpoints", daemon_endpoints_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_node_status->images
    if(io_k8s_api_core_v1_node_status->images) { 
    cJSON *images = cJSON_AddArrayToObject(item, "images");
    if(images == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *imagesListEntry;
    if (io_k8s_api_core_v1_node_status->images) {
    list_ForEach(imagesListEntry, io_k8s_api_core_v1_node_status->images) {
    cJSON *itemLocal = io_k8s_api_core_v1_container_image_convertToJSON(imagesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(images, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_node_status->node_info
    if(io_k8s_api_core_v1_node_status->node_info) { 
    cJSON *node_info_local_JSON = io_k8s_api_core_v1_node_system_info_convertToJSON(io_k8s_api_core_v1_node_status->node_info);
    if(node_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nodeInfo", node_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_node_status->phase
    if(io_k8s_api_core_v1_node_status->phase) { 
    if(cJSON_AddStringToObject(item, "phase", io_k8s_api_core_v1_node_status->phase) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_node_status->volumes_attached
    if(io_k8s_api_core_v1_node_status->volumes_attached) { 
    cJSON *volumes_attached = cJSON_AddArrayToObject(item, "volumesAttached");
    if(volumes_attached == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *volumes_attachedListEntry;
    if (io_k8s_api_core_v1_node_status->volumes_attached) {
    list_ForEach(volumes_attachedListEntry, io_k8s_api_core_v1_node_status->volumes_attached) {
    cJSON *itemLocal = io_k8s_api_core_v1_attached_volume_convertToJSON(volumes_attachedListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(volumes_attached, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_node_status->volumes_in_use
    if(io_k8s_api_core_v1_node_status->volumes_in_use) { 
    cJSON *volumes_in_use = cJSON_AddArrayToObject(item, "volumesInUse");
    if(volumes_in_use == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *volumes_in_useListEntry;
    list_ForEach(volumes_in_useListEntry, io_k8s_api_core_v1_node_status->volumes_in_use) {
    if(cJSON_AddStringToObject(volumes_in_use, "", (char*)volumes_in_useListEntry->data) == NULL)
    {
        goto fail;
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

io_k8s_api_core_v1_node_status_t *io_k8s_api_core_v1_node_status_parseFromJSON(cJSON *io_k8s_api_core_v1_node_statusJSON){

    io_k8s_api_core_v1_node_status_t *io_k8s_api_core_v1_node_status_local_var = NULL;

    // io_k8s_api_core_v1_node_status->addresses
    cJSON *addresses = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "addresses");
    list_t *addressesList;
    if (addresses) { 
    cJSON *addresses_local_nonprimitive;
    if(!cJSON_IsArray(addresses)){
        goto end; //nonprimitive container
    }

    addressesList = list_create();

    cJSON_ArrayForEach(addresses_local_nonprimitive,addresses )
    {
        if(!cJSON_IsObject(addresses_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_node_address_t *addressesItem = io_k8s_api_core_v1_node_address_parseFromJSON(addresses_local_nonprimitive);

        list_addElement(addressesList, addressesItem);
    }
    }

    // io_k8s_api_core_v1_node_status->allocatable
    cJSON *allocatable = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "allocatable");
    list_t *allocatableList;
    if (allocatable) { 
    cJSON *allocatable_local_map;
    if(!cJSON_IsObject(allocatable)) {
        goto end;//primitive map container
    }
    allocatableList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(allocatable_local_map, allocatable)
    {
		cJSON *localMapObject = allocatable_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(allocatableList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_node_status->capacity
    cJSON *capacity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "capacity");
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

    // io_k8s_api_core_v1_node_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "conditions");
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
        io_k8s_api_core_v1_node_condition_t *conditionsItem = io_k8s_api_core_v1_node_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // io_k8s_api_core_v1_node_status->config
    cJSON *config = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "config");
    io_k8s_api_core_v1_node_config_status_t *config_local_nonprim = NULL;
    if (config) { 
    config_local_nonprim = io_k8s_api_core_v1_node_config_status_parseFromJSON(config); //nonprimitive
    }

    // io_k8s_api_core_v1_node_status->daemon_endpoints
    cJSON *daemon_endpoints = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "daemonEndpoints");
    io_k8s_api_core_v1_node_daemon_endpoints_t *daemon_endpoints_local_nonprim = NULL;
    if (daemon_endpoints) { 
    daemon_endpoints_local_nonprim = io_k8s_api_core_v1_node_daemon_endpoints_parseFromJSON(daemon_endpoints); //nonprimitive
    }

    // io_k8s_api_core_v1_node_status->images
    cJSON *images = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "images");
    list_t *imagesList;
    if (images) { 
    cJSON *images_local_nonprimitive;
    if(!cJSON_IsArray(images)){
        goto end; //nonprimitive container
    }

    imagesList = list_create();

    cJSON_ArrayForEach(images_local_nonprimitive,images )
    {
        if(!cJSON_IsObject(images_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_container_image_t *imagesItem = io_k8s_api_core_v1_container_image_parseFromJSON(images_local_nonprimitive);

        list_addElement(imagesList, imagesItem);
    }
    }

    // io_k8s_api_core_v1_node_status->node_info
    cJSON *node_info = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "nodeInfo");
    io_k8s_api_core_v1_node_system_info_t *node_info_local_nonprim = NULL;
    if (node_info) { 
    node_info_local_nonprim = io_k8s_api_core_v1_node_system_info_parseFromJSON(node_info); //nonprimitive
    }

    // io_k8s_api_core_v1_node_status->phase
    cJSON *phase = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "phase");
    if (phase) { 
    if(!cJSON_IsString(phase))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_node_status->volumes_attached
    cJSON *volumes_attached = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "volumesAttached");
    list_t *volumes_attachedList;
    if (volumes_attached) { 
    cJSON *volumes_attached_local_nonprimitive;
    if(!cJSON_IsArray(volumes_attached)){
        goto end; //nonprimitive container
    }

    volumes_attachedList = list_create();

    cJSON_ArrayForEach(volumes_attached_local_nonprimitive,volumes_attached )
    {
        if(!cJSON_IsObject(volumes_attached_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_attached_volume_t *volumes_attachedItem = io_k8s_api_core_v1_attached_volume_parseFromJSON(volumes_attached_local_nonprimitive);

        list_addElement(volumes_attachedList, volumes_attachedItem);
    }
    }

    // io_k8s_api_core_v1_node_status->volumes_in_use
    cJSON *volumes_in_use = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_statusJSON, "volumesInUse");
    list_t *volumes_in_useList;
    if (volumes_in_use) { 
    cJSON *volumes_in_use_local;
    if(!cJSON_IsArray(volumes_in_use)) {
        goto end;//primitive container
    }
    volumes_in_useList = list_create();

    cJSON_ArrayForEach(volumes_in_use_local, volumes_in_use)
    {
        if(!cJSON_IsString(volumes_in_use_local))
        {
            goto end;
        }
        list_addElement(volumes_in_useList , strdup(volumes_in_use_local->valuestring));
    }
    }


    io_k8s_api_core_v1_node_status_local_var = io_k8s_api_core_v1_node_status_create (
        addresses ? addressesList : NULL,
        allocatable ? allocatableList : NULL,
        capacity ? capacityList : NULL,
        conditions ? conditionsList : NULL,
        config ? config_local_nonprim : NULL,
        daemon_endpoints ? daemon_endpoints_local_nonprim : NULL,
        images ? imagesList : NULL,
        node_info ? node_info_local_nonprim : NULL,
        phase ? strdup(phase->valuestring) : NULL,
        volumes_attached ? volumes_attachedList : NULL,
        volumes_in_use ? volumes_in_useList : NULL
        );

    return io_k8s_api_core_v1_node_status_local_var;
end:
    if (config_local_nonprim) {
        io_k8s_api_core_v1_node_config_status_free(config_local_nonprim);
        config_local_nonprim = NULL;
    }
    if (daemon_endpoints_local_nonprim) {
        io_k8s_api_core_v1_node_daemon_endpoints_free(daemon_endpoints_local_nonprim);
        daemon_endpoints_local_nonprim = NULL;
    }
    if (node_info_local_nonprim) {
        io_k8s_api_core_v1_node_system_info_free(node_info_local_nonprim);
        node_info_local_nonprim = NULL;
    }
    return NULL;

}
