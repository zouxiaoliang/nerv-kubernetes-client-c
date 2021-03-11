#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_preferred_scheduling_term.h"



io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term_create(
    io_k8s_api_core_v1_node_selector_term_t *preference,
    int weight
    ) {
    io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term_local_var = malloc(sizeof(io_k8s_api_core_v1_preferred_scheduling_term_t));
    if (!io_k8s_api_core_v1_preferred_scheduling_term_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_preferred_scheduling_term_local_var->preference = preference;
    io_k8s_api_core_v1_preferred_scheduling_term_local_var->weight = weight;

    return io_k8s_api_core_v1_preferred_scheduling_term_local_var;
}


void io_k8s_api_core_v1_preferred_scheduling_term_free(io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term) {
    if(NULL == io_k8s_api_core_v1_preferred_scheduling_term){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_preferred_scheduling_term->preference) {
        io_k8s_api_core_v1_node_selector_term_free(io_k8s_api_core_v1_preferred_scheduling_term->preference);
        io_k8s_api_core_v1_preferred_scheduling_term->preference = NULL;
    }
    free(io_k8s_api_core_v1_preferred_scheduling_term);
}

cJSON *io_k8s_api_core_v1_preferred_scheduling_term_convertToJSON(io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_preferred_scheduling_term->preference
    if (!io_k8s_api_core_v1_preferred_scheduling_term->preference) {
        goto fail;
    }
    
    cJSON *preference_local_JSON = io_k8s_api_core_v1_node_selector_term_convertToJSON(io_k8s_api_core_v1_preferred_scheduling_term->preference);
    if(preference_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preference", preference_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_core_v1_preferred_scheduling_term->weight
    if (!io_k8s_api_core_v1_preferred_scheduling_term->weight) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "weight", io_k8s_api_core_v1_preferred_scheduling_term->weight) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term_parseFromJSON(cJSON *io_k8s_api_core_v1_preferred_scheduling_termJSON){

    io_k8s_api_core_v1_preferred_scheduling_term_t *io_k8s_api_core_v1_preferred_scheduling_term_local_var = NULL;

    // io_k8s_api_core_v1_preferred_scheduling_term->preference
    cJSON *preference = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_preferred_scheduling_termJSON, "preference");
    if (!preference) {
        goto end;
    }

    io_k8s_api_core_v1_node_selector_term_t *preference_local_nonprim = NULL;
    
    preference_local_nonprim = io_k8s_api_core_v1_node_selector_term_parseFromJSON(preference); //nonprimitive

    // io_k8s_api_core_v1_preferred_scheduling_term->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_preferred_scheduling_termJSON, "weight");
    if (!weight) {
        goto end;
    }

    
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }


    io_k8s_api_core_v1_preferred_scheduling_term_local_var = io_k8s_api_core_v1_preferred_scheduling_term_create (
        preference_local_nonprim,
        weight->valuedouble
        );

    return io_k8s_api_core_v1_preferred_scheduling_term_local_var;
end:
    if (preference_local_nonprim) {
        io_k8s_api_core_v1_node_selector_term_free(preference_local_nonprim);
        preference_local_nonprim = NULL;
    }
    return NULL;

}
