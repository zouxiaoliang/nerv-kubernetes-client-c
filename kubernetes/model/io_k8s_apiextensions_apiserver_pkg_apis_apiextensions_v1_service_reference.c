#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_create(
    char *name,
    char *_namespace,
    char *path,
    int port
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var->name = name;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var->_namespace = _namespace;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var->path = path;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var->port = port;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->name) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->name);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->name = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->_namespace) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->_namespace);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->_namespace = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->path) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->path);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->path = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->name
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->_namespace
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->_namespace) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "namespace", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->_namespace) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->path
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->path) { 
    if(cJSON_AddStringToObject(item, "path", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->path) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->port
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->port) { 
    if(cJSON_AddNumberToObject(item, "port", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->port) == NULL) {
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_referenceJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_referenceJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_referenceJSON, "namespace");
    if (!_namespace) {
        goto end;
    }

    
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_referenceJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_referenceJSON, "port");
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_create (
        strdup(name->valuestring),
        strdup(_namespace->valuestring),
        path ? strdup(path->valuestring) : NULL,
        port ? port->valuedouble : 0
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_service_reference_local_var;
end:
    return NULL;

}
