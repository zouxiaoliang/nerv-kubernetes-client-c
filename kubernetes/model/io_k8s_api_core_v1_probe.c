#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_probe.h"



io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe_create(
    io_k8s_api_core_v1_exec_action_t *exec,
    int failure_threshold,
    io_k8s_api_core_v1_http_get_action_t *http_get,
    int initial_delay_seconds,
    int period_seconds,
    int success_threshold,
    io_k8s_api_core_v1_tcp_socket_action_t *tcp_socket,
    int timeout_seconds
    ) {
    io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe_local_var = malloc(sizeof(io_k8s_api_core_v1_probe_t));
    if (!io_k8s_api_core_v1_probe_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_probe_local_var->exec = exec;
    io_k8s_api_core_v1_probe_local_var->failure_threshold = failure_threshold;
    io_k8s_api_core_v1_probe_local_var->http_get = http_get;
    io_k8s_api_core_v1_probe_local_var->initial_delay_seconds = initial_delay_seconds;
    io_k8s_api_core_v1_probe_local_var->period_seconds = period_seconds;
    io_k8s_api_core_v1_probe_local_var->success_threshold = success_threshold;
    io_k8s_api_core_v1_probe_local_var->tcp_socket = tcp_socket;
    io_k8s_api_core_v1_probe_local_var->timeout_seconds = timeout_seconds;

    return io_k8s_api_core_v1_probe_local_var;
}


void io_k8s_api_core_v1_probe_free(io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe) {
    if(NULL == io_k8s_api_core_v1_probe){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_probe->exec) {
        io_k8s_api_core_v1_exec_action_free(io_k8s_api_core_v1_probe->exec);
        io_k8s_api_core_v1_probe->exec = NULL;
    }
    if (io_k8s_api_core_v1_probe->http_get) {
        io_k8s_api_core_v1_http_get_action_free(io_k8s_api_core_v1_probe->http_get);
        io_k8s_api_core_v1_probe->http_get = NULL;
    }
    if (io_k8s_api_core_v1_probe->tcp_socket) {
        io_k8s_api_core_v1_tcp_socket_action_free(io_k8s_api_core_v1_probe->tcp_socket);
        io_k8s_api_core_v1_probe->tcp_socket = NULL;
    }
    free(io_k8s_api_core_v1_probe);
}

cJSON *io_k8s_api_core_v1_probe_convertToJSON(io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_probe->exec
    if(io_k8s_api_core_v1_probe->exec) { 
    cJSON *exec_local_JSON = io_k8s_api_core_v1_exec_action_convertToJSON(io_k8s_api_core_v1_probe->exec);
    if(exec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "exec", exec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_probe->failure_threshold
    if(io_k8s_api_core_v1_probe->failure_threshold) { 
    if(cJSON_AddNumberToObject(item, "failureThreshold", io_k8s_api_core_v1_probe->failure_threshold) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_probe->http_get
    if(io_k8s_api_core_v1_probe->http_get) { 
    cJSON *http_get_local_JSON = io_k8s_api_core_v1_http_get_action_convertToJSON(io_k8s_api_core_v1_probe->http_get);
    if(http_get_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "httpGet", http_get_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_probe->initial_delay_seconds
    if(io_k8s_api_core_v1_probe->initial_delay_seconds) { 
    if(cJSON_AddNumberToObject(item, "initialDelaySeconds", io_k8s_api_core_v1_probe->initial_delay_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_probe->period_seconds
    if(io_k8s_api_core_v1_probe->period_seconds) { 
    if(cJSON_AddNumberToObject(item, "periodSeconds", io_k8s_api_core_v1_probe->period_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_probe->success_threshold
    if(io_k8s_api_core_v1_probe->success_threshold) { 
    if(cJSON_AddNumberToObject(item, "successThreshold", io_k8s_api_core_v1_probe->success_threshold) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_probe->tcp_socket
    if(io_k8s_api_core_v1_probe->tcp_socket) { 
    cJSON *tcp_socket_local_JSON = io_k8s_api_core_v1_tcp_socket_action_convertToJSON(io_k8s_api_core_v1_probe->tcp_socket);
    if(tcp_socket_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tcpSocket", tcp_socket_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_probe->timeout_seconds
    if(io_k8s_api_core_v1_probe->timeout_seconds) { 
    if(cJSON_AddNumberToObject(item, "timeoutSeconds", io_k8s_api_core_v1_probe->timeout_seconds) == NULL) {
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

io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe_parseFromJSON(cJSON *io_k8s_api_core_v1_probeJSON){

    io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe_local_var = NULL;

    // io_k8s_api_core_v1_probe->exec
    cJSON *exec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_probeJSON, "exec");
    io_k8s_api_core_v1_exec_action_t *exec_local_nonprim = NULL;
    if (exec) { 
    exec_local_nonprim = io_k8s_api_core_v1_exec_action_parseFromJSON(exec); //nonprimitive
    }

    // io_k8s_api_core_v1_probe->failure_threshold
    cJSON *failure_threshold = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_probeJSON, "failureThreshold");
    if (failure_threshold) { 
    if(!cJSON_IsNumber(failure_threshold))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_probe->http_get
    cJSON *http_get = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_probeJSON, "httpGet");
    io_k8s_api_core_v1_http_get_action_t *http_get_local_nonprim = NULL;
    if (http_get) { 
    http_get_local_nonprim = io_k8s_api_core_v1_http_get_action_parseFromJSON(http_get); //nonprimitive
    }

    // io_k8s_api_core_v1_probe->initial_delay_seconds
    cJSON *initial_delay_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_probeJSON, "initialDelaySeconds");
    if (initial_delay_seconds) { 
    if(!cJSON_IsNumber(initial_delay_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_probe->period_seconds
    cJSON *period_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_probeJSON, "periodSeconds");
    if (period_seconds) { 
    if(!cJSON_IsNumber(period_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_probe->success_threshold
    cJSON *success_threshold = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_probeJSON, "successThreshold");
    if (success_threshold) { 
    if(!cJSON_IsNumber(success_threshold))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_probe->tcp_socket
    cJSON *tcp_socket = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_probeJSON, "tcpSocket");
    io_k8s_api_core_v1_tcp_socket_action_t *tcp_socket_local_nonprim = NULL;
    if (tcp_socket) { 
    tcp_socket_local_nonprim = io_k8s_api_core_v1_tcp_socket_action_parseFromJSON(tcp_socket); //nonprimitive
    }

    // io_k8s_api_core_v1_probe->timeout_seconds
    cJSON *timeout_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_probeJSON, "timeoutSeconds");
    if (timeout_seconds) { 
    if(!cJSON_IsNumber(timeout_seconds))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_core_v1_probe_local_var = io_k8s_api_core_v1_probe_create (
        exec ? exec_local_nonprim : NULL,
        failure_threshold ? failure_threshold->valuedouble : 0,
        http_get ? http_get_local_nonprim : NULL,
        initial_delay_seconds ? initial_delay_seconds->valuedouble : 0,
        period_seconds ? period_seconds->valuedouble : 0,
        success_threshold ? success_threshold->valuedouble : 0,
        tcp_socket ? tcp_socket_local_nonprim : NULL,
        timeout_seconds ? timeout_seconds->valuedouble : 0
        );

    return io_k8s_api_core_v1_probe_local_var;
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
