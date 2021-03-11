#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method.h"



io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_create(
    char *type
    ) {
    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t));
    if (!io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_local_var->type = type;

    return io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_free(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method->type) {
        free(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method->type);
        io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method->type = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method->type
    if (!io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_methodJSON){

    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_methodJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_local_var = io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_create (
        strdup(type->valuestring)
        );

    return io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_local_var;
end:
    return NULL;

}
