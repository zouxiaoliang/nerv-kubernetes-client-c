#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authorization_v1_subject_access_review_status.h"



io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status_create(
    int allowed,
    int denied,
    char *evaluation_error,
    char *reason
    ) {
    io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status_local_var = malloc(sizeof(io_k8s_api_authorization_v1_subject_access_review_status_t));
    if (!io_k8s_api_authorization_v1_subject_access_review_status_local_var) {
        return NULL;
    }
    io_k8s_api_authorization_v1_subject_access_review_status_local_var->allowed = allowed;
    io_k8s_api_authorization_v1_subject_access_review_status_local_var->denied = denied;
    io_k8s_api_authorization_v1_subject_access_review_status_local_var->evaluation_error = evaluation_error;
    io_k8s_api_authorization_v1_subject_access_review_status_local_var->reason = reason;

    return io_k8s_api_authorization_v1_subject_access_review_status_local_var;
}


void io_k8s_api_authorization_v1_subject_access_review_status_free(io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status) {
    if(NULL == io_k8s_api_authorization_v1_subject_access_review_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authorization_v1_subject_access_review_status->evaluation_error) {
        free(io_k8s_api_authorization_v1_subject_access_review_status->evaluation_error);
        io_k8s_api_authorization_v1_subject_access_review_status->evaluation_error = NULL;
    }
    if (io_k8s_api_authorization_v1_subject_access_review_status->reason) {
        free(io_k8s_api_authorization_v1_subject_access_review_status->reason);
        io_k8s_api_authorization_v1_subject_access_review_status->reason = NULL;
    }
    free(io_k8s_api_authorization_v1_subject_access_review_status);
}

cJSON *io_k8s_api_authorization_v1_subject_access_review_status_convertToJSON(io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authorization_v1_subject_access_review_status->allowed
    if (!io_k8s_api_authorization_v1_subject_access_review_status->allowed) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "allowed", io_k8s_api_authorization_v1_subject_access_review_status->allowed) == NULL) {
    goto fail; //Bool
    }


    // io_k8s_api_authorization_v1_subject_access_review_status->denied
    if(io_k8s_api_authorization_v1_subject_access_review_status->denied) { 
    if(cJSON_AddBoolToObject(item, "denied", io_k8s_api_authorization_v1_subject_access_review_status->denied) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_authorization_v1_subject_access_review_status->evaluation_error
    if(io_k8s_api_authorization_v1_subject_access_review_status->evaluation_error) { 
    if(cJSON_AddStringToObject(item, "evaluationError", io_k8s_api_authorization_v1_subject_access_review_status->evaluation_error) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1_subject_access_review_status->reason
    if(io_k8s_api_authorization_v1_subject_access_review_status->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_api_authorization_v1_subject_access_review_status->reason) == NULL) {
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

io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status_parseFromJSON(cJSON *io_k8s_api_authorization_v1_subject_access_review_statusJSON){

    io_k8s_api_authorization_v1_subject_access_review_status_t *io_k8s_api_authorization_v1_subject_access_review_status_local_var = NULL;

    // io_k8s_api_authorization_v1_subject_access_review_status->allowed
    cJSON *allowed = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_statusJSON, "allowed");
    if (!allowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(allowed))
    {
    goto end; //Bool
    }

    // io_k8s_api_authorization_v1_subject_access_review_status->denied
    cJSON *denied = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_statusJSON, "denied");
    if (denied) { 
    if(!cJSON_IsBool(denied))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_authorization_v1_subject_access_review_status->evaluation_error
    cJSON *evaluation_error = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_statusJSON, "evaluationError");
    if (evaluation_error) { 
    if(!cJSON_IsString(evaluation_error))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1_subject_access_review_status->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_statusJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }


    io_k8s_api_authorization_v1_subject_access_review_status_local_var = io_k8s_api_authorization_v1_subject_access_review_status_create (
        allowed->valueint,
        denied ? denied->valueint : 0,
        evaluation_error ? strdup(evaluation_error->valuestring) : NULL,
        reason ? strdup(reason->valuestring) : NULL
        );

    return io_k8s_api_authorization_v1_subject_access_review_status_local_var;
end:
    return NULL;

}
