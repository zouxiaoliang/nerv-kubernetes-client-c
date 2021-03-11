#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_run_as_group_strategy_options.h"



io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t *io_k8s_api_policy_v1beta1_run_as_group_strategy_options_create(
    list_t *ranges,
    char *rule
    ) {
    io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t *io_k8s_api_policy_v1beta1_run_as_group_strategy_options_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t));
    if (!io_k8s_api_policy_v1beta1_run_as_group_strategy_options_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_run_as_group_strategy_options_local_var->ranges = ranges;
    io_k8s_api_policy_v1beta1_run_as_group_strategy_options_local_var->rule = rule;

    return io_k8s_api_policy_v1beta1_run_as_group_strategy_options_local_var;
}


void io_k8s_api_policy_v1beta1_run_as_group_strategy_options_free(io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t *io_k8s_api_policy_v1beta1_run_as_group_strategy_options) {
    if(NULL == io_k8s_api_policy_v1beta1_run_as_group_strategy_options){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_policy_v1beta1_run_as_group_strategy_options->ranges) {
        list_ForEach(listEntry, io_k8s_api_policy_v1beta1_run_as_group_strategy_options->ranges) {
            io_k8s_api_policy_v1beta1_id_range_free(listEntry->data);
        }
        list_free(io_k8s_api_policy_v1beta1_run_as_group_strategy_options->ranges);
        io_k8s_api_policy_v1beta1_run_as_group_strategy_options->ranges = NULL;
    }
    if (io_k8s_api_policy_v1beta1_run_as_group_strategy_options->rule) {
        free(io_k8s_api_policy_v1beta1_run_as_group_strategy_options->rule);
        io_k8s_api_policy_v1beta1_run_as_group_strategy_options->rule = NULL;
    }
    free(io_k8s_api_policy_v1beta1_run_as_group_strategy_options);
}

cJSON *io_k8s_api_policy_v1beta1_run_as_group_strategy_options_convertToJSON(io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t *io_k8s_api_policy_v1beta1_run_as_group_strategy_options) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_run_as_group_strategy_options->ranges
    if(io_k8s_api_policy_v1beta1_run_as_group_strategy_options->ranges) { 
    cJSON *ranges = cJSON_AddArrayToObject(item, "ranges");
    if(ranges == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rangesListEntry;
    if (io_k8s_api_policy_v1beta1_run_as_group_strategy_options->ranges) {
    list_ForEach(rangesListEntry, io_k8s_api_policy_v1beta1_run_as_group_strategy_options->ranges) {
    cJSON *itemLocal = io_k8s_api_policy_v1beta1_id_range_convertToJSON(rangesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ranges, itemLocal);
    }
    }
     } 


    // io_k8s_api_policy_v1beta1_run_as_group_strategy_options->rule
    if (!io_k8s_api_policy_v1beta1_run_as_group_strategy_options->rule) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "rule", io_k8s_api_policy_v1beta1_run_as_group_strategy_options->rule) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t *io_k8s_api_policy_v1beta1_run_as_group_strategy_options_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_run_as_group_strategy_optionsJSON){

    io_k8s_api_policy_v1beta1_run_as_group_strategy_options_t *io_k8s_api_policy_v1beta1_run_as_group_strategy_options_local_var = NULL;

    // io_k8s_api_policy_v1beta1_run_as_group_strategy_options->ranges
    cJSON *ranges = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_run_as_group_strategy_optionsJSON, "ranges");
    list_t *rangesList;
    if (ranges) { 
    cJSON *ranges_local_nonprimitive;
    if(!cJSON_IsArray(ranges)){
        goto end; //nonprimitive container
    }

    rangesList = list_create();

    cJSON_ArrayForEach(ranges_local_nonprimitive,ranges )
    {
        if(!cJSON_IsObject(ranges_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_policy_v1beta1_id_range_t *rangesItem = io_k8s_api_policy_v1beta1_id_range_parseFromJSON(ranges_local_nonprimitive);

        list_addElement(rangesList, rangesItem);
    }
    }

    // io_k8s_api_policy_v1beta1_run_as_group_strategy_options->rule
    cJSON *rule = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_run_as_group_strategy_optionsJSON, "rule");
    if (!rule) {
        goto end;
    }

    
    if(!cJSON_IsString(rule))
    {
    goto end; //String
    }


    io_k8s_api_policy_v1beta1_run_as_group_strategy_options_local_var = io_k8s_api_policy_v1beta1_run_as_group_strategy_options_create (
        ranges ? rangesList : NULL,
        strdup(rule->valuestring)
        );

    return io_k8s_api_policy_v1beta1_run_as_group_strategy_options_local_var;
end:
    return NULL;

}
