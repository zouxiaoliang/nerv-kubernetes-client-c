#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_rbac_v1beta1_role_ref.h"



io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref_create(
    char *api_group,
    char *kind,
    char *name
    ) {
    io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref_local_var = malloc(sizeof(io_k8s_api_rbac_v1beta1_role_ref_t));
    if (!io_k8s_api_rbac_v1beta1_role_ref_local_var) {
        return NULL;
    }
    io_k8s_api_rbac_v1beta1_role_ref_local_var->api_group = api_group;
    io_k8s_api_rbac_v1beta1_role_ref_local_var->kind = kind;
    io_k8s_api_rbac_v1beta1_role_ref_local_var->name = name;

    return io_k8s_api_rbac_v1beta1_role_ref_local_var;
}


void io_k8s_api_rbac_v1beta1_role_ref_free(io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref) {
    if(NULL == io_k8s_api_rbac_v1beta1_role_ref){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_rbac_v1beta1_role_ref->api_group) {
        free(io_k8s_api_rbac_v1beta1_role_ref->api_group);
        io_k8s_api_rbac_v1beta1_role_ref->api_group = NULL;
    }
    if (io_k8s_api_rbac_v1beta1_role_ref->kind) {
        free(io_k8s_api_rbac_v1beta1_role_ref->kind);
        io_k8s_api_rbac_v1beta1_role_ref->kind = NULL;
    }
    if (io_k8s_api_rbac_v1beta1_role_ref->name) {
        free(io_k8s_api_rbac_v1beta1_role_ref->name);
        io_k8s_api_rbac_v1beta1_role_ref->name = NULL;
    }
    free(io_k8s_api_rbac_v1beta1_role_ref);
}

cJSON *io_k8s_api_rbac_v1beta1_role_ref_convertToJSON(io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_rbac_v1beta1_role_ref->api_group
    if (!io_k8s_api_rbac_v1beta1_role_ref->api_group) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "apiGroup", io_k8s_api_rbac_v1beta1_role_ref->api_group) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_rbac_v1beta1_role_ref->kind
    if (!io_k8s_api_rbac_v1beta1_role_ref->kind) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_rbac_v1beta1_role_ref->kind) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_rbac_v1beta1_role_ref->name
    if (!io_k8s_api_rbac_v1beta1_role_ref->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_rbac_v1beta1_role_ref->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref_parseFromJSON(cJSON *io_k8s_api_rbac_v1beta1_role_refJSON){

    io_k8s_api_rbac_v1beta1_role_ref_t *io_k8s_api_rbac_v1beta1_role_ref_local_var = NULL;

    // io_k8s_api_rbac_v1beta1_role_ref->api_group
    cJSON *api_group = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1beta1_role_refJSON, "apiGroup");
    if (!api_group) {
        goto end;
    }

    
    if(!cJSON_IsString(api_group))
    {
    goto end; //String
    }

    // io_k8s_api_rbac_v1beta1_role_ref->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1beta1_role_refJSON, "kind");
    if (!kind) {
        goto end;
    }

    
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }

    // io_k8s_api_rbac_v1beta1_role_ref->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1beta1_role_refJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    io_k8s_api_rbac_v1beta1_role_ref_local_var = io_k8s_api_rbac_v1beta1_role_ref_create (
        strdup(api_group->valuestring),
        strdup(kind->valuestring),
        strdup(name->valuestring)
        );

    return io_k8s_api_rbac_v1beta1_role_ref_local_var;
end:
    return NULL;

}
