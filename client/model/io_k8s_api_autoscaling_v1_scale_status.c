#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v1_scale_status.h"



io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status_create(
    int replicas,
    char *selector
    ) {
    io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status_local_var = malloc(sizeof(io_k8s_api_autoscaling_v1_scale_status_t));
    if (!io_k8s_api_autoscaling_v1_scale_status_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v1_scale_status_local_var->replicas = replicas;
    io_k8s_api_autoscaling_v1_scale_status_local_var->selector = selector;

    return io_k8s_api_autoscaling_v1_scale_status_local_var;
}


void io_k8s_api_autoscaling_v1_scale_status_free(io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status) {
    if(NULL == io_k8s_api_autoscaling_v1_scale_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v1_scale_status->selector) {
        free(io_k8s_api_autoscaling_v1_scale_status->selector);
        io_k8s_api_autoscaling_v1_scale_status->selector = NULL;
    }
    free(io_k8s_api_autoscaling_v1_scale_status);
}

cJSON *io_k8s_api_autoscaling_v1_scale_status_convertToJSON(io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v1_scale_status->replicas
    if (!io_k8s_api_autoscaling_v1_scale_status->replicas) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "replicas", io_k8s_api_autoscaling_v1_scale_status->replicas) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_autoscaling_v1_scale_status->selector
    if(io_k8s_api_autoscaling_v1_scale_status->selector) { 
    if(cJSON_AddStringToObject(item, "selector", io_k8s_api_autoscaling_v1_scale_status->selector) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v1_scale_statusJSON){

    io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status_local_var = NULL;

    // io_k8s_api_autoscaling_v1_scale_status->replicas
    cJSON *replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_scale_statusJSON, "replicas");
    if (!replicas) {
        goto end;
    }

    
    if(!cJSON_IsNumber(replicas))
    {
    goto end; //Numeric
    }

    // io_k8s_api_autoscaling_v1_scale_status->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v1_scale_statusJSON, "selector");
    if (selector) { 
    if(!cJSON_IsString(selector))
    {
    goto end; //String
    }
    }


    io_k8s_api_autoscaling_v1_scale_status_local_var = io_k8s_api_autoscaling_v1_scale_status_create (
        replicas->valuedouble,
        selector ? strdup(selector->valuestring) : NULL
        );

    return io_k8s_api_autoscaling_v1_scale_status_local_var;
end:
    return NULL;

}
