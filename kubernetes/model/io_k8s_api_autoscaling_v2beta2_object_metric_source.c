#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_object_metric_source.h"



io_k8s_api_autoscaling_v2beta2_object_metric_source_t *io_k8s_api_autoscaling_v2beta2_object_metric_source_create(
    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *described_object,
    io_k8s_api_autoscaling_v2beta2_metric_identifier_t *metric,
    io_k8s_api_autoscaling_v2beta2_metric_target_t *target
    ) {
    io_k8s_api_autoscaling_v2beta2_object_metric_source_t *io_k8s_api_autoscaling_v2beta2_object_metric_source_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_object_metric_source_t));
    if (!io_k8s_api_autoscaling_v2beta2_object_metric_source_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_object_metric_source_local_var->described_object = described_object;
    io_k8s_api_autoscaling_v2beta2_object_metric_source_local_var->metric = metric;
    io_k8s_api_autoscaling_v2beta2_object_metric_source_local_var->target = target;

    return io_k8s_api_autoscaling_v2beta2_object_metric_source_local_var;
}


void io_k8s_api_autoscaling_v2beta2_object_metric_source_free(io_k8s_api_autoscaling_v2beta2_object_metric_source_t *io_k8s_api_autoscaling_v2beta2_object_metric_source) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_object_metric_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_object_metric_source->described_object) {
        io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_free(io_k8s_api_autoscaling_v2beta2_object_metric_source->described_object);
        io_k8s_api_autoscaling_v2beta2_object_metric_source->described_object = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_object_metric_source->metric) {
        io_k8s_api_autoscaling_v2beta2_metric_identifier_free(io_k8s_api_autoscaling_v2beta2_object_metric_source->metric);
        io_k8s_api_autoscaling_v2beta2_object_metric_source->metric = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_object_metric_source->target) {
        io_k8s_api_autoscaling_v2beta2_metric_target_free(io_k8s_api_autoscaling_v2beta2_object_metric_source->target);
        io_k8s_api_autoscaling_v2beta2_object_metric_source->target = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_object_metric_source);
}

cJSON *io_k8s_api_autoscaling_v2beta2_object_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta2_object_metric_source_t *io_k8s_api_autoscaling_v2beta2_object_metric_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_object_metric_source->described_object
    if (!io_k8s_api_autoscaling_v2beta2_object_metric_source->described_object) {
        goto fail;
    }
    
    cJSON *described_object_local_JSON = io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_convertToJSON(io_k8s_api_autoscaling_v2beta2_object_metric_source->described_object);
    if(described_object_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "describedObject", described_object_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_autoscaling_v2beta2_object_metric_source->metric
    if (!io_k8s_api_autoscaling_v2beta2_object_metric_source->metric) {
        goto fail;
    }
    
    cJSON *metric_local_JSON = io_k8s_api_autoscaling_v2beta2_metric_identifier_convertToJSON(io_k8s_api_autoscaling_v2beta2_object_metric_source->metric);
    if(metric_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metric", metric_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_autoscaling_v2beta2_object_metric_source->target
    if (!io_k8s_api_autoscaling_v2beta2_object_metric_source->target) {
        goto fail;
    }
    
    cJSON *target_local_JSON = io_k8s_api_autoscaling_v2beta2_metric_target_convertToJSON(io_k8s_api_autoscaling_v2beta2_object_metric_source->target);
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

io_k8s_api_autoscaling_v2beta2_object_metric_source_t *io_k8s_api_autoscaling_v2beta2_object_metric_source_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_object_metric_sourceJSON){

    io_k8s_api_autoscaling_v2beta2_object_metric_source_t *io_k8s_api_autoscaling_v2beta2_object_metric_source_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_object_metric_source->described_object
    cJSON *described_object = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_object_metric_sourceJSON, "describedObject");
    if (!described_object) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *described_object_local_nonprim = NULL;
    
    described_object_local_nonprim = io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_parseFromJSON(described_object); //nonprimitive

    // io_k8s_api_autoscaling_v2beta2_object_metric_source->metric
    cJSON *metric = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_object_metric_sourceJSON, "metric");
    if (!metric) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta2_metric_identifier_t *metric_local_nonprim = NULL;
    
    metric_local_nonprim = io_k8s_api_autoscaling_v2beta2_metric_identifier_parseFromJSON(metric); //nonprimitive

    // io_k8s_api_autoscaling_v2beta2_object_metric_source->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_object_metric_sourceJSON, "target");
    if (!target) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta2_metric_target_t *target_local_nonprim = NULL;
    
    target_local_nonprim = io_k8s_api_autoscaling_v2beta2_metric_target_parseFromJSON(target); //nonprimitive


    io_k8s_api_autoscaling_v2beta2_object_metric_source_local_var = io_k8s_api_autoscaling_v2beta2_object_metric_source_create (
        described_object_local_nonprim,
        metric_local_nonprim,
        target_local_nonprim
        );

    return io_k8s_api_autoscaling_v2beta2_object_metric_source_local_var;
end:
    if (described_object_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_free(described_object_local_nonprim);
        described_object_local_nonprim = NULL;
    }
    if (metric_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_metric_identifier_free(metric_local_nonprim);
        metric_local_nonprim = NULL;
    }
    if (target_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_metric_target_free(target_local_nonprim);
        target_local_nonprim = NULL;
    }
    return NULL;

}
