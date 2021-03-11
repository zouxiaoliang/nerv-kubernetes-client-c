#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status.h"



io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_create(
    int current_cpu_utilization_percentage,
    int current_replicas,
    int desired_replicas,
    char *last_scale_time,
    long observed_generation
    ) {
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var = malloc(sizeof(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t));
    if (!io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var->current_cpu_utilization_percentage = current_cpu_utilization_percentage;
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var->current_replicas = current_replicas;
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var->desired_replicas = desired_replicas;
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var->last_scale_time = last_scale_time;
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var->observed_generation = observed_generation;

    return io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var;
}


void io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_free(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status) {
    if(NULL == io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->last_scale_time) {
        free(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->last_scale_time);
        io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->last_scale_time = NULL;
    }
    free(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status);
}

cJSON *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_convertToJSON(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->current_cpu_utilization_percentage
    if(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->current_cpu_utilization_percentage) { 
    if(cJSON_AddNumberToObject(item, "currentCPUUtilizationPercentage", io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->current_cpu_utilization_percentage) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->current_replicas
    if (!io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->current_replicas) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "currentReplicas", io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->current_replicas) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->desired_replicas
    if (!io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->desired_replicas) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "desiredReplicas", io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->desired_replicas) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->last_scale_time
    if(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->last_scale_time) { 
    if(cJSON_AddStringToObject(item, "lastScaleTime", io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->last_scale_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->observed_generation
    if(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->observed_generation) { 
    if(cJSON_AddNumberToObject(item, "observedGeneration", io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->observed_generation) == NULL) {
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

io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_statusJSON){

    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var = NULL;

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->current_cpu_utilization_percentage
    cJSON *current_cpu_utilization_percentage = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_statusJSON, "currentCPUUtilizationPercentage");
    if (current_cpu_utilization_percentage) { 
    if(!cJSON_IsNumber(current_cpu_utilization_percentage))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->current_replicas
    cJSON *current_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_statusJSON, "currentReplicas");
    if (!current_replicas) {
        goto end;
    }

    
    if(!cJSON_IsNumber(current_replicas))
    {
    goto end; //Numeric
    }

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->desired_replicas
    cJSON *desired_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_statusJSON, "desiredReplicas");
    if (!desired_replicas) {
        goto end;
    }

    
    if(!cJSON_IsNumber(desired_replicas))
    {
    goto end; //Numeric
    }

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->last_scale_time
    cJSON *last_scale_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_statusJSON, "lastScaleTime");
    if (last_scale_time) { 
    if(!cJSON_IsString(last_scale_time))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status->observed_generation
    cJSON *observed_generation = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_statusJSON, "observedGeneration");
    if (observed_generation) { 
    if(!cJSON_IsNumber(observed_generation))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var = io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_create (
        current_cpu_utilization_percentage ? current_cpu_utilization_percentage->valuedouble : 0,
        current_replicas->valuedouble,
        desired_replicas->valuedouble,
        last_scale_time ? strdup(last_scale_time->valuestring) : NULL,
        observed_generation ? observed_generation->valuedouble : 0
        );

    return io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_local_var;
end:
    return NULL;

}
