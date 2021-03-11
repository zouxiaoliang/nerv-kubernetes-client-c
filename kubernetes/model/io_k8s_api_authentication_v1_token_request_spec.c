#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authentication_v1_token_request_spec.h"



io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec_create(
    list_t *audiences,
    io_k8s_api_authentication_v1_bound_object_reference_t *bound_object_ref,
    long expiration_seconds
    ) {
    io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec_local_var = malloc(sizeof(io_k8s_api_authentication_v1_token_request_spec_t));
    if (!io_k8s_api_authentication_v1_token_request_spec_local_var) {
        return NULL;
    }
    io_k8s_api_authentication_v1_token_request_spec_local_var->audiences = audiences;
    io_k8s_api_authentication_v1_token_request_spec_local_var->bound_object_ref = bound_object_ref;
    io_k8s_api_authentication_v1_token_request_spec_local_var->expiration_seconds = expiration_seconds;

    return io_k8s_api_authentication_v1_token_request_spec_local_var;
}


void io_k8s_api_authentication_v1_token_request_spec_free(io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec) {
    if(NULL == io_k8s_api_authentication_v1_token_request_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authentication_v1_token_request_spec->audiences) {
        list_ForEach(listEntry, io_k8s_api_authentication_v1_token_request_spec->audiences) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_authentication_v1_token_request_spec->audiences);
        io_k8s_api_authentication_v1_token_request_spec->audiences = NULL;
    }
    if (io_k8s_api_authentication_v1_token_request_spec->bound_object_ref) {
        io_k8s_api_authentication_v1_bound_object_reference_free(io_k8s_api_authentication_v1_token_request_spec->bound_object_ref);
        io_k8s_api_authentication_v1_token_request_spec->bound_object_ref = NULL;
    }
    free(io_k8s_api_authentication_v1_token_request_spec);
}

cJSON *io_k8s_api_authentication_v1_token_request_spec_convertToJSON(io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authentication_v1_token_request_spec->audiences
    if (!io_k8s_api_authentication_v1_token_request_spec->audiences) {
        goto fail;
    }
    
    cJSON *audiences = cJSON_AddArrayToObject(item, "audiences");
    if(audiences == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *audiencesListEntry;
    list_ForEach(audiencesListEntry, io_k8s_api_authentication_v1_token_request_spec->audiences) {
    if(cJSON_AddStringToObject(audiences, "", (char*)audiencesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_api_authentication_v1_token_request_spec->bound_object_ref
    if(io_k8s_api_authentication_v1_token_request_spec->bound_object_ref) { 
    cJSON *bound_object_ref_local_JSON = io_k8s_api_authentication_v1_bound_object_reference_convertToJSON(io_k8s_api_authentication_v1_token_request_spec->bound_object_ref);
    if(bound_object_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "boundObjectRef", bound_object_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_authentication_v1_token_request_spec->expiration_seconds
    if(io_k8s_api_authentication_v1_token_request_spec->expiration_seconds) { 
    if(cJSON_AddNumberToObject(item, "expirationSeconds", io_k8s_api_authentication_v1_token_request_spec->expiration_seconds) == NULL) {
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

io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec_parseFromJSON(cJSON *io_k8s_api_authentication_v1_token_request_specJSON){

    io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec_local_var = NULL;

    // io_k8s_api_authentication_v1_token_request_spec->audiences
    cJSON *audiences = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1_token_request_specJSON, "audiences");
    if (!audiences) {
        goto end;
    }

    list_t *audiencesList;
    
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

    // io_k8s_api_authentication_v1_token_request_spec->bound_object_ref
    cJSON *bound_object_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1_token_request_specJSON, "boundObjectRef");
    io_k8s_api_authentication_v1_bound_object_reference_t *bound_object_ref_local_nonprim = NULL;
    if (bound_object_ref) { 
    bound_object_ref_local_nonprim = io_k8s_api_authentication_v1_bound_object_reference_parseFromJSON(bound_object_ref); //nonprimitive
    }

    // io_k8s_api_authentication_v1_token_request_spec->expiration_seconds
    cJSON *expiration_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1_token_request_specJSON, "expirationSeconds");
    if (expiration_seconds) { 
    if(!cJSON_IsNumber(expiration_seconds))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_authentication_v1_token_request_spec_local_var = io_k8s_api_authentication_v1_token_request_spec_create (
        audiencesList,
        bound_object_ref ? bound_object_ref_local_nonprim : NULL,
        expiration_seconds ? expiration_seconds->valuedouble : 0
        );

    return io_k8s_api_authentication_v1_token_request_spec_local_var;
end:
    if (bound_object_ref_local_nonprim) {
        io_k8s_api_authentication_v1_bound_object_reference_free(bound_object_ref_local_nonprim);
        bound_object_ref_local_nonprim = NULL;
    }
    return NULL;

}
