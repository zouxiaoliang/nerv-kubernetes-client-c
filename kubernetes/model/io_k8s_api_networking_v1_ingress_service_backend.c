#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_ingress_service_backend.h"



io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend_create(
    char *name,
    io_k8s_api_networking_v1_service_backend_port_t *port
    ) {
    io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend_local_var = malloc(sizeof(io_k8s_api_networking_v1_ingress_service_backend_t));
    if (!io_k8s_api_networking_v1_ingress_service_backend_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_ingress_service_backend_local_var->name = name;
    io_k8s_api_networking_v1_ingress_service_backend_local_var->port = port;

    return io_k8s_api_networking_v1_ingress_service_backend_local_var;
}


void io_k8s_api_networking_v1_ingress_service_backend_free(io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend) {
    if(NULL == io_k8s_api_networking_v1_ingress_service_backend){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_ingress_service_backend->name) {
        free(io_k8s_api_networking_v1_ingress_service_backend->name);
        io_k8s_api_networking_v1_ingress_service_backend->name = NULL;
    }
    if (io_k8s_api_networking_v1_ingress_service_backend->port) {
        io_k8s_api_networking_v1_service_backend_port_free(io_k8s_api_networking_v1_ingress_service_backend->port);
        io_k8s_api_networking_v1_ingress_service_backend->port = NULL;
    }
    free(io_k8s_api_networking_v1_ingress_service_backend);
}

cJSON *io_k8s_api_networking_v1_ingress_service_backend_convertToJSON(io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_ingress_service_backend->name
    if (!io_k8s_api_networking_v1_ingress_service_backend->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_networking_v1_ingress_service_backend->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_networking_v1_ingress_service_backend->port
    if(io_k8s_api_networking_v1_ingress_service_backend->port) { 
    cJSON *port_local_JSON = io_k8s_api_networking_v1_service_backend_port_convertToJSON(io_k8s_api_networking_v1_ingress_service_backend->port);
    if(port_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "port", port_local_JSON);
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

io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend_parseFromJSON(cJSON *io_k8s_api_networking_v1_ingress_service_backendJSON){

    io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend_local_var = NULL;

    // io_k8s_api_networking_v1_ingress_service_backend->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_service_backendJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_networking_v1_ingress_service_backend->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_service_backendJSON, "port");
    io_k8s_api_networking_v1_service_backend_port_t *port_local_nonprim = NULL;
    if (port) { 
    port_local_nonprim = io_k8s_api_networking_v1_service_backend_port_parseFromJSON(port); //nonprimitive
    }


    io_k8s_api_networking_v1_ingress_service_backend_local_var = io_k8s_api_networking_v1_ingress_service_backend_create (
        strdup(name->valuestring),
        port ? port_local_nonprim : NULL
        );

    return io_k8s_api_networking_v1_ingress_service_backend_local_var;
end:
    if (port_local_nonprim) {
        io_k8s_api_networking_v1_service_backend_port_free(port_local_nonprim);
        port_local_nonprim = NULL;
    }
    return NULL;

}
