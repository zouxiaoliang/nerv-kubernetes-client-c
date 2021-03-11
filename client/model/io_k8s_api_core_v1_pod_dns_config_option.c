#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_dns_config_option.h"



io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option_create(
    char *name,
    char *value
    ) {
    io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_dns_config_option_t));
    if (!io_k8s_api_core_v1_pod_dns_config_option_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_dns_config_option_local_var->name = name;
    io_k8s_api_core_v1_pod_dns_config_option_local_var->value = value;

    return io_k8s_api_core_v1_pod_dns_config_option_local_var;
}


void io_k8s_api_core_v1_pod_dns_config_option_free(io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option) {
    if(NULL == io_k8s_api_core_v1_pod_dns_config_option){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_dns_config_option->name) {
        free(io_k8s_api_core_v1_pod_dns_config_option->name);
        io_k8s_api_core_v1_pod_dns_config_option->name = NULL;
    }
    if (io_k8s_api_core_v1_pod_dns_config_option->value) {
        free(io_k8s_api_core_v1_pod_dns_config_option->value);
        io_k8s_api_core_v1_pod_dns_config_option->value = NULL;
    }
    free(io_k8s_api_core_v1_pod_dns_config_option);
}

cJSON *io_k8s_api_core_v1_pod_dns_config_option_convertToJSON(io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_dns_config_option->name
    if(io_k8s_api_core_v1_pod_dns_config_option->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_pod_dns_config_option->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_dns_config_option->value
    if(io_k8s_api_core_v1_pod_dns_config_option->value) { 
    if(cJSON_AddStringToObject(item, "value", io_k8s_api_core_v1_pod_dns_config_option->value) == NULL) {
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

io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_dns_config_optionJSON){

    io_k8s_api_core_v1_pod_dns_config_option_t *io_k8s_api_core_v1_pod_dns_config_option_local_var = NULL;

    // io_k8s_api_core_v1_pod_dns_config_option->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_dns_config_optionJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_dns_config_option->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_dns_config_optionJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_pod_dns_config_option_local_var = io_k8s_api_core_v1_pod_dns_config_option_create (
        name ? strdup(name->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL
        );

    return io_k8s_api_core_v1_pod_dns_config_option_local_var;
end:
    return NULL;

}
