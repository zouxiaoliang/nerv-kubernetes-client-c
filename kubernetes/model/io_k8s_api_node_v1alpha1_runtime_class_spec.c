#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_node_v1alpha1_runtime_class_spec.h"



io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec_create(
    io_k8s_api_node_v1alpha1_overhead_t *overhead,
    char *runtime_handler,
    io_k8s_api_node_v1alpha1_scheduling_t *scheduling
    ) {
    io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec_local_var = malloc(sizeof(io_k8s_api_node_v1alpha1_runtime_class_spec_t));
    if (!io_k8s_api_node_v1alpha1_runtime_class_spec_local_var) {
        return NULL;
    }
    io_k8s_api_node_v1alpha1_runtime_class_spec_local_var->overhead = overhead;
    io_k8s_api_node_v1alpha1_runtime_class_spec_local_var->runtime_handler = runtime_handler;
    io_k8s_api_node_v1alpha1_runtime_class_spec_local_var->scheduling = scheduling;

    return io_k8s_api_node_v1alpha1_runtime_class_spec_local_var;
}


void io_k8s_api_node_v1alpha1_runtime_class_spec_free(io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec) {
    if(NULL == io_k8s_api_node_v1alpha1_runtime_class_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_node_v1alpha1_runtime_class_spec->overhead) {
        io_k8s_api_node_v1alpha1_overhead_free(io_k8s_api_node_v1alpha1_runtime_class_spec->overhead);
        io_k8s_api_node_v1alpha1_runtime_class_spec->overhead = NULL;
    }
    if (io_k8s_api_node_v1alpha1_runtime_class_spec->runtime_handler) {
        free(io_k8s_api_node_v1alpha1_runtime_class_spec->runtime_handler);
        io_k8s_api_node_v1alpha1_runtime_class_spec->runtime_handler = NULL;
    }
    if (io_k8s_api_node_v1alpha1_runtime_class_spec->scheduling) {
        io_k8s_api_node_v1alpha1_scheduling_free(io_k8s_api_node_v1alpha1_runtime_class_spec->scheduling);
        io_k8s_api_node_v1alpha1_runtime_class_spec->scheduling = NULL;
    }
    free(io_k8s_api_node_v1alpha1_runtime_class_spec);
}

cJSON *io_k8s_api_node_v1alpha1_runtime_class_spec_convertToJSON(io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_node_v1alpha1_runtime_class_spec->overhead
    if(io_k8s_api_node_v1alpha1_runtime_class_spec->overhead) { 
    cJSON *overhead_local_JSON = io_k8s_api_node_v1alpha1_overhead_convertToJSON(io_k8s_api_node_v1alpha1_runtime_class_spec->overhead);
    if(overhead_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "overhead", overhead_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_node_v1alpha1_runtime_class_spec->runtime_handler
    if (!io_k8s_api_node_v1alpha1_runtime_class_spec->runtime_handler) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "runtimeHandler", io_k8s_api_node_v1alpha1_runtime_class_spec->runtime_handler) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_node_v1alpha1_runtime_class_spec->scheduling
    if(io_k8s_api_node_v1alpha1_runtime_class_spec->scheduling) { 
    cJSON *scheduling_local_JSON = io_k8s_api_node_v1alpha1_scheduling_convertToJSON(io_k8s_api_node_v1alpha1_runtime_class_spec->scheduling);
    if(scheduling_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scheduling", scheduling_local_JSON);
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

io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec_parseFromJSON(cJSON *io_k8s_api_node_v1alpha1_runtime_class_specJSON){

    io_k8s_api_node_v1alpha1_runtime_class_spec_t *io_k8s_api_node_v1alpha1_runtime_class_spec_local_var = NULL;

    // io_k8s_api_node_v1alpha1_runtime_class_spec->overhead
    cJSON *overhead = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1alpha1_runtime_class_specJSON, "overhead");
    io_k8s_api_node_v1alpha1_overhead_t *overhead_local_nonprim = NULL;
    if (overhead) { 
    overhead_local_nonprim = io_k8s_api_node_v1alpha1_overhead_parseFromJSON(overhead); //nonprimitive
    }

    // io_k8s_api_node_v1alpha1_runtime_class_spec->runtime_handler
    cJSON *runtime_handler = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1alpha1_runtime_class_specJSON, "runtimeHandler");
    if (!runtime_handler) {
        goto end;
    }

    
    if(!cJSON_IsString(runtime_handler))
    {
    goto end; //String
    }

    // io_k8s_api_node_v1alpha1_runtime_class_spec->scheduling
    cJSON *scheduling = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1alpha1_runtime_class_specJSON, "scheduling");
    io_k8s_api_node_v1alpha1_scheduling_t *scheduling_local_nonprim = NULL;
    if (scheduling) { 
    scheduling_local_nonprim = io_k8s_api_node_v1alpha1_scheduling_parseFromJSON(scheduling); //nonprimitive
    }


    io_k8s_api_node_v1alpha1_runtime_class_spec_local_var = io_k8s_api_node_v1alpha1_runtime_class_spec_create (
        overhead ? overhead_local_nonprim : NULL,
        strdup(runtime_handler->valuestring),
        scheduling ? scheduling_local_nonprim : NULL
        );

    return io_k8s_api_node_v1alpha1_runtime_class_spec_local_var;
end:
    if (overhead_local_nonprim) {
        io_k8s_api_node_v1alpha1_overhead_free(overhead_local_nonprim);
        overhead_local_nonprim = NULL;
    }
    if (scheduling_local_nonprim) {
        io_k8s_api_node_v1alpha1_scheduling_free(scheduling_local_nonprim);
        scheduling_local_nonprim = NULL;
    }
    return NULL;

}
