#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_limit_response.h"



io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response_create(
    io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *queuing,
    char *type
    ) {
    io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_limit_response_t));
    if (!io_k8s_api_flowcontrol_v1beta1_limit_response_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_limit_response_local_var->queuing = queuing;
    io_k8s_api_flowcontrol_v1beta1_limit_response_local_var->type = type;

    return io_k8s_api_flowcontrol_v1beta1_limit_response_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_limit_response_free(io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_limit_response){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_limit_response->queuing) {
        io_k8s_api_flowcontrol_v1beta1_queuing_configuration_free(io_k8s_api_flowcontrol_v1beta1_limit_response->queuing);
        io_k8s_api_flowcontrol_v1beta1_limit_response->queuing = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_limit_response->type) {
        free(io_k8s_api_flowcontrol_v1beta1_limit_response->type);
        io_k8s_api_flowcontrol_v1beta1_limit_response->type = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_limit_response);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_limit_response_convertToJSON(io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_limit_response->queuing
    if(io_k8s_api_flowcontrol_v1beta1_limit_response->queuing) { 
    cJSON *queuing_local_JSON = io_k8s_api_flowcontrol_v1beta1_queuing_configuration_convertToJSON(io_k8s_api_flowcontrol_v1beta1_limit_response->queuing);
    if(queuing_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "queuing", queuing_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_limit_response->type
    if (!io_k8s_api_flowcontrol_v1beta1_limit_response->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_flowcontrol_v1beta1_limit_response->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_limit_responseJSON){

    io_k8s_api_flowcontrol_v1beta1_limit_response_t *io_k8s_api_flowcontrol_v1beta1_limit_response_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_limit_response->queuing
    cJSON *queuing = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_limit_responseJSON, "queuing");
    io_k8s_api_flowcontrol_v1beta1_queuing_configuration_t *queuing_local_nonprim = NULL;
    if (queuing) { 
    queuing_local_nonprim = io_k8s_api_flowcontrol_v1beta1_queuing_configuration_parseFromJSON(queuing); //nonprimitive
    }

    // io_k8s_api_flowcontrol_v1beta1_limit_response->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_limit_responseJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_flowcontrol_v1beta1_limit_response_local_var = io_k8s_api_flowcontrol_v1beta1_limit_response_create (
        queuing ? queuing_local_nonprim : NULL,
        strdup(type->valuestring)
        );

    return io_k8s_api_flowcontrol_v1beta1_limit_response_local_var;
end:
    if (queuing_local_nonprim) {
        io_k8s_api_flowcontrol_v1beta1_queuing_configuration_free(queuing_local_nonprim);
        queuing_local_nonprim = NULL;
    }
    return NULL;

}
