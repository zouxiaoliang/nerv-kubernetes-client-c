#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_metric_value_status.h"



io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status_create(
    int average_utilization,
    char *average_value,
    char *value
    ) {
    io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_metric_value_status_t));
    if (!io_k8s_api_autoscaling_v2beta2_metric_value_status_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_metric_value_status_local_var->average_utilization = average_utilization;
    io_k8s_api_autoscaling_v2beta2_metric_value_status_local_var->average_value = average_value;
    io_k8s_api_autoscaling_v2beta2_metric_value_status_local_var->value = value;

    return io_k8s_api_autoscaling_v2beta2_metric_value_status_local_var;
}


void io_k8s_api_autoscaling_v2beta2_metric_value_status_free(io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_metric_value_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_metric_value_status->average_value) {
        free(io_k8s_api_autoscaling_v2beta2_metric_value_status->average_value);
        io_k8s_api_autoscaling_v2beta2_metric_value_status->average_value = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_metric_value_status->value) {
        free(io_k8s_api_autoscaling_v2beta2_metric_value_status->value);
        io_k8s_api_autoscaling_v2beta2_metric_value_status->value = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_metric_value_status);
}

cJSON *io_k8s_api_autoscaling_v2beta2_metric_value_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_metric_value_status->average_utilization
    if(io_k8s_api_autoscaling_v2beta2_metric_value_status->average_utilization) { 
    if(cJSON_AddNumberToObject(item, "averageUtilization", io_k8s_api_autoscaling_v2beta2_metric_value_status->average_utilization) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_metric_value_status->average_value
    if(io_k8s_api_autoscaling_v2beta2_metric_value_status->average_value) { 
    if(cJSON_AddStringToObject(item, "averageValue", io_k8s_api_autoscaling_v2beta2_metric_value_status->average_value) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_metric_value_status->value
    if(io_k8s_api_autoscaling_v2beta2_metric_value_status->value) { 
    if(cJSON_AddStringToObject(item, "value", io_k8s_api_autoscaling_v2beta2_metric_value_status->value) == NULL) {
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

io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_metric_value_statusJSON){

    io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_metric_value_status->average_utilization
    cJSON *average_utilization = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_value_statusJSON, "averageUtilization");
    if (average_utilization) { 
    if(!cJSON_IsNumber(average_utilization))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_autoscaling_v2beta2_metric_value_status->average_value
    cJSON *average_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_value_statusJSON, "averageValue");
    if (average_value) { 
    if(!cJSON_IsString(average_value))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta2_metric_value_status->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_value_statusJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    io_k8s_api_autoscaling_v2beta2_metric_value_status_local_var = io_k8s_api_autoscaling_v2beta2_metric_value_status_create (
        average_utilization ? average_utilization->valuedouble : 0,
        average_value ? strdup(average_value->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL
        );

    return io_k8s_api_autoscaling_v2beta2_metric_value_status_local_var;
end:
    return NULL;

}
