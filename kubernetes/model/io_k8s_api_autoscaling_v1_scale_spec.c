#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v1_scale_spec.h"



io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec_create(
    int replicas
    ) {
    io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec_local_var = malloc(sizeof(io_k8s_api_autoscaling_v1_scale_spec_t));
    if (!io_k8s_api_autoscaling_v1_scale_spec_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v1_scale_spec_local_var->replicas = replicas;

    return io_k8s_api_autoscaling_v1_scale_spec_local_var;
}


void io_k8s_api_autoscaling_v1_scale_spec_free(io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec) {
    if(NULL == io_k8s_api_autoscaling_v1_scale_spec){
        return ;
    }
    listEntry_t *listEntry;
    free(io_k8s_api_autoscaling_v1_scale_spec);
}

cJSON *io_k8s_api_autoscaling_v1_scale_spec_convertToJSON(io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v1_scale_spec->replicas
    if(io_k8s_api_autoscaling_v1_scale_spec->replicas) { 
    if(cJSON_AddNumberToObject(item, "replicas", io_k8s_api_autoscaling_v1_scale_spec->replicas) == NULL) {
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

io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec_parseFromJSON(cJSON *io_k8s_api_autoscaling_v1_scale_specJSON){

    io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec_local_var = NULL;

    // io_k8s_api_autoscaling_v1_scale_spec->replicas
    cJSON *replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_scale_specJSON, "replicas");
    if (replicas) { 
    if(!cJSON_IsNumber(replicas))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_autoscaling_v1_scale_spec_local_var = io_k8s_api_autoscaling_v1_scale_spec_create (
        replicas ? replicas->valuedouble : 0
        );

    return io_k8s_api_autoscaling_v1_scale_spec_local_var;
end:
    return NULL;

}
