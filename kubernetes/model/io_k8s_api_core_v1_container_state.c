#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_container_state.h"



io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state_create(
    io_k8s_api_core_v1_container_state_running_t *running,
    io_k8s_api_core_v1_container_state_terminated_t *terminated,
    io_k8s_api_core_v1_container_state_waiting_t *waiting
    ) {
    io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state_local_var = malloc(sizeof(io_k8s_api_core_v1_container_state_t));
    if (!io_k8s_api_core_v1_container_state_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_container_state_local_var->running = running;
    io_k8s_api_core_v1_container_state_local_var->terminated = terminated;
    io_k8s_api_core_v1_container_state_local_var->waiting = waiting;

    return io_k8s_api_core_v1_container_state_local_var;
}


void io_k8s_api_core_v1_container_state_free(io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state) {
    if(NULL == io_k8s_api_core_v1_container_state){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_container_state->running) {
        io_k8s_api_core_v1_container_state_running_free(io_k8s_api_core_v1_container_state->running);
        io_k8s_api_core_v1_container_state->running = NULL;
    }
    if (io_k8s_api_core_v1_container_state->terminated) {
        io_k8s_api_core_v1_container_state_terminated_free(io_k8s_api_core_v1_container_state->terminated);
        io_k8s_api_core_v1_container_state->terminated = NULL;
    }
    if (io_k8s_api_core_v1_container_state->waiting) {
        io_k8s_api_core_v1_container_state_waiting_free(io_k8s_api_core_v1_container_state->waiting);
        io_k8s_api_core_v1_container_state->waiting = NULL;
    }
    free(io_k8s_api_core_v1_container_state);
}

cJSON *io_k8s_api_core_v1_container_state_convertToJSON(io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_container_state->running
    if(io_k8s_api_core_v1_container_state->running) { 
    cJSON *running_local_JSON = io_k8s_api_core_v1_container_state_running_convertToJSON(io_k8s_api_core_v1_container_state->running);
    if(running_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "running", running_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_container_state->terminated
    if(io_k8s_api_core_v1_container_state->terminated) { 
    cJSON *terminated_local_JSON = io_k8s_api_core_v1_container_state_terminated_convertToJSON(io_k8s_api_core_v1_container_state->terminated);
    if(terminated_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "terminated", terminated_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_container_state->waiting
    if(io_k8s_api_core_v1_container_state->waiting) { 
    cJSON *waiting_local_JSON = io_k8s_api_core_v1_container_state_waiting_convertToJSON(io_k8s_api_core_v1_container_state->waiting);
    if(waiting_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "waiting", waiting_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state_parseFromJSON(cJSON *io_k8s_api_core_v1_container_stateJSON){

    io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state_local_var = NULL;

    // io_k8s_api_core_v1_container_state->running
    cJSON *running = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_stateJSON, "running");
    io_k8s_api_core_v1_container_state_running_t *running_local_nonprim = NULL;
    if (running) { 
    running_local_nonprim = io_k8s_api_core_v1_container_state_running_parseFromJSON(running); //nonprimitive
    }

    // io_k8s_api_core_v1_container_state->terminated
    cJSON *terminated = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_stateJSON, "terminated");
    io_k8s_api_core_v1_container_state_terminated_t *terminated_local_nonprim = NULL;
    if (terminated) { 
    terminated_local_nonprim = io_k8s_api_core_v1_container_state_terminated_parseFromJSON(terminated); //nonprimitive
    }

    // io_k8s_api_core_v1_container_state->waiting
    cJSON *waiting = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_stateJSON, "waiting");
    io_k8s_api_core_v1_container_state_waiting_t *waiting_local_nonprim = NULL;
    if (waiting) { 
    waiting_local_nonprim = io_k8s_api_core_v1_container_state_waiting_parseFromJSON(waiting); //nonprimitive
    }


    io_k8s_api_core_v1_container_state_local_var = io_k8s_api_core_v1_container_state_create (
        running ? running_local_nonprim : NULL,
        terminated ? terminated_local_nonprim : NULL,
        waiting ? waiting_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_container_state_local_var;
end:
    if (running_local_nonprim) {
        io_k8s_api_core_v1_container_state_running_free(running_local_nonprim);
        running_local_nonprim = NULL;
    }
    if (terminated_local_nonprim) {
        io_k8s_api_core_v1_container_state_terminated_free(terminated_local_nonprim);
        terminated_local_nonprim = NULL;
    }
    if (waiting_local_nonprim) {
        io_k8s_api_core_v1_container_state_waiting_free(waiting_local_nonprim);
        waiting_local_nonprim = NULL;
    }
    return NULL;

}
