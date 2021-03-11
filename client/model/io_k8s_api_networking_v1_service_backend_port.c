#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_service_backend_port.h"



io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port_create(
    char *name,
    int number
    ) {
    io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port_local_var = malloc(sizeof(io_k8s_api_networking_v1_service_backend_port_t));
    if (!io_k8s_api_networking_v1_service_backend_port_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_service_backend_port_local_var->name = name;
    io_k8s_api_networking_v1_service_backend_port_local_var->number = number;

    return io_k8s_api_networking_v1_service_backend_port_local_var;
}


void io_k8s_api_networking_v1_service_backend_port_free(io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port) {
    if(NULL == io_k8s_api_networking_v1_service_backend_port){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_service_backend_port->name) {
        free(io_k8s_api_networking_v1_service_backend_port->name);
        io_k8s_api_networking_v1_service_backend_port->name = NULL;
    }
    free(io_k8s_api_networking_v1_service_backend_port);
}

cJSON *io_k8s_api_networking_v1_service_backend_port_convertToJSON(io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_service_backend_port->name
    if(io_k8s_api_networking_v1_service_backend_port->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_networking_v1_service_backend_port->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1_service_backend_port->number
    if(io_k8s_api_networking_v1_service_backend_port->number) { 
    if(cJSON_AddNumberToObject(item, "number", io_k8s_api_networking_v1_service_backend_port->number) == NULL) {
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

io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port_parseFromJSON(cJSON *io_k8s_api_networking_v1_service_backend_portJSON){

    io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port_local_var = NULL;

    // io_k8s_api_networking_v1_service_backend_port->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_service_backend_portJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1_service_backend_port->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_service_backend_portJSON, "number");
    if (number) { 
    if(!cJSON_IsNumber(number))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_networking_v1_service_backend_port_local_var = io_k8s_api_networking_v1_service_backend_port_create (
        name ? strdup(name->valuestring) : NULL,
        number ? number->valuedouble : 0
        );

    return io_k8s_api_networking_v1_service_backend_port_local_var;
end:
    return NULL;

}
