#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apps_v1_rolling_update_deployment.h"



io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment_create(
    char *max_surge,
    char *max_unavailable
    ) {
    io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment_local_var = malloc(sizeof(io_k8s_api_apps_v1_rolling_update_deployment_t));
    if (!io_k8s_api_apps_v1_rolling_update_deployment_local_var) {
        return NULL;
    }
    io_k8s_api_apps_v1_rolling_update_deployment_local_var->max_surge = max_surge;
    io_k8s_api_apps_v1_rolling_update_deployment_local_var->max_unavailable = max_unavailable;

    return io_k8s_api_apps_v1_rolling_update_deployment_local_var;
}


void io_k8s_api_apps_v1_rolling_update_deployment_free(io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment) {
    if(NULL == io_k8s_api_apps_v1_rolling_update_deployment){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apps_v1_rolling_update_deployment->max_surge) {
        free(io_k8s_api_apps_v1_rolling_update_deployment->max_surge);
        io_k8s_api_apps_v1_rolling_update_deployment->max_surge = NULL;
    }
    if (io_k8s_api_apps_v1_rolling_update_deployment->max_unavailable) {
        free(io_k8s_api_apps_v1_rolling_update_deployment->max_unavailable);
        io_k8s_api_apps_v1_rolling_update_deployment->max_unavailable = NULL;
    }
    free(io_k8s_api_apps_v1_rolling_update_deployment);
}

cJSON *io_k8s_api_apps_v1_rolling_update_deployment_convertToJSON(io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apps_v1_rolling_update_deployment->max_surge
    if(io_k8s_api_apps_v1_rolling_update_deployment->max_surge) { 
    if(cJSON_AddStringToObject(item, "maxSurge", io_k8s_api_apps_v1_rolling_update_deployment->max_surge) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apps_v1_rolling_update_deployment->max_unavailable
    if(io_k8s_api_apps_v1_rolling_update_deployment->max_unavailable) { 
    if(cJSON_AddStringToObject(item, "maxUnavailable", io_k8s_api_apps_v1_rolling_update_deployment->max_unavailable) == NULL) {
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

io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment_parseFromJSON(cJSON *io_k8s_api_apps_v1_rolling_update_deploymentJSON){

    io_k8s_api_apps_v1_rolling_update_deployment_t *io_k8s_api_apps_v1_rolling_update_deployment_local_var = NULL;

    // io_k8s_api_apps_v1_rolling_update_deployment->max_surge
    cJSON *max_surge = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_rolling_update_deploymentJSON, "maxSurge");
    if (max_surge) { 
    if(!cJSON_IsString(max_surge))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apps_v1_rolling_update_deployment->max_unavailable
    cJSON *max_unavailable = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_rolling_update_deploymentJSON, "maxUnavailable");
    if (max_unavailable) { 
    if(!cJSON_IsString(max_unavailable))
    {
    goto end; //String
    }
    }


    io_k8s_api_apps_v1_rolling_update_deployment_local_var = io_k8s_api_apps_v1_rolling_update_deployment_create (
        max_surge ? strdup(max_surge->valuestring) : NULL,
        max_unavailable ? strdup(max_unavailable->valuestring) : NULL
        );

    return io_k8s_api_apps_v1_rolling_update_deployment_local_var;
end:
    return NULL;

}
