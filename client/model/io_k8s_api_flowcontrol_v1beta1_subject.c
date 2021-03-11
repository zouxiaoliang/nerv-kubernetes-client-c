#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_subject.h"



io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject_create(
    io_k8s_api_flowcontrol_v1beta1_group_subject_t *group,
    char *kind,
    io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *service_account,
    io_k8s_api_flowcontrol_v1beta1_user_subject_t *user
    ) {
    io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_subject_t));
    if (!io_k8s_api_flowcontrol_v1beta1_subject_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_subject_local_var->group = group;
    io_k8s_api_flowcontrol_v1beta1_subject_local_var->kind = kind;
    io_k8s_api_flowcontrol_v1beta1_subject_local_var->service_account = service_account;
    io_k8s_api_flowcontrol_v1beta1_subject_local_var->user = user;

    return io_k8s_api_flowcontrol_v1beta1_subject_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_subject_free(io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_subject){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_subject->group) {
        io_k8s_api_flowcontrol_v1beta1_group_subject_free(io_k8s_api_flowcontrol_v1beta1_subject->group);
        io_k8s_api_flowcontrol_v1beta1_subject->group = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_subject->kind) {
        free(io_k8s_api_flowcontrol_v1beta1_subject->kind);
        io_k8s_api_flowcontrol_v1beta1_subject->kind = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_subject->service_account) {
        io_k8s_api_flowcontrol_v1beta1_service_account_subject_free(io_k8s_api_flowcontrol_v1beta1_subject->service_account);
        io_k8s_api_flowcontrol_v1beta1_subject->service_account = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_subject->user) {
        io_k8s_api_flowcontrol_v1beta1_user_subject_free(io_k8s_api_flowcontrol_v1beta1_subject->user);
        io_k8s_api_flowcontrol_v1beta1_subject->user = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_subject);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_subject_convertToJSON(io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_subject->group
    if(io_k8s_api_flowcontrol_v1beta1_subject->group) { 
    cJSON *group_local_JSON = io_k8s_api_flowcontrol_v1beta1_group_subject_convertToJSON(io_k8s_api_flowcontrol_v1beta1_subject->group);
    if(group_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "group", group_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_subject->kind
    if (!io_k8s_api_flowcontrol_v1beta1_subject->kind) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_flowcontrol_v1beta1_subject->kind) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_flowcontrol_v1beta1_subject->service_account
    if(io_k8s_api_flowcontrol_v1beta1_subject->service_account) { 
    cJSON *service_account_local_JSON = io_k8s_api_flowcontrol_v1beta1_service_account_subject_convertToJSON(io_k8s_api_flowcontrol_v1beta1_subject->service_account);
    if(service_account_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceAccount", service_account_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_subject->user
    if(io_k8s_api_flowcontrol_v1beta1_subject->user) { 
    cJSON *user_local_JSON = io_k8s_api_flowcontrol_v1beta1_user_subject_convertToJSON(io_k8s_api_flowcontrol_v1beta1_subject->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_subjectJSON){

    io_k8s_api_flowcontrol_v1beta1_subject_t *io_k8s_api_flowcontrol_v1beta1_subject_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_subject->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_subjectJSON, "group");
    io_k8s_api_flowcontrol_v1beta1_group_subject_t *group_local_nonprim = NULL;
    if (group) { 
    group_local_nonprim = io_k8s_api_flowcontrol_v1beta1_group_subject_parseFromJSON(group); //nonprimitive
    }

    // io_k8s_api_flowcontrol_v1beta1_subject->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_subjectJSON, "kind");
    if (!kind) {
        goto end;
    }

    
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }

    // io_k8s_api_flowcontrol_v1beta1_subject->service_account
    cJSON *service_account = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_subjectJSON, "serviceAccount");
    io_k8s_api_flowcontrol_v1beta1_service_account_subject_t *service_account_local_nonprim = NULL;
    if (service_account) { 
    service_account_local_nonprim = io_k8s_api_flowcontrol_v1beta1_service_account_subject_parseFromJSON(service_account); //nonprimitive
    }

    // io_k8s_api_flowcontrol_v1beta1_subject->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_subjectJSON, "user");
    io_k8s_api_flowcontrol_v1beta1_user_subject_t *user_local_nonprim = NULL;
    if (user) { 
    user_local_nonprim = io_k8s_api_flowcontrol_v1beta1_user_subject_parseFromJSON(user); //nonprimitive
    }


    io_k8s_api_flowcontrol_v1beta1_subject_local_var = io_k8s_api_flowcontrol_v1beta1_subject_create (
        group ? group_local_nonprim : NULL,
        strdup(kind->valuestring),
        service_account ? service_account_local_nonprim : NULL,
        user ? user_local_nonprim : NULL
        );

    return io_k8s_api_flowcontrol_v1beta1_subject_local_var;
end:
    if (group_local_nonprim) {
        io_k8s_api_flowcontrol_v1beta1_group_subject_free(group_local_nonprim);
        group_local_nonprim = NULL;
    }
    if (service_account_local_nonprim) {
        io_k8s_api_flowcontrol_v1beta1_service_account_subject_free(service_account_local_nonprim);
        service_account_local_nonprim = NULL;
    }
    if (user_local_nonprim) {
        io_k8s_api_flowcontrol_v1beta1_user_subject_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    return NULL;

}
