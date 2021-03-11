#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec.h"



io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_create(
    io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *limited,
    char *type
    ) {
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_t));
    if (!io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_local_var->limited = limited;
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_local_var->type = type;

    return io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->limited) {
        io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->limited);
        io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->limited = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->type) {
        free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->type);
        io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->type = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_convertToJSON(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->limited
    if(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->limited) { 
    cJSON *limited_local_JSON = io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_convertToJSON(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->limited);
    if(limited_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "limited", limited_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->type
    if (!io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_specJSON){

    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_t *io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->limited
    cJSON *limited = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_specJSON, "limited");
    io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *limited_local_nonprim = NULL;
    if (limited) { 
    limited_local_nonprim = io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_parseFromJSON(limited); //nonprimitive
    }

    // io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_specJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_local_var = io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_create (
        limited ? limited_local_nonprim : NULL,
        strdup(type->valuestring)
        );

    return io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_spec_local_var;
end:
    if (limited_local_nonprim) {
        io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_free(limited_local_nonprim);
        limited_local_nonprim = NULL;
    }
    return NULL;

}
