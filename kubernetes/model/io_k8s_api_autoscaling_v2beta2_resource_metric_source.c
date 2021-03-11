#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_resource_metric_source.h"



io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_resource_metric_source_create(
    char *name,
    io_k8s_api_autoscaling_v2beta2_metric_target_t *target
    ) {
    io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_resource_metric_source_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_resource_metric_source_t));
    if (!io_k8s_api_autoscaling_v2beta2_resource_metric_source_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_resource_metric_source_local_var->name = name;
    io_k8s_api_autoscaling_v2beta2_resource_metric_source_local_var->target = target;

    return io_k8s_api_autoscaling_v2beta2_resource_metric_source_local_var;
}


void io_k8s_api_autoscaling_v2beta2_resource_metric_source_free(io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_resource_metric_source) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_resource_metric_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_resource_metric_source->name) {
        free(io_k8s_api_autoscaling_v2beta2_resource_metric_source->name);
        io_k8s_api_autoscaling_v2beta2_resource_metric_source->name = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_resource_metric_source->target) {
        io_k8s_api_autoscaling_v2beta2_metric_target_free(io_k8s_api_autoscaling_v2beta2_resource_metric_source->target);
        io_k8s_api_autoscaling_v2beta2_resource_metric_source->target = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_resource_metric_source);
}

cJSON *io_k8s_api_autoscaling_v2beta2_resource_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_resource_metric_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_resource_metric_source->name
    if (!io_k8s_api_autoscaling_v2beta2_resource_metric_source->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_autoscaling_v2beta2_resource_metric_source->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta2_resource_metric_source->target
    if (!io_k8s_api_autoscaling_v2beta2_resource_metric_source->target) {
        goto fail;
    }
    
    cJSON *target_local_JSON = io_k8s_api_autoscaling_v2beta2_metric_target_convertToJSON(io_k8s_api_autoscaling_v2beta2_resource_metric_source->target);
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

io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_resource_metric_source_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_resource_metric_sourceJSON){

    io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_resource_metric_source_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_resource_metric_source->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_resource_metric_sourceJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta2_resource_metric_source->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_resource_metric_sourceJSON, "target");
    if (!target) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta2_metric_target_t *target_local_nonprim = NULL;
    
    target_local_nonprim = io_k8s_api_autoscaling_v2beta2_metric_target_parseFromJSON(target); //nonprimitive


    io_k8s_api_autoscaling_v2beta2_resource_metric_source_local_var = io_k8s_api_autoscaling_v2beta2_resource_metric_source_create (
        strdup(name->valuestring),
        target_local_nonprim
        );

    return io_k8s_api_autoscaling_v2beta2_resource_metric_source_local_var;
end:
    if (target_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_metric_target_free(target_local_nonprim);
        target_local_nonprim = NULL;
    }
    return NULL;

}
