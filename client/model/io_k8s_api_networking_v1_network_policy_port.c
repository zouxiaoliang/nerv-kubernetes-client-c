#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_network_policy_port.h"



io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port_create(
    int end_port,
    char *port,
    char *protocol
    ) {
    io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port_local_var = malloc(sizeof(io_k8s_api_networking_v1_network_policy_port_t));
    if (!io_k8s_api_networking_v1_network_policy_port_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_network_policy_port_local_var->end_port = end_port;
    io_k8s_api_networking_v1_network_policy_port_local_var->port = port;
    io_k8s_api_networking_v1_network_policy_port_local_var->protocol = protocol;

    return io_k8s_api_networking_v1_network_policy_port_local_var;
}


void io_k8s_api_networking_v1_network_policy_port_free(io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port) {
    if(NULL == io_k8s_api_networking_v1_network_policy_port){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_network_policy_port->port) {
        free(io_k8s_api_networking_v1_network_policy_port->port);
        io_k8s_api_networking_v1_network_policy_port->port = NULL;
    }
    if (io_k8s_api_networking_v1_network_policy_port->protocol) {
        free(io_k8s_api_networking_v1_network_policy_port->protocol);
        io_k8s_api_networking_v1_network_policy_port->protocol = NULL;
    }
    free(io_k8s_api_networking_v1_network_policy_port);
}

cJSON *io_k8s_api_networking_v1_network_policy_port_convertToJSON(io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_network_policy_port->end_port
    if(io_k8s_api_networking_v1_network_policy_port->end_port) { 
    if(cJSON_AddNumberToObject(item, "endPort", io_k8s_api_networking_v1_network_policy_port->end_port) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_networking_v1_network_policy_port->port
    if(io_k8s_api_networking_v1_network_policy_port->port) { 
    if(cJSON_AddStringToObject(item, "port", io_k8s_api_networking_v1_network_policy_port->port) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1_network_policy_port->protocol
    if(io_k8s_api_networking_v1_network_policy_port->protocol) { 
    if(cJSON_AddStringToObject(item, "protocol", io_k8s_api_networking_v1_network_policy_port->protocol) == NULL) {
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

io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policy_portJSON){

    io_k8s_api_networking_v1_network_policy_port_t *io_k8s_api_networking_v1_network_policy_port_local_var = NULL;

    // io_k8s_api_networking_v1_network_policy_port->end_port
    cJSON *end_port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_portJSON, "endPort");
    if (end_port) { 
    if(!cJSON_IsNumber(end_port))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_networking_v1_network_policy_port->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_portJSON, "port");
    if (port) { 
    if(!cJSON_IsString(port))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1_network_policy_port->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policy_portJSON, "protocol");
    if (protocol) { 
    if(!cJSON_IsString(protocol))
    {
    goto end; //String
    }
    }


    io_k8s_api_networking_v1_network_policy_port_local_var = io_k8s_api_networking_v1_network_policy_port_create (
        end_port ? end_port->valuedouble : 0,
        port ? strdup(port->valuestring) : NULL,
        protocol ? strdup(protocol->valuestring) : NULL
        );

    return io_k8s_api_networking_v1_network_policy_port_local_var;
end:
    return NULL;

}
