#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta1_container_resource_metric_status.h"



io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_create(
    char *container,
    int current_average_utilization,
    char *current_average_value,
    char *name
    ) {
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_t));
    if (!io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var->container = container;
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var->current_average_utilization = current_average_utilization;
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var->current_average_value = current_average_value;
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var->name = name;

    return io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var;
}


void io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_status) {
    if(NULL == io_k8s_api_autoscaling_v2beta1_container_resource_metric_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->container) {
        free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->container);
        io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->container = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_value) {
        free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_value);
        io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_value = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->name) {
        free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->name);
        io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->name = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_status);
}

cJSON *io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_convertToJSON(io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->container
    if (!io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->container) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "container", io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->container) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_utilization
    if(io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_utilization) { 
    if(cJSON_AddNumberToObject(item, "currentAverageUtilization", io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_utilization) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_value
    if (!io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_value) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "currentAverageValue", io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_value) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->name
    if (!io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_container_resource_metric_statusJSON){

    io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->container
    cJSON *container = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_container_resource_metric_statusJSON, "container");
    if (!container) {
        goto end;
    }

    
    if(!cJSON_IsString(container))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_utilization
    cJSON *current_average_utilization = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_container_resource_metric_statusJSON, "currentAverageUtilization");
    if (current_average_utilization) { 
    if(!cJSON_IsNumber(current_average_utilization))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->current_average_value
    cJSON *current_average_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_container_resource_metric_statusJSON, "currentAverageValue");
    if (!current_average_value) {
        goto end;
    }

    
    if(!cJSON_IsString(current_average_value))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_status->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_container_resource_metric_statusJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var = io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_create (
        strdup(container->valuestring),
        current_average_utilization ? current_average_utilization->valuedouble : 0,
        strdup(current_average_value->valuestring),
        strdup(name->valuestring)
        );

    return io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_local_var;
end:
    return NULL;

}
