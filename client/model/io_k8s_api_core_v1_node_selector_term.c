#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_node_selector_term.h"



io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term_create(
    list_t *match_expressions,
    list_t *match_fields
    ) {
    io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term_local_var = malloc(sizeof(io_k8s_api_core_v1_node_selector_term_t));
    if (!io_k8s_api_core_v1_node_selector_term_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_node_selector_term_local_var->match_expressions = match_expressions;
    io_k8s_api_core_v1_node_selector_term_local_var->match_fields = match_fields;

    return io_k8s_api_core_v1_node_selector_term_local_var;
}


void io_k8s_api_core_v1_node_selector_term_free(io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term) {
    if(NULL == io_k8s_api_core_v1_node_selector_term){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_node_selector_term->match_expressions) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_selector_term->match_expressions) {
            io_k8s_api_core_v1_node_selector_requirement_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_selector_term->match_expressions);
        io_k8s_api_core_v1_node_selector_term->match_expressions = NULL;
    }
    if (io_k8s_api_core_v1_node_selector_term->match_fields) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_selector_term->match_fields) {
            io_k8s_api_core_v1_node_selector_requirement_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_selector_term->match_fields);
        io_k8s_api_core_v1_node_selector_term->match_fields = NULL;
    }
    free(io_k8s_api_core_v1_node_selector_term);
}

cJSON *io_k8s_api_core_v1_node_selector_term_convertToJSON(io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_node_selector_term->match_expressions
    if(io_k8s_api_core_v1_node_selector_term->match_expressions) { 
    cJSON *match_expressions = cJSON_AddArrayToObject(item, "matchExpressions");
    if(match_expressions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *match_expressionsListEntry;
    if (io_k8s_api_core_v1_node_selector_term->match_expressions) {
    list_ForEach(match_expressionsListEntry, io_k8s_api_core_v1_node_selector_term->match_expressions) {
    cJSON *itemLocal = io_k8s_api_core_v1_node_selector_requirement_convertToJSON(match_expressionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(match_expressions, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_node_selector_term->match_fields
    if(io_k8s_api_core_v1_node_selector_term->match_fields) { 
    cJSON *match_fields = cJSON_AddArrayToObject(item, "matchFields");
    if(match_fields == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *match_fieldsListEntry;
    if (io_k8s_api_core_v1_node_selector_term->match_fields) {
    list_ForEach(match_fieldsListEntry, io_k8s_api_core_v1_node_selector_term->match_fields) {
    cJSON *itemLocal = io_k8s_api_core_v1_node_selector_requirement_convertToJSON(match_fieldsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(match_fields, itemLocal);
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

io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term_parseFromJSON(cJSON *io_k8s_api_core_v1_node_selector_termJSON){

    io_k8s_api_core_v1_node_selector_term_t *io_k8s_api_core_v1_node_selector_term_local_var = NULL;

    // io_k8s_api_core_v1_node_selector_term->match_expressions
    cJSON *match_expressions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_selector_termJSON, "matchExpressions");
    list_t *match_expressionsList;
    if (match_expressions) { 
    cJSON *match_expressions_local_nonprimitive;
    if(!cJSON_IsArray(match_expressions)){
        goto end; //nonprimitive container
    }

    match_expressionsList = list_create();

    cJSON_ArrayForEach(match_expressions_local_nonprimitive,match_expressions )
    {
        if(!cJSON_IsObject(match_expressions_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_node_selector_requirement_t *match_expressionsItem = io_k8s_api_core_v1_node_selector_requirement_parseFromJSON(match_expressions_local_nonprimitive);

        list_addElement(match_expressionsList, match_expressionsItem);
    }
    }

    // io_k8s_api_core_v1_node_selector_term->match_fields
    cJSON *match_fields = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_selector_termJSON, "matchFields");
    list_t *match_fieldsList;
    if (match_fields) { 
    cJSON *match_fields_local_nonprimitive;
    if(!cJSON_IsArray(match_fields)){
        goto end; //nonprimitive container
    }

    match_fieldsList = list_create();

    cJSON_ArrayForEach(match_fields_local_nonprimitive,match_fields )
    {
        if(!cJSON_IsObject(match_fields_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_node_selector_requirement_t *match_fieldsItem = io_k8s_api_core_v1_node_selector_requirement_parseFromJSON(match_fields_local_nonprimitive);

        list_addElement(match_fieldsList, match_fieldsItem);
    }
    }


    io_k8s_api_core_v1_node_selector_term_local_var = io_k8s_api_core_v1_node_selector_term_create (
        match_expressions ? match_expressionsList : NULL,
        match_fields ? match_fieldsList : NULL
        );

    return io_k8s_api_core_v1_node_selector_term_local_var;
end:
    return NULL;

}
