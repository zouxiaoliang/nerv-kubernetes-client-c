#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_component_condition.h"



io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition_create(
    char *error,
    char *message,
    char *status,
    char *type
    ) {
    io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition_local_var = malloc(sizeof(io_k8s_api_core_v1_component_condition_t));
    if (!io_k8s_api_core_v1_component_condition_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_component_condition_local_var->error = error;
    io_k8s_api_core_v1_component_condition_local_var->message = message;
    io_k8s_api_core_v1_component_condition_local_var->status = status;
    io_k8s_api_core_v1_component_condition_local_var->type = type;

    return io_k8s_api_core_v1_component_condition_local_var;
}


void io_k8s_api_core_v1_component_condition_free(io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition) {
    if(NULL == io_k8s_api_core_v1_component_condition){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_component_condition->error) {
        free(io_k8s_api_core_v1_component_condition->error);
        io_k8s_api_core_v1_component_condition->error = NULL;
    }
    if (io_k8s_api_core_v1_component_condition->message) {
        free(io_k8s_api_core_v1_component_condition->message);
        io_k8s_api_core_v1_component_condition->message = NULL;
    }
    if (io_k8s_api_core_v1_component_condition->status) {
        free(io_k8s_api_core_v1_component_condition->status);
        io_k8s_api_core_v1_component_condition->status = NULL;
    }
    if (io_k8s_api_core_v1_component_condition->type) {
        free(io_k8s_api_core_v1_component_condition->type);
        io_k8s_api_core_v1_component_condition->type = NULL;
    }
    free(io_k8s_api_core_v1_component_condition);
}

cJSON *io_k8s_api_core_v1_component_condition_convertToJSON(io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_component_condition->error
    if(io_k8s_api_core_v1_component_condition->error) { 
    if(cJSON_AddStringToObject(item, "error", io_k8s_api_core_v1_component_condition->error) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_component_condition->message
    if(io_k8s_api_core_v1_component_condition->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_api_core_v1_component_condition->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_component_condition->status
    if (!io_k8s_api_core_v1_component_condition->status) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "status", io_k8s_api_core_v1_component_condition->status) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_component_condition->type
    if (!io_k8s_api_core_v1_component_condition->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_component_condition->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition_parseFromJSON(cJSON *io_k8s_api_core_v1_component_conditionJSON){

    io_k8s_api_core_v1_component_condition_t *io_k8s_api_core_v1_component_condition_local_var = NULL;

    // io_k8s_api_core_v1_component_condition->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_component_conditionJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_component_condition->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_component_conditionJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_component_condition->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_component_conditionJSON, "status");
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_component_condition->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_component_conditionJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_component_condition_local_var = io_k8s_api_core_v1_component_condition_create (
        error ? strdup(error->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        strdup(status->valuestring),
        strdup(type->valuestring)
        );

    return io_k8s_api_core_v1_component_condition_local_var;
end:
    return NULL;

}
