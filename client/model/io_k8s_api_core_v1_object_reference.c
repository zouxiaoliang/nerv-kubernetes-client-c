#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_object_reference.h"



io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference_create(
    char *api_version,
    char *field_path,
    char *kind,
    char *name,
    char *_namespace,
    char *resource_version,
    char *uid
    ) {
    io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference_local_var = malloc(sizeof(io_k8s_api_core_v1_object_reference_t));
    if (!io_k8s_api_core_v1_object_reference_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_object_reference_local_var->api_version = api_version;
    io_k8s_api_core_v1_object_reference_local_var->field_path = field_path;
    io_k8s_api_core_v1_object_reference_local_var->kind = kind;
    io_k8s_api_core_v1_object_reference_local_var->name = name;
    io_k8s_api_core_v1_object_reference_local_var->_namespace = _namespace;
    io_k8s_api_core_v1_object_reference_local_var->resource_version = resource_version;
    io_k8s_api_core_v1_object_reference_local_var->uid = uid;

    return io_k8s_api_core_v1_object_reference_local_var;
}


void io_k8s_api_core_v1_object_reference_free(io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference) {
    if(NULL == io_k8s_api_core_v1_object_reference){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_object_reference->api_version) {
        free(io_k8s_api_core_v1_object_reference->api_version);
        io_k8s_api_core_v1_object_reference->api_version = NULL;
    }
    if (io_k8s_api_core_v1_object_reference->field_path) {
        free(io_k8s_api_core_v1_object_reference->field_path);
        io_k8s_api_core_v1_object_reference->field_path = NULL;
    }
    if (io_k8s_api_core_v1_object_reference->kind) {
        free(io_k8s_api_core_v1_object_reference->kind);
        io_k8s_api_core_v1_object_reference->kind = NULL;
    }
    if (io_k8s_api_core_v1_object_reference->name) {
        free(io_k8s_api_core_v1_object_reference->name);
        io_k8s_api_core_v1_object_reference->name = NULL;
    }
    if (io_k8s_api_core_v1_object_reference->_namespace) {
        free(io_k8s_api_core_v1_object_reference->_namespace);
        io_k8s_api_core_v1_object_reference->_namespace = NULL;
    }
    if (io_k8s_api_core_v1_object_reference->resource_version) {
        free(io_k8s_api_core_v1_object_reference->resource_version);
        io_k8s_api_core_v1_object_reference->resource_version = NULL;
    }
    if (io_k8s_api_core_v1_object_reference->uid) {
        free(io_k8s_api_core_v1_object_reference->uid);
        io_k8s_api_core_v1_object_reference->uid = NULL;
    }
    free(io_k8s_api_core_v1_object_reference);
}

cJSON *io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_object_reference->api_version
    if(io_k8s_api_core_v1_object_reference->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_object_reference->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_object_reference->field_path
    if(io_k8s_api_core_v1_object_reference->field_path) { 
    if(cJSON_AddStringToObject(item, "fieldPath", io_k8s_api_core_v1_object_reference->field_path) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_object_reference->kind
    if(io_k8s_api_core_v1_object_reference->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_object_reference->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_object_reference->name
    if(io_k8s_api_core_v1_object_reference->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_object_reference->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_object_reference->_namespace
    if(io_k8s_api_core_v1_object_reference->_namespace) { 
    if(cJSON_AddStringToObject(item, "namespace", io_k8s_api_core_v1_object_reference->_namespace) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_object_reference->resource_version
    if(io_k8s_api_core_v1_object_reference->resource_version) { 
    if(cJSON_AddStringToObject(item, "resourceVersion", io_k8s_api_core_v1_object_reference->resource_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_object_reference->uid
    if(io_k8s_api_core_v1_object_reference->uid) { 
    if(cJSON_AddStringToObject(item, "uid", io_k8s_api_core_v1_object_reference->uid) == NULL) {
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

io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference_parseFromJSON(cJSON *io_k8s_api_core_v1_object_referenceJSON){

    io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference_local_var = NULL;

    // io_k8s_api_core_v1_object_reference->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_object_referenceJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_object_reference->field_path
    cJSON *field_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_object_referenceJSON, "fieldPath");
    if (field_path) { 
    if(!cJSON_IsString(field_path))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_object_reference->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_object_referenceJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_object_reference->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_object_referenceJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_object_reference->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_object_referenceJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_object_reference->resource_version
    cJSON *resource_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_object_referenceJSON, "resourceVersion");
    if (resource_version) { 
    if(!cJSON_IsString(resource_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_object_reference->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_object_referenceJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_object_reference_local_var = io_k8s_api_core_v1_object_reference_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        field_path ? strdup(field_path->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        _namespace ? strdup(_namespace->valuestring) : NULL,
        resource_version ? strdup(resource_version->valuestring) : NULL,
        uid ? strdup(uid->valuestring) : NULL
        );

    return io_k8s_api_core_v1_object_reference_local_var;
end:
    return NULL;

}
