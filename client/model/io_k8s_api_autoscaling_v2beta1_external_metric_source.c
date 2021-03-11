#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta1_external_metric_source.h"



io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source_create(
    char *metric_name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *metric_selector,
    char *target_average_value,
    char *target_value
    ) {
    io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta1_external_metric_source_t));
    if (!io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var->metric_name = metric_name;
    io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var->metric_selector = metric_selector;
    io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var->target_average_value = target_average_value;
    io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var->target_value = target_value;

    return io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var;
}


void io_k8s_api_autoscaling_v2beta1_external_metric_source_free(io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source) {
    if(NULL == io_k8s_api_autoscaling_v2beta1_external_metric_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_name) {
        free(io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_name);
        io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_name = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_selector);
        io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_selector = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_external_metric_source->target_average_value) {
        free(io_k8s_api_autoscaling_v2beta1_external_metric_source->target_average_value);
        io_k8s_api_autoscaling_v2beta1_external_metric_source->target_average_value = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_external_metric_source->target_value) {
        free(io_k8s_api_autoscaling_v2beta1_external_metric_source->target_value);
        io_k8s_api_autoscaling_v2beta1_external_metric_source->target_value = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta1_external_metric_source);
}

cJSON *io_k8s_api_autoscaling_v2beta1_external_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_name
    if (!io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "metricName", io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_selector
    if(io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_selector) { 
    cJSON *metric_selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_selector);
    if(metric_selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metricSelector", metric_selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_external_metric_source->target_average_value
    if(io_k8s_api_autoscaling_v2beta1_external_metric_source->target_average_value) { 
    if(cJSON_AddStringToObject(item, "targetAverageValue", io_k8s_api_autoscaling_v2beta1_external_metric_source->target_average_value) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_external_metric_source->target_value
    if(io_k8s_api_autoscaling_v2beta1_external_metric_source->target_value) { 
    if(cJSON_AddStringToObject(item, "targetValue", io_k8s_api_autoscaling_v2beta1_external_metric_source->target_value) == NULL) {
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

io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_external_metric_sourceJSON){

    io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_name
    cJSON *metric_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_external_metric_sourceJSON, "metricName");
    if (!metric_name) {
        goto end;
    }

    
    if(!cJSON_IsString(metric_name))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_external_metric_source->metric_selector
    cJSON *metric_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_external_metric_sourceJSON, "metricSelector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *metric_selector_local_nonprim = NULL;
    if (metric_selector) { 
    metric_selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(metric_selector); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta1_external_metric_source->target_average_value
    cJSON *target_average_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_external_metric_sourceJSON, "targetAverageValue");
    if (target_average_value) { 
    if(!cJSON_IsString(target_average_value))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta1_external_metric_source->target_value
    cJSON *target_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_external_metric_sourceJSON, "targetValue");
    if (target_value) { 
    if(!cJSON_IsString(target_value))
    {
    goto end; //String
    }
    }


    io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var = io_k8s_api_autoscaling_v2beta1_external_metric_source_create (
        strdup(metric_name->valuestring),
        metric_selector ? metric_selector_local_nonprim : NULL,
        target_average_value ? strdup(target_average_value->valuestring) : NULL,
        target_value ? strdup(target_value->valuestring) : NULL
        );

    return io_k8s_api_autoscaling_v2beta1_external_metric_source_local_var;
end:
    if (metric_selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(metric_selector_local_nonprim);
        metric_selector_local_nonprim = NULL;
    }
    return NULL;

}
