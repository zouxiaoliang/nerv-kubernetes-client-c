#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_env_var.h"



io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var_create(
    char *name,
    char *value,
    io_k8s_api_core_v1_env_var_source_t *value_from
    ) {
    io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var_local_var = malloc(sizeof(io_k8s_api_core_v1_env_var_t));
    if (!io_k8s_api_core_v1_env_var_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_env_var_local_var->name = name;
    io_k8s_api_core_v1_env_var_local_var->value = value;
    io_k8s_api_core_v1_env_var_local_var->value_from = value_from;

    return io_k8s_api_core_v1_env_var_local_var;
}


void io_k8s_api_core_v1_env_var_free(io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var) {
    if(NULL == io_k8s_api_core_v1_env_var){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_env_var->name) {
        free(io_k8s_api_core_v1_env_var->name);
        io_k8s_api_core_v1_env_var->name = NULL;
    }
    if (io_k8s_api_core_v1_env_var->value) {
        free(io_k8s_api_core_v1_env_var->value);
        io_k8s_api_core_v1_env_var->value = NULL;
    }
    if (io_k8s_api_core_v1_env_var->value_from) {
        io_k8s_api_core_v1_env_var_source_free(io_k8s_api_core_v1_env_var->value_from);
        io_k8s_api_core_v1_env_var->value_from = NULL;
    }
    free(io_k8s_api_core_v1_env_var);
}

cJSON *io_k8s_api_core_v1_env_var_convertToJSON(io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_env_var->name
    if (!io_k8s_api_core_v1_env_var->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_env_var->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_env_var->value
    if(io_k8s_api_core_v1_env_var->value) { 
    if(cJSON_AddStringToObject(item, "value", io_k8s_api_core_v1_env_var->value) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_env_var->value_from
    if(io_k8s_api_core_v1_env_var->value_from) { 
    cJSON *value_from_local_JSON = io_k8s_api_core_v1_env_var_source_convertToJSON(io_k8s_api_core_v1_env_var->value_from);
    if(value_from_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "valueFrom", value_from_local_JSON);
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

io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var_parseFromJSON(cJSON *io_k8s_api_core_v1_env_varJSON){

    io_k8s_api_core_v1_env_var_t *io_k8s_api_core_v1_env_var_local_var = NULL;

    // io_k8s_api_core_v1_env_var->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_varJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_env_var->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_varJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_env_var->value_from
    cJSON *value_from = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_varJSON, "valueFrom");
    io_k8s_api_core_v1_env_var_source_t *value_from_local_nonprim = NULL;
    if (value_from) { 
    value_from_local_nonprim = io_k8s_api_core_v1_env_var_source_parseFromJSON(value_from); //nonprimitive
    }


    io_k8s_api_core_v1_env_var_local_var = io_k8s_api_core_v1_env_var_create (
        strdup(name->valuestring),
        value ? strdup(value->valuestring) : NULL,
        value_from ? value_from_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_env_var_local_var;
end:
    if (value_from_local_nonprim) {
        io_k8s_api_core_v1_env_var_source_free(value_from_local_nonprim);
        value_from_local_nonprim = NULL;
    }
    return NULL;

}
