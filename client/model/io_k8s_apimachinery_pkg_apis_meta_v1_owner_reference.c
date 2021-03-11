#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference.h"



io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_t *io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_create(
    char *api_version,
    int block_owner_deletion,
    int controller,
    char *kind,
    char *name,
    char *uid
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_t *io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var->api_version = api_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var->block_owner_deletion = block_owner_deletion;
    io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var->controller = controller;
    io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var->kind = kind;
    io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var->name = name;
    io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var->uid = uid;

    return io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_free(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_t *io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->api_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->api_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->api_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->kind) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->kind);
        io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->kind = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->name) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->name);
        io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->name = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->uid) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->uid);
        io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->uid = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_t *io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->api_version
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->api_version) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->api_version) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->block_owner_deletion
    if(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->block_owner_deletion) { 
    if(cJSON_AddBoolToObject(item, "blockOwnerDeletion", io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->block_owner_deletion) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->controller
    if(io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->controller) { 
    if(cJSON_AddBoolToObject(item, "controller", io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->controller) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->kind
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->kind) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->kind) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->name
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->uid
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->uid) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "uid", io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->uid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_t *io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_owner_referenceJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_t *io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_owner_referenceJSON, "apiVersion");
    if (!api_version) {
        goto end;
    }

    
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->block_owner_deletion
    cJSON *block_owner_deletion = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_owner_referenceJSON, "blockOwnerDeletion");
    if (block_owner_deletion) { 
    if(!cJSON_IsBool(block_owner_deletion))
    {
    goto end; //Bool
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->controller
    cJSON *controller = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_owner_referenceJSON, "controller");
    if (controller) { 
    if(!cJSON_IsBool(controller))
    {
    goto end; //Bool
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_owner_referenceJSON, "kind");
    if (!kind) {
        goto end;
    }

    
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_owner_referenceJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_owner_referenceJSON, "uid");
    if (!uid) {
        goto end;
    }

    
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_create (
        strdup(api_version->valuestring),
        block_owner_deletion ? block_owner_deletion->valueint : 0,
        controller ? controller->valueint : 0,
        strdup(kind->valuestring),
        strdup(name->valuestring),
        strdup(uid->valuestring)
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_owner_reference_local_var;
end:
    return NULL;

}
