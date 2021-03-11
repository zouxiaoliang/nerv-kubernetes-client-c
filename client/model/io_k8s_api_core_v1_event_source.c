#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_event_source.h"



io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source_create(
    char *component,
    char *host
    ) {
    io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source_local_var = malloc(sizeof(io_k8s_api_core_v1_event_source_t));
    if (!io_k8s_api_core_v1_event_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_event_source_local_var->component = component;
    io_k8s_api_core_v1_event_source_local_var->host = host;

    return io_k8s_api_core_v1_event_source_local_var;
}


void io_k8s_api_core_v1_event_source_free(io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source) {
    if(NULL == io_k8s_api_core_v1_event_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_event_source->component) {
        free(io_k8s_api_core_v1_event_source->component);
        io_k8s_api_core_v1_event_source->component = NULL;
    }
    if (io_k8s_api_core_v1_event_source->host) {
        free(io_k8s_api_core_v1_event_source->host);
        io_k8s_api_core_v1_event_source->host = NULL;
    }
    free(io_k8s_api_core_v1_event_source);
}

cJSON *io_k8s_api_core_v1_event_source_convertToJSON(io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_event_source->component
    if(io_k8s_api_core_v1_event_source->component) { 
    if(cJSON_AddStringToObject(item, "component", io_k8s_api_core_v1_event_source->component) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_event_source->host
    if(io_k8s_api_core_v1_event_source->host) { 
    if(cJSON_AddStringToObject(item, "host", io_k8s_api_core_v1_event_source->host) == NULL) {
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

io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source_parseFromJSON(cJSON *io_k8s_api_core_v1_event_sourceJSON){

    io_k8s_api_core_v1_event_source_t *io_k8s_api_core_v1_event_source_local_var = NULL;

    // io_k8s_api_core_v1_event_source->component
    cJSON *component = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_event_sourceJSON, "component");
    if (component) { 
    if(!cJSON_IsString(component))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_event_source->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_event_sourceJSON, "host");
    if (host) { 
    if(!cJSON_IsString(host))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_event_source_local_var = io_k8s_api_core_v1_event_source_create (
        component ? strdup(component->valuestring) : NULL,
        host ? strdup(host->valuestring) : NULL
        );

    return io_k8s_api_core_v1_event_source_local_var;
end:
    return NULL;

}
