#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_seccomp_profile.h"



io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile_create(
    char *localhost_profile,
    char *type
    ) {
    io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile_local_var = malloc(sizeof(io_k8s_api_core_v1_seccomp_profile_t));
    if (!io_k8s_api_core_v1_seccomp_profile_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_seccomp_profile_local_var->localhost_profile = localhost_profile;
    io_k8s_api_core_v1_seccomp_profile_local_var->type = type;

    return io_k8s_api_core_v1_seccomp_profile_local_var;
}


void io_k8s_api_core_v1_seccomp_profile_free(io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile) {
    if(NULL == io_k8s_api_core_v1_seccomp_profile){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_seccomp_profile->localhost_profile) {
        free(io_k8s_api_core_v1_seccomp_profile->localhost_profile);
        io_k8s_api_core_v1_seccomp_profile->localhost_profile = NULL;
    }
    if (io_k8s_api_core_v1_seccomp_profile->type) {
        free(io_k8s_api_core_v1_seccomp_profile->type);
        io_k8s_api_core_v1_seccomp_profile->type = NULL;
    }
    free(io_k8s_api_core_v1_seccomp_profile);
}

cJSON *io_k8s_api_core_v1_seccomp_profile_convertToJSON(io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_seccomp_profile->localhost_profile
    if(io_k8s_api_core_v1_seccomp_profile->localhost_profile) { 
    if(cJSON_AddStringToObject(item, "localhostProfile", io_k8s_api_core_v1_seccomp_profile->localhost_profile) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_seccomp_profile->type
    if (!io_k8s_api_core_v1_seccomp_profile->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_seccomp_profile->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile_parseFromJSON(cJSON *io_k8s_api_core_v1_seccomp_profileJSON){

    io_k8s_api_core_v1_seccomp_profile_t *io_k8s_api_core_v1_seccomp_profile_local_var = NULL;

    // io_k8s_api_core_v1_seccomp_profile->localhost_profile
    cJSON *localhost_profile = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_seccomp_profileJSON, "localhostProfile");
    if (localhost_profile) { 
    if(!cJSON_IsString(localhost_profile))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_seccomp_profile->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_seccomp_profileJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_seccomp_profile_local_var = io_k8s_api_core_v1_seccomp_profile_create (
        localhost_profile ? strdup(localhost_profile->valuestring) : NULL,
        strdup(type->valuestring)
        );

    return io_k8s_api_core_v1_seccomp_profile_local_var;
end:
    return NULL;

}
