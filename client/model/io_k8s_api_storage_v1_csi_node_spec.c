#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1_csi_node_spec.h"



io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec_create(
    list_t *drivers
    ) {
    io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec_local_var = malloc(sizeof(io_k8s_api_storage_v1_csi_node_spec_t));
    if (!io_k8s_api_storage_v1_csi_node_spec_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1_csi_node_spec_local_var->drivers = drivers;

    return io_k8s_api_storage_v1_csi_node_spec_local_var;
}


void io_k8s_api_storage_v1_csi_node_spec_free(io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec) {
    if(NULL == io_k8s_api_storage_v1_csi_node_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1_csi_node_spec->drivers) {
        list_ForEach(listEntry, io_k8s_api_storage_v1_csi_node_spec->drivers) {
            io_k8s_api_storage_v1_csi_node_driver_free(listEntry->data);
        }
        list_free(io_k8s_api_storage_v1_csi_node_spec->drivers);
        io_k8s_api_storage_v1_csi_node_spec->drivers = NULL;
    }
    free(io_k8s_api_storage_v1_csi_node_spec);
}

cJSON *io_k8s_api_storage_v1_csi_node_spec_convertToJSON(io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1_csi_node_spec->drivers
    if (!io_k8s_api_storage_v1_csi_node_spec->drivers) {
        goto fail;
    }
    
    cJSON *drivers = cJSON_AddArrayToObject(item, "drivers");
    if(drivers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *driversListEntry;
    if (io_k8s_api_storage_v1_csi_node_spec->drivers) {
    list_ForEach(driversListEntry, io_k8s_api_storage_v1_csi_node_spec->drivers) {
    cJSON *itemLocal = io_k8s_api_storage_v1_csi_node_driver_convertToJSON(driversListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(drivers, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec_parseFromJSON(cJSON *io_k8s_api_storage_v1_csi_node_specJSON){

    io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec_local_var = NULL;

    // io_k8s_api_storage_v1_csi_node_spec->drivers
    cJSON *drivers = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_csi_node_specJSON, "drivers");
    if (!drivers) {
        goto end;
    }

    list_t *driversList;
    
    cJSON *drivers_local_nonprimitive;
    if(!cJSON_IsArray(drivers)){
        goto end; //nonprimitive container
    }

    driversList = list_create();

    cJSON_ArrayForEach(drivers_local_nonprimitive,drivers )
    {
        if(!cJSON_IsObject(drivers_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_storage_v1_csi_node_driver_t *driversItem = io_k8s_api_storage_v1_csi_node_driver_parseFromJSON(drivers_local_nonprimitive);

        list_addElement(driversList, driversItem);
    }


    io_k8s_api_storage_v1_csi_node_spec_local_var = io_k8s_api_storage_v1_csi_node_spec_create (
        driversList
        );

    return io_k8s_api_storage_v1_csi_node_spec_local_var;
end:
    return NULL;

}
