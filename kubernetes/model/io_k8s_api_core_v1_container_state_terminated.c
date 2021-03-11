#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_container_state_terminated.h"



io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated_create(
    char *container_id,
    int exit_code,
    char *finished_at,
    char *message,
    char *reason,
    int signal,
    char *started_at
    ) {
    io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated_local_var = malloc(sizeof(io_k8s_api_core_v1_container_state_terminated_t));
    if (!io_k8s_api_core_v1_container_state_terminated_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_container_state_terminated_local_var->container_id = container_id;
    io_k8s_api_core_v1_container_state_terminated_local_var->exit_code = exit_code;
    io_k8s_api_core_v1_container_state_terminated_local_var->finished_at = finished_at;
    io_k8s_api_core_v1_container_state_terminated_local_var->message = message;
    io_k8s_api_core_v1_container_state_terminated_local_var->reason = reason;
    io_k8s_api_core_v1_container_state_terminated_local_var->signal = signal;
    io_k8s_api_core_v1_container_state_terminated_local_var->started_at = started_at;

    return io_k8s_api_core_v1_container_state_terminated_local_var;
}


void io_k8s_api_core_v1_container_state_terminated_free(io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated) {
    if(NULL == io_k8s_api_core_v1_container_state_terminated){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_container_state_terminated->container_id) {
        free(io_k8s_api_core_v1_container_state_terminated->container_id);
        io_k8s_api_core_v1_container_state_terminated->container_id = NULL;
    }
    if (io_k8s_api_core_v1_container_state_terminated->finished_at) {
        free(io_k8s_api_core_v1_container_state_terminated->finished_at);
        io_k8s_api_core_v1_container_state_terminated->finished_at = NULL;
    }
    if (io_k8s_api_core_v1_container_state_terminated->message) {
        free(io_k8s_api_core_v1_container_state_terminated->message);
        io_k8s_api_core_v1_container_state_terminated->message = NULL;
    }
    if (io_k8s_api_core_v1_container_state_terminated->reason) {
        free(io_k8s_api_core_v1_container_state_terminated->reason);
        io_k8s_api_core_v1_container_state_terminated->reason = NULL;
    }
    if (io_k8s_api_core_v1_container_state_terminated->started_at) {
        free(io_k8s_api_core_v1_container_state_terminated->started_at);
        io_k8s_api_core_v1_container_state_terminated->started_at = NULL;
    }
    free(io_k8s_api_core_v1_container_state_terminated);
}

cJSON *io_k8s_api_core_v1_container_state_terminated_convertToJSON(io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_container_state_terminated->container_id
    if(io_k8s_api_core_v1_container_state_terminated->container_id) { 
    if(cJSON_AddStringToObject(item, "containerID", io_k8s_api_core_v1_container_state_terminated->container_id) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container_state_terminated->exit_code
    if (!io_k8s_api_core_v1_container_state_terminated->exit_code) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "exitCode", io_k8s_api_core_v1_container_state_terminated->exit_code) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_core_v1_container_state_terminated->finished_at
    if(io_k8s_api_core_v1_container_state_terminated->finished_at) { 
    if(cJSON_AddStringToObject(item, "finishedAt", io_k8s_api_core_v1_container_state_terminated->finished_at) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_core_v1_container_state_terminated->message
    if(io_k8s_api_core_v1_container_state_terminated->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_api_core_v1_container_state_terminated->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container_state_terminated->reason
    if(io_k8s_api_core_v1_container_state_terminated->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_api_core_v1_container_state_terminated->reason) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container_state_terminated->signal
    if(io_k8s_api_core_v1_container_state_terminated->signal) { 
    if(cJSON_AddNumberToObject(item, "signal", io_k8s_api_core_v1_container_state_terminated->signal) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_container_state_terminated->started_at
    if(io_k8s_api_core_v1_container_state_terminated->started_at) { 
    if(cJSON_AddStringToObject(item, "startedAt", io_k8s_api_core_v1_container_state_terminated->started_at) == NULL) {
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

io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated_parseFromJSON(cJSON *io_k8s_api_core_v1_container_state_terminatedJSON){

    io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated_local_var = NULL;

    // io_k8s_api_core_v1_container_state_terminated->container_id
    cJSON *container_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_terminatedJSON, "containerID");
    if (container_id) { 
    if(!cJSON_IsString(container_id))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container_state_terminated->exit_code
    cJSON *exit_code = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_terminatedJSON, "exitCode");
    if (!exit_code) {
        goto end;
    }

    
    if(!cJSON_IsNumber(exit_code))
    {
    goto end; //Numeric
    }

    // io_k8s_api_core_v1_container_state_terminated->finished_at
    cJSON *finished_at = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_terminatedJSON, "finishedAt");
    if (finished_at) { 
    if(!cJSON_IsString(finished_at))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_core_v1_container_state_terminated->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_terminatedJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container_state_terminated->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_terminatedJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container_state_terminated->signal
    cJSON *signal = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_terminatedJSON, "signal");
    if (signal) { 
    if(!cJSON_IsNumber(signal))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_container_state_terminated->started_at
    cJSON *started_at = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_terminatedJSON, "startedAt");
    if (started_at) { 
    if(!cJSON_IsString(started_at))
    {
    goto end; //DateTime
    }
    }


    io_k8s_api_core_v1_container_state_terminated_local_var = io_k8s_api_core_v1_container_state_terminated_create (
        container_id ? strdup(container_id->valuestring) : NULL,
        exit_code->valuedouble,
        finished_at ? strdup(finished_at->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        reason ? strdup(reason->valuestring) : NULL,
        signal ? signal->valuedouble : 0,
        started_at ? strdup(started_at->valuestring) : NULL
        );

    return io_k8s_api_core_v1_container_state_terminated_local_var;
end:
    return NULL;

}
