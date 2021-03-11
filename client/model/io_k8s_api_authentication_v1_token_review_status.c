#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authentication_v1_token_review_status.h"



io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status_create(
    list_t *audiences,
    int authenticated,
    char *error,
    io_k8s_api_authentication_v1_user_info_t *user
    ) {
    io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status_local_var = malloc(sizeof(io_k8s_api_authentication_v1_token_review_status_t));
    if (!io_k8s_api_authentication_v1_token_review_status_local_var) {
        return NULL;
    }
    io_k8s_api_authentication_v1_token_review_status_local_var->audiences = audiences;
    io_k8s_api_authentication_v1_token_review_status_local_var->authenticated = authenticated;
    io_k8s_api_authentication_v1_token_review_status_local_var->error = error;
    io_k8s_api_authentication_v1_token_review_status_local_var->user = user;

    return io_k8s_api_authentication_v1_token_review_status_local_var;
}


void io_k8s_api_authentication_v1_token_review_status_free(io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status) {
    if(NULL == io_k8s_api_authentication_v1_token_review_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authentication_v1_token_review_status->audiences) {
        list_ForEach(listEntry, io_k8s_api_authentication_v1_token_review_status->audiences) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_authentication_v1_token_review_status->audiences);
        io_k8s_api_authentication_v1_token_review_status->audiences = NULL;
    }
    if (io_k8s_api_authentication_v1_token_review_status->error) {
        free(io_k8s_api_authentication_v1_token_review_status->error);
        io_k8s_api_authentication_v1_token_review_status->error = NULL;
    }
    if (io_k8s_api_authentication_v1_token_review_status->user) {
        io_k8s_api_authentication_v1_user_info_free(io_k8s_api_authentication_v1_token_review_status->user);
        io_k8s_api_authentication_v1_token_review_status->user = NULL;
    }
    free(io_k8s_api_authentication_v1_token_review_status);
}

cJSON *io_k8s_api_authentication_v1_token_review_status_convertToJSON(io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authentication_v1_token_review_status->audiences
    if(io_k8s_api_authentication_v1_token_review_status->audiences) { 
    cJSON *audiences = cJSON_AddArrayToObject(item, "audiences");
    if(audiences == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *audiencesListEntry;
    list_ForEach(audiencesListEntry, io_k8s_api_authentication_v1_token_review_status->audiences) {
    if(cJSON_AddStringToObject(audiences, "", (char*)audiencesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_authentication_v1_token_review_status->authenticated
    if(io_k8s_api_authentication_v1_token_review_status->authenticated) { 
    if(cJSON_AddBoolToObject(item, "authenticated", io_k8s_api_authentication_v1_token_review_status->authenticated) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_authentication_v1_token_review_status->error
    if(io_k8s_api_authentication_v1_token_review_status->error) { 
    if(cJSON_AddStringToObject(item, "error", io_k8s_api_authentication_v1_token_review_status->error) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authentication_v1_token_review_status->user
    if(io_k8s_api_authentication_v1_token_review_status->user) { 
    cJSON *user_local_JSON = io_k8s_api_authentication_v1_user_info_convertToJSON(io_k8s_api_authentication_v1_token_review_status->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
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

io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status_parseFromJSON(cJSON *io_k8s_api_authentication_v1_token_review_statusJSON){

    io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status_local_var = NULL;

    // io_k8s_api_authentication_v1_token_review_status->audiences
    cJSON *audiences = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1_token_review_statusJSON, "audiences");
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

    // io_k8s_api_authentication_v1_token_review_status->authenticated
    cJSON *authenticated = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1_token_review_statusJSON, "authenticated");
    if (authenticated) { 
    if(!cJSON_IsBool(authenticated))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_authentication_v1_token_review_status->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1_token_review_statusJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authentication_v1_token_review_status->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1_token_review_statusJSON, "user");
    io_k8s_api_authentication_v1_user_info_t *user_local_nonprim = NULL;
    if (user) { 
    user_local_nonprim = io_k8s_api_authentication_v1_user_info_parseFromJSON(user); //nonprimitive
    }


    io_k8s_api_authentication_v1_token_review_status_local_var = io_k8s_api_authentication_v1_token_review_status_create (
        audiences ? audiencesList : NULL,
        authenticated ? authenticated->valueint : 0,
        error ? strdup(error->valuestring) : NULL,
        user ? user_local_nonprim : NULL
        );

    return io_k8s_api_authentication_v1_token_review_status_local_var;
end:
    if (user_local_nonprim) {
        io_k8s_api_authentication_v1_user_info_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    return NULL;

}
