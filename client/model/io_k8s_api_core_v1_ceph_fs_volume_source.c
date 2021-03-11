#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_ceph_fs_volume_source.h"



io_k8s_api_core_v1_ceph_fs_volume_source_t *io_k8s_api_core_v1_ceph_fs_volume_source_create(
    list_t *monitors,
    char *path,
    int read_only,
    char *secret_file,
    io_k8s_api_core_v1_local_object_reference_t *secret_ref,
    char *user
    ) {
    io_k8s_api_core_v1_ceph_fs_volume_source_t *io_k8s_api_core_v1_ceph_fs_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_ceph_fs_volume_source_t));
    if (!io_k8s_api_core_v1_ceph_fs_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_ceph_fs_volume_source_local_var->monitors = monitors;
    io_k8s_api_core_v1_ceph_fs_volume_source_local_var->path = path;
    io_k8s_api_core_v1_ceph_fs_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_ceph_fs_volume_source_local_var->secret_file = secret_file;
    io_k8s_api_core_v1_ceph_fs_volume_source_local_var->secret_ref = secret_ref;
    io_k8s_api_core_v1_ceph_fs_volume_source_local_var->user = user;

    return io_k8s_api_core_v1_ceph_fs_volume_source_local_var;
}


void io_k8s_api_core_v1_ceph_fs_volume_source_free(io_k8s_api_core_v1_ceph_fs_volume_source_t *io_k8s_api_core_v1_ceph_fs_volume_source) {
    if(NULL == io_k8s_api_core_v1_ceph_fs_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_ceph_fs_volume_source->monitors) {
        list_ForEach(listEntry, io_k8s_api_core_v1_ceph_fs_volume_source->monitors) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_ceph_fs_volume_source->monitors);
        io_k8s_api_core_v1_ceph_fs_volume_source->monitors = NULL;
    }
    if (io_k8s_api_core_v1_ceph_fs_volume_source->path) {
        free(io_k8s_api_core_v1_ceph_fs_volume_source->path);
        io_k8s_api_core_v1_ceph_fs_volume_source->path = NULL;
    }
    if (io_k8s_api_core_v1_ceph_fs_volume_source->secret_file) {
        free(io_k8s_api_core_v1_ceph_fs_volume_source->secret_file);
        io_k8s_api_core_v1_ceph_fs_volume_source->secret_file = NULL;
    }
    if (io_k8s_api_core_v1_ceph_fs_volume_source->secret_ref) {
        io_k8s_api_core_v1_local_object_reference_free(io_k8s_api_core_v1_ceph_fs_volume_source->secret_ref);
        io_k8s_api_core_v1_ceph_fs_volume_source->secret_ref = NULL;
    }
    if (io_k8s_api_core_v1_ceph_fs_volume_source->user) {
        free(io_k8s_api_core_v1_ceph_fs_volume_source->user);
        io_k8s_api_core_v1_ceph_fs_volume_source->user = NULL;
    }
    free(io_k8s_api_core_v1_ceph_fs_volume_source);
}

cJSON *io_k8s_api_core_v1_ceph_fs_volume_source_convertToJSON(io_k8s_api_core_v1_ceph_fs_volume_source_t *io_k8s_api_core_v1_ceph_fs_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_ceph_fs_volume_source->monitors
    if (!io_k8s_api_core_v1_ceph_fs_volume_source->monitors) {
        goto fail;
    }
    
    cJSON *monitors = cJSON_AddArrayToObject(item, "monitors");
    if(monitors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *monitorsListEntry;
    list_ForEach(monitorsListEntry, io_k8s_api_core_v1_ceph_fs_volume_source->monitors) {
    if(cJSON_AddStringToObject(monitors, "", (char*)monitorsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // io_k8s_api_core_v1_ceph_fs_volume_source->path
    if(io_k8s_api_core_v1_ceph_fs_volume_source->path) { 
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_core_v1_ceph_fs_volume_source->path) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_ceph_fs_volume_source->read_only
    if(io_k8s_api_core_v1_ceph_fs_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_ceph_fs_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_ceph_fs_volume_source->secret_file
    if(io_k8s_api_core_v1_ceph_fs_volume_source->secret_file) { 
    if(cJSON_AddStringToObject(item, "secretFile", io_k8s_api_core_v1_ceph_fs_volume_source->secret_file) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_ceph_fs_volume_source->secret_ref
    if(io_k8s_api_core_v1_ceph_fs_volume_source->secret_ref) { 
    cJSON *secret_ref_local_JSON = io_k8s_api_core_v1_local_object_reference_convertToJSON(io_k8s_api_core_v1_ceph_fs_volume_source->secret_ref);
    if(secret_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secretRef", secret_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_ceph_fs_volume_source->user
    if(io_k8s_api_core_v1_ceph_fs_volume_source->user) { 
    if(cJSON_AddStringToObject(item, "user", io_k8s_api_core_v1_ceph_fs_volume_source->user) == NULL) {
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

io_k8s_api_core_v1_ceph_fs_volume_source_t *io_k8s_api_core_v1_ceph_fs_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_ceph_fs_volume_sourceJSON){

    io_k8s_api_core_v1_ceph_fs_volume_source_t *io_k8s_api_core_v1_ceph_fs_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_ceph_fs_volume_source->monitors
    cJSON *monitors = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ceph_fs_volume_sourceJSON, "monitors");
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

    // io_k8s_api_core_v1_ceph_fs_volume_source->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ceph_fs_volume_sourceJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_ceph_fs_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ceph_fs_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_ceph_fs_volume_source->secret_file
    cJSON *secret_file = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ceph_fs_volume_sourceJSON, "secretFile");
    if (secret_file) { 
    if(!cJSON_IsString(secret_file))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_ceph_fs_volume_source->secret_ref
    cJSON *secret_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ceph_fs_volume_sourceJSON, "secretRef");
    io_k8s_api_core_v1_local_object_reference_t *secret_ref_local_nonprim = NULL;
    if (secret_ref) { 
    secret_ref_local_nonprim = io_k8s_api_core_v1_local_object_reference_parseFromJSON(secret_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_ceph_fs_volume_source->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ceph_fs_volume_sourceJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_ceph_fs_volume_source_local_var = io_k8s_api_core_v1_ceph_fs_volume_source_create (
        monitorsList,
        path ? strdup(path->valuestring) : NULL,
        read_only ? read_only->valueint : 0,
        secret_file ? strdup(secret_file->valuestring) : NULL,
        secret_ref ? secret_ref_local_nonprim : NULL,
        user ? strdup(user->valuestring) : NULL
        );

    return io_k8s_api_core_v1_ceph_fs_volume_source_local_var;
end:
    if (secret_ref_local_nonprim) {
        io_k8s_api_core_v1_local_object_reference_free(secret_ref_local_nonprim);
        secret_ref_local_nonprim = NULL;
    }
    return NULL;

}
