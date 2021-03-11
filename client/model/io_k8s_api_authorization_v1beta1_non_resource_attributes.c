#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authorization_v1beta1_non_resource_attributes.h"



io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes_create(
    char *path,
    char *verb
    ) {
    io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes_local_var = malloc(sizeof(io_k8s_api_authorization_v1beta1_non_resource_attributes_t));
    if (!io_k8s_api_authorization_v1beta1_non_resource_attributes_local_var) {
        return NULL;
    }
    io_k8s_api_authorization_v1beta1_non_resource_attributes_local_var->path = path;
    io_k8s_api_authorization_v1beta1_non_resource_attributes_local_var->verb = verb;

    return io_k8s_api_authorization_v1beta1_non_resource_attributes_local_var;
}


void io_k8s_api_authorization_v1beta1_non_resource_attributes_free(io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes) {
    if(NULL == io_k8s_api_authorization_v1beta1_non_resource_attributes){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authorization_v1beta1_non_resource_attributes->path) {
        free(io_k8s_api_authorization_v1beta1_non_resource_attributes->path);
        io_k8s_api_authorization_v1beta1_non_resource_attributes->path = NULL;
    }
    if (io_k8s_api_authorization_v1beta1_non_resource_attributes->verb) {
        free(io_k8s_api_authorization_v1beta1_non_resource_attributes->verb);
        io_k8s_api_authorization_v1beta1_non_resource_attributes->verb = NULL;
    }
    free(io_k8s_api_authorization_v1beta1_non_resource_attributes);
}

cJSON *io_k8s_api_authorization_v1beta1_non_resource_attributes_convertToJSON(io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authorization_v1beta1_non_resource_attributes->path
    if(io_k8s_api_authorization_v1beta1_non_resource_attributes->path) { 
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_authorization_v1beta1_non_resource_attributes->path) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1beta1_non_resource_attributes->verb
    if(io_k8s_api_authorization_v1beta1_non_resource_attributes->verb) { 
    if(cJSON_AddStringToObject(item, "verb", io_k8s_api_authorization_v1beta1_non_resource_attributes->verb) == NULL) {
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

io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes_parseFromJSON(cJSON *io_k8s_api_authorization_v1beta1_non_resource_attributesJSON){

    io_k8s_api_authorization_v1beta1_non_resource_attributes_t *io_k8s_api_authorization_v1beta1_non_resource_attributes_local_var = NULL;

    // io_k8s_api_authorization_v1beta1_non_resource_attributes->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1beta1_non_resource_attributesJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1beta1_non_resource_attributes->verb
    cJSON *verb = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1beta1_non_resource_attributesJSON, "verb");
    if (verb) { 
    if(!cJSON_IsString(verb))
    {
    goto end; //String
    }
    }


    io_k8s_api_authorization_v1beta1_non_resource_attributes_local_var = io_k8s_api_authorization_v1beta1_non_resource_attributes_create (
        path ? strdup(path->valuestring) : NULL,
        verb ? strdup(verb->valuestring) : NULL
        );

    return io_k8s_api_authorization_v1beta1_non_resource_attributes_local_var;
end:
    return NULL;

}
