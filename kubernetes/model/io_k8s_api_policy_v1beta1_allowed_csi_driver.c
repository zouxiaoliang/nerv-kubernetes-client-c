#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_allowed_csi_driver.h"



io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver_create(
    char *name
    ) {
    io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_allowed_csi_driver_t));
    if (!io_k8s_api_policy_v1beta1_allowed_csi_driver_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_allowed_csi_driver_local_var->name = name;

    return io_k8s_api_policy_v1beta1_allowed_csi_driver_local_var;
}


void io_k8s_api_policy_v1beta1_allowed_csi_driver_free(io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver) {
    if(NULL == io_k8s_api_policy_v1beta1_allowed_csi_driver){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_policy_v1beta1_allowed_csi_driver->name) {
        free(io_k8s_api_policy_v1beta1_allowed_csi_driver->name);
        io_k8s_api_policy_v1beta1_allowed_csi_driver->name = NULL;
    }
    free(io_k8s_api_policy_v1beta1_allowed_csi_driver);
}

cJSON *io_k8s_api_policy_v1beta1_allowed_csi_driver_convertToJSON(io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_allowed_csi_driver->name
    if (!io_k8s_api_policy_v1beta1_allowed_csi_driver->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_policy_v1beta1_allowed_csi_driver->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_allowed_csi_driverJSON){

    io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver_local_var = NULL;

    // io_k8s_api_policy_v1beta1_allowed_csi_driver->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_allowed_csi_driverJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    io_k8s_api_policy_v1beta1_allowed_csi_driver_local_var = io_k8s_api_policy_v1beta1_allowed_csi_driver_create (
        strdup(name->valuestring)
        );

    return io_k8s_api_policy_v1beta1_allowed_csi_driver_local_var;
end:
    return NULL;

}
