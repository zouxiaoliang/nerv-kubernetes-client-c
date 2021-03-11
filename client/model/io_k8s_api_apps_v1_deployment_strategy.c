#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apps_v1_deployment_strategy.h"



io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy_create(
    io_k8s_api_apps_v1_rolling_update_deployment_t *rolling_update,
    char *type
    ) {
    io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy_local_var = malloc(sizeof(io_k8s_api_apps_v1_deployment_strategy_t));
    if (!io_k8s_api_apps_v1_deployment_strategy_local_var) {
        return NULL;
    }
    io_k8s_api_apps_v1_deployment_strategy_local_var->rolling_update = rolling_update;
    io_k8s_api_apps_v1_deployment_strategy_local_var->type = type;

    return io_k8s_api_apps_v1_deployment_strategy_local_var;
}


void io_k8s_api_apps_v1_deployment_strategy_free(io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy) {
    if(NULL == io_k8s_api_apps_v1_deployment_strategy){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apps_v1_deployment_strategy->rolling_update) {
        io_k8s_api_apps_v1_rolling_update_deployment_free(io_k8s_api_apps_v1_deployment_strategy->rolling_update);
        io_k8s_api_apps_v1_deployment_strategy->rolling_update = NULL;
    }
    if (io_k8s_api_apps_v1_deployment_strategy->type) {
        free(io_k8s_api_apps_v1_deployment_strategy->type);
        io_k8s_api_apps_v1_deployment_strategy->type = NULL;
    }
    free(io_k8s_api_apps_v1_deployment_strategy);
}

cJSON *io_k8s_api_apps_v1_deployment_strategy_convertToJSON(io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apps_v1_deployment_strategy->rolling_update
    if(io_k8s_api_apps_v1_deployment_strategy->rolling_update) { 
    cJSON *rolling_update_local_JSON = io_k8s_api_apps_v1_rolling_update_deployment_convertToJSON(io_k8s_api_apps_v1_deployment_strategy->rolling_update);
    if(rolling_update_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rollingUpdate", rolling_update_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_apps_v1_deployment_strategy->type
    if(io_k8s_api_apps_v1_deployment_strategy->type) { 
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_apps_v1_deployment_strategy->type) == NULL) {
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

io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy_parseFromJSON(cJSON *io_k8s_api_apps_v1_deployment_strategyJSON){

    io_k8s_api_apps_v1_deployment_strategy_t *io_k8s_api_apps_v1_deployment_strategy_local_var = NULL;

    // io_k8s_api_apps_v1_deployment_strategy->rolling_update
    cJSON *rolling_update = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_strategyJSON, "rollingUpdate");
    io_k8s_api_apps_v1_rolling_update_deployment_t *rolling_update_local_nonprim = NULL;
    if (rolling_update) { 
    rolling_update_local_nonprim = io_k8s_api_apps_v1_rolling_update_deployment_parseFromJSON(rolling_update); //nonprimitive
    }

    // io_k8s_api_apps_v1_deployment_strategy->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_strategyJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    io_k8s_api_apps_v1_deployment_strategy_local_var = io_k8s_api_apps_v1_deployment_strategy_create (
        rolling_update ? rolling_update_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return io_k8s_api_apps_v1_deployment_strategy_local_var;
end:
    if (rolling_update_local_nonprim) {
        io_k8s_api_apps_v1_rolling_update_deployment_free(rolling_update_local_nonprim);
        rolling_update_local_nonprim = NULL;
    }
    return NULL;

}
