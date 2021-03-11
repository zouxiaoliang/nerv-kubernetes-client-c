#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_readiness_gate.h"



io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate_create(
    char *condition_type
    ) {
    io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_readiness_gate_t));
    if (!io_k8s_api_core_v1_pod_readiness_gate_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_readiness_gate_local_var->condition_type = condition_type;

    return io_k8s_api_core_v1_pod_readiness_gate_local_var;
}


void io_k8s_api_core_v1_pod_readiness_gate_free(io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate) {
    if(NULL == io_k8s_api_core_v1_pod_readiness_gate){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_readiness_gate->condition_type) {
        free(io_k8s_api_core_v1_pod_readiness_gate->condition_type);
        io_k8s_api_core_v1_pod_readiness_gate->condition_type = NULL;
    }
    free(io_k8s_api_core_v1_pod_readiness_gate);
}

cJSON *io_k8s_api_core_v1_pod_readiness_gate_convertToJSON(io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_readiness_gate->condition_type
    if (!io_k8s_api_core_v1_pod_readiness_gate->condition_type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "conditionType", io_k8s_api_core_v1_pod_readiness_gate->condition_type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_readiness_gateJSON){

    io_k8s_api_core_v1_pod_readiness_gate_t *io_k8s_api_core_v1_pod_readiness_gate_local_var = NULL;

    // io_k8s_api_core_v1_pod_readiness_gate->condition_type
    cJSON *condition_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_readiness_gateJSON, "conditionType");
    if (!condition_type) {
        goto end;
    }

    
    if(!cJSON_IsString(condition_type))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_pod_readiness_gate_local_var = io_k8s_api_core_v1_pod_readiness_gate_create (
        strdup(condition_type->valuestring)
        );

    return io_k8s_api_core_v1_pod_readiness_gate_local_var;
end:
    return NULL;

}
