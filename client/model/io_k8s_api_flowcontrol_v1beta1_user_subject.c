#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_user_subject.h"



io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject_create(
    char *name
    ) {
    io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_user_subject_t));
    if (!io_k8s_api_flowcontrol_v1beta1_user_subject_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_user_subject_local_var->name = name;

    return io_k8s_api_flowcontrol_v1beta1_user_subject_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_user_subject_free(io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_user_subject){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_user_subject->name) {
        free(io_k8s_api_flowcontrol_v1beta1_user_subject->name);
        io_k8s_api_flowcontrol_v1beta1_user_subject->name = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_user_subject);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_user_subject_convertToJSON(io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_user_subject->name
    if (!io_k8s_api_flowcontrol_v1beta1_user_subject->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_flowcontrol_v1beta1_user_subject->name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_user_subjectJSON){

    io_k8s_api_flowcontrol_v1beta1_user_subject_t *io_k8s_api_flowcontrol_v1beta1_user_subject_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_user_subject->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_user_subjectJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }


    io_k8s_api_flowcontrol_v1beta1_user_subject_local_var = io_k8s_api_flowcontrol_v1beta1_user_subject_create (
        strdup(name->valuestring)
        );

    return io_k8s_api_flowcontrol_v1beta1_user_subject_local_var;
end:
    return NULL;

}
