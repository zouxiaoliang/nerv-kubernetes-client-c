#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_se_linux_options.h"



io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options_create(
    char *level,
    char *role,
    char *type,
    char *user
    ) {
    io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options_local_var = malloc(sizeof(io_k8s_api_core_v1_se_linux_options_t));
    if (!io_k8s_api_core_v1_se_linux_options_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_se_linux_options_local_var->level = level;
    io_k8s_api_core_v1_se_linux_options_local_var->role = role;
    io_k8s_api_core_v1_se_linux_options_local_var->type = type;
    io_k8s_api_core_v1_se_linux_options_local_var->user = user;

    return io_k8s_api_core_v1_se_linux_options_local_var;
}


void io_k8s_api_core_v1_se_linux_options_free(io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options) {
    if(NULL == io_k8s_api_core_v1_se_linux_options){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_se_linux_options->level) {
        free(io_k8s_api_core_v1_se_linux_options->level);
        io_k8s_api_core_v1_se_linux_options->level = NULL;
    }
    if (io_k8s_api_core_v1_se_linux_options->role) {
        free(io_k8s_api_core_v1_se_linux_options->role);
        io_k8s_api_core_v1_se_linux_options->role = NULL;
    }
    if (io_k8s_api_core_v1_se_linux_options->type) {
        free(io_k8s_api_core_v1_se_linux_options->type);
        io_k8s_api_core_v1_se_linux_options->type = NULL;
    }
    if (io_k8s_api_core_v1_se_linux_options->user) {
        free(io_k8s_api_core_v1_se_linux_options->user);
        io_k8s_api_core_v1_se_linux_options->user = NULL;
    }
    free(io_k8s_api_core_v1_se_linux_options);
}

cJSON *io_k8s_api_core_v1_se_linux_options_convertToJSON(io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_se_linux_options->level
    if(io_k8s_api_core_v1_se_linux_options->level) { 
    if(cJSON_AddStringToObject(item, "level", io_k8s_api_core_v1_se_linux_options->level) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_se_linux_options->role
    if(io_k8s_api_core_v1_se_linux_options->role) { 
    if(cJSON_AddStringToObject(item, "role", io_k8s_api_core_v1_se_linux_options->role) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_se_linux_options->type
    if(io_k8s_api_core_v1_se_linux_options->type) { 
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_se_linux_options->type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_se_linux_options->user
    if(io_k8s_api_core_v1_se_linux_options->user) { 
    if(cJSON_AddStringToObject(item, "user", io_k8s_api_core_v1_se_linux_options->user) == NULL) {
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

io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options_parseFromJSON(cJSON *io_k8s_api_core_v1_se_linux_optionsJSON){

    io_k8s_api_core_v1_se_linux_options_t *io_k8s_api_core_v1_se_linux_options_local_var = NULL;

    // io_k8s_api_core_v1_se_linux_options->level
    cJSON *level = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_se_linux_optionsJSON, "level");
    if (level) { 
    if(!cJSON_IsString(level))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_se_linux_options->role
    cJSON *role = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_se_linux_optionsJSON, "role");
    if (role) { 
    if(!cJSON_IsString(role))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_se_linux_options->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_se_linux_optionsJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_se_linux_options->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_se_linux_optionsJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_se_linux_options_local_var = io_k8s_api_core_v1_se_linux_options_create (
        level ? strdup(level->valuestring) : NULL,
        role ? strdup(role->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL,
        user ? strdup(user->valuestring) : NULL
        );

    return io_k8s_api_core_v1_se_linux_options_local_var;
end:
    return NULL;

}
