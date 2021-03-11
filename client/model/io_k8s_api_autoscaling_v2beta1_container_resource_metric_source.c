#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta1_container_resource_metric_source.h"



io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_create(
    char *container,
    char *name,
    int target_average_utilization,
    char *target_average_value
    ) {
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_t));
    if (!io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var->container = container;
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var->name = name;
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var->target_average_utilization = target_average_utilization;
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var->target_average_value = target_average_value;

    return io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var;
}


void io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_source) {
    if(NULL == io_k8s_api_autoscaling_v2beta1_container_resource_metric_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->container) {
        free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->container);
        io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->container = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->name) {
        free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->name);
        io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->name = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_value) {
        free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_value);
        io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_value = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta1_container_resource_metric_source);
}

cJSON *io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->container
    if (!io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->container) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "container", io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->container) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->name
    if (!io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_utilization
    if(io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_utilization) { 
    if(cJSON_AddNumberToObject(item, "targetAverageUtilization", io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_utilization) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_value
    if(io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_value) { 
    if(cJSON_AddStringToObject(item, "targetAverageValue", io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_value) == NULL) {
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

io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_container_resource_metric_sourceJSON){

    io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->container
    cJSON *container = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_container_resource_metric_sourceJSON, "container");
    if (!container) {
        goto end;
    }

    
    if(!cJSON_IsString(container))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_container_resource_metric_sourceJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_utilization
    cJSON *target_average_utilization = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_container_resource_metric_sourceJSON, "targetAverageUtilization");
    if (target_average_utilization) { 
    if(!cJSON_IsNumber(target_average_utilization))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_autoscaling_v2beta1_container_resource_metric_source->target_average_value
    cJSON *target_average_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_container_resource_metric_sourceJSON, "targetAverageValue");
    if (target_average_value) { 
    if(!cJSON_IsString(target_average_value))
    {
    goto end; //String
    }
    }


    io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var = io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_create (
        strdup(container->valuestring),
        strdup(name->valuestring),
        target_average_utilization ? target_average_utilization->valuedouble : 0,
        target_average_value ? strdup(target_average_value->valuestring) : NULL
        );

    return io_k8s_api_autoscaling_v2beta1_container_resource_metric_source_local_var;
end:
    return NULL;

}
