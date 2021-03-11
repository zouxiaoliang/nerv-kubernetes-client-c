#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference.h"



io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_create(
    char *name
    ) {
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t));
    if (!io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_local_var->name = name;

    return io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference->name) {
        free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference->name);
        io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference->name = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_convertToJSON(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference->name
    if (!io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_referenceJSON){

    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_referenceJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_local_var = io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_create (
        strdup(name->valuestring)
        );

    return io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_local_var;
end:
    return NULL;

}
