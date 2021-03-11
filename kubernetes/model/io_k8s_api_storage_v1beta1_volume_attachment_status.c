#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1beta1_volume_attachment_status.h"



io_k8s_api_storage_v1beta1_volume_attachment_status_t *io_k8s_api_storage_v1beta1_volume_attachment_status_create(
    io_k8s_api_storage_v1beta1_volume_error_t *attach_error,
    int attached,
    list_t* attachment_metadata,
    io_k8s_api_storage_v1beta1_volume_error_t *detach_error
    ) {
    io_k8s_api_storage_v1beta1_volume_attachment_status_t *io_k8s_api_storage_v1beta1_volume_attachment_status_local_var = malloc(sizeof(io_k8s_api_storage_v1beta1_volume_attachment_status_t));
    if (!io_k8s_api_storage_v1beta1_volume_attachment_status_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1beta1_volume_attachment_status_local_var->attach_error = attach_error;
    io_k8s_api_storage_v1beta1_volume_attachment_status_local_var->attached = attached;
    io_k8s_api_storage_v1beta1_volume_attachment_status_local_var->attachment_metadata = attachment_metadata;
    io_k8s_api_storage_v1beta1_volume_attachment_status_local_var->detach_error = detach_error;

    return io_k8s_api_storage_v1beta1_volume_attachment_status_local_var;
}


void io_k8s_api_storage_v1beta1_volume_attachment_status_free(io_k8s_api_storage_v1beta1_volume_attachment_status_t *io_k8s_api_storage_v1beta1_volume_attachment_status) {
    if(NULL == io_k8s_api_storage_v1beta1_volume_attachment_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1beta1_volume_attachment_status->attach_error) {
        io_k8s_api_storage_v1beta1_volume_error_free(io_k8s_api_storage_v1beta1_volume_attachment_status->attach_error);
        io_k8s_api_storage_v1beta1_volume_attachment_status->attach_error = NULL;
    }
    if (io_k8s_api_storage_v1beta1_volume_attachment_status->attachment_metadata) {
        list_ForEach(listEntry, io_k8s_api_storage_v1beta1_volume_attachment_status->attachment_metadata) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_storage_v1beta1_volume_attachment_status->attachment_metadata);
        io_k8s_api_storage_v1beta1_volume_attachment_status->attachment_metadata = NULL;
    }
    if (io_k8s_api_storage_v1beta1_volume_attachment_status->detach_error) {
        io_k8s_api_storage_v1beta1_volume_error_free(io_k8s_api_storage_v1beta1_volume_attachment_status->detach_error);
        io_k8s_api_storage_v1beta1_volume_attachment_status->detach_error = NULL;
    }
    free(io_k8s_api_storage_v1beta1_volume_attachment_status);
}

cJSON *io_k8s_api_storage_v1beta1_volume_attachment_status_convertToJSON(io_k8s_api_storage_v1beta1_volume_attachment_status_t *io_k8s_api_storage_v1beta1_volume_attachment_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1beta1_volume_attachment_status->attach_error
    if(io_k8s_api_storage_v1beta1_volume_attachment_status->attach_error) { 
    cJSON *attach_error_local_JSON = io_k8s_api_storage_v1beta1_volume_error_convertToJSON(io_k8s_api_storage_v1beta1_volume_attachment_status->attach_error);
    if(attach_error_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "attachError", attach_error_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_storage_v1beta1_volume_attachment_status->attached
    if (!io_k8s_api_storage_v1beta1_volume_attachment_status->attached) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "attached", io_k8s_api_storage_v1beta1_volume_attachment_status->attached) == NULL) {
    goto fail; //Bool
    }


    // io_k8s_api_storage_v1beta1_volume_attachment_status->attachment_metadata
    if(io_k8s_api_storage_v1beta1_volume_attachment_status->attachment_metadata) { 
    cJSON *attachment_metadata = cJSON_AddObjectToObject(item, "attachmentMetadata");
    if(attachment_metadata == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = attachment_metadata;
    listEntry_t *attachment_metadataListEntry;
    if (io_k8s_api_storage_v1beta1_volume_attachment_status->attachment_metadata) {
    list_ForEach(attachment_metadataListEntry, io_k8s_api_storage_v1beta1_volume_attachment_status->attachment_metadata) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)attachment_metadataListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_storage_v1beta1_volume_attachment_status->detach_error
    if(io_k8s_api_storage_v1beta1_volume_attachment_status->detach_error) { 
    cJSON *detach_error_local_JSON = io_k8s_api_storage_v1beta1_volume_error_convertToJSON(io_k8s_api_storage_v1beta1_volume_attachment_status->detach_error);
    if(detach_error_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "detachError", detach_error_local_JSON);
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

io_k8s_api_storage_v1beta1_volume_attachment_status_t *io_k8s_api_storage_v1beta1_volume_attachment_status_parseFromJSON(cJSON *io_k8s_api_storage_v1beta1_volume_attachment_statusJSON){

    io_k8s_api_storage_v1beta1_volume_attachment_status_t *io_k8s_api_storage_v1beta1_volume_attachment_status_local_var = NULL;

    // io_k8s_api_storage_v1beta1_volume_attachment_status->attach_error
    cJSON *attach_error = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_volume_attachment_statusJSON, "attachError");
    io_k8s_api_storage_v1beta1_volume_error_t *attach_error_local_nonprim = NULL;
    if (attach_error) { 
    attach_error_local_nonprim = io_k8s_api_storage_v1beta1_volume_error_parseFromJSON(attach_error); //nonprimitive
    }

    // io_k8s_api_storage_v1beta1_volume_attachment_status->attached
    cJSON *attached = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_volume_attachment_statusJSON, "attached");
    if (!attached) {
        goto end;
    }

    
    if(!cJSON_IsBool(attached))
    {
    goto end; //Bool
    }

    // io_k8s_api_storage_v1beta1_volume_attachment_status->attachment_metadata
    cJSON *attachment_metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_volume_attachment_statusJSON, "attachmentMetadata");
    list_t *attachment_metadataList;
    if (attachment_metadata) { 
    cJSON *attachment_metadata_local_map;
    if(!cJSON_IsObject(attachment_metadata)) {
        goto end;//primitive map container
    }
    attachment_metadataList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(attachment_metadata_local_map, attachment_metadata)
    {
		cJSON *localMapObject = attachment_metadata_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(attachment_metadataList , localMapKeyPair);
    }
    }

    // io_k8s_api_storage_v1beta1_volume_attachment_status->detach_error
    cJSON *detach_error = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_volume_attachment_statusJSON, "detachError");
    io_k8s_api_storage_v1beta1_volume_error_t *detach_error_local_nonprim = NULL;
    if (detach_error) { 
    detach_error_local_nonprim = io_k8s_api_storage_v1beta1_volume_error_parseFromJSON(detach_error); //nonprimitive
    }


    io_k8s_api_storage_v1beta1_volume_attachment_status_local_var = io_k8s_api_storage_v1beta1_volume_attachment_status_create (
        attach_error ? attach_error_local_nonprim : NULL,
        attached->valueint,
        attachment_metadata ? attachment_metadataList : NULL,
        detach_error ? detach_error_local_nonprim : NULL
        );

    return io_k8s_api_storage_v1beta1_volume_attachment_status_local_var;
end:
    if (attach_error_local_nonprim) {
        io_k8s_api_storage_v1beta1_volume_error_free(attach_error_local_nonprim);
        attach_error_local_nonprim = NULL;
    }
    if (detach_error_local_nonprim) {
        io_k8s_api_storage_v1beta1_volume_error_free(detach_error_local_nonprim);
        detach_error_local_nonprim = NULL;
    }
    return NULL;

}
