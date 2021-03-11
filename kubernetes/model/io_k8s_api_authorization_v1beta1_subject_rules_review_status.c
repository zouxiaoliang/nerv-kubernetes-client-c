#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authorization_v1beta1_subject_rules_review_status.h"



io_k8s_api_authorization_v1beta1_subject_rules_review_status_t *io_k8s_api_authorization_v1beta1_subject_rules_review_status_create(
    char *evaluation_error,
    int incomplete,
    list_t *non_resource_rules,
    list_t *resource_rules
    ) {
    io_k8s_api_authorization_v1beta1_subject_rules_review_status_t *io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var = malloc(sizeof(io_k8s_api_authorization_v1beta1_subject_rules_review_status_t));
    if (!io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var) {
        return NULL;
    }
    io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var->evaluation_error = evaluation_error;
    io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var->incomplete = incomplete;
    io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var->non_resource_rules = non_resource_rules;
    io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var->resource_rules = resource_rules;

    return io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var;
}


void io_k8s_api_authorization_v1beta1_subject_rules_review_status_free(io_k8s_api_authorization_v1beta1_subject_rules_review_status_t *io_k8s_api_authorization_v1beta1_subject_rules_review_status) {
    if(NULL == io_k8s_api_authorization_v1beta1_subject_rules_review_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authorization_v1beta1_subject_rules_review_status->evaluation_error) {
        free(io_k8s_api_authorization_v1beta1_subject_rules_review_status->evaluation_error);
        io_k8s_api_authorization_v1beta1_subject_rules_review_status->evaluation_error = NULL;
    }
    if (io_k8s_api_authorization_v1beta1_subject_rules_review_status->non_resource_rules) {
        list_ForEach(listEntry, io_k8s_api_authorization_v1beta1_subject_rules_review_status->non_resource_rules) {
            io_k8s_api_authorization_v1beta1_non_resource_rule_free(listEntry->data);
        }
        list_free(io_k8s_api_authorization_v1beta1_subject_rules_review_status->non_resource_rules);
        io_k8s_api_authorization_v1beta1_subject_rules_review_status->non_resource_rules = NULL;
    }
    if (io_k8s_api_authorization_v1beta1_subject_rules_review_status->resource_rules) {
        list_ForEach(listEntry, io_k8s_api_authorization_v1beta1_subject_rules_review_status->resource_rules) {
            io_k8s_api_authorization_v1beta1_resource_rule_free(listEntry->data);
        }
        list_free(io_k8s_api_authorization_v1beta1_subject_rules_review_status->resource_rules);
        io_k8s_api_authorization_v1beta1_subject_rules_review_status->resource_rules = NULL;
    }
    free(io_k8s_api_authorization_v1beta1_subject_rules_review_status);
}

cJSON *io_k8s_api_authorization_v1beta1_subject_rules_review_status_convertToJSON(io_k8s_api_authorization_v1beta1_subject_rules_review_status_t *io_k8s_api_authorization_v1beta1_subject_rules_review_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authorization_v1beta1_subject_rules_review_status->evaluation_error
    if(io_k8s_api_authorization_v1beta1_subject_rules_review_status->evaluation_error) { 
    if(cJSON_AddStringToObject(item, "evaluationError", io_k8s_api_authorization_v1beta1_subject_rules_review_status->evaluation_error) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1beta1_subject_rules_review_status->incomplete
    if (!io_k8s_api_authorization_v1beta1_subject_rules_review_status->incomplete) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "incomplete", io_k8s_api_authorization_v1beta1_subject_rules_review_status->incomplete) == NULL) {
    goto fail; //Bool
    }


    // io_k8s_api_authorization_v1beta1_subject_rules_review_status->non_resource_rules
    if (!io_k8s_api_authorization_v1beta1_subject_rules_review_status->non_resource_rules) {
        goto fail;
    }
    
    cJSON *non_resource_rules = cJSON_AddArrayToObject(item, "nonResourceRules");
    if(non_resource_rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *non_resource_rulesListEntry;
    if (io_k8s_api_authorization_v1beta1_subject_rules_review_status->non_resource_rules) {
    list_ForEach(non_resource_rulesListEntry, io_k8s_api_authorization_v1beta1_subject_rules_review_status->non_resource_rules) {
    cJSON *itemLocal = io_k8s_api_authorization_v1beta1_non_resource_rule_convertToJSON(non_resource_rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(non_resource_rules, itemLocal);
    }
    }


    // io_k8s_api_authorization_v1beta1_subject_rules_review_status->resource_rules
    if (!io_k8s_api_authorization_v1beta1_subject_rules_review_status->resource_rules) {
        goto fail;
    }
    
    cJSON *resource_rules = cJSON_AddArrayToObject(item, "resourceRules");
    if(resource_rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resource_rulesListEntry;
    if (io_k8s_api_authorization_v1beta1_subject_rules_review_status->resource_rules) {
    list_ForEach(resource_rulesListEntry, io_k8s_api_authorization_v1beta1_subject_rules_review_status->resource_rules) {
    cJSON *itemLocal = io_k8s_api_authorization_v1beta1_resource_rule_convertToJSON(resource_rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(resource_rules, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_authorization_v1beta1_subject_rules_review_status_t *io_k8s_api_authorization_v1beta1_subject_rules_review_status_parseFromJSON(cJSON *io_k8s_api_authorization_v1beta1_subject_rules_review_statusJSON){

    io_k8s_api_authorization_v1beta1_subject_rules_review_status_t *io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var = NULL;

    // io_k8s_api_authorization_v1beta1_subject_rules_review_status->evaluation_error
    cJSON *evaluation_error = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1beta1_subject_rules_review_statusJSON, "evaluationError");
    if (evaluation_error) { 
    if(!cJSON_IsString(evaluation_error))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1beta1_subject_rules_review_status->incomplete
    cJSON *incomplete = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1beta1_subject_rules_review_statusJSON, "incomplete");
    if (!incomplete) {
        goto end;
    }

    
    if(!cJSON_IsBool(incomplete))
    {
    goto end; //Bool
    }

    // io_k8s_api_authorization_v1beta1_subject_rules_review_status->non_resource_rules
    cJSON *non_resource_rules = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1beta1_subject_rules_review_statusJSON, "nonResourceRules");
    if (!non_resource_rules) {
        goto end;
    }

    list_t *non_resource_rulesList;
    
    cJSON *non_resource_rules_local_nonprimitive;
    if(!cJSON_IsArray(non_resource_rules)){
        goto end; //nonprimitive container
    }

    non_resource_rulesList = list_create();

    cJSON_ArrayForEach(non_resource_rules_local_nonprimitive,non_resource_rules )
    {
        if(!cJSON_IsObject(non_resource_rules_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_authorization_v1beta1_non_resource_rule_t *non_resource_rulesItem = io_k8s_api_authorization_v1beta1_non_resource_rule_parseFromJSON(non_resource_rules_local_nonprimitive);

        list_addElement(non_resource_rulesList, non_resource_rulesItem);
    }

    // io_k8s_api_authorization_v1beta1_subject_rules_review_status->resource_rules
    cJSON *resource_rules = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1beta1_subject_rules_review_statusJSON, "resourceRules");
    if (!resource_rules) {
        goto end;
    }

    list_t *resource_rulesList;
    
    cJSON *resource_rules_local_nonprimitive;
    if(!cJSON_IsArray(resource_rules)){
        goto end; //nonprimitive container
    }

    resource_rulesList = list_create();

    cJSON_ArrayForEach(resource_rules_local_nonprimitive,resource_rules )
    {
        if(!cJSON_IsObject(resource_rules_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_authorization_v1beta1_resource_rule_t *resource_rulesItem = io_k8s_api_authorization_v1beta1_resource_rule_parseFromJSON(resource_rules_local_nonprimitive);

        list_addElement(resource_rulesList, resource_rulesItem);
    }


    io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var = io_k8s_api_authorization_v1beta1_subject_rules_review_status_create (
        evaluation_error ? strdup(evaluation_error->valuestring) : NULL,
        incomplete->valueint,
        non_resource_rulesList,
        resource_rulesList
        );

    return io_k8s_api_authorization_v1beta1_subject_rules_review_status_local_var;
end:
    return NULL;

}
