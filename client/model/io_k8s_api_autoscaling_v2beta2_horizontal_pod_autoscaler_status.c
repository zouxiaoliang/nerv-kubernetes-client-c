#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status.h"



io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_create(
    list_t *conditions,
    list_t *current_metrics,
    int current_replicas,
    int desired_replicas,
    char *last_scale_time,
    long observed_generation
    ) {
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t));
    if (!io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var->conditions = conditions;
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var->current_metrics = current_metrics;
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var->current_replicas = current_replicas;
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var->desired_replicas = desired_replicas;
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var->last_scale_time = last_scale_time;
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var->observed_generation = observed_generation;

    return io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var;
}


void io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->conditions) {
            io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->conditions);
        io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->conditions = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_metrics) {
        list_ForEach(listEntry, io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_metrics) {
            io_k8s_api_autoscaling_v2beta2_metric_status_free(listEntry->data);
        }
        list_free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_metrics);
        io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_metrics = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->last_scale_time) {
        free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->last_scale_time);
        io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->last_scale_time = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status);
}

cJSON *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->conditions
    if (!io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->conditions) {
        goto fail;
    }
    
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->conditions) {
    cJSON *itemLocal = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }


    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_metrics
    if(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_metrics) { 
    cJSON *current_metrics = cJSON_AddArrayToObject(item, "currentMetrics");
    if(current_metrics == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *current_metricsListEntry;
    if (io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_metrics) {
    list_ForEach(current_metricsListEntry, io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_metrics) {
    cJSON *itemLocal = io_k8s_api_autoscaling_v2beta2_metric_status_convertToJSON(current_metricsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(current_metrics, itemLocal);
    }
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_replicas
    if (!io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_replicas) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "currentReplicas", io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_replicas) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->desired_replicas
    if (!io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->desired_replicas) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "desiredReplicas", io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->desired_replicas) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->last_scale_time
    if(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->last_scale_time) { 
    if(cJSON_AddStringToObject(item, "lastScaleTime", io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->last_scale_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->observed_generation
    if(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->observed_generation) { 
    if(cJSON_AddNumberToObject(item, "observedGeneration", io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->observed_generation) == NULL) {
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

io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_statusJSON){

    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_statusJSON, "conditions");
    if (!conditions) {
        goto end;
    }

    list_t *conditionsList;
    
    cJSON *conditions_local_nonprimitive;
    if(!cJSON_IsArray(conditions)){
        goto end; //nonprimitive container
    }

    conditionsList = list_create();

    cJSON_ArrayForEach(conditions_local_nonprimitive,conditions )
    {
        if(!cJSON_IsObject(conditions_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_condition_t *conditionsItem = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_metrics
    cJSON *current_metrics = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_statusJSON, "currentMetrics");
    list_t *current_metricsList;
    if (current_metrics) { 
    cJSON *current_metrics_local_nonprimitive;
    if(!cJSON_IsArray(current_metrics)){
        goto end; //nonprimitive container
    }

    current_metricsList = list_create();

    cJSON_ArrayForEach(current_metrics_local_nonprimitive,current_metrics )
    {
        if(!cJSON_IsObject(current_metrics_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_autoscaling_v2beta2_metric_status_t *current_metricsItem = io_k8s_api_autoscaling_v2beta2_metric_status_parseFromJSON(current_metrics_local_nonprimitive);

        list_addElement(current_metricsList, current_metricsItem);
    }
    }

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->current_replicas
    cJSON *current_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_statusJSON, "currentReplicas");
    if (!current_replicas) {
        goto end;
    }

    
    if(!cJSON_IsNumber(current_replicas))
    {
    goto end; //Numeric
    }

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->desired_replicas
    cJSON *desired_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_statusJSON, "desiredReplicas");
    if (!desired_replicas) {
        goto end;
    }

    
    if(!cJSON_IsNumber(desired_replicas))
    {
    goto end; //Numeric
    }

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->last_scale_time
    cJSON *last_scale_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_statusJSON, "lastScaleTime");
    if (last_scale_time) { 
    if(!cJSON_IsString(last_scale_time))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status->observed_generation
    cJSON *observed_generation = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_statusJSON, "observedGeneration");
    if (observed_generation) { 
    if(!cJSON_IsNumber(observed_generation))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_create (
        conditionsList,
        current_metrics ? current_metricsList : NULL,
        current_replicas->valuedouble,
        desired_replicas->valuedouble,
        last_scale_time ? strdup(last_scale_time->valuestring) : NULL,
        observed_generation ? observed_generation->valuedouble : 0
        );

    return io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_local_var;
end:
    return NULL;

}
