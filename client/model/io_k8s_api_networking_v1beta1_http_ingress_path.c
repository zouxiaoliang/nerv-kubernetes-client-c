#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1beta1_http_ingress_path.h"



io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path_create(
    io_k8s_api_networking_v1beta1_ingress_backend_t *backend,
    char *path,
    char *path_type
    ) {
    io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path_local_var = malloc(sizeof(io_k8s_api_networking_v1beta1_http_ingress_path_t));
    if (!io_k8s_api_networking_v1beta1_http_ingress_path_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1beta1_http_ingress_path_local_var->backend = backend;
    io_k8s_api_networking_v1beta1_http_ingress_path_local_var->path = path;
    io_k8s_api_networking_v1beta1_http_ingress_path_local_var->path_type = path_type;

    return io_k8s_api_networking_v1beta1_http_ingress_path_local_var;
}


void io_k8s_api_networking_v1beta1_http_ingress_path_free(io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path) {
    if(NULL == io_k8s_api_networking_v1beta1_http_ingress_path){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1beta1_http_ingress_path->backend) {
        io_k8s_api_networking_v1beta1_ingress_backend_free(io_k8s_api_networking_v1beta1_http_ingress_path->backend);
        io_k8s_api_networking_v1beta1_http_ingress_path->backend = NULL;
    }
    if (io_k8s_api_networking_v1beta1_http_ingress_path->path) {
        free(io_k8s_api_networking_v1beta1_http_ingress_path->path);
        io_k8s_api_networking_v1beta1_http_ingress_path->path = NULL;
    }
    if (io_k8s_api_networking_v1beta1_http_ingress_path->path_type) {
        free(io_k8s_api_networking_v1beta1_http_ingress_path->path_type);
        io_k8s_api_networking_v1beta1_http_ingress_path->path_type = NULL;
    }
    free(io_k8s_api_networking_v1beta1_http_ingress_path);
}

cJSON *io_k8s_api_networking_v1beta1_http_ingress_path_convertToJSON(io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1beta1_http_ingress_path->backend
    if (!io_k8s_api_networking_v1beta1_http_ingress_path->backend) {
        goto fail;
    }
    
    cJSON *backend_local_JSON = io_k8s_api_networking_v1beta1_ingress_backend_convertToJSON(io_k8s_api_networking_v1beta1_http_ingress_path->backend);
    if(backend_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "backend", backend_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_networking_v1beta1_http_ingress_path->path
    if(io_k8s_api_networking_v1beta1_http_ingress_path->path) { 
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_networking_v1beta1_http_ingress_path->path) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1beta1_http_ingress_path->path_type
    if(io_k8s_api_networking_v1beta1_http_ingress_path->path_type) { 
    if(cJSON_AddStringToObject(item, "pathType", io_k8s_api_networking_v1beta1_http_ingress_path->path_type) == NULL) {
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

io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path_parseFromJSON(cJSON *io_k8s_api_networking_v1beta1_http_ingress_pathJSON){

    io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path_local_var = NULL;

    // io_k8s_api_networking_v1beta1_http_ingress_path->backend
    cJSON *backend = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_http_ingress_pathJSON, "backend");
    if (!backend) {
        goto end;
    }

    io_k8s_api_networking_v1beta1_ingress_backend_t *backend_local_nonprim = NULL;
    
    backend_local_nonprim = io_k8s_api_networking_v1beta1_ingress_backend_parseFromJSON(backend); //nonprimitive

    // io_k8s_api_networking_v1beta1_http_ingress_path->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_http_ingress_pathJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1beta1_http_ingress_path->path_type
    cJSON *path_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_http_ingress_pathJSON, "pathType");
    if (path_type) { 
    if(!cJSON_IsString(path_type))
    {
    goto end; //String
    }
    }


    io_k8s_api_networking_v1beta1_http_ingress_path_local_var = io_k8s_api_networking_v1beta1_http_ingress_path_create (
        backend_local_nonprim,
        path ? strdup(path->valuestring) : NULL,
        path_type ? strdup(path_type->valuestring) : NULL
        );

    return io_k8s_api_networking_v1beta1_http_ingress_path_local_var;
end:
    if (backend_local_nonprim) {
        io_k8s_api_networking_v1beta1_ingress_backend_free(backend_local_nonprim);
        backend_local_nonprim = NULL;
    }
    return NULL;

}
