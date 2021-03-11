#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_namespace_condition.h"



io_k8s_api_core_v1_namespace_condition_t *io_k8s_api_core_v1_namespace_condition_create(
    char *last_transition_time,
    char *message,
    char *reason,
    char *status,
    char *type
    ) {
    io_k8s_api_core_v1_namespace_condition_t *io_k8s_api_core_v1_namespace_condition_local_var = malloc(sizeof(io_k8s_api_core_v1_namespace_condition_t));
    if (!io_k8s_api_core_v1_namespace_condition_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_namespace_condition_local_var->last_transition_time = last_transition_time;
    io_k8s_api_core_v1_namespace_condition_local_var->message = message;
    io_k8s_api_core_v1_namespace_condition_local_var->reason = reason;
    io_k8s_api_core_v1_namespace_condition_local_var->status = status;
    io_k8s_api_core_v1_namespace_condition_local_var->type = type;

    return io_k8s_api_core_v1_namespace_condition_local_var;
}


void io_k8s_api_core_v1_namespace_condition_free(io_k8s_api_core_v1_namespace_condition_t *io_k8s_api_core_v1_namespace_condition) {
    if(NULL == io_k8s_api_core_v1_namespace_condition){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_namespace_condition->last_transition_time) {
        free(io_k8s_api_core_v1_namespace_condition->last_transition_time);
        io_k8s_api_core_v1_namespace_condition->last_transition_time = NULL;
    }
    if (io_k8s_api_core_v1_namespace_condition->message) {
        free(io_k8s_api_core_v1_namespace_condition->message);
        io_k8s_api_core_v1_namespace_condition->message = NULL;
    }
    if (io_k8s_api_core_v1_namespace_condition->reason) {
        free(io_k8s_api_core_v1_namespace_condition->reason);
        io_k8s_api_core_v1_namespace_condition->reason = NULL;
    }
    if (io_k8s_api_core_v1_namespace_condition->status) {
        free(io_k8s_api_core_v1_namespace_condition->status);
        io_k8s_api_core_v1_namespace_condition->status = NULL;
    }
    if (io_k8s_api_core_v1_namespace_condition->type) {
        free(io_k8s_api_core_v1_namespace_condition->type);
        io_k8s_api_core_v1_namespace_condition->type = NULL;
    }
    free(io_k8s_api_core_v1_namespace_condition);
}

cJSON *io_k8s_api_core_v1_namespace_condition_convertToJSON(io_k8s_api_core_v1_namespace_condition_t *io_k8s_api_core_v1_namespace_condition) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_namespace_condition->last_transition_time
    if(io_k8s_api_core_v1_namespace_condition->last_transition_time) { 
    if(cJSON_AddStringToObject(item, "lastTransitionTime", io_k8s_api_core_v1_namespace_condition->last_transition_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_core_v1_namespace_condition->message
    if(io_k8s_api_core_v1_namespace_condition->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_api_core_v1_namespace_condition->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_namespace_condition->reason
    if(io_k8s_api_core_v1_namespace_condition->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_api_core_v1_namespace_condition->reason) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_namespace_condition->status
    if (!io_k8s_api_core_v1_namespace_condition->status) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "status", io_k8s_api_core_v1_namespace_condition->status) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_namespace_condition->type
    if (!io_k8s_api_core_v1_namespace_condition->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_namespace_condition->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_namespace_condition_t *io_k8s_api_core_v1_namespace_condition_parseFromJSON(cJSON *io_k8s_api_core_v1_namespace_conditionJSON){

    io_k8s_api_core_v1_namespace_condition_t *io_k8s_api_core_v1_namespace_condition_local_var = NULL;

    // io_k8s_api_core_v1_namespace_condition->last_transition_time
    cJSON *last_transition_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_namespace_conditionJSON, "lastTransitionTime");
    if (last_transition_time) { 
    if(!cJSON_IsString(last_transition_time))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_core_v1_namespace_condition->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_namespace_conditionJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_namespace_condition->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_namespace_conditionJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_namespace_condition->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_namespace_conditionJSON, "status");
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_namespace_condition->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_namespace_conditionJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_namespace_condition_local_var = io_k8s_api_core_v1_namespace_condition_create (
        last_transition_time ? strdup(last_transition_time->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        reason ? strdup(reason->valuestring) : NULL,
        strdup(status->valuestring),
        strdup(type->valuestring)
        );

    return io_k8s_api_core_v1_namespace_condition_local_var;
end:
    return NULL;

}
