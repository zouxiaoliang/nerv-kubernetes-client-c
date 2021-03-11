#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_batch_v1_job_status.h"



io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status_create(
    int active,
    char *completed_indexes,
    char *completion_time,
    list_t *conditions,
    int failed,
    char *start_time,
    int succeeded
    ) {
    io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status_local_var = malloc(sizeof(io_k8s_api_batch_v1_job_status_t));
    if (!io_k8s_api_batch_v1_job_status_local_var) {
        return NULL;
    }
    io_k8s_api_batch_v1_job_status_local_var->active = active;
    io_k8s_api_batch_v1_job_status_local_var->completed_indexes = completed_indexes;
    io_k8s_api_batch_v1_job_status_local_var->completion_time = completion_time;
    io_k8s_api_batch_v1_job_status_local_var->conditions = conditions;
    io_k8s_api_batch_v1_job_status_local_var->failed = failed;
    io_k8s_api_batch_v1_job_status_local_var->start_time = start_time;
    io_k8s_api_batch_v1_job_status_local_var->succeeded = succeeded;

    return io_k8s_api_batch_v1_job_status_local_var;
}


void io_k8s_api_batch_v1_job_status_free(io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status) {
    if(NULL == io_k8s_api_batch_v1_job_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_batch_v1_job_status->completed_indexes) {
        free(io_k8s_api_batch_v1_job_status->completed_indexes);
        io_k8s_api_batch_v1_job_status->completed_indexes = NULL;
    }
    if (io_k8s_api_batch_v1_job_status->completion_time) {
        free(io_k8s_api_batch_v1_job_status->completion_time);
        io_k8s_api_batch_v1_job_status->completion_time = NULL;
    }
    if (io_k8s_api_batch_v1_job_status->conditions) {
        list_ForEach(listEntry, io_k8s_api_batch_v1_job_status->conditions) {
            io_k8s_api_batch_v1_job_condition_free(listEntry->data);
        }
        list_free(io_k8s_api_batch_v1_job_status->conditions);
        io_k8s_api_batch_v1_job_status->conditions = NULL;
    }
    if (io_k8s_api_batch_v1_job_status->start_time) {
        free(io_k8s_api_batch_v1_job_status->start_time);
        io_k8s_api_batch_v1_job_status->start_time = NULL;
    }
    free(io_k8s_api_batch_v1_job_status);
}

cJSON *io_k8s_api_batch_v1_job_status_convertToJSON(io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_batch_v1_job_status->active
    if(io_k8s_api_batch_v1_job_status->active) { 
    if(cJSON_AddNumberToObject(item, "active", io_k8s_api_batch_v1_job_status->active) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_batch_v1_job_status->completed_indexes
    if(io_k8s_api_batch_v1_job_status->completed_indexes) { 
    if(cJSON_AddStringToObject(item, "completedIndexes", io_k8s_api_batch_v1_job_status->completed_indexes) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_batch_v1_job_status->completion_time
    if(io_k8s_api_batch_v1_job_status->completion_time) { 
    if(cJSON_AddStringToObject(item, "completionTime", io_k8s_api_batch_v1_job_status->completion_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_batch_v1_job_status->conditions
    if(io_k8s_api_batch_v1_job_status->conditions) { 
    cJSON *conditions = cJSON_AddArrayToObject(item, "conditions");
    if(conditions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *conditionsListEntry;
    if (io_k8s_api_batch_v1_job_status->conditions) {
    list_ForEach(conditionsListEntry, io_k8s_api_batch_v1_job_status->conditions) {
    cJSON *itemLocal = io_k8s_api_batch_v1_job_condition_convertToJSON(conditionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(conditions, itemLocal);
    }
    }
     } 


    // io_k8s_api_batch_v1_job_status->failed
    if(io_k8s_api_batch_v1_job_status->failed) { 
    if(cJSON_AddNumberToObject(item, "failed", io_k8s_api_batch_v1_job_status->failed) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_batch_v1_job_status->start_time
    if(io_k8s_api_batch_v1_job_status->start_time) { 
    if(cJSON_AddStringToObject(item, "startTime", io_k8s_api_batch_v1_job_status->start_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_batch_v1_job_status->succeeded
    if(io_k8s_api_batch_v1_job_status->succeeded) { 
    if(cJSON_AddNumberToObject(item, "succeeded", io_k8s_api_batch_v1_job_status->succeeded) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status_parseFromJSON(cJSON *io_k8s_api_batch_v1_job_statusJSON){

    io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status_local_var = NULL;

    // io_k8s_api_batch_v1_job_status->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_statusJSON, "active");
    if (active) { 
    if(!cJSON_IsNumber(active))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_batch_v1_job_status->completed_indexes
    cJSON *completed_indexes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_statusJSON, "completedIndexes");
    if (completed_indexes) { 
    if(!cJSON_IsString(completed_indexes))
    {
    goto end; //String
    }
    }

    // io_k8s_api_batch_v1_job_status->completion_time
    cJSON *completion_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_statusJSON, "completionTime");
    if (completion_time) { 
    if(!cJSON_IsString(completion_time))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_batch_v1_job_status->conditions
    cJSON *conditions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_statusJSON, "conditions");
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
        io_k8s_api_batch_v1_job_condition_t *conditionsItem = io_k8s_api_batch_v1_job_condition_parseFromJSON(conditions_local_nonprimitive);

        list_addElement(conditionsList, conditionsItem);
    }
    }

    // io_k8s_api_batch_v1_job_status->failed
    cJSON *failed = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_statusJSON, "failed");
    if (failed) { 
    if(!cJSON_IsNumber(failed))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_batch_v1_job_status->start_time
    cJSON *start_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_statusJSON, "startTime");
    if (start_time) { 
    if(!cJSON_IsString(start_time))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_batch_v1_job_status->succeeded
    cJSON *succeeded = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_statusJSON, "succeeded");
    if (succeeded) { 
    if(!cJSON_IsNumber(succeeded))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_batch_v1_job_status_local_var = io_k8s_api_batch_v1_job_status_create (
        active ? active->valuedouble : 0,
        completed_indexes ? strdup(completed_indexes->valuestring) : NULL,
        completion_time ? strdup(completion_time->valuestring) : NULL,
        conditions ? conditionsList : NULL,
        failed ? failed->valuedouble : 0,
        start_time ? strdup(start_time->valuestring) : NULL,
        succeeded ? succeeded->valuedouble : 0
        );

    return io_k8s_api_batch_v1_job_status_local_var;
end:
    return NULL;

}
