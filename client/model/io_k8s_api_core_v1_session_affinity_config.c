#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_session_affinity_config.h"



io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config_create(
    io_k8s_api_core_v1_client_ip_config_t *client_ip
    ) {
    io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config_local_var = malloc(sizeof(io_k8s_api_core_v1_session_affinity_config_t));
    if (!io_k8s_api_core_v1_session_affinity_config_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_session_affinity_config_local_var->client_ip = client_ip;

    return io_k8s_api_core_v1_session_affinity_config_local_var;
}


void io_k8s_api_core_v1_session_affinity_config_free(io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config) {
    if(NULL == io_k8s_api_core_v1_session_affinity_config){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_session_affinity_config->client_ip) {
        io_k8s_api_core_v1_client_ip_config_free(io_k8s_api_core_v1_session_affinity_config->client_ip);
        io_k8s_api_core_v1_session_affinity_config->client_ip = NULL;
    }
    free(io_k8s_api_core_v1_session_affinity_config);
}

cJSON *io_k8s_api_core_v1_session_affinity_config_convertToJSON(io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_session_affinity_config->client_ip
    if(io_k8s_api_core_v1_session_affinity_config->client_ip) { 
    cJSON *client_ip_local_JSON = io_k8s_api_core_v1_client_ip_config_convertToJSON(io_k8s_api_core_v1_session_affinity_config->client_ip);
    if(client_ip_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "clientIP", client_ip_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config_parseFromJSON(cJSON *io_k8s_api_core_v1_session_affinity_configJSON){

    io_k8s_api_core_v1_session_affinity_config_t *io_k8s_api_core_v1_session_affinity_config_local_var = NULL;

    // io_k8s_api_core_v1_session_affinity_config->client_ip
    cJSON *client_ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_session_affinity_configJSON, "clientIP");
    io_k8s_api_core_v1_client_ip_config_t *client_ip_local_nonprim = NULL;
    if (client_ip) { 
    client_ip_local_nonprim = io_k8s_api_core_v1_client_ip_config_parseFromJSON(client_ip); //nonprimitive
    }


    io_k8s_api_core_v1_session_affinity_config_local_var = io_k8s_api_core_v1_session_affinity_config_create (
        client_ip ? client_ip_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_session_affinity_config_local_var;
end:
    if (client_ip_local_nonprim) {
        io_k8s_api_core_v1_client_ip_config_free(client_ip_local_nonprim);
        client_ip_local_nonprim = NULL;
    }
    return NULL;

}
