#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_container_port.h"



io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port_create(
    int container_port,
    char *host_ip,
    int host_port,
    char *name,
    char *protocol
    ) {
    io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port_local_var = malloc(sizeof(io_k8s_api_core_v1_container_port_t));
    if (!io_k8s_api_core_v1_container_port_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_container_port_local_var->container_port = container_port;
    io_k8s_api_core_v1_container_port_local_var->host_ip = host_ip;
    io_k8s_api_core_v1_container_port_local_var->host_port = host_port;
    io_k8s_api_core_v1_container_port_local_var->name = name;
    io_k8s_api_core_v1_container_port_local_var->protocol = protocol;

    return io_k8s_api_core_v1_container_port_local_var;
}


void io_k8s_api_core_v1_container_port_free(io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port) {
    if(NULL == io_k8s_api_core_v1_container_port){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_container_port->host_ip) {
        free(io_k8s_api_core_v1_container_port->host_ip);
        io_k8s_api_core_v1_container_port->host_ip = NULL;
    }
    if (io_k8s_api_core_v1_container_port->name) {
        free(io_k8s_api_core_v1_container_port->name);
        io_k8s_api_core_v1_container_port->name = NULL;
    }
    if (io_k8s_api_core_v1_container_port->protocol) {
        free(io_k8s_api_core_v1_container_port->protocol);
        io_k8s_api_core_v1_container_port->protocol = NULL;
    }
    free(io_k8s_api_core_v1_container_port);
}

cJSON *io_k8s_api_core_v1_container_port_convertToJSON(io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_container_port->container_port
    if (!io_k8s_api_core_v1_container_port->container_port) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "containerPort", io_k8s_api_core_v1_container_port->container_port) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_core_v1_container_port->host_ip
    if(io_k8s_api_core_v1_container_port->host_ip) { 
    if(cJSON_AddStringToObject(item, "hostIP", io_k8s_api_core_v1_container_port->host_ip) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container_port->host_port
    if(io_k8s_api_core_v1_container_port->host_port) { 
    if(cJSON_AddNumberToObject(item, "hostPort", io_k8s_api_core_v1_container_port->host_port) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_container_port->name
    if(io_k8s_api_core_v1_container_port->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_container_port->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_container_port->protocol
    if(io_k8s_api_core_v1_container_port->protocol) { 
    if(cJSON_AddStringToObject(item, "protocol", io_k8s_api_core_v1_container_port->protocol) == NULL) {
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

io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port_parseFromJSON(cJSON *io_k8s_api_core_v1_container_portJSON){

    io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port_local_var = NULL;

    // io_k8s_api_core_v1_container_port->container_port
    cJSON *container_port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_portJSON, "containerPort");
    if (!container_port) {
        goto end;
    }

    
    if(!cJSON_IsNumber(container_port))
    {
    goto end; //Numeric
    }

    // io_k8s_api_core_v1_container_port->host_ip
    cJSON *host_ip = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_portJSON, "hostIP");
    if (host_ip) { 
    if(!cJSON_IsString(host_ip))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container_port->host_port
    cJSON *host_port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_portJSON, "hostPort");
    if (host_port) { 
    if(!cJSON_IsNumber(host_port))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_container_port->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_portJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_container_port->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_container_portJSON, "protocol");
    if (protocol) { 
    if(!cJSON_IsString(protocol))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_container_port_local_var = io_k8s_api_core_v1_container_port_create (
        container_port->valuedouble,
        host_ip ? strdup(host_ip->valuestring) : NULL,
        host_port ? host_port->valuedouble : 0,
        name ? strdup(name->valuestring) : NULL,
        protocol ? strdup(protocol->valuestring) : NULL
        );

    return io_k8s_api_core_v1_container_port_local_var;
end:
    return NULL;

}
