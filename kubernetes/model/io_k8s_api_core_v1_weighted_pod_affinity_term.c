#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_weighted_pod_affinity_term.h"



io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term_create(
    io_k8s_api_core_v1_pod_affinity_term_t *pod_affinity_term,
    int weight
    ) {
    io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term_local_var = malloc(sizeof(io_k8s_api_core_v1_weighted_pod_affinity_term_t));
    if (!io_k8s_api_core_v1_weighted_pod_affinity_term_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_weighted_pod_affinity_term_local_var->pod_affinity_term = pod_affinity_term;
    io_k8s_api_core_v1_weighted_pod_affinity_term_local_var->weight = weight;

    return io_k8s_api_core_v1_weighted_pod_affinity_term_local_var;
}


void io_k8s_api_core_v1_weighted_pod_affinity_term_free(io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term) {
    if(NULL == io_k8s_api_core_v1_weighted_pod_affinity_term){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_weighted_pod_affinity_term->pod_affinity_term) {
        io_k8s_api_core_v1_pod_affinity_term_free(io_k8s_api_core_v1_weighted_pod_affinity_term->pod_affinity_term);
        io_k8s_api_core_v1_weighted_pod_affinity_term->pod_affinity_term = NULL;
    }
    free(io_k8s_api_core_v1_weighted_pod_affinity_term);
}

cJSON *io_k8s_api_core_v1_weighted_pod_affinity_term_convertToJSON(io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_weighted_pod_affinity_term->pod_affinity_term
    if (!io_k8s_api_core_v1_weighted_pod_affinity_term->pod_affinity_term) {
        goto fail;
    }
    
    cJSON *pod_affinity_term_local_JSON = io_k8s_api_core_v1_pod_affinity_term_convertToJSON(io_k8s_api_core_v1_weighted_pod_affinity_term->pod_affinity_term);
    if(pod_affinity_term_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "podAffinityTerm", pod_affinity_term_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_core_v1_weighted_pod_affinity_term->weight
    if (!io_k8s_api_core_v1_weighted_pod_affinity_term->weight) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "weight", io_k8s_api_core_v1_weighted_pod_affinity_term->weight) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term_parseFromJSON(cJSON *io_k8s_api_core_v1_weighted_pod_affinity_termJSON){

    io_k8s_api_core_v1_weighted_pod_affinity_term_t *io_k8s_api_core_v1_weighted_pod_affinity_term_local_var = NULL;

    // io_k8s_api_core_v1_weighted_pod_affinity_term->pod_affinity_term
    cJSON *pod_affinity_term = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_weighted_pod_affinity_termJSON, "podAffinityTerm");
    if (!pod_affinity_term) {
        goto end;
    }

    io_k8s_api_core_v1_pod_affinity_term_t *pod_affinity_term_local_nonprim = NULL;
    
    pod_affinity_term_local_nonprim = io_k8s_api_core_v1_pod_affinity_term_parseFromJSON(pod_affinity_term); //nonprimitive

    // io_k8s_api_core_v1_weighted_pod_affinity_term->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_weighted_pod_affinity_termJSON, "weight");
    if (!weight) {
        goto end;
    }

    
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }


    io_k8s_api_core_v1_weighted_pod_affinity_term_local_var = io_k8s_api_core_v1_weighted_pod_affinity_term_create (
        pod_affinity_term_local_nonprim,
        weight->valuedouble
        );

    return io_k8s_api_core_v1_weighted_pod_affinity_term_local_var;
end:
    if (pod_affinity_term_local_nonprim) {
        io_k8s_api_core_v1_pod_affinity_term_free(pod_affinity_term_local_nonprim);
        pod_affinity_term_local_nonprim = NULL;
    }
    return NULL;

}
