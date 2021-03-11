#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_node_selector.h"



io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector_create(
    list_t *node_selector_terms
    ) {
    io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector_local_var = malloc(sizeof(io_k8s_api_core_v1_node_selector_t));
    if (!io_k8s_api_core_v1_node_selector_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_node_selector_local_var->node_selector_terms = node_selector_terms;

    return io_k8s_api_core_v1_node_selector_local_var;
}


void io_k8s_api_core_v1_node_selector_free(io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector) {
    if(NULL == io_k8s_api_core_v1_node_selector){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_node_selector->node_selector_terms) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_selector->node_selector_terms) {
            io_k8s_api_core_v1_node_selector_term_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_selector->node_selector_terms);
        io_k8s_api_core_v1_node_selector->node_selector_terms = NULL;
    }
    free(io_k8s_api_core_v1_node_selector);
}

cJSON *io_k8s_api_core_v1_node_selector_convertToJSON(io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_node_selector->node_selector_terms
    if (!io_k8s_api_core_v1_node_selector->node_selector_terms) {
        goto fail;
    }
    
    cJSON *node_selector_terms = cJSON_AddArrayToObject(item, "nodeSelectorTerms");
    if(node_selector_terms == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *node_selector_termsListEntry;
    if (io_k8s_api_core_v1_node_selector->node_selector_terms) {
    list_ForEach(node_selector_termsListEntry, io_k8s_api_core_v1_node_selector->node_selector_terms) {
    cJSON *itemLocal = io_k8s_api_core_v1_node_selector_term_convertToJSON(node_selector_termsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(node_selector_terms, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_node_selectorJSON){

    io_k8s_api_core_v1_node_selector_t *io_k8s_api_core_v1_node_selector_local_var = NULL;

    // io_k8s_api_core_v1_node_selector->node_selector_terms
    cJSON *node_selector_terms = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_selectorJSON, "nodeSelectorTerms");
    if (!node_selector_terms) {
        goto end;
    }

    list_t *node_selector_termsList;
    
    cJSON *node_selector_terms_local_nonprimitive;
    if(!cJSON_IsArray(node_selector_terms)){
        goto end; //nonprimitive container
    }

    node_selector_termsList = list_create();

    cJSON_ArrayForEach(node_selector_terms_local_nonprimitive,node_selector_terms )
    {
        if(!cJSON_IsObject(node_selector_terms_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_node_selector_term_t *node_selector_termsItem = io_k8s_api_core_v1_node_selector_term_parseFromJSON(node_selector_terms_local_nonprimitive);

        list_addElement(node_selector_termsList, node_selector_termsItem);
    }


    io_k8s_api_core_v1_node_selector_local_var = io_k8s_api_core_v1_node_selector_create (
        node_selector_termsList
        );

    return io_k8s_api_core_v1_node_selector_local_var;
end:
    return NULL;

}
