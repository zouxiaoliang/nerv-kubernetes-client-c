#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_service_account_subject.h"



io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject_create(
    char *name,
    char *_namespace
    ) {
    io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_service_account_subject_t));
    if (!io_k8s_api_flowcontrol_v1beta1_service_account_subject_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_service_account_subject_local_var->name = name;
    io_k8s_api_flowcontrol_v1beta1_service_account_subject_local_var->_namespace = _namespace;

    return io_k8s_api_flowcontrol_v1beta1_service_account_subject_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_service_account_subject_free(io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_service_account_subject){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_service_account_subject->name) {
        free(io_k8s_api_flowcontrol_v1beta1_service_account_subject->name);
        io_k8s_api_flowcontrol_v1beta1_service_account_subject->name = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_service_account_subject->_namespace) {
        free(io_k8s_api_flowcontrol_v1beta1_service_account_subject->_namespace);
        io_k8s_api_flowcontrol_v1beta1_service_account_subject->_namespace = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_service_account_subject);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_service_account_subject_convertToJSON(io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_service_account_subject->name
    if (!io_k8s_api_flowcontrol_v1beta1_service_account_subject->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_flowcontrol_v1beta1_service_account_subject->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_flowcontrol_v1beta1_service_account_subject->_namespace
    if (!io_k8s_api_flowcontrol_v1beta1_service_account_subject->_namespace) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "namespace", io_k8s_api_flowcontrol_v1beta1_service_account_subject->_namespace) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_service_account_subjectJSON){

    io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *io_k8s_api_flowcontrol_v1beta1_service_account_subject_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_service_account_subject->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_service_account_subjectJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_flowcontrol_v1beta1_service_account_subject->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_service_account_subjectJSON, "namespace");
    if (!_namespace) {
        goto end;
    }

    
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }


    io_k8s_api_flowcontrol_v1beta1_service_account_subject_local_var = io_k8s_api_flowcontrol_v1beta1_service_account_subject_create (
        strdup(name->valuestring),
        strdup(_namespace->valuestring)
        );

    return io_k8s_api_flowcontrol_v1beta1_service_account_subject_local_var;
end:
    return NULL;

}
