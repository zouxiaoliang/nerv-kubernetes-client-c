#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_volume_device.h"



io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device_create(
    char *device_path,
    char *name
    ) {
    io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device_local_var = malloc(sizeof(io_k8s_api_core_v1_volume_device_t));
    if (!io_k8s_api_core_v1_volume_device_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_volume_device_local_var->device_path = device_path;
    io_k8s_api_core_v1_volume_device_local_var->name = name;

    return io_k8s_api_core_v1_volume_device_local_var;
}


void io_k8s_api_core_v1_volume_device_free(io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device) {
    if(NULL == io_k8s_api_core_v1_volume_device){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_volume_device->device_path) {
        free(io_k8s_api_core_v1_volume_device->device_path);
        io_k8s_api_core_v1_volume_device->device_path = NULL;
    }
    if (io_k8s_api_core_v1_volume_device->name) {
        free(io_k8s_api_core_v1_volume_device->name);
        io_k8s_api_core_v1_volume_device->name = NULL;
    }
    free(io_k8s_api_core_v1_volume_device);
}

cJSON *io_k8s_api_core_v1_volume_device_convertToJSON(io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_volume_device->device_path
    if (!io_k8s_api_core_v1_volume_device->device_path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "devicePath", io_k8s_api_core_v1_volume_device->device_path) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_volume_device->name
    if (!io_k8s_api_core_v1_volume_device->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_volume_device->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device_parseFromJSON(cJSON *io_k8s_api_core_v1_volume_deviceJSON){

    io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device_local_var = NULL;

    // io_k8s_api_core_v1_volume_device->device_path
    cJSON *device_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_deviceJSON, "devicePath");
    if (!device_path) {
        goto end;
    }

    
    if(!cJSON_IsString(device_path))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_volume_device->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_deviceJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_volume_device_local_var = io_k8s_api_core_v1_volume_device_create (
        strdup(device_path->valuestring),
        strdup(name->valuestring)
        );

    return io_k8s_api_core_v1_volume_device_local_var;
end:
    return NULL;

}
