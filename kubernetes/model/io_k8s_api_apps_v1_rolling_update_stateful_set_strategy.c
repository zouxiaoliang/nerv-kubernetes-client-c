#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apps_v1_rolling_update_stateful_set_strategy.h"



io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_create(
    int partition
    ) {
    io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_local_var = malloc(sizeof(io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t));
    if (!io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_local_var) {
        return NULL;
    }
    io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_local_var->partition = partition;

    return io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_local_var;
}


void io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_free(io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy) {
    if(NULL == io_k8s_api_apps_v1_rolling_update_stateful_set_strategy){
        return ;
    }
    listEntry_t *listEntry;
    free(io_k8s_api_apps_v1_rolling_update_stateful_set_strategy);
}

cJSON *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_convertToJSON(io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apps_v1_rolling_update_stateful_set_strategy->partition
    if(io_k8s_api_apps_v1_rolling_update_stateful_set_strategy->partition) { 
    if(cJSON_AddNumberToObject(item, "partition", io_k8s_api_apps_v1_rolling_update_stateful_set_strategy->partition) == NULL) {
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

io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_parseFromJSON(cJSON *io_k8s_api_apps_v1_rolling_update_stateful_set_strategyJSON){

    io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_t *io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_local_var = NULL;

    // io_k8s_api_apps_v1_rolling_update_stateful_set_strategy->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_rolling_update_stateful_set_strategyJSON, "partition");
    if (partition) { 
    if(!cJSON_IsNumber(partition))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_local_var = io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_create (
        partition ? partition->valuedouble : 0
        );

    return io_k8s_api_apps_v1_rolling_update_stateful_set_strategy_local_var;
end:
    return NULL;

}
