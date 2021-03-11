#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_ingress_class_spec.h"



io_k8s_api_networking_v1_ingress_class_spec_t *io_k8s_api_networking_v1_ingress_class_spec_create(
    char *controller,
    io_k8s_api_core_v1_typed_local_object_reference_t *parameters
    ) {
    io_k8s_api_networking_v1_ingress_class_spec_t *io_k8s_api_networking_v1_ingress_class_spec_local_var = malloc(sizeof(io_k8s_api_networking_v1_ingress_class_spec_t));
    if (!io_k8s_api_networking_v1_ingress_class_spec_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_ingress_class_spec_local_var->controller = controller;
    io_k8s_api_networking_v1_ingress_class_spec_local_var->parameters = parameters;

    return io_k8s_api_networking_v1_ingress_class_spec_local_var;
}


void io_k8s_api_networking_v1_ingress_class_spec_free(io_k8s_api_networking_v1_ingress_class_spec_t *io_k8s_api_networking_v1_ingress_class_spec) {
    if(NULL == io_k8s_api_networking_v1_ingress_class_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_ingress_class_spec->controller) {
        free(io_k8s_api_networking_v1_ingress_class_spec->controller);
        io_k8s_api_networking_v1_ingress_class_spec->controller = NULL;
    }
    if (io_k8s_api_networking_v1_ingress_class_spec->parameters) {
        io_k8s_api_core_v1_typed_local_object_reference_free(io_k8s_api_networking_v1_ingress_class_spec->parameters);
        io_k8s_api_networking_v1_ingress_class_spec->parameters = NULL;
    }
    free(io_k8s_api_networking_v1_ingress_class_spec);
}

cJSON *io_k8s_api_networking_v1_ingress_class_spec_convertToJSON(io_k8s_api_networking_v1_ingress_class_spec_t *io_k8s_api_networking_v1_ingress_class_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_ingress_class_spec->controller
    if(io_k8s_api_networking_v1_ingress_class_spec->controller) { 
    if(cJSON_AddStringToObject(item, "controller", io_k8s_api_networking_v1_ingress_class_spec->controller) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1_ingress_class_spec->parameters
    if(io_k8s_api_networking_v1_ingress_class_spec->parameters) { 
    cJSON *parameters_local_JSON = io_k8s_api_core_v1_typed_local_object_reference_convertToJSON(io_k8s_api_networking_v1_ingress_class_spec->parameters);
    if(parameters_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "parameters", parameters_local_JSON);
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

io_k8s_api_networking_v1_ingress_class_spec_t *io_k8s_api_networking_v1_ingress_class_spec_parseFromJSON(cJSON *io_k8s_api_networking_v1_ingress_class_specJSON){

    io_k8s_api_networking_v1_ingress_class_spec_t *io_k8s_api_networking_v1_ingress_class_spec_local_var = NULL;

    // io_k8s_api_networking_v1_ingress_class_spec->controller
    cJSON *controller = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_class_specJSON, "controller");
    if (controller) { 
    if(!cJSON_IsString(controller))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1_ingress_class_spec->parameters
    cJSON *parameters = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_ingress_class_specJSON, "parameters");
    io_k8s_api_core_v1_typed_local_object_reference_t *parameters_local_nonprim = NULL;
    if (parameters) { 
    parameters_local_nonprim = io_k8s_api_core_v1_typed_local_object_reference_parseFromJSON(parameters); //nonprimitive
    }


    io_k8s_api_networking_v1_ingress_class_spec_local_var = io_k8s_api_networking_v1_ingress_class_spec_create (
        controller ? strdup(controller->valuestring) : NULL,
        parameters ? parameters_local_nonprim : NULL
        );

    return io_k8s_api_networking_v1_ingress_class_spec_local_var;
end:
    if (parameters_local_nonprim) {
        io_k8s_api_core_v1_typed_local_object_reference_free(parameters_local_nonprim);
        parameters_local_nonprim = NULL;
    }
    return NULL;

}
