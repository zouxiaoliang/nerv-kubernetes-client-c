#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules.h"



io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_create(
    list_t *policies,
    char *select_policy,
    int stabilization_window_seconds
    ) {
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t));
    if (!io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_local_var->policies = policies;
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_local_var->select_policy = select_policy;
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_local_var->stabilization_window_seconds = stabilization_window_seconds;

    return io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_local_var;
}


void io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_free(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->policies) {
        list_ForEach(listEntry, io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->policies) {
            io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_free(listEntry->data);
        }
        list_free(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->policies);
        io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->policies = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->select_policy) {
        free(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->select_policy);
        io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->select_policy = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules);
}

cJSON *io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_convertToJSON(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->policies
    if(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->policies) { 
    cJSON *policies = cJSON_AddArrayToObject(item, "policies");
    if(policies == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *policiesListEntry;
    if (io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->policies) {
    list_ForEach(policiesListEntry, io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->policies) {
    cJSON *itemLocal = io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_convertToJSON(policiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(policies, itemLocal);
    }
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->select_policy
    if(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->select_policy) { 
    if(cJSON_AddStringToObject(item, "selectPolicy", io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->select_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->stabilization_window_seconds
    if(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->stabilization_window_seconds) { 
    if(cJSON_AddNumberToObject(item, "stabilizationWindowSeconds", io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->stabilization_window_seconds) == NULL) {
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

io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_hpa_scaling_rulesJSON){

    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->policies
    cJSON *policies = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rulesJSON, "policies");
    list_t *policiesList;
    if (policies) { 
    cJSON *policies_local_nonprimitive;
    if(!cJSON_IsArray(policies)){
        goto end; //nonprimitive container
    }

    policiesList = list_create();

    cJSON_ArrayForEach(policies_local_nonprimitive,policies )
    {
        if(!cJSON_IsObject(policies_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *policiesItem = io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_parseFromJSON(policies_local_nonprimitive);

        list_addElement(policiesList, policiesItem);
    }
    }

    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->select_policy
    cJSON *select_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rulesJSON, "selectPolicy");
    if (select_policy) { 
    if(!cJSON_IsString(select_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules->stabilization_window_seconds
    cJSON *stabilization_window_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_hpa_scaling_rulesJSON, "stabilizationWindowSeconds");
    if (stabilization_window_seconds) { 
    if(!cJSON_IsNumber(stabilization_window_seconds))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_local_var = io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_create (
        policies ? policiesList : NULL,
        select_policy ? strdup(select_policy->valuestring) : NULL,
        stabilization_window_seconds ? stabilization_window_seconds->valuedouble : 0
        );

    return io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_local_var;
end:
    return NULL;

}
