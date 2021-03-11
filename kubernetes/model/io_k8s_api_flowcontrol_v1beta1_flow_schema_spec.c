#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_flowcontrol_v1beta1_flow_schema_spec.h"



io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_create(
    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *distinguisher_method,
    int matching_precedence,
    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *priority_level_configuration,
    list_t *rules
    ) {
    io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var = malloc(sizeof(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t));
    if (!io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var) {
        return NULL;
    }
    io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var->distinguisher_method = distinguisher_method;
    io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var->matching_precedence = matching_precedence;
    io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var->priority_level_configuration = priority_level_configuration;
    io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var->rules = rules;

    return io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var;
}


void io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_free(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec) {
    if(NULL == io_k8s_api_flowcontrol_v1beta1_flow_schema_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->distinguisher_method) {
        io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_free(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->distinguisher_method);
        io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->distinguisher_method = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->priority_level_configuration) {
        io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_free(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->priority_level_configuration);
        io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->priority_level_configuration = NULL;
    }
    if (io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->rules) {
        list_ForEach(listEntry, io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->rules) {
            io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_free(listEntry->data);
        }
        list_free(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->rules);
        io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->rules = NULL;
    }
    free(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec);
}

cJSON *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->distinguisher_method
    if(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->distinguisher_method) { 
    cJSON *distinguisher_method_local_JSON = io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->distinguisher_method);
    if(distinguisher_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "distinguisherMethod", distinguisher_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->matching_precedence
    if(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->matching_precedence) { 
    if(cJSON_AddNumberToObject(item, "matchingPrecedence", io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->matching_precedence) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->priority_level_configuration
    if (!io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->priority_level_configuration) {
        goto fail;
    }
    
    cJSON *priority_level_configuration_local_JSON = io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_convertToJSON(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->priority_level_configuration);
    if(priority_level_configuration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "priorityLevelConfiguration", priority_level_configuration_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->rules
    if(io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->rules) { 
    cJSON *rules = cJSON_AddArrayToObject(item, "rules");
    if(rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rulesListEntry;
    if (io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->rules) {
    list_ForEach(rulesListEntry, io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->rules) {
    cJSON *itemLocal = io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_convertToJSON(rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rules, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_parseFromJSON(cJSON *io_k8s_api_flowcontrol_v1beta1_flow_schema_specJSON){

    io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_t *io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var = NULL;

    // io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->distinguisher_method
    cJSON *distinguisher_method = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_flow_schema_specJSON, "distinguisherMethod");
    io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_t *distinguisher_method_local_nonprim = NULL;
    if (distinguisher_method) { 
    distinguisher_method_local_nonprim = io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_parseFromJSON(distinguisher_method); //nonprimitive
    }

    // io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->matching_precedence
    cJSON *matching_precedence = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_flow_schema_specJSON, "matchingPrecedence");
    if (matching_precedence) { 
    if(!cJSON_IsNumber(matching_precedence))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->priority_level_configuration
    cJSON *priority_level_configuration = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_flow_schema_specJSON, "priorityLevelConfiguration");
    if (!priority_level_configuration) {
        goto end;
    }

    io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_t *priority_level_configuration_local_nonprim = NULL;
    
    priority_level_configuration_local_nonprim = io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_parseFromJSON(priority_level_configuration); //nonprimitive

    // io_k8s_api_flowcontrol_v1beta1_flow_schema_spec->rules
    cJSON *rules = cJSON_GetObjectItemCaseSensitive(io_k8s_api_flowcontrol_v1beta1_flow_schema_specJSON, "rules");
    list_t *rulesList;
    if (rules) { 
    cJSON *rules_local_nonprimitive;
    if(!cJSON_IsArray(rules)){
        goto end; //nonprimitive container
    }

    rulesList = list_create();

    cJSON_ArrayForEach(rules_local_nonprimitive,rules )
    {
        if(!cJSON_IsObject(rules_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_t *rulesItem = io_k8s_api_flowcontrol_v1beta1_policy_rules_with_subjects_parseFromJSON(rules_local_nonprimitive);

        list_addElement(rulesList, rulesItem);
    }
    }


    io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var = io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_create (
        distinguisher_method ? distinguisher_method_local_nonprim : NULL,
        matching_precedence ? matching_precedence->valuedouble : 0,
        priority_level_configuration_local_nonprim,
        rules ? rulesList : NULL
        );

    return io_k8s_api_flowcontrol_v1beta1_flow_schema_spec_local_var;
end:
    if (distinguisher_method_local_nonprim) {
        io_k8s_api_flowcontrol_v1beta1_flow_distinguisher_method_free(distinguisher_method_local_nonprim);
        distinguisher_method_local_nonprim = NULL;
    }
    if (priority_level_configuration_local_nonprim) {
        io_k8s_api_flowcontrol_v1beta1_priority_level_configuration_reference_free(priority_level_configuration_local_nonprim);
        priority_level_configuration_local_nonprim = NULL;
    }
    return NULL;

}
