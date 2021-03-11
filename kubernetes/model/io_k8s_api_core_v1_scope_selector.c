#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_scope_selector.h"



io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector_create(
    list_t *match_expressions
    ) {
    io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector_local_var = malloc(sizeof(io_k8s_api_core_v1_scope_selector_t));
    if (!io_k8s_api_core_v1_scope_selector_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_scope_selector_local_var->match_expressions = match_expressions;

    return io_k8s_api_core_v1_scope_selector_local_var;
}


void io_k8s_api_core_v1_scope_selector_free(io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector) {
    if(NULL == io_k8s_api_core_v1_scope_selector){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_scope_selector->match_expressions) {
        list_ForEach(listEntry, io_k8s_api_core_v1_scope_selector->match_expressions) {
            io_k8s_api_core_v1_scoped_resource_selector_requirement_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_scope_selector->match_expressions);
        io_k8s_api_core_v1_scope_selector->match_expressions = NULL;
    }
    free(io_k8s_api_core_v1_scope_selector);
}

cJSON *io_k8s_api_core_v1_scope_selector_convertToJSON(io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_scope_selector->match_expressions
    if(io_k8s_api_core_v1_scope_selector->match_expressions) { 
    cJSON *match_expressions = cJSON_AddArrayToObject(item, "matchExpressions");
    if(match_expressions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *match_expressionsListEntry;
    if (io_k8s_api_core_v1_scope_selector->match_expressions) {
    list_ForEach(match_expressionsListEntry, io_k8s_api_core_v1_scope_selector->match_expressions) {
    cJSON *itemLocal = io_k8s_api_core_v1_scoped_resource_selector_requirement_convertToJSON(match_expressionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(match_expressions, itemLocal);
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

io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_scope_selectorJSON){

    io_k8s_api_core_v1_scope_selector_t *io_k8s_api_core_v1_scope_selector_local_var = NULL;

    // io_k8s_api_core_v1_scope_selector->match_expressions
    cJSON *match_expressions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_scope_selectorJSON, "matchExpressions");
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
        io_k8s_api_core_v1_scoped_resource_selector_requirement_t *match_expressionsItem = io_k8s_api_core_v1_scoped_resource_selector_requirement_parseFromJSON(match_expressions_local_nonprimitive);

        list_addElement(match_expressionsList, match_expressionsItem);
    }
    }


    io_k8s_api_core_v1_scope_selector_local_var = io_k8s_api_core_v1_scope_selector_create (
        match_expressions ? match_expressionsList : NULL
        );

    return io_k8s_api_core_v1_scope_selector_local_var;
end:
    return NULL;

}
