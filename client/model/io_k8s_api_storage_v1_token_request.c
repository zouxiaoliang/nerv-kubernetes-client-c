#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1_token_request.h"



io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request_create(
    char *audience,
    long expiration_seconds
    ) {
    io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request_local_var = malloc(sizeof(io_k8s_api_storage_v1_token_request_t));
    if (!io_k8s_api_storage_v1_token_request_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1_token_request_local_var->audience = audience;
    io_k8s_api_storage_v1_token_request_local_var->expiration_seconds = expiration_seconds;

    return io_k8s_api_storage_v1_token_request_local_var;
}


void io_k8s_api_storage_v1_token_request_free(io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request) {
    if(NULL == io_k8s_api_storage_v1_token_request){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1_token_request->audience) {
        free(io_k8s_api_storage_v1_token_request->audience);
        io_k8s_api_storage_v1_token_request->audience = NULL;
    }
    free(io_k8s_api_storage_v1_token_request);
}

cJSON *io_k8s_api_storage_v1_token_request_convertToJSON(io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1_token_request->audience
    if (!io_k8s_api_storage_v1_token_request->audience) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "audience", io_k8s_api_storage_v1_token_request->audience) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_storage_v1_token_request->expiration_seconds
    if(io_k8s_api_storage_v1_token_request->expiration_seconds) { 
    if(cJSON_AddNumberToObject(item, "expirationSeconds", io_k8s_api_storage_v1_token_request->expiration_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request_parseFromJSON(cJSON *io_k8s_api_storage_v1_token_requestJSON){

    io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request_local_var = NULL;

    // io_k8s_api_storage_v1_token_request->audience
    cJSON *audience = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_token_requestJSON, "audience");
    if (!audience) {
        goto end;
    }

    
    if(!cJSON_IsString(audience))
    {
    goto end; //String
    }

    // io_k8s_api_storage_v1_token_request->expiration_seconds
    cJSON *expiration_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_token_requestJSON, "expirationSeconds");
    if (expiration_seconds) { 
    if(!cJSON_IsNumber(expiration_seconds))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_storage_v1_token_request_local_var = io_k8s_api_storage_v1_token_request_create (
        strdup(audience->valuestring),
        expiration_seconds ? expiration_seconds->valuedouble : 0
        );

    return io_k8s_api_storage_v1_token_request_local_var;
end:
    return NULL;

}
