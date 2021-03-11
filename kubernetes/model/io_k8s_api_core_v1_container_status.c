#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_container_status.h"



io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status_create(
    char *container_id,
    char *image,
    char *image_id,
    io_k8s_api_core_v1_container_state_t *last_state,
    char *name,
    int ready,
    int restart_count,
    int started,
    io_k8s_api_core_v1_container_state_t *state
    ) {
    io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status_local_var = malloc(sizeof(io_k8s_api_core_v1_container_status_t));
    if (!io_k8s_api_core_v1_container_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_container_status_local_var->container_id = container_id;
    io_k8s_api_core_v1_container_status_local_var->image = image;
    io_k8s_api_core_v1_container_status_local_var->image_id = image_id;
    io_k8s_api_core_v1_container_status_local_var->last_state = last_state;
    io_k8s_api_core_v1_container_status_local_var->name = name;
    io_k8s_api_core_v1_container_status_local_var->ready = ready;
    io_k8s_api_core_v1_container_status_local_var->restart_count = restart_count;
    io_k8s_api_core_v1_container_status_local_var->started = started;
    io_k8s_api_core_v1_container_status_local_var->state = state;

    return io_k8s_api_core_v1_container_status_local_var;
}


void io_k8s_api_core_v1_container_status_free(io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status) {
    if(NULL == io_k8s_api_core_v1_container_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_container_status->container_id) {
        free(io_k8s_api_core_v1_container_status->container_id);
        io_k8s_api_core_v1_container_status->container_id = NULL;
    }
    if (io_k8s_api_core_v1_container_status->image) {
        free(io_k8s_api_core_v1_container_status->image);
        io_k8s_api_core_v1_container_status->image = NULL;
    }
    if (io_k8s_api_core_v1_container_status->image_id) {
        free(io_k8s_api_core_v1_container_status->image_id);
        io_k8s_api_core_v1_container_status->image_id = NULL;
    }
    if (io_k8s_api_core_v1_container_status->last_state) {
        io_k8s_api_core_v1_container_state_free(io_k8s_api_core_v1_container_status->last_state);
        io_k8s_api_core_v1_container_status->last_state = NULL;
    }
    if (io_k8s_api_core_v1_container_status->name) {
        free(io_k8s_api_core_v1_container_status->name);
        io_k8s_api_core_v1_container_status->name = NULL;
    }
    if (io_k8s_api_core_v1_container_status->state) {
        io_k8s_api_core_v1_container_state_free(io_k8s_api_core_v1_container_status->state);
        io_k8s_api_core_v1_container_status->state = NULL;
    }
    free(io_k8s_api_core_v1_container_status);
}

cJSON *io_k8s_api_core_v1_container_status_convertToJSON(io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_container_status->container_id
    if(io_k8s_api_core_v1_container_status->container_id) { 
    if(cJSON_AddStringToObject(item, "containerID", io_k8s_api_core_v1_container_status->container_id) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container_status->image
    if (!io_k8s_api_core_v1_container_status->image) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "image", io_k8s_api_core_v1_container_status->image) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_container_status->image_id
    if (!io_k8s_api_core_v1_container_status->image_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "imageID", io_k8s_api_core_v1_container_status->image_id) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_container_status->last_state
    if(io_k8s_api_core_v1_container_status->last_state) { 
    cJSON *last_state_local_JSON = io_k8s_api_core_v1_container_state_convertToJSON(io_k8s_api_core_v1_container_status->last_state);
    if(last_state_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "lastState", last_state_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_container_status->name
    if (!io_k8s_api_core_v1_container_status->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_container_status->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_container_status->ready
    if (!io_k8s_api_core_v1_container_status->ready) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "ready", io_k8s_api_core_v1_container_status->ready) == NULL) {
    goto fail; //Bool
    }


    // io_k8s_api_core_v1_container_status->restart_count
    if (!io_k8s_api_core_v1_container_status->restart_count) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "restartCount", io_k8s_api_core_v1_container_status->restart_count) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_core_v1_container_status->started
    if(io_k8s_api_core_v1_container_status->started) { 
    if(cJSON_AddBoolToObject(item, "started", io_k8s_api_core_v1_container_status->started) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_container_status->state
    if(io_k8s_api_core_v1_container_status->state) { 
    cJSON *state_local_JSON = io_k8s_api_core_v1_container_state_convertToJSON(io_k8s_api_core_v1_container_status->state);
    if(state_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "state", state_local_JSON);
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

io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status_parseFromJSON(cJSON *io_k8s_api_core_v1_container_statusJSON){

    io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status_local_var = NULL;

    // io_k8s_api_core_v1_container_status->container_id
    cJSON *container_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_statusJSON, "containerID");
    if (container_id) { 
    if(!cJSON_IsString(container_id))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container_status->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_statusJSON, "image");
    if (!image) {
        goto end;
    }

    
    if(!cJSON_IsString(image))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_container_status->image_id
    cJSON *image_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_statusJSON, "imageID");
    if (!image_id) {
        goto end;
    }

    
    if(!cJSON_IsString(image_id))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_container_status->last_state
    cJSON *last_state = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_statusJSON, "lastState");
    io_k8s_api_core_v1_container_state_t *last_state_local_nonprim = NULL;
    if (last_state) { 
    last_state_local_nonprim = io_k8s_api_core_v1_container_state_parseFromJSON(last_state); //nonprimitive
    }

    // io_k8s_api_core_v1_container_status->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_statusJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_container_status->ready
    cJSON *ready = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_statusJSON, "ready");
    if (!ready) {
        goto end;
    }

    
    if(!cJSON_IsBool(ready))
    {
    goto end; //Bool
    }

    // io_k8s_api_core_v1_container_status->restart_count
    cJSON *restart_count = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_statusJSON, "restartCount");
    if (!restart_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(restart_count))
    {
    goto end; //Numeric
    }

    // io_k8s_api_core_v1_container_status->started
    cJSON *started = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_statusJSON, "started");
    if (started) { 
    if(!cJSON_IsBool(started))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_container_status->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_statusJSON, "state");
    io_k8s_api_core_v1_container_state_t *state_local_nonprim = NULL;
    if (state) { 
    state_local_nonprim = io_k8s_api_core_v1_container_state_parseFromJSON(state); //nonprimitive
    }


    io_k8s_api_core_v1_container_status_local_var = io_k8s_api_core_v1_container_status_create (
        container_id ? strdup(container_id->valuestring) : NULL,
        strdup(image->valuestring),
        strdup(image_id->valuestring),
        last_state ? last_state_local_nonprim : NULL,
        strdup(name->valuestring),
        ready->valueint,
        restart_count->valuedouble,
        started ? started->valueint : 0,
        state ? state_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_container_status_local_var;
end:
    if (last_state_local_nonprim) {
        io_k8s_api_core_v1_container_state_free(last_state_local_nonprim);
        last_state_local_nonprim = NULL;
    }
    if (state_local_nonprim) {
        io_k8s_api_core_v1_container_state_free(state_local_nonprim);
        state_local_nonprim = NULL;
    }
    return NULL;

}
