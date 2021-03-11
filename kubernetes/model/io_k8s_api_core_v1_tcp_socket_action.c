#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_tcp_socket_action.h"



io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action_create(
    char *host,
    char *port
    ) {
    io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action_local_var = malloc(sizeof(io_k8s_api_core_v1_tcp_socket_action_t));
    if (!io_k8s_api_core_v1_tcp_socket_action_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_tcp_socket_action_local_var->host = host;
    io_k8s_api_core_v1_tcp_socket_action_local_var->port = port;

    return io_k8s_api_core_v1_tcp_socket_action_local_var;
}


void io_k8s_api_core_v1_tcp_socket_action_free(io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action) {
    if(NULL == io_k8s_api_core_v1_tcp_socket_action){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_tcp_socket_action->host) {
        free(io_k8s_api_core_v1_tcp_socket_action->host);
        io_k8s_api_core_v1_tcp_socket_action->host = NULL;
    }
    if (io_k8s_api_core_v1_tcp_socket_action->port) {
        free(io_k8s_api_core_v1_tcp_socket_action->port);
        io_k8s_api_core_v1_tcp_socket_action->port = NULL;
    }
    free(io_k8s_api_core_v1_tcp_socket_action);
}

cJSON *io_k8s_api_core_v1_tcp_socket_action_convertToJSON(io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_tcp_socket_action->host
    if(io_k8s_api_core_v1_tcp_socket_action->host) { 
    if(cJSON_AddStringToObject(item, "host", io_k8s_api_core_v1_tcp_socket_action->host) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_tcp_socket_action->port
    if (!io_k8s_api_core_v1_tcp_socket_action->port) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "port", io_k8s_api_core_v1_tcp_socket_action->port) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action_parseFromJSON(cJSON *io_k8s_api_core_v1_tcp_socket_actionJSON){

    io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action_local_var = NULL;

    // io_k8s_api_core_v1_tcp_socket_action->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_tcp_socket_actionJSON, "host");
    if (host) { 
    if(!cJSON_IsString(host))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_tcp_socket_action->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_tcp_socket_actionJSON, "port");
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsString(port))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_tcp_socket_action_local_var = io_k8s_api_core_v1_tcp_socket_action_create (
        host ? strdup(host->valuestring) : NULL,
        strdup(port->valuestring)
        );

    return io_k8s_api_core_v1_tcp_socket_action_local_var;
end:
    return NULL;

}
