#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_sysctl.h"



io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl_create(
    char *name,
    char *value
    ) {
    io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl_local_var = malloc(sizeof(io_k8s_api_core_v1_sysctl_t));
    if (!io_k8s_api_core_v1_sysctl_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_sysctl_local_var->name = name;
    io_k8s_api_core_v1_sysctl_local_var->value = value;

    return io_k8s_api_core_v1_sysctl_local_var;
}


void io_k8s_api_core_v1_sysctl_free(io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl) {
    if(NULL == io_k8s_api_core_v1_sysctl){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_sysctl->name) {
        free(io_k8s_api_core_v1_sysctl->name);
        io_k8s_api_core_v1_sysctl->name = NULL;
    }
    if (io_k8s_api_core_v1_sysctl->value) {
        free(io_k8s_api_core_v1_sysctl->value);
        io_k8s_api_core_v1_sysctl->value = NULL;
    }
    free(io_k8s_api_core_v1_sysctl);
}

cJSON *io_k8s_api_core_v1_sysctl_convertToJSON(io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_sysctl->name
    if (!io_k8s_api_core_v1_sysctl->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_sysctl->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_sysctl->value
    if (!io_k8s_api_core_v1_sysctl->value) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "value", io_k8s_api_core_v1_sysctl->value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl_parseFromJSON(cJSON *io_k8s_api_core_v1_sysctlJSON){

    io_k8s_api_core_v1_sysctl_t *io_k8s_api_core_v1_sysctl_local_var = NULL;

    // io_k8s_api_core_v1_sysctl->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_sysctlJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_sysctl->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_sysctlJSON, "value");
    if (!value) {
        goto end;
    }

    
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_sysctl_local_var = io_k8s_api_core_v1_sysctl_create (
        strdup(name->valuestring),
        strdup(value->valuestring)
        );

    return io_k8s_api_core_v1_sysctl_local_var;
end:
    return NULL;

}
