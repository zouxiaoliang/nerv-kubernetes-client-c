#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_ingress_backend.h"



io_k8s_api_networking_v1_ingress_backend_t *io_k8s_api_networking_v1_ingress_backend_create(
    io_k8s_api_core_v1_typed_local_object_reference_t *resource,
    io_k8s_api_networking_v1_ingress_service_backend_t *service
    ) {
    io_k8s_api_networking_v1_ingress_backend_t *io_k8s_api_networking_v1_ingress_backend_local_var = malloc(sizeof(io_k8s_api_networking_v1_ingress_backend_t));
    if (!io_k8s_api_networking_v1_ingress_backend_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_ingress_backend_local_var->resource = resource;
    io_k8s_api_networking_v1_ingress_backend_local_var->service = service;

    return io_k8s_api_networking_v1_ingress_backend_local_var;
}


void io_k8s_api_networking_v1_ingress_backend_free(io_k8s_api_networking_v1_ingress_backend_t *io_k8s_api_networking_v1_ingress_backend) {
    if(NULL == io_k8s_api_networking_v1_ingress_backend){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_ingress_backend->resource) {
        io_k8s_api_core_v1_typed_local_object_reference_free(io_k8s_api_networking_v1_ingress_backend->resource);
        io_k8s_api_networking_v1_ingress_backend->resource = NULL;
    }
    if (io_k8s_api_networking_v1_ingress_backend->service) {
        io_k8s_api_networking_v1_ingress_service_backend_free(io_k8s_api_networking_v1_ingress_backend->service);
        io_k8s_api_networking_v1_ingress_backend->service = NULL;
    }
    free(io_k8s_api_networking_v1_ingress_backend);
}

cJSON *io_k8s_api_networking_v1_ingress_backend_convertToJSON(io_k8s_api_networking_v1_ingress_backend_t *io_k8s_api_networking_v1_ingress_backend) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_ingress_backend->resource
    if(io_k8s_api_networking_v1_ingress_backend->resource) { 
    cJSON *resource_local_JSON = io_k8s_api_core_v1_typed_local_object_reference_convertToJSON(io_k8s_api_networking_v1_ingress_backend->resource);
    if(resource_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resource", resource_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_networking_v1_ingress_backend->service
    if(io_k8s_api_networking_v1_ingress_backend->service) { 
    cJSON *service_local_JSON = io_k8s_api_networking_v1_ingress_service_backend_convertToJSON(io_k8s_api_networking_v1_ingress_backend->service);
    if(service_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "service", service_local_JSON);
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

io_k8s_api_networking_v1_ingress_backend_t *io_k8s_api_networking_v1_ingress_backend_parseFromJSON(cJSON *io_k8s_api_networking_v1_ingress_backendJSON){

    io_k8s_api_networking_v1_ingress_backend_t *io_k8s_api_networking_v1_ingress_backend_local_var = NULL;

    // io_k8s_api_networking_v1_ingress_backend->resource
    cJSON *resource = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_backendJSON, "resource");
    io_k8s_api_core_v1_typed_local_object_reference_t *resource_local_nonprim = NULL;
    if (resource) { 
    resource_local_nonprim = io_k8s_api_core_v1_typed_local_object_reference_parseFromJSON(resource); //nonprimitive
    }

    // io_k8s_api_networking_v1_ingress_backend->service
    cJSON *service = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_backendJSON, "service");
    io_k8s_api_networking_v1_ingress_service_backend_t *service_local_nonprim = NULL;
    if (service) { 
    service_local_nonprim = io_k8s_api_networking_v1_ingress_service_backend_parseFromJSON(service); //nonprimitive
    }


    io_k8s_api_networking_v1_ingress_backend_local_var = io_k8s_api_networking_v1_ingress_backend_create (
        resource ? resource_local_nonprim : NULL,
        service ? service_local_nonprim : NULL
        );

    return io_k8s_api_networking_v1_ingress_backend_local_var;
end:
    if (resource_local_nonprim) {
        io_k8s_api_core_v1_typed_local_object_reference_free(resource_local_nonprim);
        resource_local_nonprim = NULL;
    }
    if (service_local_nonprim) {
        io_k8s_api_networking_v1_ingress_service_backend_free(service_local_nonprim);
        service_local_nonprim = NULL;
    }
    return NULL;

}
