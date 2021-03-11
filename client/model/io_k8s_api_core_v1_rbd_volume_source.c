#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_rbd_volume_source.h"



io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source_create(
    char *fs_type,
    char *image,
    char *keyring,
    list_t *monitors,
    char *pool,
    int read_only,
    io_k8s_api_core_v1_local_object_reference_t *secret_ref,
    char *user
    ) {
    io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_rbd_volume_source_t));
    if (!io_k8s_api_core_v1_rbd_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_rbd_volume_source_local_var->fs_type = fs_type;
    io_k8s_api_core_v1_rbd_volume_source_local_var->image = image;
    io_k8s_api_core_v1_rbd_volume_source_local_var->keyring = keyring;
    io_k8s_api_core_v1_rbd_volume_source_local_var->monitors = monitors;
    io_k8s_api_core_v1_rbd_volume_source_local_var->pool = pool;
    io_k8s_api_core_v1_rbd_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_rbd_volume_source_local_var->secret_ref = secret_ref;
    io_k8s_api_core_v1_rbd_volume_source_local_var->user = user;

    return io_k8s_api_core_v1_rbd_volume_source_local_var;
}


void io_k8s_api_core_v1_rbd_volume_source_free(io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source) {
    if(NULL == io_k8s_api_core_v1_rbd_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_rbd_volume_source->fs_type) {
        free(io_k8s_api_core_v1_rbd_volume_source->fs_type);
        io_k8s_api_core_v1_rbd_volume_source->fs_type = NULL;
    }
    if (io_k8s_api_core_v1_rbd_volume_source->image) {
        free(io_k8s_api_core_v1_rbd_volume_source->image);
        io_k8s_api_core_v1_rbd_volume_source->image = NULL;
    }
    if (io_k8s_api_core_v1_rbd_volume_source->keyring) {
        free(io_k8s_api_core_v1_rbd_volume_source->keyring);
        io_k8s_api_core_v1_rbd_volume_source->keyring = NULL;
    }
    if (io_k8s_api_core_v1_rbd_volume_source->monitors) {
        list_ForEach(listEntry, io_k8s_api_core_v1_rbd_volume_source->monitors) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_rbd_volume_source->monitors);
        io_k8s_api_core_v1_rbd_volume_source->monitors = NULL;
    }
    if (io_k8s_api_core_v1_rbd_volume_source->pool) {
        free(io_k8s_api_core_v1_rbd_volume_source->pool);
        io_k8s_api_core_v1_rbd_volume_source->pool = NULL;
    }
    if (io_k8s_api_core_v1_rbd_volume_source->secret_ref) {
        io_k8s_api_core_v1_local_object_reference_free(io_k8s_api_core_v1_rbd_volume_source->secret_ref);
        io_k8s_api_core_v1_rbd_volume_source->secret_ref = NULL;
    }
    if (io_k8s_api_core_v1_rbd_volume_source->user) {
        free(io_k8s_api_core_v1_rbd_volume_source->user);
        io_k8s_api_core_v1_rbd_volume_source->user = NULL;
    }
    free(io_k8s_api_core_v1_rbd_volume_source);
}

cJSON *io_k8s_api_core_v1_rbd_volume_source_convertToJSON(io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_rbd_volume_source->fs_type
    if(io_k8s_api_core_v1_rbd_volume_source->fs_type) { 
    if(cJSON_AddStringToObject(item, "fsType", io_k8s_api_core_v1_rbd_volume_source->fs_type) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_rbd_volume_source->image
    if (!io_k8s_api_core_v1_rbd_volume_source->image) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "image", io_k8s_api_core_v1_rbd_volume_source->image) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_rbd_volume_source->keyring
    if(io_k8s_api_core_v1_rbd_volume_source->keyring) { 
    if(cJSON_AddStringToObject(item, "keyring", io_k8s_api_core_v1_rbd_volume_source->keyring) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_rbd_volume_source->monitors
    if (!io_k8s_api_core_v1_rbd_volume_source->monitors) {
        goto fail;
    }
    
    cJSON *monitors = cJSON_AddArrayToObject(item, "monitors");
    if(monitors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *monitorsListEntry;
    list_ForEach(monitorsListEntry, io_k8s_api_core_v1_rbd_volume_source->monitors) {
    if(cJSON_AddStringToObject(monitors, "", (char*)monitorsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_api_core_v1_rbd_volume_source->pool
    if(io_k8s_api_core_v1_rbd_volume_source->pool) { 
    if(cJSON_AddStringToObject(item, "pool", io_k8s_api_core_v1_rbd_volume_source->pool) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_rbd_volume_source->read_only
    if(io_k8s_api_core_v1_rbd_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_rbd_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_rbd_volume_source->secret_ref
    if(io_k8s_api_core_v1_rbd_volume_source->secret_ref) { 
    cJSON *secret_ref_local_JSON = io_k8s_api_core_v1_local_object_reference_convertToJSON(io_k8s_api_core_v1_rbd_volume_source->secret_ref);
    if(secret_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secretRef", secret_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_rbd_volume_source->user
    if(io_k8s_api_core_v1_rbd_volume_source->user) { 
    if(cJSON_AddStringToObject(item, "user", io_k8s_api_core_v1_rbd_volume_source->user) == NULL) {
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

io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_rbd_volume_sourceJSON){

    io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_rbd_volume_source->fs_type
    cJSON *fs_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_rbd_volume_sourceJSON, "fsType");
    if (fs_type) { 
    if(!cJSON_IsString(fs_type))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_rbd_volume_source->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_rbd_volume_sourceJSON, "image");
    if (!image) {
        goto end;
    }

    
    if(!cJSON_IsString(image))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_rbd_volume_source->keyring
    cJSON *keyring = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_rbd_volume_sourceJSON, "keyring");
    if (keyring) { 
    if(!cJSON_IsString(keyring))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_rbd_volume_source->monitors
    cJSON *monitors = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_rbd_volume_sourceJSON, "monitors");
    if (!monitors) {
        goto end;
    }

    list_t *monitorsList;
    
    cJSON *monitors_local;
    if(!cJSON_IsArray(monitors)) {
        goto end;//primitive container
    }
    monitorsList = list_create();

    cJSON_ArrayForEach(monitors_local, monitors)
    {
        if(!cJSON_IsString(monitors_local))
        {
            goto end;
        }
        list_addElement(monitorsList , strdup(monitors_local->valuestring));
    }

    // io_k8s_api_core_v1_rbd_volume_source->pool
    cJSON *pool = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_rbd_volume_sourceJSON, "pool");
    if (pool) { 
    if(!cJSON_IsString(pool))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_rbd_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_rbd_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_rbd_volume_source->secret_ref
    cJSON *secret_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_rbd_volume_sourceJSON, "secretRef");
    io_k8s_api_core_v1_local_object_reference_t *secret_ref_local_nonprim = NULL;
    if (secret_ref) { 
    secret_ref_local_nonprim = io_k8s_api_core_v1_local_object_reference_parseFromJSON(secret_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_rbd_volume_source->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_rbd_volume_sourceJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_rbd_volume_source_local_var = io_k8s_api_core_v1_rbd_volume_source_create (
        fs_type ? strdup(fs_type->valuestring) : NULL,
        strdup(image->valuestring),
        keyring ? strdup(keyring->valuestring) : NULL,
        monitorsList,
        pool ? strdup(pool->valuestring) : NULL,
        read_only ? read_only->valueint : 0,
        secret_ref ? secret_ref_local_nonprim : NULL,
        user ? strdup(user->valuestring) : NULL
        );

    return io_k8s_api_core_v1_rbd_volume_source_local_var;
end:
    if (secret_ref_local_nonprim) {
        io_k8s_api_core_v1_local_object_reference_free(secret_ref_local_nonprim);
        secret_ref_local_nonprim = NULL;
    }
    return NULL;

}
