#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_key_to_path.h"



io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path_create(
    char *key,
    int mode,
    char *path
    ) {
    io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path_local_var = malloc(sizeof(io_k8s_api_core_v1_key_to_path_t));
    if (!io_k8s_api_core_v1_key_to_path_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_key_to_path_local_var->key = key;
    io_k8s_api_core_v1_key_to_path_local_var->mode = mode;
    io_k8s_api_core_v1_key_to_path_local_var->path = path;

    return io_k8s_api_core_v1_key_to_path_local_var;
}


void io_k8s_api_core_v1_key_to_path_free(io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path) {
    if(NULL == io_k8s_api_core_v1_key_to_path){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_key_to_path->key) {
        free(io_k8s_api_core_v1_key_to_path->key);
        io_k8s_api_core_v1_key_to_path->key = NULL;
    }
    if (io_k8s_api_core_v1_key_to_path->path) {
        free(io_k8s_api_core_v1_key_to_path->path);
        io_k8s_api_core_v1_key_to_path->path = NULL;
    }
    free(io_k8s_api_core_v1_key_to_path);
}

cJSON *io_k8s_api_core_v1_key_to_path_convertToJSON(io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_key_to_path->key
    if (!io_k8s_api_core_v1_key_to_path->key) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "key", io_k8s_api_core_v1_key_to_path->key) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_key_to_path->mode
    if(io_k8s_api_core_v1_key_to_path->mode) { 
    if(cJSON_AddNumberToObject(item, "mode", io_k8s_api_core_v1_key_to_path->mode) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_key_to_path->path
    if (!io_k8s_api_core_v1_key_to_path->path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_core_v1_key_to_path->path) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path_parseFromJSON(cJSON *io_k8s_api_core_v1_key_to_pathJSON){

    io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path_local_var = NULL;

    // io_k8s_api_core_v1_key_to_path->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_key_to_pathJSON, "key");
    if (!key) {
        goto end;
    }

    
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_key_to_path->mode
    cJSON *mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_key_to_pathJSON, "mode");
    if (mode) { 
    if(!cJSON_IsNumber(mode))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_key_to_path->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_key_to_pathJSON, "path");
    if (!path) {
        goto end;
    }

    
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_key_to_path_local_var = io_k8s_api_core_v1_key_to_path_create (
        strdup(key->valuestring),
        mode ? mode->valuedouble : 0,
        strdup(path->valuestring)
        );

    return io_k8s_api_core_v1_key_to_path_local_var;
end:
    return NULL;

}
