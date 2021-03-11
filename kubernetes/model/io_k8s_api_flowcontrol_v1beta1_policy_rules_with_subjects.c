#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects.h"



io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t *io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_create(
    list_t *non_resource_rules,
    list_t *resource_rules,
    list_t *subjects
    ) {
    io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t *io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t));
    if (!io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_local_var->non_resource_rules = non_resource_rules;
    io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_local_var->resource_rules = resource_rules;
    io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_local_var->subjects = subjects;

    return io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_free(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t *io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->non_resource_rules) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->non_resource_rules) {
            io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->non_resource_rules);
        io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->non_resource_rules = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->resource_rules) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->resource_rules) {
            io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->resource_rules);
        io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->resource_rules = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->subjects) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->subjects) {
            io_k8s_api_flowcontrol_v1beta1_subject_free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->subjects);
        io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->subjects = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_convertToJSON(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t *io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->non_resource_rules
    if(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->non_resource_rules) { 
    cJSON *non_resource_rules = cJSON_AddArrayToObject(item, "nonResourceRules");
    if(non_resource_rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *non_resource_rulesListEntry;
    if (io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->non_resource_rules) {
    list_ForEach(non_resource_rulesListEntry, io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->non_resource_rules) {
    cJSON *itemLocal = io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_convertToJSON(non_resource_rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(non_resource_rules, itemLocal);
    }
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->resource_rules
    if(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->resource_rules) { 
    cJSON *resource_rules = cJSON_AddArrayToObject(item, "resourceRules");
    if(resource_rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resource_rulesListEntry;
    if (io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->resource_rules) {
    list_ForEach(resource_rulesListEntry, io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->resource_rules) {
    cJSON *itemLocal = io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_convertToJSON(resource_rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(resource_rules, itemLocal);
    }
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->subjects
    if (!io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->subjects) {
        goto fail;
    }
    
    cJSON *subjects = cJSON_AddArrayToObject(item, "subjects");
    if(subjects == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *subjectsListEntry;
    if (io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->subjects) {
    list_ForEach(subjectsListEntry, io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->subjects) {
    cJSON *itemLocal = io_k8s_api_flowcontrol_v1beta1_subject_convertToJSON(subjectsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(subjects, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t *io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjectsJSON){

    io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t *io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->non_resource_rules
    cJSON *non_resource_rules = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjectsJSON, "nonResourceRules");
    list_t *non_resource_rulesList;
    if (non_resource_rules) { 
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
        io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_t *non_resource_rulesItem = io_k8s_api_flowcontrol_v1beta1_non_resource_policy_rule_parseFromJSON(non_resource_rules_local_nonprimitive);

        list_addElement(non_resource_rulesList, non_resource_rulesItem);
    }
    }

    // io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->resource_rules
    cJSON *resource_rules = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjectsJSON, "resourceRules");
    list_t *resource_rulesList;
    if (resource_rules) { 
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
        io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_t *resource_rulesItem = io_k8s_api_flowcontrol_v1beta1_resource_policy_rule_parseFromJSON(resource_rules_local_nonprimitive);

        list_addElement(resource_rulesList, resource_rulesItem);
    }
    }

    // io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects->subjects
    cJSON *subjects = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjectsJSON, "subjects");
    if (!subjects) {
        goto end;
    }

    list_t *subjectsList;
    
    cJSON *subjects_local_nonprimitive;
    if(!cJSON_IsArray(subjects)){
        goto end; //nonprimitive container
    }

    subjectsList = list_create();

    cJSON_ArrayForEach(subjects_local_nonprimitive,subjects )
    {
        if(!cJSON_IsObject(subjects_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_flowcontrol_v1beta1_subject_t *subjectsItem = io_k8s_api_flowcontrol_v1beta1_subject_parseFromJSON(subjects_local_nonprimitive);

        list_addElement(subjectsList, subjectsItem);
    }


    io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_local_var = io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_create (
        non_resource_rules ? non_resource_rulesList : NULL,
        resource_rules ? resource_rulesList : NULL,
        subjectsList
        );

    return io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_local_var;
end:
    return NULL;

}
