#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_attached_volume.h"



io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume_create(
    char *device_path,
    char *name
    ) {
    io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume_local_var = malloc(sizeof(io_k8s_api_core_v1_attached_volume_t));
    if (!io_k8s_api_core_v1_attached_volume_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_attached_volume_local_var->device_path = device_path;
    io_k8s_api_core_v1_attached_volume_local_var->name = name;

    return io_k8s_api_core_v1_attached_volume_local_var;
}


void io_k8s_api_core_v1_attached_volume_free(io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume) {
    if(NULL == io_k8s_api_core_v1_attached_volume){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_attached_volume->device_path) {
        free(io_k8s_api_core_v1_attached_volume->device_path);
        io_k8s_api_core_v1_attached_volume->device_path = NULL;
    }
    if (io_k8s_api_core_v1_attached_volume->name) {
        free(io_k8s_api_core_v1_attached_volume->name);
        io_k8s_api_core_v1_attached_volume->name = NULL;
    }
    free(io_k8s_api_core_v1_attached_volume);
}

cJSON *io_k8s_api_core_v1_attached_volume_convertToJSON(io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_attached_volume->device_path
    if (!io_k8s_api_core_v1_attached_volume->device_path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "devicePath", io_k8s_api_core_v1_attached_volume->device_path) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_attached_volume->name
    if (!io_k8s_api_core_v1_attached_volume->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_attached_volume->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume_parseFromJSON(cJSON *io_k8s_api_core_v1_attached_volumeJSON){

    io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume_local_var = NULL;

    // io_k8s_api_core_v1_attached_volume->device_path
    cJSON *device_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_attached_volumeJSON, "devicePath");
    if (!device_path) {
        goto end;
    }

    
    if(!cJSON_IsString(device_path))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_attached_volume->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_attached_volumeJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_attached_volume_local_var = io_k8s_api_core_v1_attached_volume_create (
        strdup(device_path->valuestring),
        strdup(name->valuestring)
        );

    return io_k8s_api_core_v1_attached_volume_local_var;
end:
    return NULL;

}
