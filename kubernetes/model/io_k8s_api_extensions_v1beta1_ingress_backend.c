#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_extensions_v1beta1_ingress_backend.h"



io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend_create(
    io_k8s_api_core_v1_typed_local_object_reference_t *resource,
    char *service_name,
    char *service_port
    ) {
    io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend_local_var = malloc(sizeof(io_k8s_api_extensions_v1beta1_ingress_backend_t));
    if (!io_k8s_api_extensions_v1beta1_ingress_backend_local_var) {
        return NULL;
    }
    io_k8s_api_extensions_v1beta1_ingress_backend_local_var->resource = resource;
    io_k8s_api_extensions_v1beta1_ingress_backend_local_var->service_name = service_name;
    io_k8s_api_extensions_v1beta1_ingress_backend_local_var->service_port = service_port;

    return io_k8s_api_extensions_v1beta1_ingress_backend_local_var;
}


void io_k8s_api_extensions_v1beta1_ingress_backend_free(io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend) {
    if(NULL == io_k8s_api_extensions_v1beta1_ingress_backend){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_extensions_v1beta1_ingress_backend->resource) {
        io_k8s_api_core_v1_typed_local_object_reference_free(io_k8s_api_extensions_v1beta1_ingress_backend->resource);
        io_k8s_api_extensions_v1beta1_ingress_backend->resource = NULL;
    }
    if (io_k8s_api_extensions_v1beta1_ingress_backend->service_name) {
        free(io_k8s_api_extensions_v1beta1_ingress_backend->service_name);
        io_k8s_api_extensions_v1beta1_ingress_backend->service_name = NULL;
    }
    if (io_k8s_api_extensions_v1beta1_ingress_backend->service_port) {
        free(io_k8s_api_extensions_v1beta1_ingress_backend->service_port);
        io_k8s_api_extensions_v1beta1_ingress_backend->service_port = NULL;
    }
    free(io_k8s_api_extensions_v1beta1_ingress_backend);
}

cJSON *io_k8s_api_extensions_v1beta1_ingress_backend_convertToJSON(io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_extensions_v1beta1_ingress_backend->resource
    if(io_k8s_api_extensions_v1beta1_ingress_backend->resource) { 
    cJSON *resource_local_JSON = io_k8s_api_core_v1_typed_local_object_reference_convertToJSON(io_k8s_api_extensions_v1beta1_ingress_backend->resource);
    if(resource_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resource", resource_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_extensions_v1beta1_ingress_backend->service_name
    if(io_k8s_api_extensions_v1beta1_ingress_backend->service_name) { 
    if(cJSON_AddStringToObject(item, "serviceName", io_k8s_api_extensions_v1beta1_ingress_backend->service_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_extensions_v1beta1_ingress_backend->service_port
    if(io_k8s_api_extensions_v1beta1_ingress_backend->service_port) { 
    if(cJSON_AddStringToObject(item, "servicePort", io_k8s_api_extensions_v1beta1_ingress_backend->service_port) == NULL) {
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

io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend_parseFromJSON(cJSON *io_k8s_api_extensions_v1beta1_ingress_backendJSON){

    io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend_local_var = NULL;

    // io_k8s_api_extensions_v1beta1_ingress_backend->resource
    cJSON *resource = cJSON_GetObjectItemCaseSensitive(io_k8s_api_extensions_v1beta1_ingress_backendJSON, "resource");
    io_k8s_api_core_v1_typed_local_object_reference_t *resource_local_nonprim = NULL;
    if (resource) { 
    resource_local_nonprim = io_k8s_api_core_v1_typed_local_object_reference_parseFromJSON(resource); //nonprimitive
    }

    // io_k8s_api_extensions_v1beta1_ingress_backend->service_name
    cJSON *service_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_extensions_v1beta1_ingress_backendJSON, "serviceName");
    if (service_name) { 
    if(!cJSON_IsString(service_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_extensions_v1beta1_ingress_backend->service_port
    cJSON *service_port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_extensions_v1beta1_ingress_backendJSON, "servicePort");
    if (service_port) { 
    if(!cJSON_IsString(service_port))
    {
    goto end; //String
    }
    }


    io_k8s_api_extensions_v1beta1_ingress_backend_local_var = io_k8s_api_extensions_v1beta1_ingress_backend_create (
        resource ? resource_local_nonprim : NULL,
        service_name ? strdup(service_name->valuestring) : NULL,
        service_port ? strdup(service_port->valuestring) : NULL
        );

    return io_k8s_api_extensions_v1beta1_ingress_backend_local_var;
end:
    if (resource_local_nonprim) {
        io_k8s_api_core_v1_typed_local_object_reference_free(resource_local_nonprim);
        resource_local_nonprim = NULL;
    }
    return NULL;

}
