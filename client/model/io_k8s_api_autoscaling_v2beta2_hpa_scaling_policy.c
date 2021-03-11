#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy.h"



io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_create(
    int period_seconds,
    char *type,
    int value
    ) {
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t));
    if (!io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_local_var->period_seconds = period_seconds;
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_local_var->type = type;
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_local_var->value = value;

    return io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_local_var;
}


void io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_free(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->type) {
        free(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->type);
        io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->type = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy);
}

cJSON *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_convertToJSON(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->period_seconds
    if (!io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->period_seconds) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "periodSeconds", io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->period_seconds) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->type
    if (!io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->type) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->value
    if (!io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->value) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "value", io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->value) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policyJSON){

    io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->period_seconds
    cJSON *period_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policyJSON, "periodSeconds");
    if (!period_seconds) {
        goto end;
    }

    
    if(!cJSON_IsNumber(period_seconds))
    {
    goto end; //Numeric
    }

    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policyJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policyJSON, "value");
    if (!value) {
        goto end;
    }

    
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }


    io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_local_var = io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_create (
        period_seconds->valuedouble,
        strdup(type->valuestring),
        value->valuedouble
        );

    return io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_local_var;
end:
    return NULL;

}
