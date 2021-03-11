#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_event.h"



io_k8s_api_core_v1_event_t *io_k8s_api_core_v1_event_create(
    char *action,
    char *api_version,
    int count,
    char *event_time,
    char *first_timestamp,
    io_k8s_api_core_v1_object_reference_t *involved_object,
    char *kind,
    char *last_timestamp,
    char *message,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    char *reason,
    io_k8s_api_core_v1_object_reference_t *related,
    char *reporting_component,
    char *reporting_instance,
    io_k8s_api_core_v1_event_series_t *series,
    io_k8s_api_core_v1_event_source_t *source,
    char *type
    ) {
    io_k8s_api_core_v1_event_t *io_k8s_api_core_v1_event_local_var = malloc(sizeof(io_k8s_api_core_v1_event_t));
    if (!io_k8s_api_core_v1_event_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_event_local_var->action = action;
    io_k8s_api_core_v1_event_local_var->api_version = api_version;
    io_k8s_api_core_v1_event_local_var->count = count;
    io_k8s_api_core_v1_event_local_var->event_time = event_time;
    io_k8s_api_core_v1_event_local_var->first_timestamp = first_timestamp;
    io_k8s_api_core_v1_event_local_var->involved_object = involved_object;
    io_k8s_api_core_v1_event_local_var->kind = kind;
    io_k8s_api_core_v1_event_local_var->last_timestamp = last_timestamp;
    io_k8s_api_core_v1_event_local_var->message = message;
    io_k8s_api_core_v1_event_local_var->metadata = metadata;
    io_k8s_api_core_v1_event_local_var->reason = reason;
    io_k8s_api_core_v1_event_local_var->related = related;
    io_k8s_api_core_v1_event_local_var->reporting_component = reporting_component;
    io_k8s_api_core_v1_event_local_var->reporting_instance = reporting_instance;
    io_k8s_api_core_v1_event_local_var->series = series;
    io_k8s_api_core_v1_event_local_var->source = source;
    io_k8s_api_core_v1_event_local_var->type = type;

    return io_k8s_api_core_v1_event_local_var;
}


void io_k8s_api_core_v1_event_free(io_k8s_api_core_v1_event_t *io_k8s_api_core_v1_event) {
    if(NULL == io_k8s_api_core_v1_event){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_event->action) {
        free(io_k8s_api_core_v1_event->action);
        io_k8s_api_core_v1_event->action = NULL;
    }
    if (io_k8s_api_core_v1_event->api_version) {
        free(io_k8s_api_core_v1_event->api_version);
        io_k8s_api_core_v1_event->api_version = NULL;
    }
    if (io_k8s_api_core_v1_event->event_time) {
        free(io_k8s_api_core_v1_event->event_time);
        io_k8s_api_core_v1_event->event_time = NULL;
    }
    if (io_k8s_api_core_v1_event->first_timestamp) {
        free(io_k8s_api_core_v1_event->first_timestamp);
        io_k8s_api_core_v1_event->first_timestamp = NULL;
    }
    if (io_k8s_api_core_v1_event->involved_object) {
        io_k8s_api_core_v1_object_reference_free(io_k8s_api_core_v1_event->involved_object);
        io_k8s_api_core_v1_event->involved_object = NULL;
    }
    if (io_k8s_api_core_v1_event->kind) {
        free(io_k8s_api_core_v1_event->kind);
        io_k8s_api_core_v1_event->kind = NULL;
    }
    if (io_k8s_api_core_v1_event->last_timestamp) {
        free(io_k8s_api_core_v1_event->last_timestamp);
        io_k8s_api_core_v1_event->last_timestamp = NULL;
    }
    if (io_k8s_api_core_v1_event->message) {
        free(io_k8s_api_core_v1_event->message);
        io_k8s_api_core_v1_event->message = NULL;
    }
    if (io_k8s_api_core_v1_event->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_event->metadata);
        io_k8s_api_core_v1_event->metadata = NULL;
    }
    if (io_k8s_api_core_v1_event->reason) {
        free(io_k8s_api_core_v1_event->reason);
        io_k8s_api_core_v1_event->reason = NULL;
    }
    if (io_k8s_api_core_v1_event->related) {
        io_k8s_api_core_v1_object_reference_free(io_k8s_api_core_v1_event->related);
        io_k8s_api_core_v1_event->related = NULL;
    }
    if (io_k8s_api_core_v1_event->reporting_component) {
        free(io_k8s_api_core_v1_event->reporting_component);
        io_k8s_api_core_v1_event->reporting_component = NULL;
    }
    if (io_k8s_api_core_v1_event->reporting_instance) {
        free(io_k8s_api_core_v1_event->reporting_instance);
        io_k8s_api_core_v1_event->reporting_instance = NULL;
    }
    if (io_k8s_api_core_v1_event->series) {
        io_k8s_api_core_v1_event_series_free(io_k8s_api_core_v1_event->series);
        io_k8s_api_core_v1_event->series = NULL;
    }
    if (io_k8s_api_core_v1_event->source) {
        io_k8s_api_core_v1_event_source_free(io_k8s_api_core_v1_event->source);
        io_k8s_api_core_v1_event->source = NULL;
    }
    if (io_k8s_api_core_v1_event->type) {
        free(io_k8s_api_core_v1_event->type);
        io_k8s_api_core_v1_event->type = NULL;
    }
    free(io_k8s_api_core_v1_event);
}

cJSON *io_k8s_api_core_v1_event_convertToJSON(io_k8s_api_core_v1_event_t *io_k8s_api_core_v1_event) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_event->action
    if(io_k8s_api_core_v1_event->action) { 
    if(cJSON_AddStringToObject(item, "action", io_k8s_api_core_v1_event->action) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_event->api_version
    if(io_k8s_api_core_v1_event->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_event->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_event->count
    if(io_k8s_api_core_v1_event->count) { 
    if(cJSON_AddNumberToObject(item, "count", io_k8s_api_core_v1_event->count) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_event->event_time
    if(io_k8s_api_core_v1_event->event_time) { 
    if(cJSON_AddStringToObject(item, "eventTime", io_k8s_api_core_v1_event->event_time) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_core_v1_event->first_timestamp
    if(io_k8s_api_core_v1_event->first_timestamp) { 
    if(cJSON_AddStringToObject(item, "firstTimestamp", io_k8s_api_core_v1_event->first_timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_core_v1_event->involved_object
    if (!io_k8s_api_core_v1_event->involved_object) {
        goto fail;
    }
    
    cJSON *involved_object_local_JSON = io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_core_v1_event->involved_object);
    if(involved_object_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "involvedObject", involved_object_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_core_v1_event->kind
    if(io_k8s_api_core_v1_event->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_event->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_event->last_timestamp
    if(io_k8s_api_core_v1_event->last_timestamp) { 
    if(cJSON_AddStringToObject(item, "lastTimestamp", io_k8s_api_core_v1_event->last_timestamp) == NULL) {
    goto fail; //Date-Time
    }
     } 


    // io_k8s_api_core_v1_event->message
    if(io_k8s_api_core_v1_event->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_api_core_v1_event->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_event->metadata
    if (!io_k8s_api_core_v1_event->metadata) {
        goto fail;
    }
    
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_event->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_core_v1_event->reason
    if(io_k8s_api_core_v1_event->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_api_core_v1_event->reason) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_event->related
    if(io_k8s_api_core_v1_event->related) { 
    cJSON *related_local_JSON = io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_core_v1_event->related);
    if(related_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "related", related_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_event->reporting_component
    if(io_k8s_api_core_v1_event->reporting_component) { 
    if(cJSON_AddStringToObject(item, "reportingComponent", io_k8s_api_core_v1_event->reporting_component) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_event->reporting_instance
    if(io_k8s_api_core_v1_event->reporting_instance) { 
    if(cJSON_AddStringToObject(item, "reportingInstance", io_k8s_api_core_v1_event->reporting_instance) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_event->series
    if(io_k8s_api_core_v1_event->series) { 
    cJSON *series_local_JSON = io_k8s_api_core_v1_event_series_convertToJSON(io_k8s_api_core_v1_event->series);
    if(series_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "series", series_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_event->source
    if(io_k8s_api_core_v1_event->source) { 
    cJSON *source_local_JSON = io_k8s_api_core_v1_event_source_convertToJSON(io_k8s_api_core_v1_event->source);
    if(source_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "source", source_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_event->type
    if(io_k8s_api_core_v1_event->type) { 
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_core_v1_event->type) == NULL) {
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

io_k8s_api_core_v1_event_t *io_k8s_api_core_v1_event_parseFromJSON(cJSON *io_k8s_api_core_v1_eventJSON){

    io_k8s_api_core_v1_event_t *io_k8s_api_core_v1_event_local_var = NULL;

    // io_k8s_api_core_v1_event->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "action");
    if (action) { 
    if(!cJSON_IsString(action))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_event->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_event->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_event->event_time
    cJSON *event_time = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "eventTime");
    if (event_time) { 
    if(!cJSON_IsString(event_time))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_core_v1_event->first_timestamp
    cJSON *first_timestamp = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "firstTimestamp");
    if (first_timestamp) { 
    if(!cJSON_IsString(first_timestamp))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_core_v1_event->involved_object
    cJSON *involved_object = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "involvedObject");
    if (!involved_object) {
        goto end;
    }

    io_k8s_api_core_v1_object_reference_t *involved_object_local_nonprim = NULL;
    
    involved_object_local_nonprim = io_k8s_api_core_v1_object_reference_parseFromJSON(involved_object); //nonprimitive

    // io_k8s_api_core_v1_event->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_event->last_timestamp
    cJSON *last_timestamp = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "lastTimestamp");
    if (last_timestamp) { 
    if(!cJSON_IsString(last_timestamp))
    {
    goto end; //DateTime
    }
    }

    // io_k8s_api_core_v1_event->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_event->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "metadata");
    if (!metadata) {
        goto end;
    }

    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive

    // io_k8s_api_core_v1_event->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_event->related
    cJSON *related = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "related");
    io_k8s_api_core_v1_object_reference_t *related_local_nonprim = NULL;
    if (related) { 
    related_local_nonprim = io_k8s_api_core_v1_object_reference_parseFromJSON(related); //nonprimitive
    }

    // io_k8s_api_core_v1_event->reporting_component
    cJSON *reporting_component = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "reportingComponent");
    if (reporting_component) { 
    if(!cJSON_IsString(reporting_component))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_event->reporting_instance
    cJSON *reporting_instance = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "reportingInstance");
    if (reporting_instance) { 
    if(!cJSON_IsString(reporting_instance))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_event->series
    cJSON *series = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "series");
    io_k8s_api_core_v1_event_series_t *series_local_nonprim = NULL;
    if (series) { 
    series_local_nonprim = io_k8s_api_core_v1_event_series_parseFromJSON(series); //nonprimitive
    }

    // io_k8s_api_core_v1_event->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "source");
    io_k8s_api_core_v1_event_source_t *source_local_nonprim = NULL;
    if (source) { 
    source_local_nonprim = io_k8s_api_core_v1_event_source_parseFromJSON(source); //nonprimitive
    }

    // io_k8s_api_core_v1_event->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_eventJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_event_local_var = io_k8s_api_core_v1_event_create (
        action ? strdup(action->valuestring) : NULL,
        api_version ? strdup(api_version->valuestring) : NULL,
        count ? count->valuedouble : 0,
        event_time ? strdup(event_time->valuestring) : NULL,
        first_timestamp ? strdup(first_timestamp->valuestring) : NULL,
        involved_object_local_nonprim,
        kind ? strdup(kind->valuestring) : NULL,
        last_timestamp ? strdup(last_timestamp->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        metadata_local_nonprim,
        reason ? strdup(reason->valuestring) : NULL,
        related ? related_local_nonprim : NULL,
        reporting_component ? strdup(reporting_component->valuestring) : NULL,
        reporting_instance ? strdup(reporting_instance->valuestring) : NULL,
        series ? series_local_nonprim : NULL,
        source ? source_local_nonprim : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return io_k8s_api_core_v1_event_local_var;
end:
    if (involved_object_local_nonprim) {
        io_k8s_api_core_v1_object_reference_free(involved_object_local_nonprim);
        involved_object_local_nonprim = NULL;
    }
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (related_local_nonprim) {
        io_k8s_api_core_v1_object_reference_free(related_local_nonprim);
        related_local_nonprim = NULL;
    }
    if (series_local_nonprim) {
        io_k8s_api_core_v1_event_series_free(series_local_nonprim);
        series_local_nonprim = NULL;
    }
    if (source_local_nonprim) {
        io_k8s_api_core_v1_event_source_free(source_local_nonprim);
        source_local_nonprim = NULL;
    }
    return NULL;

}
