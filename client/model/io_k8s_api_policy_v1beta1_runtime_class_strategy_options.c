#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_runtime_class_strategy_options.h"



io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options_create(
    list_t *allowed_runtime_class_names,
    char *default_runtime_class_name
    ) {
    io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t));
    if (!io_k8s_api_policy_v1beta1_runtime_class_strategy_options_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_runtime_class_strategy_options_local_var->allowed_runtime_class_names = allowed_runtime_class_names;
    io_k8s_api_policy_v1beta1_runtime_class_strategy_options_local_var->default_runtime_class_name = default_runtime_class_name;

    return io_k8s_api_policy_v1beta1_runtime_class_strategy_options_local_var;
}


void io_k8s_api_policy_v1beta1_runtime_class_strategy_options_free(io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options) {
    if(NULL == io_k8s_api_policy_v1beta1_runtime_class_strategy_options){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_policy_v1beta1_runtime_class_strategy_options->allowed_runtime_class_names) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_runtime_class_strategy_options->allowed_runtime_class_names) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_runtime_class_strategy_options->allowed_runtime_class_names);
        io_k8s_api_policy_v1beta1_runtime_class_strategy_options->allowed_runtime_class_names = NULL;
    }
    if (io_k8s_api_policy_v1beta1_runtime_class_strategy_options->default_runtime_class_name) {
        free(io_k8s_api_policy_v1beta1_runtime_class_strategy_options->default_runtime_class_name);
        io_k8s_api_policy_v1beta1_runtime_class_strategy_options->default_runtime_class_name = NULL;
    }
    free(io_k8s_api_policy_v1beta1_runtime_class_strategy_options);
}

cJSON *io_k8s_api_policy_v1beta1_runtime_class_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_runtime_class_strategy_options->allowed_runtime_class_names
    if (!io_k8s_api_policy_v1beta1_runtime_class_strategy_options->allowed_runtime_class_names) {
        goto fail;
    }
    
    cJSON *allowed_runtime_class_names = cJSON_AddArrayToObject(item, "allowedRuntimeClassNames");
    if(allowed_runtime_class_names == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *allowed_runtime_class_namesListEntry;
    list_ForEach(allowed_runtime_class_namesListEntry, io_k8s_api_policy_v1beta1_runtime_class_strategy_options->allowed_runtime_class_names) {
    if(cJSON_AddStringToObject(allowed_runtime_class_names, "", (char*)allowed_runtime_class_namesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_api_policy_v1beta1_runtime_class_strategy_options->default_runtime_class_name
    if(io_k8s_api_policy_v1beta1_runtime_class_strategy_options->default_runtime_class_name) { 
    if(cJSON_AddStringToObject(item, "defaultRuntimeClassName", io_k8s_api_policy_v1beta1_runtime_class_strategy_options->default_runtime_class_name) == NULL) {
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

io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_runtime_class_strategy_optionsJSON){

    io_k8s_api_policy_v1beta1_runtime_class_strategy_options_t *io_k8s_api_policy_v1beta1_runtime_class_strategy_options_local_var = NULL;

    // io_k8s_api_policy_v1beta1_runtime_class_strategy_options->allowed_runtime_class_names
    cJSON *allowed_runtime_class_names = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_runtime_class_strategy_optionsJSON, "allowedRuntimeClassNames");
    if (!allowed_runtime_class_names) {
        goto end;
    }

    list_t *allowed_runtime_class_namesList;
    
    cJSON *allowed_runtime_class_names_local;
    if(!cJSON_IsArray(allowed_runtime_class_names)) {
        goto end;//primitive container
    }
    allowed_runtime_class_namesList = list_create();

    cJSON_ArrayForEach(allowed_runtime_class_names_local, allowed_runtime_class_names)
    {
        if(!cJSON_IsString(allowed_runtime_class_names_local))
        {
            goto end;
        }
        list_addElement(allowed_runtime_class_namesList , strdup(allowed_runtime_class_names_local->valuestring));
    }

    // io_k8s_api_policy_v1beta1_runtime_class_strategy_options->default_runtime_class_name
    cJSON *default_runtime_class_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_runtime_class_strategy_optionsJSON, "defaultRuntimeClassName");
    if (default_runtime_class_name) { 
    if(!cJSON_IsString(default_runtime_class_name))
    {
    goto end; //String
    }
    }


    io_k8s_api_policy_v1beta1_runtime_class_strategy_options_local_var = io_k8s_api_policy_v1beta1_runtime_class_strategy_options_create (
        allowed_runtime_class_namesList,
        default_runtime_class_name ? strdup(default_runtime_class_name->valuestring) : NULL
        );

    return io_k8s_api_policy_v1beta1_runtime_class_strategy_options_local_var;
end:
    return NULL;

}
