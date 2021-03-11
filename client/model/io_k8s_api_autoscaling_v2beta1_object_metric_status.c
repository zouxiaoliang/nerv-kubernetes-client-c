#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta1_object_metric_status.h"



io_k8s_api_autoscaling_v2beta1_object_metric_status_t *io_k8s_api_autoscaling_v2beta1_object_metric_status_create(
    char *average_value,
    char *current_value,
    char *metric_name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *target
    ) {
    io_k8s_api_autoscaling_v2beta1_object_metric_status_t *io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta1_object_metric_status_t));
    if (!io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var->average_value = average_value;
    io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var->current_value = current_value;
    io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var->metric_name = metric_name;
    io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var->selector = selector;
    io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var->target = target;

    return io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var;
}


void io_k8s_api_autoscaling_v2beta1_object_metric_status_free(io_k8s_api_autoscaling_v2beta1_object_metric_status_t *io_k8s_api_autoscaling_v2beta1_object_metric_status) {
    if(NULL == io_k8s_api_autoscaling_v2beta1_object_metric_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta1_object_metric_status->average_value) {
        free(io_k8s_api_autoscaling_v2beta1_object_metric_status->average_value);
        io_k8s_api_autoscaling_v2beta1_object_metric_status->average_value = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_object_metric_status->current_value) {
        free(io_k8s_api_autoscaling_v2beta1_object_metric_status->current_value);
        io_k8s_api_autoscaling_v2beta1_object_metric_status->current_value = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_object_metric_status->metric_name) {
        free(io_k8s_api_autoscaling_v2beta1_object_metric_status->metric_name);
        io_k8s_api_autoscaling_v2beta1_object_metric_status->metric_name = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_object_metric_status->selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_autoscaling_v2beta1_object_metric_status->selector);
        io_k8s_api_autoscaling_v2beta1_object_metric_status->selector = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_object_metric_status->target) {
        io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_free(io_k8s_api_autoscaling_v2beta1_object_metric_status->target);
        io_k8s_api_autoscaling_v2beta1_object_metric_status->target = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta1_object_metric_status);
}

cJSON *io_k8s_api_autoscaling_v2beta1_object_metric_status_convertToJSON(io_k8s_api_autoscaling_v2beta1_object_metric_status_t *io_k8s_api_autoscaling_v2beta1_object_metric_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta1_object_metric_status->average_value
    if(io_k8s_api_autoscaling_v2beta1_object_metric_status->average_value) { 
    if(cJSON_AddStringToObject(item, "averageValue", io_k8s_api_autoscaling_v2beta1_object_metric_status->average_value) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_object_metric_status->current_value
    if (!io_k8s_api_autoscaling_v2beta1_object_metric_status->current_value) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "currentValue", io_k8s_api_autoscaling_v2beta1_object_metric_status->current_value) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_object_metric_status->metric_name
    if (!io_k8s_api_autoscaling_v2beta1_object_metric_status->metric_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "metricName", io_k8s_api_autoscaling_v2beta1_object_metric_status->metric_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_object_metric_status->selector
    if(io_k8s_api_autoscaling_v2beta1_object_metric_status->selector) { 
    cJSON *selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_autoscaling_v2beta1_object_metric_status->selector);
    if(selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selector", selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_object_metric_status->target
    if (!io_k8s_api_autoscaling_v2beta1_object_metric_status->target) {
        goto fail;
    }
    
    cJSON *target_local_JSON = io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_convertToJSON(io_k8s_api_autoscaling_v2beta1_object_metric_status->target);
    if(target_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "target", target_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_autoscaling_v2beta1_object_metric_status_t *io_k8s_api_autoscaling_v2beta1_object_metric_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_object_metric_statusJSON){

    io_k8s_api_autoscaling_v2beta1_object_metric_status_t *io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta1_object_metric_status->average_value
    cJSON *average_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_statusJSON, "averageValue");
    if (average_value) { 
    if(!cJSON_IsString(average_value))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta1_object_metric_status->current_value
    cJSON *current_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_statusJSON, "currentValue");
    if (!current_value) {
        goto end;
    }

    
    if(!cJSON_IsString(current_value))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_object_metric_status->metric_name
    cJSON *metric_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_statusJSON, "metricName");
    if (!metric_name) {
        goto end;
    }

    
    if(!cJSON_IsString(metric_name))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_object_metric_status->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_statusJSON, "selector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector_local_nonprim = NULL;
    if (selector) { 
    selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(selector); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta1_object_metric_status->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_statusJSON, "target");
    if (!target) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *target_local_nonprim = NULL;
    
    target_local_nonprim = io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_parseFromJSON(target); //nonprimitive


    io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var = io_k8s_api_autoscaling_v2beta1_object_metric_status_create (
        average_value ? strdup(average_value->valuestring) : NULL,
        strdup(current_value->valuestring),
        strdup(metric_name->valuestring),
        selector ? selector_local_nonprim : NULL,
        target_local_nonprim
        );

    return io_k8s_api_autoscaling_v2beta1_object_metric_status_local_var;
end:
    if (selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(selector_local_nonprim);
        selector_local_nonprim = NULL;
    }
    if (target_local_nonprim) {
        io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_free(target_local_nonprim);
        target_local_nonprim = NULL;
    }
    return NULL;

}
