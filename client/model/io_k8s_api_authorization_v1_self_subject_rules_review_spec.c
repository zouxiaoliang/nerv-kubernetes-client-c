#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authorization_v1_self_subject_rules_review_spec.h"



io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec_create(
    char *_namespace
    ) {
    io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec_local_var = malloc(sizeof(io_k8s_api_authorization_v1_self_subject_rules_review_spec_t));
    if (!io_k8s_api_authorization_v1_self_subject_rules_review_spec_local_var) {
        return NULL;
    }
    io_k8s_api_authorization_v1_self_subject_rules_review_spec_local_var->_namespace = _namespace;

    return io_k8s_api_authorization_v1_self_subject_rules_review_spec_local_var;
}


void io_k8s_api_authorization_v1_self_subject_rules_review_spec_free(io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec) {
    if(NULL == io_k8s_api_authorization_v1_self_subject_rules_review_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authorization_v1_self_subject_rules_review_spec->_namespace) {
        free(io_k8s_api_authorization_v1_self_subject_rules_review_spec->_namespace);
        io_k8s_api_authorization_v1_self_subject_rules_review_spec->_namespace = NULL;
    }
    free(io_k8s_api_authorization_v1_self_subject_rules_review_spec);
}

cJSON *io_k8s_api_authorization_v1_self_subject_rules_review_spec_convertToJSON(io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authorization_v1_self_subject_rules_review_spec->_namespace
    if(io_k8s_api_authorization_v1_self_subject_rules_review_spec->_namespace) { 
    if(cJSON_AddStringToObject(item, "namespace", io_k8s_api_authorization_v1_self_subject_rules_review_spec->_namespace) == NULL) {
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

io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec_parseFromJSON(cJSON *io_k8s_api_authorization_v1_self_subject_rules_review_specJSON){

    io_k8s_api_authorization_v1_self_subject_rules_review_spec_t *io_k8s_api_authorization_v1_self_subject_rules_review_spec_local_var = NULL;

    // io_k8s_api_authorization_v1_self_subject_rules_review_spec->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_self_subject_rules_review_specJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }
    }


    io_k8s_api_authorization_v1_self_subject_rules_review_spec_local_var = io_k8s_api_authorization_v1_self_subject_rules_review_spec_create (
        _namespace ? strdup(_namespace->valuestring) : NULL
        );

    return io_k8s_api_authorization_v1_self_subject_rules_review_spec_local_var;
end:
    return NULL;

}
