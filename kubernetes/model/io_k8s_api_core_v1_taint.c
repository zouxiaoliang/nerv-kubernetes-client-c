#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_taint.h"



io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint_create(
    char *effect,
    char *key,
    char *time_added,
    char *value
    ) {
    io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint_local_var = malloc(sizeof(io_k8s_api_core_v1_taint_t));
    if (!io_k8s_api_core_v1_taint_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_taint_local_var->effect = effect;
    io_k8s_api_core_v1_taint_local_var->key = key;
    io_k8s_api_core_v1_taint_local_var->time_added = time_added;
    io_k8s_api_core_v1_taint_local_var->value = value;

    return io_k8s_api_core_v1_taint_local_var;
}


void io_k8s_api_core_v1_taint_free(io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint) {
    if(NULL == io_k8s_api_core_v1_taint){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_taint->effect) {
        free(io_k8s_api_core_v1_taint->effect);
        io_k8s_api_core_v1_taint->effect = NULL;
    }
    if (io_k8s_api_core_v1_taint->key) {
        free(io_k8s_api_core_v1_taint->key);
        io_k8s_api_core_v1_taint->key = NULL;
    }
    if (io_k8s_api_core_v1_taint->time_added) {
        free(io_k8s_api_core_v1_taint->time_added);
        io_k8s_api_core_v1_taint->time_added = NULL;
    }
    if (io_k8s_api_core_v1_taint->value) {
        free(io_k8s_api_core_v1_taint->value);
        io_k8s_api_core_v1_taint->value = NULL;
    }
    free(io_k8s_api_core_v1_taint);
}

cJSON *io_k8s_api_core_v1_taint_convertToJSON(io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_taint->effect
    if (!io_k8s_api_core_v1_taint->effect) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "effect", io_k8s_api_core_v1_taint->effect) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_taint->key
    if (!io_k8s_api_core_v1_taint->key) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "key", io_k8s_api_core_v1_taint->key) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_taint->time_added
    if(io_k8s_api_core_v1_taint->time_added) { 
    if(cJSON_AddStringToObject(item, "timeAdded", io_k8s_api_core_v1_taint->time_added) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_core_v1_taint->value
    if(io_k8s_api_core_v1_taint->value) { 
    if(cJSON_AddStringToObject(item, "value", io_k8s_api_core_v1_taint->value) == NULL) {
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

io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint_parseFromJSON(cJSON *io_k8s_api_core_v1_taintJSON){

    io_k8s_api_core_v1_taint_t *io_k8s_api_core_v1_taint_local_var = NULL;

    // io_k8s_api_core_v1_taint->effect
    cJSON *effect = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_taintJSON, "effect");
    if (!effect) {
        goto end;
    }

    
    if(!cJSON_IsString(effect))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_taint->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_taintJSON, "key");
    if (!key) {
        goto end;
    }

    
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_taint->time_added
    cJSON *time_added = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_taintJSON, "timeAdded");
    if (time_added) { 
    if(!cJSON_IsString(time_added))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_core_v1_taint->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_taintJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_taint_local_var = io_k8s_api_core_v1_taint_create (
        strdup(effect->valuestring),
        strdup(key->valuestring),
        time_added ? strdup(time_added->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL
        );

    return io_k8s_api_core_v1_taint_local_var;
end:
    return NULL;

}
