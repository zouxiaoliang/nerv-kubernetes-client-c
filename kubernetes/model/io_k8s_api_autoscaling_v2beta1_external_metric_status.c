#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta1_external_metric_status.h"



io_k8s_api_autoscaling_v2beta1_external_metric_status_t *io_k8s_api_autoscaling_v2beta1_external_metric_status_create(
    char *current_average_value,
    char *current_value,
    char *metric_name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *metric_selector
    ) {
    io_k8s_api_autoscaling_v2beta1_external_metric_status_t *io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta1_external_metric_status_t));
    if (!io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var->current_average_value = current_average_value;
    io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var->current_value = current_value;
    io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var->metric_name = metric_name;
    io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var->metric_selector = metric_selector;

    return io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var;
}


void io_k8s_api_autoscaling_v2beta1_external_metric_status_free(io_k8s_api_autoscaling_v2beta1_external_metric_status_t *io_k8s_api_autoscaling_v2beta1_external_metric_status) {
    if(NULL == io_k8s_api_autoscaling_v2beta1_external_metric_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta1_external_metric_status->current_average_value) {
        free(io_k8s_api_autoscaling_v2beta1_external_metric_status->current_average_value);
        io_k8s_api_autoscaling_v2beta1_external_metric_status->current_average_value = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_external_metric_status->current_value) {
        free(io_k8s_api_autoscaling_v2beta1_external_metric_status->current_value);
        io_k8s_api_autoscaling_v2beta1_external_metric_status->current_value = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_name) {
        free(io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_name);
        io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_name = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_selector);
        io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_selector = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta1_external_metric_status);
}

cJSON *io_k8s_api_autoscaling_v2beta1_external_metric_status_convertToJSON(io_k8s_api_autoscaling_v2beta1_external_metric_status_t *io_k8s_api_autoscaling_v2beta1_external_metric_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta1_external_metric_status->current_average_value
    if(io_k8s_api_autoscaling_v2beta1_external_metric_status->current_average_value) { 
    if(cJSON_AddStringToObject(item, "currentAverageValue", io_k8s_api_autoscaling_v2beta1_external_metric_status->current_average_value) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_external_metric_status->current_value
    if (!io_k8s_api_autoscaling_v2beta1_external_metric_status->current_value) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "currentValue", io_k8s_api_autoscaling_v2beta1_external_metric_status->current_value) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_name
    if (!io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "metricName", io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_selector
    if(io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_selector) { 
    cJSON *metric_selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_selector);
    if(metric_selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metricSelector", metric_selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_autoscaling_v2beta1_external_metric_status_t *io_k8s_api_autoscaling_v2beta1_external_metric_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_external_metric_statusJSON){

    io_k8s_api_autoscaling_v2beta1_external_metric_status_t *io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta1_external_metric_status->current_average_value
    cJSON *current_average_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_external_metric_statusJSON, "currentAverageValue");
    if (current_average_value) { 
    if(!cJSON_IsString(current_average_value))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta1_external_metric_status->current_value
    cJSON *current_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_external_metric_statusJSON, "currentValue");
    if (!current_value) {
        goto end;
    }

    
    if(!cJSON_IsString(current_value))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_name
    cJSON *metric_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_external_metric_statusJSON, "metricName");
    if (!metric_name) {
        goto end;
    }

    
    if(!cJSON_IsString(metric_name))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_external_metric_status->metric_selector
    cJSON *metric_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_external_metric_statusJSON, "metricSelector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *metric_selector_local_nonprim = NULL;
    if (metric_selector) { 
    metric_selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(metric_selector); //nonprimitive
    }


    io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var = io_k8s_api_autoscaling_v2beta1_external_metric_status_create (
        current_average_value ? strdup(current_average_value->valuestring) : NULL,
        strdup(current_value->valuestring),
        strdup(metric_name->valuestring),
        metric_selector ? metric_selector_local_nonprim : NULL
        );

    return io_k8s_api_autoscaling_v2beta1_external_metric_status_local_var;
end:
    if (metric_selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(metric_selector_local_nonprim);
        metric_selector_local_nonprim = NULL;
    }
    return NULL;

}
