#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1beta1_csi_driver_spec.h"



io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec_create(
    int attach_required,
    char *fs_group_policy,
    int pod_info_on_mount,
    int requires_republish,
    int storage_capacity,
    list_t *token_requests,
    list_t *volume_lifecycle_modes
    ) {
    io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec_local_var = malloc(sizeof(io_k8s_api_storage_v1beta1_csi_driver_spec_t));
    if (!io_k8s_api_storage_v1beta1_csi_driver_spec_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1beta1_csi_driver_spec_local_var->attach_required = attach_required;
    io_k8s_api_storage_v1beta1_csi_driver_spec_local_var->fs_group_policy = fs_group_policy;
    io_k8s_api_storage_v1beta1_csi_driver_spec_local_var->pod_info_on_mount = pod_info_on_mount;
    io_k8s_api_storage_v1beta1_csi_driver_spec_local_var->requires_republish = requires_republish;
    io_k8s_api_storage_v1beta1_csi_driver_spec_local_var->storage_capacity = storage_capacity;
    io_k8s_api_storage_v1beta1_csi_driver_spec_local_var->token_requests = token_requests;
    io_k8s_api_storage_v1beta1_csi_driver_spec_local_var->volume_lifecycle_modes = volume_lifecycle_modes;

    return io_k8s_api_storage_v1beta1_csi_driver_spec_local_var;
}


void io_k8s_api_storage_v1beta1_csi_driver_spec_free(io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec) {
    if(NULL == io_k8s_api_storage_v1beta1_csi_driver_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1beta1_csi_driver_spec->fs_group_policy) {
        free(io_k8s_api_storage_v1beta1_csi_driver_spec->fs_group_policy);
        io_k8s_api_storage_v1beta1_csi_driver_spec->fs_group_policy = NULL;
    }
    if (io_k8s_api_storage_v1beta1_csi_driver_spec->token_requests) {
        list_ForEach(listEntry, io_k8s_api_storage_v1beta1_csi_driver_spec->token_requests) {
            io_k8s_api_storage_v1beta1_token_request_free(listEntry->data);
        }
        list_free(io_k8s_api_storage_v1beta1_csi_driver_spec->token_requests);
        io_k8s_api_storage_v1beta1_csi_driver_spec->token_requests = NULL;
    }
    if (io_k8s_api_storage_v1beta1_csi_driver_spec->volume_lifecycle_modes) {
        list_ForEach(listEntry, io_k8s_api_storage_v1beta1_csi_driver_spec->volume_lifecycle_modes) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_storage_v1beta1_csi_driver_spec->volume_lifecycle_modes);
        io_k8s_api_storage_v1beta1_csi_driver_spec->volume_lifecycle_modes = NULL;
    }
    free(io_k8s_api_storage_v1beta1_csi_driver_spec);
}

cJSON *io_k8s_api_storage_v1beta1_csi_driver_spec_convertToJSON(io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1beta1_csi_driver_spec->attach_required
    if(io_k8s_api_storage_v1beta1_csi_driver_spec->attach_required) { 
    if(cJSON_AddBoolToObject(item, "attachRequired", io_k8s_api_storage_v1beta1_csi_driver_spec->attach_required) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_storage_v1beta1_csi_driver_spec->fs_group_policy
    if(io_k8s_api_storage_v1beta1_csi_driver_spec->fs_group_policy) { 
    if(cJSON_AddStringToObject(item, "fsGroupPolicy", io_k8s_api_storage_v1beta1_csi_driver_spec->fs_group_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1beta1_csi_driver_spec->pod_info_on_mount
    if(io_k8s_api_storage_v1beta1_csi_driver_spec->pod_info_on_mount) { 
    if(cJSON_AddBoolToObject(item, "podInfoOnMount", io_k8s_api_storage_v1beta1_csi_driver_spec->pod_info_on_mount) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_storage_v1beta1_csi_driver_spec->requires_republish
    if(io_k8s_api_storage_v1beta1_csi_driver_spec->requires_republish) { 
    if(cJSON_AddBoolToObject(item, "requiresRepublish", io_k8s_api_storage_v1beta1_csi_driver_spec->requires_republish) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_storage_v1beta1_csi_driver_spec->storage_capacity
    if(io_k8s_api_storage_v1beta1_csi_driver_spec->storage_capacity) { 
    if(cJSON_AddBoolToObject(item, "storageCapacity", io_k8s_api_storage_v1beta1_csi_driver_spec->storage_capacity) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_storage_v1beta1_csi_driver_spec->token_requests
    if(io_k8s_api_storage_v1beta1_csi_driver_spec->token_requests) { 
    cJSON *token_requests = cJSON_AddArrayToObject(item, "tokenRequests");
    if(token_requests == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *token_requestsListEntry;
    if (io_k8s_api_storage_v1beta1_csi_driver_spec->token_requests) {
    list_ForEach(token_requestsListEntry, io_k8s_api_storage_v1beta1_csi_driver_spec->token_requests) {
    cJSON *itemLocal = io_k8s_api_storage_v1beta1_token_request_convertToJSON(token_requestsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(token_requests, itemLocal);
    }
    }
     } 


    // io_k8s_api_storage_v1beta1_csi_driver_spec->volume_lifecycle_modes
    if(io_k8s_api_storage_v1beta1_csi_driver_spec->volume_lifecycle_modes) { 
    cJSON *volume_lifecycle_modes = cJSON_AddArrayToObject(item, "volumeLifecycleModes");
    if(volume_lifecycle_modes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *volume_lifecycle_modesListEntry;
    list_ForEach(volume_lifecycle_modesListEntry, io_k8s_api_storage_v1beta1_csi_driver_spec->volume_lifecycle_modes) {
    if(cJSON_AddStringToObject(volume_lifecycle_modes, "", (char*)volume_lifecycle_modesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec_parseFromJSON(cJSON *io_k8s_api_storage_v1beta1_csi_driver_specJSON){

    io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec_local_var = NULL;

    // io_k8s_api_storage_v1beta1_csi_driver_spec->attach_required
    cJSON *attach_required = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_driver_specJSON, "attachRequired");
    if (attach_required) { 
    if(!cJSON_IsBool(attach_required))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_storage_v1beta1_csi_driver_spec->fs_group_policy
    cJSON *fs_group_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_driver_specJSON, "fsGroupPolicy");
    if (fs_group_policy) { 
    if(!cJSON_IsString(fs_group_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1beta1_csi_driver_spec->pod_info_on_mount
    cJSON *pod_info_on_mount = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_driver_specJSON, "podInfoOnMount");
    if (pod_info_on_mount) { 
    if(!cJSON_IsBool(pod_info_on_mount))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_storage_v1beta1_csi_driver_spec->requires_republish
    cJSON *requires_republish = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_driver_specJSON, "requiresRepublish");
    if (requires_republish) { 
    if(!cJSON_IsBool(requires_republish))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_storage_v1beta1_csi_driver_spec->storage_capacity
    cJSON *storage_capacity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_driver_specJSON, "storageCapacity");
    if (storage_capacity) { 
    if(!cJSON_IsBool(storage_capacity))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_storage_v1beta1_csi_driver_spec->token_requests
    cJSON *token_requests = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_driver_specJSON, "tokenRequests");
    list_t *token_requestsList;
    if (token_requests) { 
    cJSON *token_requests_local_nonprimitive;
    if(!cJSON_IsArray(token_requests)){
        goto end; //nonprimitive container
    }

    token_requestsList = list_create();

    cJSON_ArrayForEach(token_requests_local_nonprimitive,token_requests )
    {
        if(!cJSON_IsObject(token_requests_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_storage_v1beta1_token_request_t *token_requestsItem = io_k8s_api_storage_v1beta1_token_request_parseFromJSON(token_requests_local_nonprimitive);

        list_addElement(token_requestsList, token_requestsItem);
    }
    }

    // io_k8s_api_storage_v1beta1_csi_driver_spec->volume_lifecycle_modes
    cJSON *volume_lifecycle_modes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_driver_specJSON, "volumeLifecycleModes");
    list_t *volume_lifecycle_modesList;
    if (volume_lifecycle_modes) { 
    cJSON *volume_lifecycle_modes_local;
    if(!cJSON_IsArray(volume_lifecycle_modes)) {
        goto end;//primitive container
    }
    volume_lifecycle_modesList = list_create();

    cJSON_ArrayForEach(volume_lifecycle_modes_local, volume_lifecycle_modes)
    {
        if(!cJSON_IsString(volume_lifecycle_modes_local))
        {
            goto end;
        }
        list_addElement(volume_lifecycle_modesList , strdup(volume_lifecycle_modes_local->valuestring));
    }
    }


    io_k8s_api_storage_v1beta1_csi_driver_spec_local_var = io_k8s_api_storage_v1beta1_csi_driver_spec_create (
        attach_required ? attach_required->valueint : 0,
        fs_group_policy ? strdup(fs_group_policy->valuestring) : NULL,
        pod_info_on_mount ? pod_info_on_mount->valueint : 0,
        requires_republish ? requires_republish->valueint : 0,
        storage_capacity ? storage_capacity->valueint : 0,
        token_requests ? token_requestsList : NULL,
        volume_lifecycle_modes ? volume_lifecycle_modesList : NULL
        );

    return io_k8s_api_storage_v1beta1_csi_driver_spec_local_var;
end:
    return NULL;

}
