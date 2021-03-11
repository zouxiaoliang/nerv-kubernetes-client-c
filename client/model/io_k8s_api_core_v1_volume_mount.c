#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_volume_mount.h"



io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount_create(
    char *mount_path,
    char *mount_propagation,
    char *name,
    int read_only,
    char *sub_path,
    char *sub_path_expr
    ) {
    io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount_local_var = malloc(sizeof(io_k8s_api_core_v1_volume_mount_t));
    if (!io_k8s_api_core_v1_volume_mount_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_volume_mount_local_var->mount_path = mount_path;
    io_k8s_api_core_v1_volume_mount_local_var->mount_propagation = mount_propagation;
    io_k8s_api_core_v1_volume_mount_local_var->name = name;
    io_k8s_api_core_v1_volume_mount_local_var->read_only = read_only;
    io_k8s_api_core_v1_volume_mount_local_var->sub_path = sub_path;
    io_k8s_api_core_v1_volume_mount_local_var->sub_path_expr = sub_path_expr;

    return io_k8s_api_core_v1_volume_mount_local_var;
}


void io_k8s_api_core_v1_volume_mount_free(io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount) {
    if(NULL == io_k8s_api_core_v1_volume_mount){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_volume_mount->mount_path) {
        free(io_k8s_api_core_v1_volume_mount->mount_path);
        io_k8s_api_core_v1_volume_mount->mount_path = NULL;
    }
    if (io_k8s_api_core_v1_volume_mount->mount_propagation) {
        free(io_k8s_api_core_v1_volume_mount->mount_propagation);
        io_k8s_api_core_v1_volume_mount->mount_propagation = NULL;
    }
    if (io_k8s_api_core_v1_volume_mount->name) {
        free(io_k8s_api_core_v1_volume_mount->name);
        io_k8s_api_core_v1_volume_mount->name = NULL;
    }
    if (io_k8s_api_core_v1_volume_mount->sub_path) {
        free(io_k8s_api_core_v1_volume_mount->sub_path);
        io_k8s_api_core_v1_volume_mount->sub_path = NULL;
    }
    if (io_k8s_api_core_v1_volume_mount->sub_path_expr) {
        free(io_k8s_api_core_v1_volume_mount->sub_path_expr);
        io_k8s_api_core_v1_volume_mount->sub_path_expr = NULL;
    }
    free(io_k8s_api_core_v1_volume_mount);
}

cJSON *io_k8s_api_core_v1_volume_mount_convertToJSON(io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_volume_mount->mount_path
    if (!io_k8s_api_core_v1_volume_mount->mount_path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "mountPath", io_k8s_api_core_v1_volume_mount->mount_path) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_volume_mount->mount_propagation
    if(io_k8s_api_core_v1_volume_mount->mount_propagation) { 
    if(cJSON_AddStringToObject(item, "mountPropagation", io_k8s_api_core_v1_volume_mount->mount_propagation) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_volume_mount->name
    if (!io_k8s_api_core_v1_volume_mount->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_volume_mount->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_volume_mount->read_only
    if(io_k8s_api_core_v1_volume_mount->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_volume_mount->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_volume_mount->sub_path
    if(io_k8s_api_core_v1_volume_mount->sub_path) { 
    if(cJSON_AddStringToObject(item, "subPath", io_k8s_api_core_v1_volume_mount->sub_path) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_volume_mount->sub_path_expr
    if(io_k8s_api_core_v1_volume_mount->sub_path_expr) { 
    if(cJSON_AddStringToObject(item, "subPathExpr", io_k8s_api_core_v1_volume_mount->sub_path_expr) == NULL) {
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

io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount_parseFromJSON(cJSON *io_k8s_api_core_v1_volume_mountJSON){

    io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount_local_var = NULL;

    // io_k8s_api_core_v1_volume_mount->mount_path
    cJSON *mount_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_mountJSON, "mountPath");
    if (!mount_path) {
        goto end;
    }

    
    if(!cJSON_IsString(mount_path))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_volume_mount->mount_propagation
    cJSON *mount_propagation = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_mountJSON, "mountPropagation");
    if (mount_propagation) { 
    if(!cJSON_IsString(mount_propagation))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_volume_mount->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_mountJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_volume_mount->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_mountJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_volume_mount->sub_path
    cJSON *sub_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_mountJSON, "subPath");
    if (sub_path) { 
    if(!cJSON_IsString(sub_path))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_volume_mount->sub_path_expr
    cJSON *sub_path_expr = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_mountJSON, "subPathExpr");
    if (sub_path_expr) { 
    if(!cJSON_IsString(sub_path_expr))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_volume_mount_local_var = io_k8s_api_core_v1_volume_mount_create (
        strdup(mount_path->valuestring),
        mount_propagation ? strdup(mount_propagation->valuestring) : NULL,
        strdup(name->valuestring),
        read_only ? read_only->valueint : 0,
        sub_path ? strdup(sub_path->valuestring) : NULL,
        sub_path_expr ? strdup(sub_path_expr->valuestring) : NULL
        );

    return io_k8s_api_core_v1_volume_mount_local_var;
end:
    return NULL;

}
