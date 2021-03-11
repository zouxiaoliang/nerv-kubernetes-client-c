#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authentication_v1beta1_token_review_spec.h"



io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec_create(
    list_t *audiences,
    char *token
    ) {
    io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec_local_var = malloc(sizeof(io_k8s_api_authentication_v1beta1_token_review_spec_t));
    if (!io_k8s_api_authentication_v1beta1_token_review_spec_local_var) {
        return NULL;
    }
    io_k8s_api_authentication_v1beta1_token_review_spec_local_var->audiences = audiences;
    io_k8s_api_authentication_v1beta1_token_review_spec_local_var->token = token;

    return io_k8s_api_authentication_v1beta1_token_review_spec_local_var;
}


void io_k8s_api_authentication_v1beta1_token_review_spec_free(io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec) {
    if(NULL == io_k8s_api_authentication_v1beta1_token_review_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authentication_v1beta1_token_review_spec->audiences) {
        list_ForEach(listEntry, io_k8s_api_authentication_v1beta1_token_review_spec->audiences) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_authentication_v1beta1_token_review_spec->audiences);
        io_k8s_api_authentication_v1beta1_token_review_spec->audiences = NULL;
    }
    if (io_k8s_api_authentication_v1beta1_token_review_spec->token) {
        free(io_k8s_api_authentication_v1beta1_token_review_spec->token);
        io_k8s_api_authentication_v1beta1_token_review_spec->token = NULL;
    }
    free(io_k8s_api_authentication_v1beta1_token_review_spec);
}

cJSON *io_k8s_api_authentication_v1beta1_token_review_spec_convertToJSON(io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authentication_v1beta1_token_review_spec->audiences
    if(io_k8s_api_authentication_v1beta1_token_review_spec->audiences) { 
    cJSON *audiences = cJSON_AddArrayToObject(item, "audiences");
    if(audiences == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *audiencesListEntry;
    list_ForEach(audiencesListEntry, io_k8s_api_authentication_v1beta1_token_review_spec->audiences) {
    if(cJSON_AddStringToObject(audiences, "", (char*)audiencesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_authentication_v1beta1_token_review_spec->token
    if(io_k8s_api_authentication_v1beta1_token_review_spec->token) { 
    if(cJSON_AddStringToObject(item, "token", io_k8s_api_authentication_v1beta1_token_review_spec->token) == NULL) {
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

io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec_parseFromJSON(cJSON *io_k8s_api_authentication_v1beta1_token_review_specJSON){

    io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec_local_var = NULL;

    // io_k8s_api_authentication_v1beta1_token_review_spec->audiences
    cJSON *audiences = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1beta1_token_review_specJSON, "audiences");
    list_t *audiencesList;
    if (audiences) { 
    cJSON *audiences_local;
    if(!cJSON_IsArray(audiences)) {
        goto end;//primitive container
    }
    audiencesList = list_create();

    cJSON_ArrayForEach(audiences_local, audiences)
    {
        if(!cJSON_IsString(audiences_local))
        {
            goto end;
        }
        list_addElement(audiencesList , strdup(audiences_local->valuestring));
    }
    }

    // io_k8s_api_authentication_v1beta1_token_review_spec->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1beta1_token_review_specJSON, "token");
    if (token) { 
    if(!cJSON_IsString(token))
    {
    goto end; //String
    }
    }


    io_k8s_api_authentication_v1beta1_token_review_spec_local_var = io_k8s_api_authentication_v1beta1_token_review_spec_create (
        audiences ? audiencesList : NULL,
        token ? strdup(token->valuestring) : NULL
        );

    return io_k8s_api_authentication_v1beta1_token_review_spec_local_var;
end:
    return NULL;

}
