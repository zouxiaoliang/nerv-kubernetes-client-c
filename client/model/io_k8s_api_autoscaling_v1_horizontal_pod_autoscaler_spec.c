#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec.h"



io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_create(
    int max_replicas,
    int min_replicas,
    io_k8s_api_autoscaling_v1_cross_version_object_reference_t *scale_target_ref,
    int target_cpu_utilization_percentage
    ) {
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var = malloc(sizeof(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t));
    if (!io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var->max_replicas = max_replicas;
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var->min_replicas = min_replicas;
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var->scale_target_ref = scale_target_ref;
    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var->target_cpu_utilization_percentage = target_cpu_utilization_percentage;

    return io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var;
}


void io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_free(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec) {
    if(NULL == io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->scale_target_ref) {
        io_k8s_api_autoscaling_v1_cross_version_object_reference_free(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->scale_target_ref);
        io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->scale_target_ref = NULL;
    }
    free(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec);
}

cJSON *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_convertToJSON(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->max_replicas
    if (!io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->max_replicas) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "maxReplicas", io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->max_replicas) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->min_replicas
    if(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->min_replicas) { 
    if(cJSON_AddNumberToObject(item, "minReplicas", io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->min_replicas) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->scale_target_ref
    if (!io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->scale_target_ref) {
        goto fail;
    }
    
    cJSON *scale_target_ref_local_JSON = io_k8s_api_autoscaling_v1_cross_version_object_reference_convertToJSON(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->scale_target_ref);
    if(scale_target_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scaleTargetRef", scale_target_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->target_cpu_utilization_percentage
    if(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->target_cpu_utilization_percentage) { 
    if(cJSON_AddNumberToObject(item, "targetCPUUtilizationPercentage", io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->target_cpu_utilization_percentage) == NULL) {
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

io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_parseFromJSON(cJSON *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_specJSON){

    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var = NULL;

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->max_replicas
    cJSON *max_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_specJSON, "maxReplicas");
    if (!max_replicas) {
        goto end;
    }

    
    if(!cJSON_IsNumber(max_replicas))
    {
    goto end; //Numeric
    }

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->min_replicas
    cJSON *min_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_specJSON, "minReplicas");
    if (min_replicas) { 
    if(!cJSON_IsNumber(min_replicas))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->scale_target_ref
    cJSON *scale_target_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_specJSON, "scaleTargetRef");
    if (!scale_target_ref) {
        goto end;
    }

    io_k8s_api_autoscaling_v1_cross_version_object_reference_t *scale_target_ref_local_nonprim = NULL;
    
    scale_target_ref_local_nonprim = io_k8s_api_autoscaling_v1_cross_version_object_reference_parseFromJSON(scale_target_ref); //nonprimitive

    // io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec->target_cpu_utilization_percentage
    cJSON *target_cpu_utilization_percentage = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_specJSON, "targetCPUUtilizationPercentage");
    if (target_cpu_utilization_percentage) { 
    if(!cJSON_IsNumber(target_cpu_utilization_percentage))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var = io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_create (
        max_replicas->valuedouble,
        min_replicas ? min_replicas->valuedouble : 0,
        scale_target_ref_local_nonprim,
        target_cpu_utilization_percentage ? target_cpu_utilization_percentage->valuedouble : 0
        );

    return io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_local_var;
end:
    if (scale_target_ref_local_nonprim) {
        io_k8s_api_autoscaling_v1_cross_version_object_reference_free(scale_target_ref_local_nonprim);
        scale_target_ref_local_nonprim = NULL;
    }
    return NULL;

}
