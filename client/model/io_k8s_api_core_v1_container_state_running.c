#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_container_state_running.h"



io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running_create(
    char *started_at
    ) {
    io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running_local_var = malloc(sizeof(io_k8s_api_core_v1_container_state_running_t));
    if (!io_k8s_api_core_v1_container_state_running_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_container_state_running_local_var->started_at = started_at;

    return io_k8s_api_core_v1_container_state_running_local_var;
}


void io_k8s_api_core_v1_container_state_running_free(io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running) {
    if(NULL == io_k8s_api_core_v1_container_state_running){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_container_state_running->started_at) {
        free(io_k8s_api_core_v1_container_state_running->started_at);
        io_k8s_api_core_v1_container_state_running->started_at = NULL;
    }
    free(io_k8s_api_core_v1_container_state_running);
}

cJSON *io_k8s_api_core_v1_container_state_running_convertToJSON(io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_container_state_running->started_at
    if(io_k8s_api_core_v1_container_state_running->started_at) { 
    if(cJSON_AddStringToObject(item, "startedAt", io_k8s_api_core_v1_container_state_running->started_at) == NULL) {
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

io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running_parseFromJSON(cJSON *io_k8s_api_core_v1_container_state_runningJSON){

    io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running_local_var = NULL;

    // io_k8s_api_core_v1_container_state_running->started_at
    cJSON *started_at = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_state_runningJSON, "startedAt");
    if (started_at) { 
    if(!cJSON_IsString(started_at))
    {
    goto end; //DateTime
    }
    }


    io_k8s_api_core_v1_container_state_running_local_var = io_k8s_api_core_v1_container_state_running_create (
        started_at ? strdup(started_at->valuestring) : NULL
        );

    return io_k8s_api_core_v1_container_state_running_local_var;
end:
    return NULL;

}
