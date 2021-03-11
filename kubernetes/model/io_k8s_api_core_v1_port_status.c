#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_port_status.h"



io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status_create(
    char *error,
    int port,
    char *protocol
    ) {
    io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status_local_var = malloc(sizeof(io_k8s_api_core_v1_port_status_t));
    if (!io_k8s_api_core_v1_port_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_port_status_local_var->error = error;
    io_k8s_api_core_v1_port_status_local_var->port = port;
    io_k8s_api_core_v1_port_status_local_var->protocol = protocol;

    return io_k8s_api_core_v1_port_status_local_var;
}


void io_k8s_api_core_v1_port_status_free(io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status) {
    if(NULL == io_k8s_api_core_v1_port_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_port_status->error) {
        free(io_k8s_api_core_v1_port_status->error);
        io_k8s_api_core_v1_port_status->error = NULL;
    }
    if (io_k8s_api_core_v1_port_status->protocol) {
        free(io_k8s_api_core_v1_port_status->protocol);
        io_k8s_api_core_v1_port_status->protocol = NULL;
    }
    free(io_k8s_api_core_v1_port_status);
}

cJSON *io_k8s_api_core_v1_port_status_convertToJSON(io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_port_status->error
    if(io_k8s_api_core_v1_port_status->error) { 
    if(cJSON_AddStringToObject(item, "error", io_k8s_api_core_v1_port_status->error) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_port_status->port
    if (!io_k8s_api_core_v1_port_status->port) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "port", io_k8s_api_core_v1_port_status->port) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_core_v1_port_status->protocol
    if (!io_k8s_api_core_v1_port_status->protocol) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "protocol", io_k8s_api_core_v1_port_status->protocol) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status_parseFromJSON(cJSON *io_k8s_api_core_v1_port_statusJSON){

    io_k8s_api_core_v1_port_status_t *io_k8s_api_core_v1_port_status_local_var = NULL;

    // io_k8s_api_core_v1_port_status->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_port_statusJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_port_status->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_port_statusJSON, "port");
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }

    // io_k8s_api_core_v1_port_status->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_port_statusJSON, "protocol");
    if (!protocol) {
        goto end;
    }

    
    if(!cJSON_IsString(protocol))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_port_status_local_var = io_k8s_api_core_v1_port_status_create (
        error ? strdup(error->valuestring) : NULL,
        port->valuedouble,
        strdup(protocol->valuestring)
        );

    return io_k8s_api_core_v1_port_status_local_var;
end:
    return NULL;

}
