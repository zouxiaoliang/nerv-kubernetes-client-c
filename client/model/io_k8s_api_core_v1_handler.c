#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_handler.h"



io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler_create(
    io_k8s_api_core_v1_exec_action_t *exec,
    io_k8s_api_core_v1_http_get_action_t *http_get,
    io_k8s_api_core_v1_tcp_socket_action_t *tcp_socket
    ) {
    io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler_local_var = malloc(sizeof(io_k8s_api_core_v1_handler_t));
    if (!io_k8s_api_core_v1_handler_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_handler_local_var->exec = exec;
    io_k8s_api_core_v1_handler_local_var->http_get = http_get;
    io_k8s_api_core_v1_handler_local_var->tcp_socket = tcp_socket;

    return io_k8s_api_core_v1_handler_local_var;
}


void io_k8s_api_core_v1_handler_free(io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler) {
    if(NULL == io_k8s_api_core_v1_handler){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_handler->exec) {
        io_k8s_api_core_v1_exec_action_free(io_k8s_api_core_v1_handler->exec);
        io_k8s_api_core_v1_handler->exec = NULL;
    }
    if (io_k8s_api_core_v1_handler->http_get) {
        io_k8s_api_core_v1_http_get_action_free(io_k8s_api_core_v1_handler->http_get);
        io_k8s_api_core_v1_handler->http_get = NULL;
    }
    if (io_k8s_api_core_v1_handler->tcp_socket) {
        io_k8s_api_core_v1_tcp_socket_action_free(io_k8s_api_core_v1_handler->tcp_socket);
        io_k8s_api_core_v1_handler->tcp_socket = NULL;
    }
    free(io_k8s_api_core_v1_handler);
}

cJSON *io_k8s_api_core_v1_handler_convertToJSON(io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_handler->exec
    if(io_k8s_api_core_v1_handler->exec) { 
    cJSON *exec_local_JSON = io_k8s_api_core_v1_exec_action_convertToJSON(io_k8s_api_core_v1_handler->exec);
    if(exec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "exec", exec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_handler->http_get
    if(io_k8s_api_core_v1_handler->http_get) { 
    cJSON *http_get_local_JSON = io_k8s_api_core_v1_http_get_action_convertToJSON(io_k8s_api_core_v1_handler->http_get);
    if(http_get_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "httpGet", http_get_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_handler->tcp_socket
    if(io_k8s_api_core_v1_handler->tcp_socket) { 
    cJSON *tcp_socket_local_JSON = io_k8s_api_core_v1_tcp_socket_action_convertToJSON(io_k8s_api_core_v1_handler->tcp_socket);
    if(tcp_socket_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tcpSocket", tcp_socket_local_JSON);
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

io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler_parseFromJSON(cJSON *io_k8s_api_core_v1_handlerJSON){

    io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler_local_var = NULL;

    // io_k8s_api_core_v1_handler->exec
    cJSON *exec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_handlerJSON, "exec");
    io_k8s_api_core_v1_exec_action_t *exec_local_nonprim = NULL;
    if (exec) { 
    exec_local_nonprim = io_k8s_api_core_v1_exec_action_parseFromJSON(exec); //nonprimitive
    }

    // io_k8s_api_core_v1_handler->http_get
    cJSON *http_get = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_handlerJSON, "httpGet");
    io_k8s_api_core_v1_http_get_action_t *http_get_local_nonprim = NULL;
    if (http_get) { 
    http_get_local_nonprim = io_k8s_api_core_v1_http_get_action_parseFromJSON(http_get); //nonprimitive
    }

    // io_k8s_api_core_v1_handler->tcp_socket
    cJSON *tcp_socket = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_handlerJSON, "tcpSocket");
    io_k8s_api_core_v1_tcp_socket_action_t *tcp_socket_local_nonprim = NULL;
    if (tcp_socket) { 
    tcp_socket_local_nonprim = io_k8s_api_core_v1_tcp_socket_action_parseFromJSON(tcp_socket); //nonprimitive
    }


    io_k8s_api_core_v1_handler_local_var = io_k8s_api_core_v1_handler_create (
        exec ? exec_local_nonprim : NULL,
        http_get ? http_get_local_nonprim : NULL,
        tcp_socket ? tcp_socket_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_handler_local_var;
end:
    if (exec_local_nonprim) {
        io_k8s_api_core_v1_exec_action_free(exec_local_nonprim);
        exec_local_nonprim = NULL;
    }
    if (http_get_local_nonprim) {
        io_k8s_api_core_v1_http_get_action_free(http_get_local_nonprim);
        http_get_local_nonprim = NULL;
    }
    if (tcp_socket_local_nonprim) {
        io_k8s_api_core_v1_tcp_socket_action_free(tcp_socket_local_nonprim);
        tcp_socket_local_nonprim = NULL;
    }
    return NULL;

}
