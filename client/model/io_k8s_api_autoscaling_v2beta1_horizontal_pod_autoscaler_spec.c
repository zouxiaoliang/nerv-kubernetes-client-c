#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec.h"



io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_create(
    int max_replicas,
    list_t *metrics,
    int min_replicas,
    io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *scale_target_ref
    ) {
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t));
    if (!io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var->max_replicas = max_replicas;
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var->metrics = metrics;
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var->min_replicas = min_replicas;
    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var->scale_target_ref = scale_target_ref;

    return io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var;
}


void io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec) {
    if(NULL == io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->metrics) {
        list_ForEach(listEntry, io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->metrics) {
            io_k8s_api_autoscaling_v2beta1_metric_spec_free(listEntry->data);
        }
        list_free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->metrics);
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->metrics = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->scale_target_ref) {
        io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->scale_target_ref);
        io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->scale_target_ref = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec);
}

cJSON *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_convertToJSON(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->max_replicas
    if (!io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->max_replicas) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "maxReplicas", io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->max_replicas) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->metrics
    if(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->metrics) { 
    cJSON *metrics = cJSON_AddArrayToObject(item, "metrics");
    if(metrics == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *metricsListEntry;
    if (io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->metrics) {
    list_ForEach(metricsListEntry, io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->metrics) {
    cJSON *itemLocal = io_k8s_api_autoscaling_v2beta1_metric_spec_convertToJSON(metricsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(metrics, itemLocal);
    }
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->min_replicas
    if(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->min_replicas) { 
    if(cJSON_AddNumberToObject(item, "minReplicas", io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->min_replicas) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->scale_target_ref
    if (!io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->scale_target_ref) {
        goto fail;
    }
    
    cJSON *scale_target_ref_local_JSON = io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_convertToJSON(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->scale_target_ref);
    if(scale_target_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scaleTargetRef", scale_target_ref_local_JSON);
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

io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_specJSON){

    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->max_replicas
    cJSON *max_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_specJSON, "maxReplicas");
    if (!max_replicas) {
        goto end;
    }

    
    if(!cJSON_IsNumber(max_replicas))
    {
    goto end; //Numeric
    }

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->metrics
    cJSON *metrics = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_specJSON, "metrics");
    list_t *metricsList;
    if (metrics) { 
    cJSON *metrics_local_nonprimitive;
    if(!cJSON_IsArray(metrics)){
        goto end; //nonprimitive container
    }

    metricsList = list_create();

    cJSON_ArrayForEach(metrics_local_nonprimitive,metrics )
    {
        if(!cJSON_IsObject(metrics_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_autoscaling_v2beta1_metric_spec_t *metricsItem = io_k8s_api_autoscaling_v2beta1_metric_spec_parseFromJSON(metrics_local_nonprimitive);

        list_addElement(metricsList, metricsItem);
    }
    }

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->min_replicas
    cJSON *min_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_specJSON, "minReplicas");
    if (min_replicas) { 
    if(!cJSON_IsNumber(min_replicas))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec->scale_target_ref
    cJSON *scale_target_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_specJSON, "scaleTargetRef");
    if (!scale_target_ref) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *scale_target_ref_local_nonprim = NULL;
    
    scale_target_ref_local_nonprim = io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_parseFromJSON(scale_target_ref); //nonprimitive


    io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var = io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_create (
        max_replicas->valuedouble,
        metrics ? metricsList : NULL,
        min_replicas ? min_replicas->valuedouble : 0,
        scale_target_ref_local_nonprim
        );

    return io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_local_var;
end:
    if (scale_target_ref_local_nonprim) {
        io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_free(scale_target_ref_local_nonprim);
        scale_target_ref_local_nonprim = NULL;
    }
    return NULL;

}
