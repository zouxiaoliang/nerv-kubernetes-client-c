#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_batch_v1beta1_cron_job_status.h"



io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status_create(
    list_t *active,
    char *last_schedule_time
    ) {
    io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status_local_var = malloc(sizeof(io_k8s_api_batch_v1beta1_cron_job_status_t));
    if (!io_k8s_api_batch_v1beta1_cron_job_status_local_var) {
        return NULL;
    }
    io_k8s_api_batch_v1beta1_cron_job_status_local_var->active = active;
    io_k8s_api_batch_v1beta1_cron_job_status_local_var->last_schedule_time = last_schedule_time;

    return io_k8s_api_batch_v1beta1_cron_job_status_local_var;
}


void io_k8s_api_batch_v1beta1_cron_job_status_free(io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status) {
    if(NULL == io_k8s_api_batch_v1beta1_cron_job_status){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_batch_v1beta1_cron_job_status->active) {
        list_ForEach(listEntry, io_k8s_api_batch_v1beta1_cron_job_status->active) {
            io_k8s_api_core_v1_object_reference_free(listEntry->data);
        }
        list_free(io_k8s_api_batch_v1beta1_cron_job_status->active);
        io_k8s_api_batch_v1beta1_cron_job_status->active = NULL;
    }
    if (io_k8s_api_batch_v1beta1_cron_job_status->last_schedule_time) {
        free(io_k8s_api_batch_v1beta1_cron_job_status->last_schedule_time);
        io_k8s_api_batch_v1beta1_cron_job_status->last_schedule_time = NULL;
    }
    free(io_k8s_api_batch_v1beta1_cron_job_status);
}

cJSON *io_k8s_api_batch_v1beta1_cron_job_status_convertToJSON(io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_batch_v1beta1_cron_job_status->active
    if(io_k8s_api_batch_v1beta1_cron_job_status->active) { 
    cJSON *active = cJSON_AddArrayToObject(item, "active");
    if(active == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *activeListEntry;
    if (io_k8s_api_batch_v1beta1_cron_job_status->active) {
    list_ForEach(activeListEntry, io_k8s_api_batch_v1beta1_cron_job_status->active) {
    cJSON *itemLocal = io_k8s_api_core_v1_object_reference_convertToJSON(activeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(active, itemLocal);
    }
    }
     } 


    // io_k8s_api_batch_v1beta1_cron_job_status->last_schedule_time
    if(io_k8s_api_batch_v1beta1_cron_job_status->last_schedule_time) { 
    if(cJSON_AddStringToObject(item, "lastScheduleTime", io_k8s_api_batch_v1beta1_cron_job_status->last_schedule_time) == NULL) {
    goto fail; //Date-Time
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status_parseFromJSON(cJSON *io_k8s_api_batch_v1beta1_cron_job_statusJSON){

    io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status_local_var = NULL;

    // io_k8s_api_batch_v1beta1_cron_job_status->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1beta1_cron_job_statusJSON, "active");
    list_t *activeList;
    if (active) { 
    cJSON *active_local_nonprimitive;
    if(!cJSON_IsArray(active)){
        goto end; //nonprimitive container
    }

    activeList = list_create();

    cJSON_ArrayForEach(active_local_nonprimitive,active )
    {
        if(!cJSON_IsObject(active_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_object_reference_t *activeItem = io_k8s_api_core_v1_object_reference_parseFromJSON(active_local_nonprimitive);

        list_addElement(activeList, activeItem);
    }
    }

    // io_k8s_api_batch_v1beta1_cron_job_status->last_schedule_time
    cJSON *last_schedule_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1beta1_cron_job_statusJSON, "lastScheduleTime");
    if (last_schedule_time) { 
    if(!cJSON_IsString(last_schedule_time))
    {
    goto end; //DateTime
    }
    }


    io_k8s_api_batch_v1beta1_cron_job_status_local_var = io_k8s_api_batch_v1beta1_cron_job_status_create (
        active ? activeList : NULL,
        last_schedule_time ? strdup(last_schedule_time->valuestring) : NULL
        );

    return io_k8s_api_batch_v1beta1_cron_job_status_local_var;
end:
    return NULL;

}
