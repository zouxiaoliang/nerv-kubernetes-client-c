#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_cross_version_object_reference.h"



io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_create(
    char *api_version,
    char *kind,
    char *name
    ) {
    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t));
    if (!io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_local_var->api_version = api_version;
    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_local_var->kind = kind;
    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_local_var->name = name;

    return io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_local_var;
}


void io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_free(io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *io_k8s_api_autoscaling_v2beta2_cross_version_object_reference) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_cross_version_object_reference){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->api_version) {
        free(io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->api_version);
        io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->api_version = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->kind) {
        free(io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->kind);
        io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->kind = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->name) {
        free(io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->name);
        io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->name = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_cross_version_object_reference);
}

cJSON *io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_convertToJSON(io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *io_k8s_api_autoscaling_v2beta2_cross_version_object_reference) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->api_version
    if(io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->kind
    if (!io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->kind) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->kind) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->name
    if (!io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_cross_version_object_referenceJSON){

    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_t *io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_cross_version_object_referenceJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_cross_version_object_referenceJSON, "kind");
    if (!kind) {
        goto end;
    }

    
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta2_cross_version_object_reference->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_cross_version_object_referenceJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_local_var = io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        strdup(kind->valuestring),
        strdup(name->valuestring)
        );

    return io_k8s_api_autoscaling_v2beta2_cross_version_object_reference_local_var;
end:
    return NULL;

}
