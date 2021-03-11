#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_rbac_v1alpha1_subject.h"



io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject_create(
    char *api_version,
    char *kind,
    char *name,
    char *_namespace
    ) {
    io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject_local_var = malloc(sizeof(io_k8s_api_rbac_v1alpha1_subject_t));
    if (!io_k8s_api_rbac_v1alpha1_subject_local_var) {
        return NULL;
    }
    io_k8s_api_rbac_v1alpha1_subject_local_var->api_version = api_version;
    io_k8s_api_rbac_v1alpha1_subject_local_var->kind = kind;
    io_k8s_api_rbac_v1alpha1_subject_local_var->name = name;
    io_k8s_api_rbac_v1alpha1_subject_local_var->_namespace = _namespace;

    return io_k8s_api_rbac_v1alpha1_subject_local_var;
}


void io_k8s_api_rbac_v1alpha1_subject_free(io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject) {
    if(NULL == io_k8s_api_rbac_v1alpha1_subject){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_rbac_v1alpha1_subject->api_version) {
        free(io_k8s_api_rbac_v1alpha1_subject->api_version);
        io_k8s_api_rbac_v1alpha1_subject->api_version = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_subject->kind) {
        free(io_k8s_api_rbac_v1alpha1_subject->kind);
        io_k8s_api_rbac_v1alpha1_subject->kind = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_subject->name) {
        free(io_k8s_api_rbac_v1alpha1_subject->name);
        io_k8s_api_rbac_v1alpha1_subject->name = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_subject->_namespace) {
        free(io_k8s_api_rbac_v1alpha1_subject->_namespace);
        io_k8s_api_rbac_v1alpha1_subject->_namespace = NULL;
    }
    free(io_k8s_api_rbac_v1alpha1_subject);
}

cJSON *io_k8s_api_rbac_v1alpha1_subject_convertToJSON(io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_rbac_v1alpha1_subject->api_version
    if(io_k8s_api_rbac_v1alpha1_subject->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_rbac_v1alpha1_subject->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_rbac_v1alpha1_subject->kind
    if (!io_k8s_api_rbac_v1alpha1_subject->kind) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_rbac_v1alpha1_subject->kind) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_rbac_v1alpha1_subject->name
    if (!io_k8s_api_rbac_v1alpha1_subject->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_rbac_v1alpha1_subject->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_rbac_v1alpha1_subject->_namespace
    if(io_k8s_api_rbac_v1alpha1_subject->_namespace) { 
    if(cJSON_AddStringToObject(item, "namespace", io_k8s_api_rbac_v1alpha1_subject->_namespace) == NULL) {
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

io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject_parseFromJSON(cJSON *io_k8s_api_rbac_v1alpha1_subjectJSON){

    io_k8s_api_rbac_v1alpha1_subject_t *io_k8s_api_rbac_v1alpha1_subject_local_var = NULL;

    // io_k8s_api_rbac_v1alpha1_subject->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_subjectJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_rbac_v1alpha1_subject->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_subjectJSON, "kind");
    if (!kind) {
        goto end;
    }

    
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }

    // io_k8s_api_rbac_v1alpha1_subject->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_subjectJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_rbac_v1alpha1_subject->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_subjectJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }
    }


    io_k8s_api_rbac_v1alpha1_subject_local_var = io_k8s_api_rbac_v1alpha1_subject_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        strdup(kind->valuestring),
        strdup(name->valuestring),
        _namespace ? strdup(_namespace->valuestring) : NULL
        );

    return io_k8s_api_rbac_v1alpha1_subject_local_var;
end:
    return NULL;

}
