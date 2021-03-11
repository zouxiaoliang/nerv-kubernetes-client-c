#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference.h"



io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_create(
    char *name,
    char *_namespace,
    int port
    ) {
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_local_var = malloc(sizeof(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t));
    if (!io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_local_var) {
        return NULL;
    }
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_local_var->name = name;
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_local_var->_namespace = _namespace;
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_local_var->port = port;

    return io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_local_var;
}


void io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference) {
    if(NULL == io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->name) {
        free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->name);
        io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->name = NULL;
    }
    if (io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->_namespace) {
        free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->_namespace);
        io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->_namespace = NULL;
    }
    free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference);
}

cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->name
    if(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->_namespace
    if(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->_namespace) { 
    if(cJSON_AddStringToObject(item, "namespace", io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->_namespace) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->port
    if(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->port) { 
    if(cJSON_AddNumberToObject(item, "port", io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->port) == NULL) {
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

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_parseFromJSON(cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_referenceJSON){

    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_local_var = NULL;

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_referenceJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_referenceJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }
    }

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_referenceJSON, "port");
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    }


    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_local_var = io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_create (
        name ? strdup(name->valuestring) : NULL,
        _namespace ? strdup(_namespace->valuestring) : NULL,
        port ? port->valuedouble : 0
        );

    return io_k8s_kube_aggregator_pkg_apis_apiregistration_v1_service_reference_local_var;
end:
    return NULL;

}
