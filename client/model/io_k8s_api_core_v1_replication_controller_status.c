#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_replication_controller_status.h"



io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status_create(
    int available_replicas,
    list_t *conditions,
    int fully_labeled_replicas,
    long observed_generation,
    int ready_replicas,
    int replicas
    ) {
    io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status_local_var = malloc(sizeof(io_k8s_api_core_v1_replication_controller_status_t));
    if (!io_k8s_api_core_v1_replication_controller_status_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_replication_controller_status_local_var->available_replicas = available_replicas;
    io_k8s_api_core_v1_replication_controller_status_local_var->conditions = conditions;
    io_k8s_api_core_v1_replication_controller_status_local_var->fully_labeled_replicas = fully_labeled_replicas;
    io_k8s_api_core_v1_replication_controller_status_local_var->observed_generation = observed_generation;
    io_k8s_api_core_v1_replication_controller_status_local_var->ready_replicas = ready_replicas;
    io_k8s_api_core_v1_replication_controller_status_local_var->replicas = replicas;

    return io_k8s_api_core_v1_replication_controller_status_local_var;
}


void io_k8s_api_core_v1_replication_controller_status_free(io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status) {
    if(NULL == io_k8s_api_core_v1_replication_controller_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_replication_controller_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_core_v1_replication_controller_status->conditions) {
            io_k8s_api_core_v1_replication_controller_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_replication_controller_status->conditions);
        io_k8s_api_core_v1_replication_controller_status->conditions = NULL;
    }
    free(io_k8s_api_core_v1_replication_controller_status);
}

cJSON *io_k8s_api_core_v1_replication_controller_status_convertToJSON(io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_replication_controller_status->available_replicas
    if(io_k8s_api_core_v1_replication_controller_status->available_replicas) { 
    if(cJSON_AddNumberToObject(item, "availableReplicas", io_k8s_api_core_v1_replication_controller_status->available_replicas) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_replication_controller_status->conditions
    if(io_k8s_api_core_v1_replication_controller_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_core_v1_replication_controller_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_core_v1_replication_controller_status->conditions) {
    cJSON *itemLocal = io_k8s_api_core_v1_replication_controller_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_replication_controller_status->fully_labeled_replicas
    if(io_k8s_api_core_v1_replication_controller_status->fully_labeled_replicas) { 
    if(cJSON_AddNumberToObject(item, "fullyLabeledReplicas", io_k8s_api_core_v1_replication_controller_status->fully_labeled_replicas) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_replication_controller_status->observed_generation
    if(io_k8s_api_core_v1_replication_controller_status->observed_generation) { 
    if(cJSON_AddNumberToObject(item, "observedGeneration", io_k8s_api_core_v1_replication_controller_status->observed_generation) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_replication_controller_status->ready_replicas
    if(io_k8s_api_core_v1_replication_controller_status->ready_replicas) { 
    if(cJSON_AddNumberToObject(item, "readyReplicas", io_k8s_api_core_v1_replication_controller_status->ready_replicas) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_replication_controller_status->replicas
    if (!io_k8s_api_core_v1_replication_controller_status->replicas) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "replicas", io_k8s_api_core_v1_replication_controller_status->replicas) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status_parseFromJSON(cJSON *io_k8s_api_core_v1_replication_controller_statusJSON){

    io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status_local_var = NULL;

    // io_k8s_api_core_v1_replication_controller_status->available_replicas
    cJSON *available_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_statusJSON, "availableReplicas");
    if (available_replicas) { 
    if(!cJSON_IsNumber(available_replicas))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_replication_controller_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_statusJSON, "conditions");
    list_t *conditionsList;
    if (conditions) { 
    cJSON *conditions_local_nonprimitive;
    if(!cJSON_IsArray(conditions)){
        goto end; //nonprimitive container
    }

    conditionsList = list_create();

    cJSON_ArrayForEach(conditions_local_nonprimitive,conditions )
    {
        if(!cJSON_IsObject(conditions_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_replication_controller_condition_t *conditionsItem = io_k8s_api_core_v1_replication_controller_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // io_k8s_api_core_v1_replication_controller_status->fully_labeled_replicas
    cJSON *fully_labeled_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_statusJSON, "fullyLabeledReplicas");
    if (fully_labeled_replicas) { 
    if(!cJSON_IsNumber(fully_labeled_replicas))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_replication_controller_status->observed_generation
    cJSON *observed_generation = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_statusJSON, "observedGeneration");
    if (observed_generation) { 
    if(!cJSON_IsNumber(observed_generation))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_replication_controller_status->ready_replicas
    cJSON *ready_replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_statusJSON, "readyReplicas");
    if (ready_replicas) { 
    if(!cJSON_IsNumber(ready_replicas))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_replication_controller_status->replicas
    cJSON *replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_statusJSON, "replicas");
    if (!replicas) {
        goto end;
    }

    
    if(!cJSON_IsNumber(replicas))
    {
    goto end; //Numeric
    }


    io_k8s_api_core_v1_replication_controller_status_local_var = io_k8s_api_core_v1_replication_controller_status_create (
        available_replicas ? available_replicas->valuedouble : 0,
        conditions ? conditionsList : NULL,
        fully_labeled_replicas ? fully_labeled_replicas->valuedouble : 0,
        observed_generation ? observed_generation->valuedouble : 0,
        ready_replicas ? ready_replicas->valuedouble : 0,
        replicas->valuedouble
        );

    return io_k8s_api_core_v1_replication_controller_status_local_var;
end:
    return NULL;

}
