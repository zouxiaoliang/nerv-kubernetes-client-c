#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_allowed_flex_volume.h"



io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume_create(
    char *driver
    ) {
    io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_allowed_flex_volume_t));
    if (!io_k8s_api_policy_v1beta1_allowed_flex_volume_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_allowed_flex_volume_local_var->driver = driver;

    return io_k8s_api_policy_v1beta1_allowed_flex_volume_local_var;
}


void io_k8s_api_policy_v1beta1_allowed_flex_volume_free(io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume) {
    if(NULL == io_k8s_api_policy_v1beta1_allowed_flex_volume){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_policy_v1beta1_allowed_flex_volume->driver) {
        free(io_k8s_api_policy_v1beta1_allowed_flex_volume->driver);
        io_k8s_api_policy_v1beta1_allowed_flex_volume->driver = NULL;
    }
    free(io_k8s_api_policy_v1beta1_allowed_flex_volume);
}

cJSON *io_k8s_api_policy_v1beta1_allowed_flex_volume_convertToJSON(io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_allowed_flex_volume->driver
    if (!io_k8s_api_policy_v1beta1_allowed_flex_volume->driver) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "driver", io_k8s_api_policy_v1beta1_allowed_flex_volume->driver) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_allowed_flex_volumeJSON){

    io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume_local_var = NULL;

    // io_k8s_api_policy_v1beta1_allowed_flex_volume->driver
    cJSON *driver = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_allowed_flex_volumeJSON, "driver");
    if (!driver) {
        goto end;
    }

    
    if(!cJSON_IsString(driver))
    {
    goto end; //String
    }


    io_k8s_api_policy_v1beta1_allowed_flex_volume_local_var = io_k8s_api_policy_v1beta1_allowed_flex_volume_create (
        strdup(driver->valuestring)
        );

    return io_k8s_api_policy_v1beta1_allowed_flex_volume_local_var;
end:
    return NULL;

}
