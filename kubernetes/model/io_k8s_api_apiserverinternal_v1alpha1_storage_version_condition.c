#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition.h"



io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_create(
    char *last_transition_time,
    char *message,
    long observed_generation,
    char *reason,
    char *status,
    char *type
    ) {
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var = malloc(sizeof(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t));
    if (!io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var) {
        return NULL;
    }
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var->last_transition_time = last_transition_time;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var->message = message;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var->observed_generation = observed_generation;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var->reason = reason;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var->status = status;
    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var->type = type;

    return io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var;
}


void io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition) {
    if(NULL == io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->last_transition_time) {
        free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->last_transition_time);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->last_transition_time = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->message) {
        free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->message);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->message = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->reason) {
        free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->reason);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->reason = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->status) {
        free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->status);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->status = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->type) {
        free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->type);
        io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->type = NULL;
    }
    free(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition);
}

cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->last_transition_time
    if(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->last_transition_time) { 
    if(cJSON_AddStringToObject(item, "lastTransitionTime", io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->last_transition_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->message
    if(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->observed_generation
    if(io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->observed_generation) { 
    if(cJSON_AddNumberToObject(item, "observedGeneration", io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->observed_generation) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->reason
    if (!io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->reason) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "reason", io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->reason) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->status
    if (!io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->status) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "status", io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->status) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->type
    if (!io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_parseFromJSON(cJSON *io_k8s_api_apiserverinternal_v1alpha1_storage_version_conditionJSON){

    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_t *io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var = NULL;

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->last_transition_time
    cJSON *last_transition_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_version_conditionJSON, "lastTransitionTime");
    if (last_transition_time) { 
    if(!cJSON_IsString(last_transition_time))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_version_conditionJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->observed_generation
    cJSON *observed_generation = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_version_conditionJSON, "observedGeneration");
    if (observed_generation) { 
    if(!cJSON_IsNumber(observed_generation))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_version_conditionJSON, "reason");
    if (!reason) {
        goto end;
    }

    
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_version_conditionJSON, "status");
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_storage_version_conditionJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var = io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_create (
        last_transition_time ? strdup(last_transition_time->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        observed_generation ? observed_generation->valuedouble : 0,
        strdup(reason->valuestring),
        strdup(status->valuestring),
        strdup(type->valuestring)
        );

    return io_k8s_api_apiserverinternal_v1alpha1_storage_version_condition_local_var;
end:
    return NULL;

}
