#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_policy_v1beta1_pod_disruption_budget_spec.h"



io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_create(
    char *max_unavailable,
    char *min_available,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector
    ) {
    io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_local_var = malloc(sizeof(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t));
    if (!io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_local_var) {
        return NULL;
    }
    io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_local_var->max_unavailable = max_unavailable;
    io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_local_var->min_available = min_available;
    io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_local_var->selector = selector;

    return io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_local_var;
}


void io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_free(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec) {
    if(NULL == io_k8s_api_policy_v1beta1_pod_disruption_budget_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->max_unavailable) {
        free(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->max_unavailable);
        io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->max_unavailable = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->min_available) {
        free(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->min_available);
        io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->min_available = NULL;
    }
    if (io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->selector);
        io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->selector = NULL;
    }
    free(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec);
}

cJSON *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_convertToJSON(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->max_unavailable
    if(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->max_unavailable) { 
    if(cJSON_AddStringToObject(item, "maxUnavailable", io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->max_unavailable) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->min_available
    if(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->min_available) { 
    if(cJSON_AddStringToObject(item, "minAvailable", io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->min_available) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->selector
    if(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->selector) { 
    cJSON *selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->selector);
    if(selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selector", selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_pod_disruption_budget_specJSON){

    io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_t *io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_local_var = NULL;

    // io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->max_unavailable
    cJSON *max_unavailable = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_disruption_budget_specJSON, "maxUnavailable");
    if (max_unavailable) { 
    if(!cJSON_IsString(max_unavailable))
    {
    goto end; //String
    }
    }

    // io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->min_available
    cJSON *min_available = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_disruption_budget_specJSON, "minAvailable");
    if (min_available) { 
    if(!cJSON_IsString(min_available))
    {
    goto end; //String
    }
    }

    // io_k8s_api_policy_v1beta1_pod_disruption_budget_spec->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_policy_v1beta1_pod_disruption_budget_specJSON, "selector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector_local_nonprim = NULL;
    if (selector) { 
    selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(selector); //nonprimitive
    }


    io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_local_var = io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_create (
        max_unavailable ? strdup(max_unavailable->valuestring) : NULL,
        min_available ? strdup(min_available->valuestring) : NULL,
        selector ? selector_local_nonprim : NULL
        );

    return io_k8s_api_policy_v1beta1_pod_disruption_budget_spec_local_var;
end:
    if (selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(selector_local_nonprim);
        selector_local_nonprim = NULL;
    }
    return NULL;

}
