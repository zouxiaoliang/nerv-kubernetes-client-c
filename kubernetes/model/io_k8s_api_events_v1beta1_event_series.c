#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_events_v1beta1_event_series.h"



io_k8s_api_events_v1beta1_event_series_t *io_k8s_api_events_v1beta1_event_series_create(
    int count,
    char *last_observed_time
    ) {
    io_k8s_api_events_v1beta1_event_series_t *io_k8s_api_events_v1beta1_event_series_local_var = malloc(sizeof(io_k8s_api_events_v1beta1_event_series_t));
    if (!io_k8s_api_events_v1beta1_event_series_local_var) {
        return NULL;
    }
    io_k8s_api_events_v1beta1_event_series_local_var->count = count;
    io_k8s_api_events_v1beta1_event_series_local_var->last_observed_time = last_observed_time;

    return io_k8s_api_events_v1beta1_event_series_local_var;
}


void io_k8s_api_events_v1beta1_event_series_free(io_k8s_api_events_v1beta1_event_series_t *io_k8s_api_events_v1beta1_event_series) {
    if(NULL == io_k8s_api_events_v1beta1_event_series){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_events_v1beta1_event_series->last_observed_time) {
        free(io_k8s_api_events_v1beta1_event_series->last_observed_time);
        io_k8s_api_events_v1beta1_event_series->last_observed_time = NULL;
    }
    free(io_k8s_api_events_v1beta1_event_series);
}

cJSON *io_k8s_api_events_v1beta1_event_series_convertToJSON(io_k8s_api_events_v1beta1_event_series_t *io_k8s_api_events_v1beta1_event_series) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_events_v1beta1_event_series->count
    if (!io_k8s_api_events_v1beta1_event_series->count) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "count", io_k8s_api_events_v1beta1_event_series->count) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_api_events_v1beta1_event_series->last_observed_time
    if (!io_k8s_api_events_v1beta1_event_series->last_observed_time) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "lastObservedTime", io_k8s_api_events_v1beta1_event_series->last_observed_time) == NULL) {
    goto fail; //Date-Time
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_events_v1beta1_event_series_t *io_k8s_api_events_v1beta1_event_series_parseFromJSON(cJSON *io_k8s_api_events_v1beta1_event_seriesJSON){

    io_k8s_api_events_v1beta1_event_series_t *io_k8s_api_events_v1beta1_event_series_local_var = NULL;

    // io_k8s_api_events_v1beta1_event_series->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_event_seriesJSON, "count");
    if (!count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }

    // io_k8s_api_events_v1beta1_event_series->last_observed_time
    cJSON *last_observed_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_event_seriesJSON, "lastObservedTime");
    if (!last_observed_time) {
        goto end;
    }

    
    if(!cJSON_IsString(last_observed_time))
    {
    goto end; //DateTime
    }


    io_k8s_api_events_v1beta1_event_series_local_var = io_k8s_api_events_v1beta1_event_series_create (
        count->valuedouble,
        strdup(last_observed_time->valuestring)
        );

    return io_k8s_api_events_v1beta1_event_series_local_var;
end:
    return NULL;

}
