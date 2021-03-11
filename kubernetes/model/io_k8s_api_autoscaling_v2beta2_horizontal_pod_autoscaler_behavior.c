#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior.h"



io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_create(
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *scale_down,
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *scale_up
    ) {
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t));
    if (!io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_local_var->scale_down = scale_down;
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_local_var->scale_up = scale_up;

    return io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_local_var;
}


void io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_down) {
        io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_down);
        io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_down = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_up) {
        io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_up);
        io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_up = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior);
}

cJSON *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_down
    if(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_down) { 
    cJSON *scale_down_local_JSON = io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_down);
    if(scale_down_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scaleDown", scale_down_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_up
    if(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_up) { 
    cJSON *scale_up_local_JSON = io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_up);
    if(scale_up_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scaleUp", scale_up_local_JSON);
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

io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behaviorJSON){

    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_down
    cJSON *scale_down = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behaviorJSON, "scaleDown");
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *scale_down_local_nonprim = NULL;
    if (scale_down) { 
    scale_down_local_nonprim = io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_parseFromJSON(scale_down); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior->scale_up
    cJSON *scale_up = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behaviorJSON, "scaleUp");
    io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_t *scale_up_local_nonprim = NULL;
    if (scale_up) { 
    scale_up_local_nonprim = io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_parseFromJSON(scale_up); //nonprimitive
    }


    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_local_var = io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_create (
        scale_down ? scale_down_local_nonprim : NULL,
        scale_up ? scale_up_local_nonprim : NULL
        );

    return io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_behavior_local_var;
end:
    if (scale_down_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_free(scale_down_local_nonprim);
        scale_down_local_nonprim = NULL;
    }
    if (scale_up_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_hpa_scaling_rules_free(scale_up_local_nonprim);
        scale_up_local_nonprim = NULL;
    }
    return NULL;

}
