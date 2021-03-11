#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_topology_selector_term.h"



io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term_create(
    list_t *match_label_expressions
    ) {
    io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term_local_var = malloc(sizeof(io_k8s_api_core_v1_topology_selector_term_t));
    if (!io_k8s_api_core_v1_topology_selector_term_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_topology_selector_term_local_var->match_label_expressions = match_label_expressions;

    return io_k8s_api_core_v1_topology_selector_term_local_var;
}


void io_k8s_api_core_v1_topology_selector_term_free(io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term) {
    if(NULL == io_k8s_api_core_v1_topology_selector_term){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_topology_selector_term->match_label_expressions) {
        list_ForEach(listEntry, io_k8s_api_core_v1_topology_selector_term->match_label_expressions) {
            io_k8s_api_core_v1_topology_selector_label_requirement_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_topology_selector_term->match_label_expressions);
        io_k8s_api_core_v1_topology_selector_term->match_label_expressions = NULL;
    }
    free(io_k8s_api_core_v1_topology_selector_term);
}

cJSON *io_k8s_api_core_v1_topology_selector_term_convertToJSON(io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_topology_selector_term->match_label_expressions
    if(io_k8s_api_core_v1_topology_selector_term->match_label_expressions) { 
    cJSON *match_label_expressions = cJSON_AddArrayToObject(item, "matchLabelExpressions");
    if(match_label_expressions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *match_label_expressionsListEntry;
    if (io_k8s_api_core_v1_topology_selector_term->match_label_expressions) {
    list_ForEach(match_label_expressionsListEntry, io_k8s_api_core_v1_topology_selector_term->match_label_expressions) {
    cJSON *itemLocal = io_k8s_api_core_v1_topology_selector_label_requirement_convertToJSON(match_label_expressionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(match_label_expressions, itemLocal);
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

io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term_parseFromJSON(cJSON *io_k8s_api_core_v1_topology_selector_termJSON){

    io_k8s_api_core_v1_topology_selector_term_t *io_k8s_api_core_v1_topology_selector_term_local_var = NULL;

    // io_k8s_api_core_v1_topology_selector_term->match_label_expressions
    cJSON *match_label_expressions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_topology_selector_termJSON, "matchLabelExpressions");
    list_t *match_label_expressionsList;
    if (match_label_expressions) { 
    cJSON *match_label_expressions_local_nonprimitive;
    if(!cJSON_IsArray(match_label_expressions)){
        goto end; //nonprimitive container
    }

    match_label_expressionsList = list_create();

    cJSON_ArrayForEach(match_label_expressions_local_nonprimitive,match_label_expressions )
    {
        if(!cJSON_IsObject(match_label_expressions_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_topology_selector_label_requirement_t *match_label_expressionsItem = io_k8s_api_core_v1_topology_selector_label_requirement_parseFromJSON(match_label_expressions_local_nonprimitive);

        list_addElement(match_label_expressionsList, match_label_expressionsItem);
    }
    }


    io_k8s_api_core_v1_topology_selector_term_local_var = io_k8s_api_core_v1_topology_selector_term_create (
        match_label_expressions ? match_label_expressionsList : NULL
        );

    return io_k8s_api_core_v1_topology_selector_term_local_var;
end:
    return NULL;

}
