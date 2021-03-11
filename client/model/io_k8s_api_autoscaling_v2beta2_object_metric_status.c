#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_object_metric_status.h"



io_k8s_api_autoscaling_v2beta2_object_metric_status_t *io_k8s_api_autoscaling_v2beta2_object_metric_status_create(
    io_k8s_api_autoscaling_v2beta2_metric_value_status_t *current,
    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *described_object,
    io_k8s_api_autoscaling_v2beta2_metric_identifier_t *metric
    ) {
    io_k8s_api_autoscaling_v2beta2_object_metric_status_t *io_k8s_api_autoscaling_v2beta2_object_metric_status_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_object_metric_status_t));
    if (!io_k8s_api_autoscaling_v2beta2_object_metric_status_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_object_metric_status_local_var->current = current;
    io_k8s_api_autoscaling_v2beta2_object_metric_status_local_var->described_object = described_object;
    io_k8s_api_autoscaling_v2beta2_object_metric_status_local_var->metric = metric;

    return io_k8s_api_autoscaling_v2beta2_object_metric_status_local_var;
}


void io_k8s_api_autoscaling_v2beta2_object_metric_status_free(io_k8s_api_autoscaling_v2beta2_object_metric_status_t *io_k8s_api_autoscaling_v2beta2_object_metric_status) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_object_metric_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_object_metric_status->current) {
        io_k8s_api_autoscaling_v2beta2_metric_value_status_free(io_k8s_api_autoscaling_v2beta2_object_metric_status->current);
        io_k8s_api_autoscaling_v2beta2_object_metric_status->current = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_object_metric_status->described_object) {
        io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_free(io_k8s_api_autoscaling_v2beta2_object_metric_status->described_object);
        io_k8s_api_autoscaling_v2beta2_object_metric_status->described_object = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_object_metric_status->metric) {
        io_k8s_api_autoscaling_v2beta2_metric_identifier_free(io_k8s_api_autoscaling_v2beta2_object_metric_status->metric);
        io_k8s_api_autoscaling_v2beta2_object_metric_status->metric = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_object_metric_status);
}

cJSON *io_k8s_api_autoscaling_v2beta2_object_metric_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_object_metric_status_t *io_k8s_api_autoscaling_v2beta2_object_metric_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_object_metric_status->current
    if (!io_k8s_api_autoscaling_v2beta2_object_metric_status->current) {
        goto fail;
    }
    
    cJSON *current_local_JSON = io_k8s_api_autoscaling_v2beta2_metric_value_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_object_metric_status->current);
    if(current_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "current", current_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_autoscaling_v2beta2_object_metric_status->described_object
    if (!io_k8s_api_autoscaling_v2beta2_object_metric_status->described_object) {
        goto fail;
    }
    
    cJSON *described_object_local_JSON = io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_convertToJSON(io_k8s_api_autoscaling_v2beta2_object_metric_status->described_object);
    if(described_object_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "describedObject", described_object_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_autoscaling_v2beta2_object_metric_status->metric
    if (!io_k8s_api_autoscaling_v2beta2_object_metric_status->metric) {
        goto fail;
    }
    
    cJSON *metric_local_JSON = io_k8s_api_autoscaling_v2beta2_metric_identifier_convertToJSON(io_k8s_api_autoscaling_v2beta2_object_metric_status->metric);
    if(metric_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metric", metric_local_JSON);
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

io_k8s_api_autoscaling_v2beta2_object_metric_status_t *io_k8s_api_autoscaling_v2beta2_object_metric_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_object_metric_statusJSON){

    io_k8s_api_autoscaling_v2beta2_object_metric_status_t *io_k8s_api_autoscaling_v2beta2_object_metric_status_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_object_metric_status->current
    cJSON *current = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_object_metric_statusJSON, "current");
    if (!current) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta2_metric_value_status_t *current_local_nonprim = NULL;
    
    current_local_nonprim = io_k8s_api_autoscaling_v2beta2_metric_value_status_parseFromJSON(current); //nonprimitive

    // io_k8s_api_autoscaling_v2beta2_object_metric_status->described_object
    cJSON *described_object = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_object_metric_statusJSON, "describedObject");
    if (!described_object) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *described_object_local_nonprim = NULL;
    
    described_object_local_nonprim = io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_parseFromJSON(described_object); //nonprimitive

    // io_k8s_api_autoscaling_v2beta2_object_metric_status->metric
    cJSON *metric = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_object_metric_statusJSON, "metric");
    if (!metric) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta2_metric_identifier_t *metric_local_nonprim = NULL;
    
    metric_local_nonprim = io_k8s_api_autoscaling_v2beta2_metric_identifier_parseFromJSON(metric); //nonprimitive


    io_k8s_api_autoscaling_v2beta2_object_metric_status_local_var = io_k8s_api_autoscaling_v2beta2_object_metric_status_create (
        current_local_nonprim,
        described_object_local_nonprim,
        metric_local_nonprim
        );

    return io_k8s_api_autoscaling_v2beta2_object_metric_status_local_var;
end:
    if (current_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_metric_value_status_free(current_local_nonprim);
        current_local_nonprim = NULL;
    }
    if (described_object_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_free(described_object_local_nonprim);
        described_object_local_nonprim = NULL;
    }
    if (metric_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_metric_identifier_free(metric_local_nonprim);
        metric_local_nonprim = NULL;
    }
    return NULL;

}
