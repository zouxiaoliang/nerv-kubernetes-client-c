#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_client_ip_config.h"



io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config_create(
    int timeout_seconds
    ) {
    io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config_local_var = malloc(sizeof(io_k8s_api_core_v1_client_ip_config_t));
    if (!io_k8s_api_core_v1_client_ip_config_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_client_ip_config_local_var->timeout_seconds = timeout_seconds;

    return io_k8s_api_core_v1_client_ip_config_local_var;
}


void io_k8s_api_core_v1_client_ip_config_free(io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config) {
    if(NULL == io_k8s_api_core_v1_client_ip_config){
        return ;
    }
    listEntry_t *listEntry;
    free(io_k8s_api_core_v1_client_ip_config);
}

cJSON *io_k8s_api_core_v1_client_ip_config_convertToJSON(io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_client_ip_config->timeout_seconds
    if(io_k8s_api_core_v1_client_ip_config->timeout_seconds) { 
    if(cJSON_AddNumberToObject(item, "timeoutSeconds", io_k8s_api_core_v1_client_ip_config->timeout_seconds) == NULL) {
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

io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config_parseFromJSON(cJSON *io_k8s_api_core_v1_client_ip_configJSON){

    io_k8s_api_core_v1_client_ip_config_t *io_k8s_api_core_v1_client_ip_config_local_var = NULL;

    // io_k8s_api_core_v1_client_ip_config->timeout_seconds
    cJSON *timeout_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_client_ip_configJSON, "timeoutSeconds");
    if (timeout_seconds) { 
    if(!cJSON_IsNumber(timeout_seconds))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_core_v1_client_ip_config_local_var = io_k8s_api_core_v1_client_ip_config_create (
        timeout_seconds ? timeout_seconds->valuedouble : 0
        );

    return io_k8s_api_core_v1_client_ip_config_local_var;
end:
    return NULL;

}
