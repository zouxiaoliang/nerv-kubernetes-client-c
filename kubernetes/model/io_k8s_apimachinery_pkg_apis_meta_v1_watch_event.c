#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_watch_event.h"



io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_create(
    object_t *object,
    char *type
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_local_var->object = object;
    io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_local_var->type = type;

    return io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_free(io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_watch_event){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->object) {
        object_free(io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->object);
        io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->object = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->type) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->type);
        io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->type = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_watch_event);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->object
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->object) {
        goto fail;
    }
    
    cJSON *object_object = object_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->object);
    if(object_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "object", object_object);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->type
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_watch_eventJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_t *io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->object
    cJSON *object = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_watch_eventJSON, "object");
    if (!object) {
        goto end;
    }

    object_t *object_local_object = NULL;
    
    object_local_object = object_parseFromJSON(object); //object

    // io_k8s_apimachinery_pkg_apis_meta_v1_watch_event->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_watch_eventJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_create (
        object_local_object,
        strdup(type->valuestring)
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_watch_event_local_var;
end:
    return NULL;

}
