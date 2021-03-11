#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_host_port_range.h"



io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range_create(
    int max,
    int min
    ) {
    io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_host_port_range_t));
    if (!io_k8s_api_policy_v1beta1_host_port_range_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_host_port_range_local_var->max = max;
    io_k8s_api_policy_v1beta1_host_port_range_local_var->min = min;

    return io_k8s_api_policy_v1beta1_host_port_range_local_var;
}


void io_k8s_api_policy_v1beta1_host_port_range_free(io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range) {
    if(NULL == io_k8s_api_policy_v1beta1_host_port_range){
        return ;
    }
    listEntry_t *listEntry;
    free(io_k8s_api_policy_v1beta1_host_port_range);
}

cJSON *io_k8s_api_policy_v1beta1_host_port_range_convertToJSON(io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_host_port_range->max
    if (!io_k8s_api_policy_v1beta1_host_port_range->max) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "max", io_k8s_api_policy_v1beta1_host_port_range->max) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_policy_v1beta1_host_port_range->min
    if (!io_k8s_api_policy_v1beta1_host_port_range->min) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "min", io_k8s_api_policy_v1beta1_host_port_range->min) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_host_port_rangeJSON){

    io_k8s_api_policy_v1beta1_host_port_range_t *io_k8s_api_policy_v1beta1_host_port_range_local_var = NULL;

    // io_k8s_api_policy_v1beta1_host_port_range->max
    cJSON *max = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_host_port_rangeJSON, "max");
    if (!max) {
        goto end;
    }

    
    if(!cJSON_IsNumber(max))
    {
    goto end; //Numeric
    }

    // io_k8s_api_policy_v1beta1_host_port_range->min
    cJSON *min = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_host_port_rangeJSON, "min");
    if (!min) {
        goto end;
    }

    
    if(!cJSON_IsNumber(min))
    {
    goto end; //Numeric
    }


    io_k8s_api_policy_v1beta1_host_port_range_local_var = io_k8s_api_policy_v1beta1_host_port_range_create (
        max->valuedouble,
        min->valuedouble
        );

    return io_k8s_api_policy_v1beta1_host_port_range_local_var;
end:
    return NULL;

}
