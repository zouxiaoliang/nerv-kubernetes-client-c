#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta1_object_metric_source.h"



io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source_create(
    char *average_value,
    char *metric_name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *target,
    char *target_value
    ) {
    io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta1_object_metric_source_t));
    if (!io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var->average_value = average_value;
    io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var->metric_name = metric_name;
    io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var->selector = selector;
    io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var->target = target;
    io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var->target_value = target_value;

    return io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var;
}


void io_k8s_api_autoscaling_v2beta1_object_metric_source_free(io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source) {
    if(NULL == io_k8s_api_autoscaling_v2beta1_object_metric_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta1_object_metric_source->average_value) {
        free(io_k8s_api_autoscaling_v2beta1_object_metric_source->average_value);
        io_k8s_api_autoscaling_v2beta1_object_metric_source->average_value = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_object_metric_source->metric_name) {
        free(io_k8s_api_autoscaling_v2beta1_object_metric_source->metric_name);
        io_k8s_api_autoscaling_v2beta1_object_metric_source->metric_name = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_object_metric_source->selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_autoscaling_v2beta1_object_metric_source->selector);
        io_k8s_api_autoscaling_v2beta1_object_metric_source->selector = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_object_metric_source->target) {
        io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_free(io_k8s_api_autoscaling_v2beta1_object_metric_source->target);
        io_k8s_api_autoscaling_v2beta1_object_metric_source->target = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_object_metric_source->target_value) {
        free(io_k8s_api_autoscaling_v2beta1_object_metric_source->target_value);
        io_k8s_api_autoscaling_v2beta1_object_metric_source->target_value = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta1_object_metric_source);
}

cJSON *io_k8s_api_autoscaling_v2beta1_object_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta1_object_metric_source->average_value
    if(io_k8s_api_autoscaling_v2beta1_object_metric_source->average_value) { 
    if(cJSON_AddStringToObject(item, "averageValue", io_k8s_api_autoscaling_v2beta1_object_metric_source->average_value) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_object_metric_source->metric_name
    if (!io_k8s_api_autoscaling_v2beta1_object_metric_source->metric_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "metricName", io_k8s_api_autoscaling_v2beta1_object_metric_source->metric_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta1_object_metric_source->selector
    if(io_k8s_api_autoscaling_v2beta1_object_metric_source->selector) { 
    cJSON *selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_autoscaling_v2beta1_object_metric_source->selector);
    if(selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selector", selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_object_metric_source->target
    if (!io_k8s_api_autoscaling_v2beta1_object_metric_source->target) {
        goto fail;
    }
    
    cJSON *target_local_JSON = io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_convertToJSON(io_k8s_api_autoscaling_v2beta1_object_metric_source->target);
    if(target_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "target", target_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_autoscaling_v2beta1_object_metric_source->target_value
    if (!io_k8s_api_autoscaling_v2beta1_object_metric_source->target_value) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "targetValue", io_k8s_api_autoscaling_v2beta1_object_metric_source->target_value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_object_metric_sourceJSON){

    io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta1_object_metric_source->average_value
    cJSON *average_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_sourceJSON, "averageValue");
    if (average_value) { 
    if(!cJSON_IsString(average_value))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta1_object_metric_source->metric_name
    cJSON *metric_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_sourceJSON, "metricName");
    if (!metric_name) {
        goto end;
    }

    
    if(!cJSON_IsString(metric_name))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta1_object_metric_source->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_sourceJSON, "selector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector_local_nonprim = NULL;
    if (selector) { 
    selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(selector); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta1_object_metric_source->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_sourceJSON, "target");
    if (!target) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *target_local_nonprim = NULL;
    
    target_local_nonprim = io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_parseFromJSON(target); //nonprimitive

    // io_k8s_api_autoscaling_v2beta1_object_metric_source->target_value
    cJSON *target_value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_object_metric_sourceJSON, "targetValue");
    if (!target_value) {
        goto end;
    }

    
    if(!cJSON_IsString(target_value))
    {
    goto end; //String
    }


    io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var = io_k8s_api_autoscaling_v2beta1_object_metric_source_create (
        average_value ? strdup(average_value->valuestring) : NULL,
        strdup(metric_name->valuestring),
        selector ? selector_local_nonprim : NULL,
        target_local_nonprim,
        strdup(target_value->valuestring)
        );

    return io_k8s_api_autoscaling_v2beta1_object_metric_source_local_var;
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
