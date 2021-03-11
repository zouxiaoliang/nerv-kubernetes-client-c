#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1beta1_volume_error.h"



io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error_create(
    char *message,
    char *time
    ) {
    io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error_local_var = malloc(sizeof(io_k8s_api_storage_v1beta1_volume_error_t));
    if (!io_k8s_api_storage_v1beta1_volume_error_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1beta1_volume_error_local_var->message = message;
    io_k8s_api_storage_v1beta1_volume_error_local_var->time = time;

    return io_k8s_api_storage_v1beta1_volume_error_local_var;
}


void io_k8s_api_storage_v1beta1_volume_error_free(io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error) {
    if(NULL == io_k8s_api_storage_v1beta1_volume_error){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1beta1_volume_error->message) {
        free(io_k8s_api_storage_v1beta1_volume_error->message);
        io_k8s_api_storage_v1beta1_volume_error->message = NULL;
    }
    if (io_k8s_api_storage_v1beta1_volume_error->time) {
        free(io_k8s_api_storage_v1beta1_volume_error->time);
        io_k8s_api_storage_v1beta1_volume_error->time = NULL;
    }
    free(io_k8s_api_storage_v1beta1_volume_error);
}

cJSON *io_k8s_api_storage_v1beta1_volume_error_convertToJSON(io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1beta1_volume_error->message
    if(io_k8s_api_storage_v1beta1_volume_error->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_api_storage_v1beta1_volume_error->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1beta1_volume_error->time
    if(io_k8s_api_storage_v1beta1_volume_error->time) { 
    if(cJSON_AddStringToObject(item, "time", io_k8s_api_storage_v1beta1_volume_error->time) == NULL) {
    goto fail; //Date-Time
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error_parseFromJSON(cJSON *io_k8s_api_storage_v1beta1_volume_errorJSON){

    io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error_local_var = NULL;

    // io_k8s_api_storage_v1beta1_volume_error->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_volume_errorJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1beta1_volume_error->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_volume_errorJSON, "time");
    if (time) { 
    if(!cJSON_IsString(time))
    {
    goto end; //DateTime
    }
    }


    io_k8s_api_storage_v1beta1_volume_error_local_var = io_k8s_api_storage_v1beta1_volume_error_create (
        message ? strdup(message->valuestring) : NULL,
        time ? strdup(time->valuestring) : NULL
        );

    return io_k8s_api_storage_v1beta1_volume_error_local_var;
end:
    return NULL;

}
