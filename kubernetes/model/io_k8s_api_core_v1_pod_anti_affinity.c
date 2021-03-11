#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_anti_affinity.h"



io_k8s_api_core_v1_pod_anti_affinity_t *io_k8s_api_core_v1_pod_anti_affinity_create(
    list_t *preferred_during_scheduling_ignored_during_execution,
    list_t *required_during_scheduling_ignored_during_execution
    ) {
    io_k8s_api_core_v1_pod_anti_affinity_t *io_k8s_api_core_v1_pod_anti_affinity_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_anti_affinity_t));
    if (!io_k8s_api_core_v1_pod_anti_affinity_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_anti_affinity_local_var->preferred_during_scheduling_ignored_during_execution = preferred_during_scheduling_ignored_during_execution;
    io_k8s_api_core_v1_pod_anti_affinity_local_var->required_during_scheduling_ignored_during_execution = required_during_scheduling_ignored_during_execution;

    return io_k8s_api_core_v1_pod_anti_affinity_local_var;
}


void io_k8s_api_core_v1_pod_anti_affinity_free(io_k8s_api_core_v1_pod_anti_affinity_t *io_k8s_api_core_v1_pod_anti_affinity) {
    if(NULL == io_k8s_api_core_v1_pod_anti_affinity){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_anti_affinity->preferred_during_scheduling_ignored_during_execution) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_anti_affinity->preferred_during_scheduling_ignored_during_execution) {
            io_k8s_api_core_v1_weighted_pod_affinity_term_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_anti_affinity->preferred_during_scheduling_ignored_during_execution);
        io_k8s_api_core_v1_pod_anti_affinity->preferred_during_scheduling_ignored_during_execution = NULL;
    }
    if (io_k8s_api_core_v1_pod_anti_affinity->required_during_scheduling_ignored_during_execution) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_anti_affinity->required_during_scheduling_ignored_during_execution) {
            io_k8s_api_core_v1_pod_affinity_term_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_anti_affinity->required_during_scheduling_ignored_during_execution);
        io_k8s_api_core_v1_pod_anti_affinity->required_during_scheduling_ignored_during_execution = NULL;
    }
    free(io_k8s_api_core_v1_pod_anti_affinity);
}

cJSON *io_k8s_api_core_v1_pod_anti_affinity_convertToJSON(io_k8s_api_core_v1_pod_anti_affinity_t *io_k8s_api_core_v1_pod_anti_affinity) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_anti_affinity->preferred_during_scheduling_ignored_during_execution
    if(io_k8s_api_core_v1_pod_anti_affinity->preferred_during_scheduling_ignored_during_execution) { 
    cJSON *preferred_during_scheduling_ignored_during_execution = cJSON_AddArrayToObject(item, "preferredDuringSchedulingIgnoredDuringExecution");
    if(preferred_during_scheduling_ignored_during_execution == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *preferred_during_scheduling_ignored_during_executionListEntry;
    if (io_k8s_api_core_v1_pod_anti_affinity->preferred_during_scheduling_ignored_during_execution) {
    list_ForEach(preferred_during_scheduling_ignored_during_executionListEntry, io_k8s_api_core_v1_pod_anti_affinity->preferred_during_scheduling_ignored_during_execution) {
    cJSON *itemLocal = io_k8s_api_core_v1_weighted_pod_affinity_term_convertToJSON(preferred_during_scheduling_ignored_during_executionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(preferred_during_scheduling_ignored_during_execution, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_pod_anti_affinity->required_during_scheduling_ignored_during_execution
    if(io_k8s_api_core_v1_pod_anti_affinity->required_during_scheduling_ignored_during_execution) { 
    cJSON *required_during_scheduling_ignored_during_execution = cJSON_AddArrayToObject(item, "requiredDuringSchedulingIgnoredDuringExecution");
    if(required_during_scheduling_ignored_during_execution == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *required_during_scheduling_ignored_during_executionListEntry;
    if (io_k8s_api_core_v1_pod_anti_affinity->required_during_scheduling_ignored_during_execution) {
    list_ForEach(required_during_scheduling_ignored_during_executionListEntry, io_k8s_api_core_v1_pod_anti_affinity->required_during_scheduling_ignored_during_execution) {
    cJSON *itemLocal = io_k8s_api_core_v1_pod_affinity_term_convertToJSON(required_during_scheduling_ignored_during_executionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(required_during_scheduling_ignored_during_execution, itemLocal);
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

io_k8s_api_core_v1_pod_anti_affinity_t *io_k8s_api_core_v1_pod_anti_affinity_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_anti_affinityJSON){

    io_k8s_api_core_v1_pod_anti_affinity_t *io_k8s_api_core_v1_pod_anti_affinity_local_var = NULL;

    // io_k8s_api_core_v1_pod_anti_affinity->preferred_during_scheduling_ignored_during_execution
    cJSON *preferred_during_scheduling_ignored_during_execution = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_anti_affinityJSON, "preferredDuringSchedulingIgnoredDuringExecution");
    list_t *preferred_during_scheduling_ignored_during_executionList;
    if (preferred_during_scheduling_ignored_during_execution) { 
    cJSON *preferred_during_scheduling_ignored_during_execution_local_nonprimitive;
    if(!cJSON_IsArray(preferred_during_scheduling_ignored_during_execution)){
        goto end; //nonprimitive container
    }

    preferred_during_scheduling_ignored_during_executionList = list_create();

    cJSON_ArrayForEach(preferred_during_scheduling_ignored_during_execution_local_nonprimitive,preferred_during_scheduling_ignored_during_execution )
    {
        if(!cJSON_IsObject(preferred_during_scheduling_ignored_during_execution_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_weighted_pod_affinity_term_t *preferred_during_scheduling_ignored_during_executionItem = io_k8s_api_core_v1_weighted_pod_affinity_term_parseFromJSON(preferred_during_scheduling_ignored_during_execution_local_nonprimitive);

        list_addElement(preferred_during_scheduling_ignored_during_executionList, preferred_during_scheduling_ignored_during_executionItem);
    }
    }

    // io_k8s_api_core_v1_pod_anti_affinity->required_during_scheduling_ignored_during_execution
    cJSON *required_during_scheduling_ignored_during_execution = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_anti_affinityJSON, "requiredDuringSchedulingIgnoredDuringExecution");
    list_t *required_during_scheduling_ignored_during_executionList;
    if (required_during_scheduling_ignored_during_execution) { 
    cJSON *required_during_scheduling_ignored_during_execution_local_nonprimitive;
    if(!cJSON_IsArray(required_during_scheduling_ignored_during_execution)){
        goto end; //nonprimitive container
    }

    required_during_scheduling_ignored_during_executionList = list_create();

    cJSON_ArrayForEach(required_during_scheduling_ignored_during_execution_local_nonprimitive,required_during_scheduling_ignored_during_execution )
    {
        if(!cJSON_IsObject(required_during_scheduling_ignored_during_execution_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_pod_affinity_term_t *required_during_scheduling_ignored_during_executionItem = io_k8s_api_core_v1_pod_affinity_term_parseFromJSON(required_during_scheduling_ignored_during_execution_local_nonprimitive);

        list_addElement(required_during_scheduling_ignored_during_executionList, required_during_scheduling_ignored_during_executionItem);
    }
    }


    io_k8s_api_core_v1_pod_anti_affinity_local_var = io_k8s_api_core_v1_pod_anti_affinity_create (
        preferred_during_scheduling_ignored_during_execution ? preferred_during_scheduling_ignored_during_executionList : NULL,
        required_during_scheduling_ignored_during_execution ? required_during_scheduling_ignored_during_executionList : NULL
        );

    return io_k8s_api_core_v1_pod_anti_affinity_local_var;
end:
    return NULL;

}
