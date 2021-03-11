#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apps_v1_rolling_update_daemon_set.h"



io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set_create(
    char *max_surge,
    char *max_unavailable
    ) {
    io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set_local_var = malloc(sizeof(io_k8s_api_apps_v1_rolling_update_daemon_set_t));
    if (!io_k8s_api_apps_v1_rolling_update_daemon_set_local_var) {
        return NULL;
    }
    io_k8s_api_apps_v1_rolling_update_daemon_set_local_var->max_surge = max_surge;
    io_k8s_api_apps_v1_rolling_update_daemon_set_local_var->max_unavailable = max_unavailable;

    return io_k8s_api_apps_v1_rolling_update_daemon_set_local_var;
}


void io_k8s_api_apps_v1_rolling_update_daemon_set_free(io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set) {
    if(NULL == io_k8s_api_apps_v1_rolling_update_daemon_set){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apps_v1_rolling_update_daemon_set->max_surge) {
        free(io_k8s_api_apps_v1_rolling_update_daemon_set->max_surge);
        io_k8s_api_apps_v1_rolling_update_daemon_set->max_surge = NULL;
    }
    if (io_k8s_api_apps_v1_rolling_update_daemon_set->max_unavailable) {
        free(io_k8s_api_apps_v1_rolling_update_daemon_set->max_unavailable);
        io_k8s_api_apps_v1_rolling_update_daemon_set->max_unavailable = NULL;
    }
    free(io_k8s_api_apps_v1_rolling_update_daemon_set);
}

cJSON *io_k8s_api_apps_v1_rolling_update_daemon_set_convertToJSON(io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apps_v1_rolling_update_daemon_set->max_surge
    if(io_k8s_api_apps_v1_rolling_update_daemon_set->max_surge) { 
    if(cJSON_AddStringToObject(item, "maxSurge", io_k8s_api_apps_v1_rolling_update_daemon_set->max_surge) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apps_v1_rolling_update_daemon_set->max_unavailable
    if(io_k8s_api_apps_v1_rolling_update_daemon_set->max_unavailable) { 
    if(cJSON_AddStringToObject(item, "maxUnavailable", io_k8s_api_apps_v1_rolling_update_daemon_set->max_unavailable) == NULL) {
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

io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set_parseFromJSON(cJSON *io_k8s_api_apps_v1_rolling_update_daemon_setJSON){

    io_k8s_api_apps_v1_rolling_update_daemon_set_t *io_k8s_api_apps_v1_rolling_update_daemon_set_local_var = NULL;

    // io_k8s_api_apps_v1_rolling_update_daemon_set->max_surge
    cJSON *max_surge = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_rolling_update_daemon_setJSON, "maxSurge");
    if (max_surge) { 
    if(!cJSON_IsString(max_surge))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apps_v1_rolling_update_daemon_set->max_unavailable
    cJSON *max_unavailable = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_rolling_update_daemon_setJSON, "maxUnavailable");
    if (max_unavailable) { 
    if(!cJSON_IsString(max_unavailable))
    {
    goto end; //String
    }
    }


    io_k8s_api_apps_v1_rolling_update_daemon_set_local_var = io_k8s_api_apps_v1_rolling_update_daemon_set_create (
        max_surge ? strdup(max_surge->valuestring) : NULL,
        max_unavailable ? strdup(max_unavailable->valuestring) : NULL
        );

    return io_k8s_api_apps_v1_rolling_update_daemon_set_local_var;
end:
    return NULL;

}
