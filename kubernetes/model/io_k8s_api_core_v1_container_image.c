#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_container_image.h"



io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image_create(
    list_t *names,
    long size_bytes
    ) {
    io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image_local_var = malloc(sizeof(io_k8s_api_core_v1_container_image_t));
    if (!io_k8s_api_core_v1_container_image_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_container_image_local_var->names = names;
    io_k8s_api_core_v1_container_image_local_var->size_bytes = size_bytes;

    return io_k8s_api_core_v1_container_image_local_var;
}


void io_k8s_api_core_v1_container_image_free(io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image) {
    if(NULL == io_k8s_api_core_v1_container_image){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_container_image->names) {
        list_ForEach(listEntry, io_k8s_api_core_v1_container_image->names) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_container_image->names);
        io_k8s_api_core_v1_container_image->names = NULL;
    }
    free(io_k8s_api_core_v1_container_image);
}

cJSON *io_k8s_api_core_v1_container_image_convertToJSON(io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_container_image->names
    if (!io_k8s_api_core_v1_container_image->names) {
        goto fail;
    }
    
    cJSON *names = cJSON_AddArrayToObject(item, "names");
    if(names == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *namesListEntry;
    list_ForEach(namesListEntry, io_k8s_api_core_v1_container_image->names) {
    if(cJSON_AddStringToObject(names, "", (char*)namesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_api_core_v1_container_image->size_bytes
    if(io_k8s_api_core_v1_container_image->size_bytes) { 
    if(cJSON_AddNumberToObject(item, "sizeBytes", io_k8s_api_core_v1_container_image->size_bytes) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image_parseFromJSON(cJSON *io_k8s_api_core_v1_container_imageJSON){

    io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image_local_var = NULL;

    // io_k8s_api_core_v1_container_image->names
    cJSON *names = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_imageJSON, "names");
    if (!names) {
        goto end;
    }

    list_t *namesList;
    
    cJSON *names_local;
    if(!cJSON_IsArray(names)) {
        goto end;//primitive container
    }
    namesList = list_create();

    cJSON_ArrayForEach(names_local, names)
    {
        if(!cJSON_IsString(names_local))
        {
            goto end;
        }
        list_addElement(namesList , strdup(names_local->valuestring));
    }

    // io_k8s_api_core_v1_container_image->size_bytes
    cJSON *size_bytes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_imageJSON, "sizeBytes");
    if (size_bytes) { 
    if(!cJSON_IsNumber(size_bytes))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_core_v1_container_image_local_var = io_k8s_api_core_v1_container_image_create (
        namesList,
        size_bytes ? size_bytes->valuedouble : 0
        );

    return io_k8s_api_core_v1_container_image_local_var;
end:
    return NULL;

}
