#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_container_state_waiting.h"



io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting_create(
    char *message,
    char *reason
    ) {
    io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting_local_var = malloc(sizeof(io_k8s_api_core_v1_container_state_waiting_t));
    if (!io_k8s_api_core_v1_container_state_waiting_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_container_state_waiting_local_var->message = message;
    io_k8s_api_core_v1_container_state_waiting_local_var->reason = reason;

    return io_k8s_api_core_v1_container_state_waiting_local_var;
}


void io_k8s_api_core_v1_container_state_waiting_free(io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting) {
    if(NULL == io_k8s_api_core_v1_container_state_waiting){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_container_state_waiting->message) {
        free(io_k8s_api_core_v1_container_state_waiting->message);
        io_k8s_api_core_v1_container_state_waiting->message = NULL;
    }
    if (io_k8s_api_core_v1_container_state_waiting->reason) {
        free(io_k8s_api_core_v1_container_state_waiting->reason);
        io_k8s_api_core_v1_container_state_waiting->reason = NULL;
    }
    free(io_k8s_api_core_v1_container_state_waiting);
}

cJSON *io_k8s_api_core_v1_container_state_waiting_convertToJSON(io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_container_state_waiting->message
    if(io_k8s_api_core_v1_container_state_waiting->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_api_core_v1_container_state_waiting->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container_state_waiting->reason
    if(io_k8s_api_core_v1_container_state_waiting->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_api_core_v1_container_state_waiting->reason) == NULL) {
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

io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting_parseFromJSON(cJSON *io_k8s_api_core_v1_container_state_waitingJSON){

    io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting_local_var = NULL;

    // io_k8s_api_core_v1_container_state_waiting->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_waitingJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container_state_waiting->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_waitingJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_container_state_waiting_local_var = io_k8s_api_core_v1_container_state_waiting_create (
        message ? strdup(message->valuestring) : NULL,
        reason ? strdup(reason->valuestring) : NULL
        );

    return io_k8s_api_core_v1_container_state_waiting_local_var;
end:
    return NULL;

}
