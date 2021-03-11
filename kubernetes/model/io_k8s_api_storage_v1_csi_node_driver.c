#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1_csi_node_driver.h"



io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver_create(
    io_k8s_api_storage_v1_volume_node_resources_t *allocatable,
    char *name,
    char *node_id,
    list_t *topology_keys
    ) {
    io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver_local_var = malloc(sizeof(io_k8s_api_storage_v1_csi_node_driver_t));
    if (!io_k8s_api_storage_v1_csi_node_driver_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1_csi_node_driver_local_var->allocatable = allocatable;
    io_k8s_api_storage_v1_csi_node_driver_local_var->name = name;
    io_k8s_api_storage_v1_csi_node_driver_local_var->node_id = node_id;
    io_k8s_api_storage_v1_csi_node_driver_local_var->topology_keys = topology_keys;

    return io_k8s_api_storage_v1_csi_node_driver_local_var;
}


void io_k8s_api_storage_v1_csi_node_driver_free(io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver) {
    if(NULL == io_k8s_api_storage_v1_csi_node_driver){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1_csi_node_driver->allocatable) {
        io_k8s_api_storage_v1_volume_node_resources_free(io_k8s_api_storage_v1_csi_node_driver->allocatable);
        io_k8s_api_storage_v1_csi_node_driver->allocatable = NULL;
    }
    if (io_k8s_api_storage_v1_csi_node_driver->name) {
        free(io_k8s_api_storage_v1_csi_node_driver->name);
        io_k8s_api_storage_v1_csi_node_driver->name = NULL;
    }
    if (io_k8s_api_storage_v1_csi_node_driver->node_id) {
        free(io_k8s_api_storage_v1_csi_node_driver->node_id);
        io_k8s_api_storage_v1_csi_node_driver->node_id = NULL;
    }
    if (io_k8s_api_storage_v1_csi_node_driver->topology_keys) {
        list_ForEach(listEntry, io_k8s_api_storage_v1_csi_node_driver->topology_keys) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_storage_v1_csi_node_driver->topology_keys);
        io_k8s_api_storage_v1_csi_node_driver->topology_keys = NULL;
    }
    free(io_k8s_api_storage_v1_csi_node_driver);
}

cJSON *io_k8s_api_storage_v1_csi_node_driver_convertToJSON(io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1_csi_node_driver->allocatable
    if(io_k8s_api_storage_v1_csi_node_driver->allocatable) { 
    cJSON *allocatable_local_JSON = io_k8s_api_storage_v1_volume_node_resources_convertToJSON(io_k8s_api_storage_v1_csi_node_driver->allocatable);
    if(allocatable_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "allocatable", allocatable_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_storage_v1_csi_node_driver->name
    if (!io_k8s_api_storage_v1_csi_node_driver->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_storage_v1_csi_node_driver->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_storage_v1_csi_node_driver->node_id
    if (!io_k8s_api_storage_v1_csi_node_driver->node_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "nodeID", io_k8s_api_storage_v1_csi_node_driver->node_id) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_storage_v1_csi_node_driver->topology_keys
    if(io_k8s_api_storage_v1_csi_node_driver->topology_keys) { 
    cJSON *topology_keys = cJSON_AddArrayToObject(item, "topologyKeys");
    if(topology_keys == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *topology_keysListEntry;
    list_ForEach(topology_keysListEntry, io_k8s_api_storage_v1_csi_node_driver->topology_keys) {
    if(cJSON_AddStringToObject(topology_keys, "", (char*)topology_keysListEntry->data) == NULL)
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

io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver_parseFromJSON(cJSON *io_k8s_api_storage_v1_csi_node_driverJSON){

    io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver_local_var = NULL;

    // io_k8s_api_storage_v1_csi_node_driver->allocatable
    cJSON *allocatable = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_csi_node_driverJSON, "allocatable");
    io_k8s_api_storage_v1_volume_node_resources_t *allocatable_local_nonprim = NULL;
    if (allocatable) { 
    allocatable_local_nonprim = io_k8s_api_storage_v1_volume_node_resources_parseFromJSON(allocatable); //nonprimitive
    }

    // io_k8s_api_storage_v1_csi_node_driver->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_csi_node_driverJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_storage_v1_csi_node_driver->node_id
    cJSON *node_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_csi_node_driverJSON, "nodeID");
    if (!node_id) {
        goto end;
    }

    
    if(!cJSON_IsString(node_id))
    {
    goto end; //String
    }

    // io_k8s_api_storage_v1_csi_node_driver->topology_keys
    cJSON *topology_keys = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_csi_node_driverJSON, "topologyKeys");
    list_t *topology_keysList;
    if (topology_keys) { 
    cJSON *topology_keys_local;
    if(!cJSON_IsArray(topology_keys)) {
        goto end;//primitive container
    }
    topology_keysList = list_create();

    cJSON_ArrayForEach(topology_keys_local, topology_keys)
    {
        if(!cJSON_IsString(topology_keys_local))
        {
            goto end;
        }
        list_addElement(topology_keysList , strdup(topology_keys_local->valuestring));
    }
    }


    io_k8s_api_storage_v1_csi_node_driver_local_var = io_k8s_api_storage_v1_csi_node_driver_create (
        allocatable ? allocatable_local_nonprim : NULL,
        strdup(name->valuestring),
        strdup(node_id->valuestring),
        topology_keys ? topology_keysList : NULL
        );

    return io_k8s_api_storage_v1_csi_node_driver_local_var;
end:
    if (allocatable_local_nonprim) {
        io_k8s_api_storage_v1_volume_node_resources_free(allocatable_local_nonprim);
        allocatable_local_nonprim = NULL;
    }
    return NULL;

}
