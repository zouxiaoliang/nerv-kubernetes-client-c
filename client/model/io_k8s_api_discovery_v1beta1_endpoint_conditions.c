#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_discovery_v1beta1_endpoint_conditions.h"



io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions_create(
    int ready,
    int serving,
    int terminating
    ) {
    io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions_local_var = malloc(sizeof(io_k8s_api_discovery_v1beta1_endpoint_conditions_t));
    if (!io_k8s_api_discovery_v1beta1_endpoint_conditions_local_var) {
        return NULL;
    }
    io_k8s_api_discovery_v1beta1_endpoint_conditions_local_var->ready = ready;
    io_k8s_api_discovery_v1beta1_endpoint_conditions_local_var->serving = serving;
    io_k8s_api_discovery_v1beta1_endpoint_conditions_local_var->terminating = terminating;

    return io_k8s_api_discovery_v1beta1_endpoint_conditions_local_var;
}


void io_k8s_api_discovery_v1beta1_endpoint_conditions_free(io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions) {
    if(NULL == io_k8s_api_discovery_v1beta1_endpoint_conditions){
        return ;
    }
    listEntry_t *listEntry;
    free(io_k8s_api_discovery_v1beta1_endpoint_conditions);
}

cJSON *io_k8s_api_discovery_v1beta1_endpoint_conditions_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_discovery_v1beta1_endpoint_conditions->ready
    if(io_k8s_api_discovery_v1beta1_endpoint_conditions->ready) { 
    if(cJSON_AddBoolToObject(item, "ready", io_k8s_api_discovery_v1beta1_endpoint_conditions->ready) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint_conditions->serving
    if(io_k8s_api_discovery_v1beta1_endpoint_conditions->serving) { 
    if(cJSON_AddBoolToObject(item, "serving", io_k8s_api_discovery_v1beta1_endpoint_conditions->serving) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint_conditions->terminating
    if(io_k8s_api_discovery_v1beta1_endpoint_conditions->terminating) { 
    if(cJSON_AddBoolToObject(item, "terminating", io_k8s_api_discovery_v1beta1_endpoint_conditions->terminating) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions_parseFromJSON(cJSON *io_k8s_api_discovery_v1beta1_endpoint_conditionsJSON){

    io_k8s_api_discovery_v1beta1_endpoint_conditions_t *io_k8s_api_discovery_v1beta1_endpoint_conditions_local_var = NULL;

    // io_k8s_api_discovery_v1beta1_endpoint_conditions->ready
    cJSON *ready = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_conditionsJSON, "ready");
    if (ready) { 
    if(!cJSON_IsBool(ready))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_discovery_v1beta1_endpoint_conditions->serving
    cJSON *serving = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_conditionsJSON, "serving");
    if (serving) { 
    if(!cJSON_IsBool(serving))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_discovery_v1beta1_endpoint_conditions->terminating
    cJSON *terminating = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_conditionsJSON, "terminating");
    if (terminating) { 
    if(!cJSON_IsBool(terminating))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_discovery_v1beta1_endpoint_conditions_local_var = io_k8s_api_discovery_v1beta1_endpoint_conditions_create (
        ready ? ready->valueint : 0,
        serving ? serving->valueint : 0,
        terminating ? terminating->valueint : 0
        );

    return io_k8s_api_discovery_v1beta1_endpoint_conditions_local_var;
end:
    return NULL;

}
