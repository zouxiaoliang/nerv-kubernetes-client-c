#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_discovery_v1beta1_endpoint_port.h"



io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port_create(
    char *app_protocol,
    char *name,
    int port,
    char *protocol
    ) {
    io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port_local_var = malloc(sizeof(io_k8s_api_discovery_v1beta1_endpoint_port_t));
    if (!io_k8s_api_discovery_v1beta1_endpoint_port_local_var) {
        return NULL;
    }
    io_k8s_api_discovery_v1beta1_endpoint_port_local_var->app_protocol = app_protocol;
    io_k8s_api_discovery_v1beta1_endpoint_port_local_var->name = name;
    io_k8s_api_discovery_v1beta1_endpoint_port_local_var->port = port;
    io_k8s_api_discovery_v1beta1_endpoint_port_local_var->protocol = protocol;

    return io_k8s_api_discovery_v1beta1_endpoint_port_local_var;
}


void io_k8s_api_discovery_v1beta1_endpoint_port_free(io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port) {
    if(NULL == io_k8s_api_discovery_v1beta1_endpoint_port){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_discovery_v1beta1_endpoint_port->app_protocol) {
        free(io_k8s_api_discovery_v1beta1_endpoint_port->app_protocol);
        io_k8s_api_discovery_v1beta1_endpoint_port->app_protocol = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint_port->name) {
        free(io_k8s_api_discovery_v1beta1_endpoint_port->name);
        io_k8s_api_discovery_v1beta1_endpoint_port->name = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint_port->protocol) {
        free(io_k8s_api_discovery_v1beta1_endpoint_port->protocol);
        io_k8s_api_discovery_v1beta1_endpoint_port->protocol = NULL;
    }
    free(io_k8s_api_discovery_v1beta1_endpoint_port);
}

cJSON *io_k8s_api_discovery_v1beta1_endpoint_port_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_discovery_v1beta1_endpoint_port->app_protocol
    if(io_k8s_api_discovery_v1beta1_endpoint_port->app_protocol) { 
    if(cJSON_AddStringToObject(item, "appProtocol", io_k8s_api_discovery_v1beta1_endpoint_port->app_protocol) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint_port->name
    if(io_k8s_api_discovery_v1beta1_endpoint_port->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_discovery_v1beta1_endpoint_port->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint_port->port
    if(io_k8s_api_discovery_v1beta1_endpoint_port->port) { 
    if(cJSON_AddNumberToObject(item, "port", io_k8s_api_discovery_v1beta1_endpoint_port->port) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint_port->protocol
    if(io_k8s_api_discovery_v1beta1_endpoint_port->protocol) { 
    if(cJSON_AddStringToObject(item, "protocol", io_k8s_api_discovery_v1beta1_endpoint_port->protocol) == NULL) {
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

io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port_parseFromJSON(cJSON *io_k8s_api_discovery_v1beta1_endpoint_portJSON){

    io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port_local_var = NULL;

    // io_k8s_api_discovery_v1beta1_endpoint_port->app_protocol
    cJSON *app_protocol = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_portJSON, "appProtocol");
    if (app_protocol) { 
    if(!cJSON_IsString(app_protocol))
    {
    goto end; //String
    }
    }

    // io_k8s_api_discovery_v1beta1_endpoint_port->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_portJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_discovery_v1beta1_endpoint_port->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_portJSON, "port");
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_discovery_v1beta1_endpoint_port->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_portJSON, "protocol");
    if (protocol) { 
    if(!cJSON_IsString(protocol))
    {
    goto end; //String
    }
    }


    io_k8s_api_discovery_v1beta1_endpoint_port_local_var = io_k8s_api_discovery_v1beta1_endpoint_port_create (
        app_protocol ? strdup(app_protocol->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        port ? port->valuedouble : 0,
        protocol ? strdup(protocol->valuestring) : NULL
        );

    return io_k8s_api_discovery_v1beta1_endpoint_port_local_var;
end:
    return NULL;

}
