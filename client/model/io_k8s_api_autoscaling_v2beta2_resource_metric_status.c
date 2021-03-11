#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_resource_metric_status.h"



io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status_create(
    io_k8s_api_autoscaling_v2beta2_metric_value_status_t *current,
    char *name
    ) {
    io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_resource_metric_status_t));
    if (!io_k8s_api_autoscaling_v2beta2_resource_metric_status_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_resource_metric_status_local_var->current = current;
    io_k8s_api_autoscaling_v2beta2_resource_metric_status_local_var->name = name;

    return io_k8s_api_autoscaling_v2beta2_resource_metric_status_local_var;
}


void io_k8s_api_autoscaling_v2beta2_resource_metric_status_free(io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_resource_metric_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_resource_metric_status->current) {
        io_k8s_api_autoscaling_v2beta2_metric_value_status_free(io_k8s_api_autoscaling_v2beta2_resource_metric_status->current);
        io_k8s_api_autoscaling_v2beta2_resource_metric_status->current = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_resource_metric_status->name) {
        free(io_k8s_api_autoscaling_v2beta2_resource_metric_status->name);
        io_k8s_api_autoscaling_v2beta2_resource_metric_status->name = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_resource_metric_status);
}

cJSON *io_k8s_api_autoscaling_v2beta2_resource_metric_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_resource_metric_status->current
    if (!io_k8s_api_autoscaling_v2beta2_resource_metric_status->current) {
        goto fail;
    }
    
    cJSON *current_local_JSON = io_k8s_api_autoscaling_v2beta2_metric_value_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_resource_metric_status->current);
    if(current_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "current", current_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_autoscaling_v2beta2_resource_metric_status->name
    if (!io_k8s_api_autoscaling_v2beta2_resource_metric_status->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_autoscaling_v2beta2_resource_metric_status->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_resource_metric_statusJSON){

    io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_resource_metric_status->current
    cJSON *current = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_resource_metric_statusJSON, "current");
    if (!current) {
        goto end;
    }

    io_k8s_api_autoscaling_v2beta2_metric_value_status_t *current_local_nonprim = NULL;
    
    current_local_nonprim = io_k8s_api_autoscaling_v2beta2_metric_value_status_parseFromJSON(current); //nonprimitive

    // io_k8s_api_autoscaling_v2beta2_resource_metric_status->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_resource_metric_statusJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    io_k8s_api_autoscaling_v2beta2_resource_metric_status_local_var = io_k8s_api_autoscaling_v2beta2_resource_metric_status_create (
        current_local_nonprim,
        strdup(name->valuestring)
        );

    return io_k8s_api_autoscaling_v2beta2_resource_metric_status_local_var;
end:
    if (current_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_metric_value_status_free(current_local_nonprim);
        current_local_nonprim = NULL;
    }
    return NULL;

}
