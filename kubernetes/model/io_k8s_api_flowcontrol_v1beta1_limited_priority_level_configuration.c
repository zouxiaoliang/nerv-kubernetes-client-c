#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration.h"



io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_create(
    int assured_concurrency_shares,
    io_k8s_api_flowcontrol_v1beta1_limit_response_t *limit_response
    ) {
    io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t));
    if (!io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_local_var->assured_concurrency_shares = assured_concurrency_shares;
    io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_local_var->limit_response = limit_response;

    return io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_free(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->limit_response) {
        io_k8s_api_flowcontrol_v1beta1_limit_response_free(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->limit_response);
        io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->limit_response = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_convertToJSON(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->assured_concurrency_shares
    if(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->assured_concurrency_shares) { 
    if(cJSON_AddNumberToObject(item, "assuredConcurrencyShares", io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->assured_concurrency_shares) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->limit_response
    if(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->limit_response) { 
    cJSON *limit_response_local_JSON = io_k8s_api_flowcontrol_v1beta1_limit_response_convertToJSON(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->limit_response);
    if(limit_response_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "limitResponse", limit_response_local_JSON);
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

io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configurationJSON){

    io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_t *io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->assured_concurrency_shares
    cJSON *assured_concurrency_shares = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configurationJSON, "assuredConcurrencyShares");
    if (assured_concurrency_shares) { 
    if(!cJSON_IsNumber(assured_concurrency_shares))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration->limit_response
    cJSON *limit_response = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configurationJSON, "limitResponse");
    io_k8s_api_flowcontrol_v1beta1_limit_response_t *limit_response_local_nonprim = NULL;
    if (limit_response) { 
    limit_response_local_nonprim = io_k8s_api_flowcontrol_v1beta1_limit_response_parseFromJSON(limit_response); //nonprimitive
    }


    io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_local_var = io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_create (
        assured_concurrency_shares ? assured_concurrency_shares->valuedouble : 0,
        limit_response ? limit_response_local_nonprim : NULL
        );

    return io_k8s_api_flowcontrol_v1beta1_limited_priority_level_configuration_local_var;
end:
    if (limit_response_local_nonprim) {
        io_k8s_api_flowcontrol_v1beta1_limit_response_free(limit_response_local_nonprim);
        limit_response_local_nonprim = NULL;
    }
    return NULL;

}
