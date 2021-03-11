#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_events_v1beta1_event.h"



io_k8s_api_events_v1beta1_event_t *io_k8s_api_events_v1beta1_event_create(
    char *action,
    char *api_version,
    int deprecated_count,
    char *deprecated_first_timestamp,
    char *deprecated_last_timestamp,
    io_k8s_api_core_v1_event_source_t *deprecated_source,
    char *event_time,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    char *note,
    char *reason,
    io_k8s_api_core_v1_object_reference_t *regarding,
    io_k8s_api_core_v1_object_reference_t *related,
    char *reporting_controller,
    char *reporting_instance,
    io_k8s_api_events_v1beta1_event_series_t *series,
    char *type
    ) {
    io_k8s_api_events_v1beta1_event_t *io_k8s_api_events_v1beta1_event_local_var = malloc(sizeof(io_k8s_api_events_v1beta1_event_t));
    if (!io_k8s_api_events_v1beta1_event_local_var) {
        return NULL;
    }
    io_k8s_api_events_v1beta1_event_local_var->action = action;
    io_k8s_api_events_v1beta1_event_local_var->api_version = api_version;
    io_k8s_api_events_v1beta1_event_local_var->deprecated_count = deprecated_count;
    io_k8s_api_events_v1beta1_event_local_var->deprecated_first_timestamp = deprecated_first_timestamp;
    io_k8s_api_events_v1beta1_event_local_var->deprecated_last_timestamp = deprecated_last_timestamp;
    io_k8s_api_events_v1beta1_event_local_var->deprecated_source = deprecated_source;
    io_k8s_api_events_v1beta1_event_local_var->event_time = event_time;
    io_k8s_api_events_v1beta1_event_local_var->kind = kind;
    io_k8s_api_events_v1beta1_event_local_var->metadata = metadata;
    io_k8s_api_events_v1beta1_event_local_var->note = note;
    io_k8s_api_events_v1beta1_event_local_var->reason = reason;
    io_k8s_api_events_v1beta1_event_local_var->regarding = regarding;
    io_k8s_api_events_v1beta1_event_local_var->related = related;
    io_k8s_api_events_v1beta1_event_local_var->reporting_controller = reporting_controller;
    io_k8s_api_events_v1beta1_event_local_var->reporting_instance = reporting_instance;
    io_k8s_api_events_v1beta1_event_local_var->series = series;
    io_k8s_api_events_v1beta1_event_local_var->type = type;

    return io_k8s_api_events_v1beta1_event_local_var;
}


void io_k8s_api_events_v1beta1_event_free(io_k8s_api_events_v1beta1_event_t *io_k8s_api_events_v1beta1_event) {
    if(NULL == io_k8s_api_events_v1beta1_event){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_events_v1beta1_event->action) {
        free(io_k8s_api_events_v1beta1_event->action);
        io_k8s_api_events_v1beta1_event->action = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->api_version) {
        free(io_k8s_api_events_v1beta1_event->api_version);
        io_k8s_api_events_v1beta1_event->api_version = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->deprecated_first_timestamp) {
        free(io_k8s_api_events_v1beta1_event->deprecated_first_timestamp);
        io_k8s_api_events_v1beta1_event->deprecated_first_timestamp = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->deprecated_last_timestamp) {
        free(io_k8s_api_events_v1beta1_event->deprecated_last_timestamp);
        io_k8s_api_events_v1beta1_event->deprecated_last_timestamp = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->deprecated_source) {
        io_k8s_api_core_v1_event_source_free(io_k8s_api_events_v1beta1_event->deprecated_source);
        io_k8s_api_events_v1beta1_event->deprecated_source = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->event_time) {
        free(io_k8s_api_events_v1beta1_event->event_time);
        io_k8s_api_events_v1beta1_event->event_time = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->kind) {
        free(io_k8s_api_events_v1beta1_event->kind);
        io_k8s_api_events_v1beta1_event->kind = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_events_v1beta1_event->metadata);
        io_k8s_api_events_v1beta1_event->metadata = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->note) {
        free(io_k8s_api_events_v1beta1_event->note);
        io_k8s_api_events_v1beta1_event->note = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->reason) {
        free(io_k8s_api_events_v1beta1_event->reason);
        io_k8s_api_events_v1beta1_event->reason = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->regarding) {
        io_k8s_api_core_v1_object_reference_free(io_k8s_api_events_v1beta1_event->regarding);
        io_k8s_api_events_v1beta1_event->regarding = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->related) {
        io_k8s_api_core_v1_object_reference_free(io_k8s_api_events_v1beta1_event->related);
        io_k8s_api_events_v1beta1_event->related = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->reporting_controller) {
        free(io_k8s_api_events_v1beta1_event->reporting_controller);
        io_k8s_api_events_v1beta1_event->reporting_controller = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->reporting_instance) {
        free(io_k8s_api_events_v1beta1_event->reporting_instance);
        io_k8s_api_events_v1beta1_event->reporting_instance = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->series) {
        io_k8s_api_events_v1beta1_event_series_free(io_k8s_api_events_v1beta1_event->series);
        io_k8s_api_events_v1beta1_event->series = NULL;
    }
    if (io_k8s_api_events_v1beta1_event->type) {
        free(io_k8s_api_events_v1beta1_event->type);
        io_k8s_api_events_v1beta1_event->type = NULL;
    }
    free(io_k8s_api_events_v1beta1_event);
}

cJSON *io_k8s_api_events_v1beta1_event_convertToJSON(io_k8s_api_events_v1beta1_event_t *io_k8s_api_events_v1beta1_event) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_events_v1beta1_event->action
    if(io_k8s_api_events_v1beta1_event->action) { 
    if(cJSON_AddStringToObject(item, "action", io_k8s_api_events_v1beta1_event->action) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_events_v1beta1_event->api_version
    if(io_k8s_api_events_v1beta1_event->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_events_v1beta1_event->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_events_v1beta1_event->deprecated_count
    if(io_k8s_api_events_v1beta1_event->deprecated_count) { 
    if(cJSON_AddNumberToObject(item, "deprecatedCount", io_k8s_api_events_v1beta1_event->deprecated_count) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_events_v1beta1_event->deprecated_first_timestamp
    if(io_k8s_api_events_v1beta1_event->deprecated_first_timestamp) { 
    if(cJSON_AddStringToObject(item, "deprecatedFirstTimestamp", io_k8s_api_events_v1beta1_event->deprecated_first_timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_events_v1beta1_event->deprecated_last_timestamp
    if(io_k8s_api_events_v1beta1_event->deprecated_last_timestamp) { 
    if(cJSON_AddStringToObject(item, "deprecatedLastTimestamp", io_k8s_api_events_v1beta1_event->deprecated_last_timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_events_v1beta1_event->deprecated_source
    if(io_k8s_api_events_v1beta1_event->deprecated_source) { 
    cJSON *deprecated_source_local_JSON = io_k8s_api_core_v1_event_source_convertToJSON(io_k8s_api_events_v1beta1_event->deprecated_source);
    if(deprecated_source_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "deprecatedSource", deprecated_source_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_events_v1beta1_event->event_time
    if (!io_k8s_api_events_v1beta1_event->event_time) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "eventTime", io_k8s_api_events_v1beta1_event->event_time) == NULL) {
    goto fail; //Date-Time
    }


    // io_k8s_api_events_v1beta1_event->kind
    if(io_k8s_api_events_v1beta1_event->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_events_v1beta1_event->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_events_v1beta1_event->metadata
    if(io_k8s_api_events_v1beta1_event->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_events_v1beta1_event->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_events_v1beta1_event->note
    if(io_k8s_api_events_v1beta1_event->note) { 
    if(cJSON_AddStringToObject(item, "note", io_k8s_api_events_v1beta1_event->note) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_events_v1beta1_event->reason
    if(io_k8s_api_events_v1beta1_event->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_api_events_v1beta1_event->reason) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_events_v1beta1_event->regarding
    if(io_k8s_api_events_v1beta1_event->regarding) { 
    cJSON *regarding_local_JSON = io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_events_v1beta1_event->regarding);
    if(regarding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "regarding", regarding_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_events_v1beta1_event->related
    if(io_k8s_api_events_v1beta1_event->related) { 
    cJSON *related_local_JSON = io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_events_v1beta1_event->related);
    if(related_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "related", related_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_events_v1beta1_event->reporting_controller
    if(io_k8s_api_events_v1beta1_event->reporting_controller) { 
    if(cJSON_AddStringToObject(item, "reportingController", io_k8s_api_events_v1beta1_event->reporting_controller) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_events_v1beta1_event->reporting_instance
    if(io_k8s_api_events_v1beta1_event->reporting_instance) { 
    if(cJSON_AddStringToObject(item, "reportingInstance", io_k8s_api_events_v1beta1_event->reporting_instance) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_events_v1beta1_event->series
    if(io_k8s_api_events_v1beta1_event->series) { 
    cJSON *series_local_JSON = io_k8s_api_events_v1beta1_event_series_convertToJSON(io_k8s_api_events_v1beta1_event->series);
    if(series_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "series", series_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_events_v1beta1_event->type
    if(io_k8s_api_events_v1beta1_event->type) { 
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_events_v1beta1_event->type) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_events_v1beta1_event_t *io_k8s_api_events_v1beta1_event_parseFromJSON(cJSON *io_k8s_api_events_v1beta1_eventJSON){

    io_k8s_api_events_v1beta1_event_t *io_k8s_api_events_v1beta1_event_local_var = NULL;

    // io_k8s_api_events_v1beta1_event->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "action");
    if (action) { 
    if(!cJSON_IsString(action))
    {
    goto end; //String
    }
    }

    // io_k8s_api_events_v1beta1_event->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_events_v1beta1_event->deprecated_count
    cJSON *deprecated_count = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "deprecatedCount");
    if (deprecated_count) { 
    if(!cJSON_IsNumber(deprecated_count))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_events_v1beta1_event->deprecated_first_timestamp
    cJSON *deprecated_first_timestamp = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "deprecatedFirstTimestamp");
    if (deprecated_first_timestamp) { 
    if(!cJSON_IsString(deprecated_first_timestamp))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_events_v1beta1_event->deprecated_last_timestamp
    cJSON *deprecated_last_timestamp = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "deprecatedLastTimestamp");
    if (deprecated_last_timestamp) { 
    if(!cJSON_IsString(deprecated_last_timestamp))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_events_v1beta1_event->deprecated_source
    cJSON *deprecated_source = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "deprecatedSource");
    io_k8s_api_core_v1_event_source_t *deprecated_source_local_nonprim = NULL;
    if (deprecated_source) { 
    deprecated_source_local_nonprim = io_k8s_api_core_v1_event_source_parseFromJSON(deprecated_source); //nonprimitive
    }

    // io_k8s_api_events_v1beta1_event->event_time
    cJSON *event_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "eventTime");
    if (!event_time) {
        goto end;
    }

    
    if(!cJSON_IsString(event_time))
    {
    goto end; //DateTime
    }

    // io_k8s_api_events_v1beta1_event->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_events_v1beta1_event->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_events_v1beta1_event->note
    cJSON *note = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "note");
    if (note) { 
    if(!cJSON_IsString(note))
    {
    goto end; //String
    }
    }

    // io_k8s_api_events_v1beta1_event->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }

    // io_k8s_api_events_v1beta1_event->regarding
    cJSON *regarding = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "regarding");
    io_k8s_api_core_v1_object_reference_t *regarding_local_nonprim = NULL;
    if (regarding) { 
    regarding_local_nonprim = io_k8s_api_core_v1_object_reference_parseFromJSON(regarding); //nonprimitive
    }

    // io_k8s_api_events_v1beta1_event->related
    cJSON *related = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "related");
    io_k8s_api_core_v1_object_reference_t *related_local_nonprim = NULL;
    if (related) { 
    related_local_nonprim = io_k8s_api_core_v1_object_reference_parseFromJSON(related); //nonprimitive
    }

    // io_k8s_api_events_v1beta1_event->reporting_controller
    cJSON *reporting_controller = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "reportingController");
    if (reporting_controller) { 
    if(!cJSON_IsString(reporting_controller))
    {
    goto end; //String
    }
    }

    // io_k8s_api_events_v1beta1_event->reporting_instance
    cJSON *reporting_instance = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "reportingInstance");
    if (reporting_instance) { 
    if(!cJSON_IsString(reporting_instance))
    {
    goto end; //String
    }
    }

    // io_k8s_api_events_v1beta1_event->series
    cJSON *series = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "series");
    io_k8s_api_events_v1beta1_event_series_t *series_local_nonprim = NULL;
    if (series) { 
    series_local_nonprim = io_k8s_api_events_v1beta1_event_series_parseFromJSON(series); //nonprimitive
    }

    // io_k8s_api_events_v1beta1_event->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_events_v1beta1_eventJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    io_k8s_api_events_v1beta1_event_local_var = io_k8s_api_events_v1beta1_event_create (
        action ? strdup(action->valuestring) : NULL,
        api_version ? strdup(api_version->valuestring) : NULL,
        deprecated_count ? deprecated_count->valuedouble : 0,
        deprecated_first_timestamp ? strdup(deprecated_first_timestamp->valuestring) : NULL,
        deprecated_last_timestamp ? strdup(deprecated_last_timestamp->valuestring) : NULL,
        deprecated_source ? deprecated_source_local_nonprim : NULL,
        strdup(event_time->valuestring),
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        note ? strdup(note->valuestring) : NULL,
        reason ? strdup(reason->valuestring) : NULL,
        regarding ? regarding_local_nonprim : NULL,
        related ? related_local_nonprim : NULL,
        reporting_controller ? strdup(reporting_controller->valuestring) : NULL,
        reporting_instance ? strdup(reporting_instance->valuestring) : NULL,
        series ? series_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return io_k8s_api_events_v1beta1_event_local_var;
end:
    if (deprecated_source_local_nonprim) {
        io_k8s_api_core_v1_event_source_free(deprecated_source_local_nonprim);
        deprecated_source_local_nonprim = NULL;
    }
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (regarding_local_nonprim) {
        io_k8s_api_core_v1_object_reference_free(regarding_local_nonprim);
        regarding_local_nonprim = NULL;
    }
    if (related_local_nonprim) {
        io_k8s_api_core_v1_object_reference_free(related_local_nonprim);
        related_local_nonprim = NULL;
    }
    if (series_local_nonprim) {
        io_k8s_api_events_v1beta1_event_series_free(series_local_nonprim);
        series_local_nonprim = NULL;
    }
    return NULL;

}
