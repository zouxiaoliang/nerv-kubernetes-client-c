#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authentication_v1_token_request_status.h"



io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status_create(
    char *expiration_timestamp,
    char *token
    ) {
    io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status_local_var = malloc(sizeof(io_k8s_api_authentication_v1_token_request_status_t));
    if (!io_k8s_api_authentication_v1_token_request_status_local_var) {
        return NULL;
    }
    io_k8s_api_authentication_v1_token_request_status_local_var->expiration_timestamp = expiration_timestamp;
    io_k8s_api_authentication_v1_token_request_status_local_var->token = token;

    return io_k8s_api_authentication_v1_token_request_status_local_var;
}


void io_k8s_api_authentication_v1_token_request_status_free(io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status) {
    if(NULL == io_k8s_api_authentication_v1_token_request_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authentication_v1_token_request_status->expiration_timestamp) {
        free(io_k8s_api_authentication_v1_token_request_status->expiration_timestamp);
        io_k8s_api_authentication_v1_token_request_status->expiration_timestamp = NULL;
    }
    if (io_k8s_api_authentication_v1_token_request_status->token) {
        free(io_k8s_api_authentication_v1_token_request_status->token);
        io_k8s_api_authentication_v1_token_request_status->token = NULL;
    }
    free(io_k8s_api_authentication_v1_token_request_status);
}

cJSON *io_k8s_api_authentication_v1_token_request_status_convertToJSON(io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authentication_v1_token_request_status->expiration_timestamp
    if (!io_k8s_api_authentication_v1_token_request_status->expiration_timestamp) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "expirationTimestamp", io_k8s_api_authentication_v1_token_request_status->expiration_timestamp) == NULL) {
    goto fail; //Date-Time
    }


    // io_k8s_api_authentication_v1_token_request_status->token
    if (!io_k8s_api_authentication_v1_token_request_status->token) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "token", io_k8s_api_authentication_v1_token_request_status->token) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status_parseFromJSON(cJSON *io_k8s_api_authentication_v1_token_request_statusJSON){

    io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status_local_var = NULL;

    // io_k8s_api_authentication_v1_token_request_status->expiration_timestamp
    cJSON *expiration_timestamp = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1_token_request_statusJSON, "expirationTimestamp");
    if (!expiration_timestamp) {
        goto end;
    }

    
    if(!cJSON_IsString(expiration_timestamp))
    {
    goto end; //DateTime
    }

    // io_k8s_api_authentication_v1_token_request_status->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1_token_request_statusJSON, "token");
    if (!token) {
        goto end;
    }

    
    if(!cJSON_IsString(token))
    {
    goto end; //String
    }


    io_k8s_api_authentication_v1_token_request_status_local_var = io_k8s_api_authentication_v1_token_request_status_create (
        strdup(expiration_timestamp->valuestring),
        strdup(token->valuestring)
        );

    return io_k8s_api_authentication_v1_token_request_status_local_var;
end:
    return NULL;

}
