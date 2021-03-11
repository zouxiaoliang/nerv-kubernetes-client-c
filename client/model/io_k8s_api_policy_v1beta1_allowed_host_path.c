#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_allowed_host_path.h"



io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path_create(
    char *path_prefix,
    int read_only
    ) {
    io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_allowed_host_path_t));
    if (!io_k8s_api_policy_v1beta1_allowed_host_path_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_allowed_host_path_local_var->path_prefix = path_prefix;
    io_k8s_api_policy_v1beta1_allowed_host_path_local_var->read_only = read_only;

    return io_k8s_api_policy_v1beta1_allowed_host_path_local_var;
}


void io_k8s_api_policy_v1beta1_allowed_host_path_free(io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path) {
    if(NULL == io_k8s_api_policy_v1beta1_allowed_host_path){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_policy_v1beta1_allowed_host_path->path_prefix) {
        free(io_k8s_api_policy_v1beta1_allowed_host_path->path_prefix);
        io_k8s_api_policy_v1beta1_allowed_host_path->path_prefix = NULL;
    }
    free(io_k8s_api_policy_v1beta1_allowed_host_path);
}

cJSON *io_k8s_api_policy_v1beta1_allowed_host_path_convertToJSON(io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_allowed_host_path->path_prefix
    if(io_k8s_api_policy_v1beta1_allowed_host_path->path_prefix) { 
    if(cJSON_AddStringToObject(item, "pathPrefix", io_k8s_api_policy_v1beta1_allowed_host_path->path_prefix) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_policy_v1beta1_allowed_host_path->read_only
    if(io_k8s_api_policy_v1beta1_allowed_host_path->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_policy_v1beta1_allowed_host_path->read_only) == NULL) {
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

io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_allowed_host_pathJSON){

    io_k8s_api_policy_v1beta1_allowed_host_path_t *io_k8s_api_policy_v1beta1_allowed_host_path_local_var = NULL;

    // io_k8s_api_policy_v1beta1_allowed_host_path->path_prefix
    cJSON *path_prefix = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_allowed_host_pathJSON, "pathPrefix");
    if (path_prefix) { 
    if(!cJSON_IsString(path_prefix))
    {
    goto end; //String
    }
    }

    // io_k8s_api_policy_v1beta1_allowed_host_path->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_allowed_host_pathJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_policy_v1beta1_allowed_host_path_local_var = io_k8s_api_policy_v1beta1_allowed_host_path_create (
        path_prefix ? strdup(path_prefix->valuestring) : NULL,
        read_only ? read_only->valueint : 0
        );

    return io_k8s_api_policy_v1beta1_allowed_host_path_local_var;
end:
    return NULL;

}
