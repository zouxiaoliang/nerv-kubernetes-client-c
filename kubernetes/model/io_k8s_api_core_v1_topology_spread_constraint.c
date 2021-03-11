#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_topology_spread_constraint.h"



io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint_create(
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *label_selector,
    int max_skew,
    char *topology_key,
    char *when_unsatisfiable
    ) {
    io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint_local_var = malloc(sizeof(io_k8s_api_core_v1_topology_spread_constraint_t));
    if (!io_k8s_api_core_v1_topology_spread_constraint_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_topology_spread_constraint_local_var->label_selector = label_selector;
    io_k8s_api_core_v1_topology_spread_constraint_local_var->max_skew = max_skew;
    io_k8s_api_core_v1_topology_spread_constraint_local_var->topology_key = topology_key;
    io_k8s_api_core_v1_topology_spread_constraint_local_var->when_unsatisfiable = when_unsatisfiable;

    return io_k8s_api_core_v1_topology_spread_constraint_local_var;
}


void io_k8s_api_core_v1_topology_spread_constraint_free(io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint) {
    if(NULL == io_k8s_api_core_v1_topology_spread_constraint){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_topology_spread_constraint->label_selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_core_v1_topology_spread_constraint->label_selector);
        io_k8s_api_core_v1_topology_spread_constraint->label_selector = NULL;
    }
    if (io_k8s_api_core_v1_topology_spread_constraint->topology_key) {
        free(io_k8s_api_core_v1_topology_spread_constraint->topology_key);
        io_k8s_api_core_v1_topology_spread_constraint->topology_key = NULL;
    }
    if (io_k8s_api_core_v1_topology_spread_constraint->when_unsatisfiable) {
        free(io_k8s_api_core_v1_topology_spread_constraint->when_unsatisfiable);
        io_k8s_api_core_v1_topology_spread_constraint->when_unsatisfiable = NULL;
    }
    free(io_k8s_api_core_v1_topology_spread_constraint);
}

cJSON *io_k8s_api_core_v1_topology_spread_constraint_convertToJSON(io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_topology_spread_constraint->label_selector
    if(io_k8s_api_core_v1_topology_spread_constraint->label_selector) { 
    cJSON *label_selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_core_v1_topology_spread_constraint->label_selector);
    if(label_selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "labelSelector", label_selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_topology_spread_constraint->max_skew
    if (!io_k8s_api_core_v1_topology_spread_constraint->max_skew) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "maxSkew", io_k8s_api_core_v1_topology_spread_constraint->max_skew) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_core_v1_topology_spread_constraint->topology_key
    if (!io_k8s_api_core_v1_topology_spread_constraint->topology_key) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "topologyKey", io_k8s_api_core_v1_topology_spread_constraint->topology_key) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_topology_spread_constraint->when_unsatisfiable
    if (!io_k8s_api_core_v1_topology_spread_constraint->when_unsatisfiable) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "whenUnsatisfiable", io_k8s_api_core_v1_topology_spread_constraint->when_unsatisfiable) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint_parseFromJSON(cJSON *io_k8s_api_core_v1_topology_spread_constraintJSON){

    io_k8s_api_core_v1_topology_spread_constraint_t *io_k8s_api_core_v1_topology_spread_constraint_local_var = NULL;

    // io_k8s_api_core_v1_topology_spread_constraint->label_selector
    cJSON *label_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_topology_spread_constraintJSON, "labelSelector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *label_selector_local_nonprim = NULL;
    if (label_selector) { 
    label_selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(label_selector); //nonprimitive
    }

    // io_k8s_api_core_v1_topology_spread_constraint->max_skew
    cJSON *max_skew = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_topology_spread_constraintJSON, "maxSkew");
    if (!max_skew) {
        goto end;
    }

    
    if(!cJSON_IsNumber(max_skew))
    {
    goto end; //Numeric
    }

    // io_k8s_api_core_v1_topology_spread_constraint->topology_key
    cJSON *topology_key = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_topology_spread_constraintJSON, "topologyKey");
    if (!topology_key) {
        goto end;
    }

    
    if(!cJSON_IsString(topology_key))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_topology_spread_constraint->when_unsatisfiable
    cJSON *when_unsatisfiable = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_topology_spread_constraintJSON, "whenUnsatisfiable");
    if (!when_unsatisfiable) {
        goto end;
    }

    
    if(!cJSON_IsString(when_unsatisfiable))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_topology_spread_constraint_local_var = io_k8s_api_core_v1_topology_spread_constraint_create (
        label_selector ? label_selector_local_nonprim : NULL,
        max_skew->valuedouble,
        strdup(topology_key->valuestring),
        strdup(when_unsatisfiable->valuestring)
        );

    return io_k8s_api_core_v1_topology_spread_constraint_local_var;
end:
    if (label_selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(label_selector_local_nonprim);
        label_selector_local_nonprim = NULL;
    }
    return NULL;

}
