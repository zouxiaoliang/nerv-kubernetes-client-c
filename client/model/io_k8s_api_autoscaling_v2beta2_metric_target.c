#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_metric_target.h"



io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target_create(
    int average_utilization,
    char *average_value,
    char *type,
    char *value
    ) {
    io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_metric_target_t));
    if (!io_k8s_api_autoscaling_v2beta2_metric_target_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_metric_target_local_var->average_utilization = average_utilization;
    io_k8s_api_autoscaling_v2beta2_metric_target_local_var->average_value = average_value;
    io_k8s_api_autoscaling_v2beta2_metric_target_local_var->type = type;
    io_k8s_api_autoscaling_v2beta2_metric_target_local_var->value = value;

    return io_k8s_api_autoscaling_v2beta2_metric_target_local_var;
}


void io_k8s_api_autoscaling_v2beta2_metric_target_free(io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_metric_target){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_metric_target->average_value) {
        free(io_k8s_api_autoscaling_v2beta2_metric_target->average_value);
        io_k8s_api_autoscaling_v2beta2_metric_target->average_value = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_metric_target->type) {
        free(io_k8s_api_autoscaling_v2beta2_metric_target->type);
        io_k8s_api_autoscaling_v2beta2_metric_target->type = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_metric_target->value) {
        free(io_k8s_api_autoscaling_v2beta2_metric_target->value);
        io_k8s_api_autoscaling_v2beta2_metric_target->value = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_metric_target);
}

cJSON *io_k8s_api_autoscaling_v2beta2_metric_target_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_metric_target->average_utilization
    if(io_k8s_api_autoscaling_v2beta2_metric_target->average_utilization) { 
    if(cJSON_AddNumberToObject(item, "averageUtilization", io_k8s_api_autoscaling_v2beta2_metric_target->average_utilization) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_metric_target->average_value
    if(io_k8s_api_autoscaling_v2beta2_metric_target->average_value) { 
    if(cJSON_AddStringToObject(item, "averageValue", io_k8s_api_autoscaling_v2beta2_metric_target->average_value) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_metric_target->type
    if (!io_k8s_api_autoscaling_v2beta2_metric_target->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_autoscaling_v2beta2_metric_target->type) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta2_metric_target->value
    if(io_k8s_api_autoscaling_v2beta2_metric_target->value) { 
    if(cJSON_AddStringToObject(item, "value", io_k8s_api_autoscaling_v2beta2_metric_target->value) == NULL) {
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

io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_metric_targetJSON){

    io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_metric_target->average_utilization
    cJSON *average_utilization = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_targetJSON, "averageUtilization");
    if (average_utilization) { 
    if(!cJSON_IsNumber(average_utilization))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_autoscaling_v2beta2_metric_target->average_value
    cJSON *average_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_targetJSON, "averageValue");
    if (average_value) { 
    if(!cJSON_IsString(average_value))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta2_metric_target->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_targetJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta2_metric_target->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_targetJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    io_k8s_api_autoscaling_v2beta2_metric_target_local_var = io_k8s_api_autoscaling_v2beta2_metric_target_create (
        average_utilization ? average_utilization->valuedouble : 0,
        average_value ? strdup(average_value->valuestring) : NULL,
        strdup(type->valuestring),
        value ? strdup(value->valuestring) : NULL
        );

    return io_k8s_api_autoscaling_v2beta2_metric_target_local_var;
end:
    return NULL;

}
