#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_persistent_volume_status.h"



io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status_create(
    char *message,
    char *phase,
    char *reason
    ) {
    io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status_local_var = malloc(sizeof(io_k8s_api_core_v1_persistent_volume_status_t));
    if (!io_k8s_api_core_v1_persistent_volume_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_persistent_volume_status_local_var->message = message;
    io_k8s_api_core_v1_persistent_volume_status_local_var->phase = phase;
    io_k8s_api_core_v1_persistent_volume_status_local_var->reason = reason;

    return io_k8s_api_core_v1_persistent_volume_status_local_var;
}


void io_k8s_api_core_v1_persistent_volume_status_free(io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status) {
    if(NULL == io_k8s_api_core_v1_persistent_volume_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_persistent_volume_status->message) {
        free(io_k8s_api_core_v1_persistent_volume_status->message);
        io_k8s_api_core_v1_persistent_volume_status->message = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_status->phase) {
        free(io_k8s_api_core_v1_persistent_volume_status->phase);
        io_k8s_api_core_v1_persistent_volume_status->phase = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_status->reason) {
        free(io_k8s_api_core_v1_persistent_volume_status->reason);
        io_k8s_api_core_v1_persistent_volume_status->reason = NULL;
    }
    free(io_k8s_api_core_v1_persistent_volume_status);
}

cJSON *io_k8s_api_core_v1_persistent_volume_status_convertToJSON(io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_persistent_volume_status->message
    if(io_k8s_api_core_v1_persistent_volume_status->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_api_core_v1_persistent_volume_status->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_status->phase
    if(io_k8s_api_core_v1_persistent_volume_status->phase) { 
    if(cJSON_AddStringToObject(item, "phase", io_k8s_api_core_v1_persistent_volume_status->phase) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_status->reason
    if(io_k8s_api_core_v1_persistent_volume_status->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_api_core_v1_persistent_volume_status->reason) == NULL) {
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

io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_statusJSON){

    io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status_local_var = NULL;

    // io_k8s_api_core_v1_persistent_volume_status->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_statusJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_persistent_volume_status->phase
    cJSON *phase = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_statusJSON, "phase");
    if (phase) { 
    if(!cJSON_IsString(phase))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_persistent_volume_status->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_statusJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_persistent_volume_status_local_var = io_k8s_api_core_v1_persistent_volume_status_create (
        message ? strdup(message->valuestring) : NULL,
        phase ? strdup(phase->valuestring) : NULL,
        reason ? strdup(reason->valuestring) : NULL
        );

    return io_k8s_api_core_v1_persistent_volume_status_local_var;
end:
    return NULL;

}
