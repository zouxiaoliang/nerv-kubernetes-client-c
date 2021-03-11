#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_service_account_token_projection.h"



io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection_create(
    char *audience,
    long expiration_seconds,
    char *path
    ) {
    io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection_local_var = malloc(sizeof(io_k8s_api_core_v1_service_account_token_projection_t));
    if (!io_k8s_api_core_v1_service_account_token_projection_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_service_account_token_projection_local_var->audience = audience;
    io_k8s_api_core_v1_service_account_token_projection_local_var->expiration_seconds = expiration_seconds;
    io_k8s_api_core_v1_service_account_token_projection_local_var->path = path;

    return io_k8s_api_core_v1_service_account_token_projection_local_var;
}


void io_k8s_api_core_v1_service_account_token_projection_free(io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection) {
    if(NULL == io_k8s_api_core_v1_service_account_token_projection){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_service_account_token_projection->audience) {
        free(io_k8s_api_core_v1_service_account_token_projection->audience);
        io_k8s_api_core_v1_service_account_token_projection->audience = NULL;
    }
    if (io_k8s_api_core_v1_service_account_token_projection->path) {
        free(io_k8s_api_core_v1_service_account_token_projection->path);
        io_k8s_api_core_v1_service_account_token_projection->path = NULL;
    }
    free(io_k8s_api_core_v1_service_account_token_projection);
}

cJSON *io_k8s_api_core_v1_service_account_token_projection_convertToJSON(io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_service_account_token_projection->audience
    if(io_k8s_api_core_v1_service_account_token_projection->audience) { 
    if(cJSON_AddStringToObject(item, "audience", io_k8s_api_core_v1_service_account_token_projection->audience) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_service_account_token_projection->expiration_seconds
    if(io_k8s_api_core_v1_service_account_token_projection->expiration_seconds) { 
    if(cJSON_AddNumberToObject(item, "expirationSeconds", io_k8s_api_core_v1_service_account_token_projection->expiration_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_service_account_token_projection->path
    if (!io_k8s_api_core_v1_service_account_token_projection->path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_core_v1_service_account_token_projection->path) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection_parseFromJSON(cJSON *io_k8s_api_core_v1_service_account_token_projectionJSON){

    io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection_local_var = NULL;

    // io_k8s_api_core_v1_service_account_token_projection->audience
    cJSON *audience = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_account_token_projectionJSON, "audience");
    if (audience) { 
    if(!cJSON_IsString(audience))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_service_account_token_projection->expiration_seconds
    cJSON *expiration_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_account_token_projectionJSON, "expirationSeconds");
    if (expiration_seconds) { 
    if(!cJSON_IsNumber(expiration_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_service_account_token_projection->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_account_token_projectionJSON, "path");
    if (!path) {
        goto end;
    }

    
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_service_account_token_projection_local_var = io_k8s_api_core_v1_service_account_token_projection_create (
        audience ? strdup(audience->valuestring) : NULL,
        expiration_seconds ? expiration_seconds->valuedouble : 0,
        strdup(path->valuestring)
        );

    return io_k8s_api_core_v1_service_account_token_projection_local_var;
end:
    return NULL;

}
