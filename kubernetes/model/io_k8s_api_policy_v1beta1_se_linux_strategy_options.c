#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_se_linux_strategy_options.h"



io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options_create(
    char *rule,
    io_k8s_api_core_v1_se_linux_options_t *se_linux_options
    ) {
    io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_se_linux_strategy_options_t));
    if (!io_k8s_api_policy_v1beta1_se_linux_strategy_options_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_se_linux_strategy_options_local_var->rule = rule;
    io_k8s_api_policy_v1beta1_se_linux_strategy_options_local_var->se_linux_options = se_linux_options;

    return io_k8s_api_policy_v1beta1_se_linux_strategy_options_local_var;
}


void io_k8s_api_policy_v1beta1_se_linux_strategy_options_free(io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options) {
    if(NULL == io_k8s_api_policy_v1beta1_se_linux_strategy_options){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_policy_v1beta1_se_linux_strategy_options->rule) {
        free(io_k8s_api_policy_v1beta1_se_linux_strategy_options->rule);
        io_k8s_api_policy_v1beta1_se_linux_strategy_options->rule = NULL;
    }
    if (io_k8s_api_policy_v1beta1_se_linux_strategy_options->se_linux_options) {
        io_k8s_api_core_v1_se_linux_options_free(io_k8s_api_policy_v1beta1_se_linux_strategy_options->se_linux_options);
        io_k8s_api_policy_v1beta1_se_linux_strategy_options->se_linux_options = NULL;
    }
    free(io_k8s_api_policy_v1beta1_se_linux_strategy_options);
}

cJSON *io_k8s_api_policy_v1beta1_se_linux_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_se_linux_strategy_options->rule
    if (!io_k8s_api_policy_v1beta1_se_linux_strategy_options->rule) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "rule", io_k8s_api_policy_v1beta1_se_linux_strategy_options->rule) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_policy_v1beta1_se_linux_strategy_options->se_linux_options
    if(io_k8s_api_policy_v1beta1_se_linux_strategy_options->se_linux_options) { 
    cJSON *se_linux_options_local_JSON = io_k8s_api_core_v1_se_linux_options_convertToJSON(io_k8s_api_policy_v1beta1_se_linux_strategy_options->se_linux_options);
    if(se_linux_options_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "seLinuxOptions", se_linux_options_local_JSON);
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

io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_se_linux_strategy_optionsJSON){

    io_k8s_api_policy_v1beta1_se_linux_strategy_options_t *io_k8s_api_policy_v1beta1_se_linux_strategy_options_local_var = NULL;

    // io_k8s_api_policy_v1beta1_se_linux_strategy_options->rule
    cJSON *rule = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_se_linux_strategy_optionsJSON, "rule");
    if (!rule) {
        goto end;
    }

    
    if(!cJSON_IsString(rule))
    {
    goto end; //String
    }

    // io_k8s_api_policy_v1beta1_se_linux_strategy_options->se_linux_options
    cJSON *se_linux_options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_se_linux_strategy_optionsJSON, "seLinuxOptions");
    io_k8s_api_core_v1_se_linux_options_t *se_linux_options_local_nonprim = NULL;
    if (se_linux_options) { 
    se_linux_options_local_nonprim = io_k8s_api_core_v1_se_linux_options_parseFromJSON(se_linux_options); //nonprimitive
    }


    io_k8s_api_policy_v1beta1_se_linux_strategy_options_local_var = io_k8s_api_policy_v1beta1_se_linux_strategy_options_create (
        strdup(rule->valuestring),
        se_linux_options ? se_linux_options_local_nonprim : NULL
        );

    return io_k8s_api_policy_v1beta1_se_linux_strategy_options_local_var;
end:
    if (se_linux_options_local_nonprim) {
        io_k8s_api_core_v1_se_linux_options_free(se_linux_options_local_nonprim);
        se_linux_options_local_nonprim = NULL;
    }
    return NULL;

}
