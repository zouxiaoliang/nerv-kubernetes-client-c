#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_daemon_endpoint.h"



io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint_create(
    int port
    ) {
    io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint_local_var = malloc(sizeof(io_k8s_api_core_v1_daemon_endpoint_t));
    if (!io_k8s_api_core_v1_daemon_endpoint_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_daemon_endpoint_local_var->port = port;

    return io_k8s_api_core_v1_daemon_endpoint_local_var;
}


void io_k8s_api_core_v1_daemon_endpoint_free(io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint) {
    if(NULL == io_k8s_api_core_v1_daemon_endpoint){
        return ;
    }
    listEntry_t *listEntry;
    free(io_k8s_api_core_v1_daemon_endpoint);
}

cJSON *io_k8s_api_core_v1_daemon_endpoint_convertToJSON(io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_daemon_endpoint->port
    if (!io_k8s_api_core_v1_daemon_endpoint->port) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "Port", io_k8s_api_core_v1_daemon_endpoint->port) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint_parseFromJSON(cJSON *io_k8s_api_core_v1_daemon_endpointJSON){

    io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint_local_var = NULL;

    // io_k8s_api_core_v1_daemon_endpoint->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_daemon_endpointJSON, "Port");
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }


    io_k8s_api_core_v1_daemon_endpoint_local_var = io_k8s_api_core_v1_daemon_endpoint_create (
        port->valuedouble
        );

    return io_k8s_api_core_v1_daemon_endpoint_local_var;
end:
    return NULL;

}
