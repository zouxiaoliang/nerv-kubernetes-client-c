#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_secret_env_source.h"



io_k8s_api_core_v1_secret_env_source_t *io_k8s_api_core_v1_secret_env_source_create(
    char *name,
    int optional
    ) {
    io_k8s_api_core_v1_secret_env_source_t *io_k8s_api_core_v1_secret_env_source_local_var = malloc(sizeof(io_k8s_api_core_v1_secret_env_source_t));
    if (!io_k8s_api_core_v1_secret_env_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_secret_env_source_local_var->name = name;
    io_k8s_api_core_v1_secret_env_source_local_var->optional = optional;

    return io_k8s_api_core_v1_secret_env_source_local_var;
}


void io_k8s_api_core_v1_secret_env_source_free(io_k8s_api_core_v1_secret_env_source_t *io_k8s_api_core_v1_secret_env_source) {
    if(NULL == io_k8s_api_core_v1_secret_env_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_secret_env_source->name) {
        free(io_k8s_api_core_v1_secret_env_source->name);
        io_k8s_api_core_v1_secret_env_source->name = NULL;
    }
    free(io_k8s_api_core_v1_secret_env_source);
}

cJSON *io_k8s_api_core_v1_secret_env_source_convertToJSON(io_k8s_api_core_v1_secret_env_source_t *io_k8s_api_core_v1_secret_env_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_secret_env_source->name
    if(io_k8s_api_core_v1_secret_env_source->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_secret_env_source->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_secret_env_source->optional
    if(io_k8s_api_core_v1_secret_env_source->optional) { 
    if(cJSON_AddBoolToObject(item, "optional", io_k8s_api_core_v1_secret_env_source->optional) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_secret_env_source_t *io_k8s_api_core_v1_secret_env_source_parseFromJSON(cJSON *io_k8s_api_core_v1_secret_env_sourceJSON){

    io_k8s_api_core_v1_secret_env_source_t *io_k8s_api_core_v1_secret_env_source_local_var = NULL;

    // io_k8s_api_core_v1_secret_env_source->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secret_env_sourceJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_secret_env_source->optional
    cJSON *optional = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secret_env_sourceJSON, "optional");
    if (optional) { 
    if(!cJSON_IsBool(optional))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_core_v1_secret_env_source_local_var = io_k8s_api_core_v1_secret_env_source_create (
        name ? strdup(name->valuestring) : NULL,
        optional ? optional->valueint : 0
        );

    return io_k8s_api_core_v1_secret_env_source_local_var;
end:
    return NULL;

}
