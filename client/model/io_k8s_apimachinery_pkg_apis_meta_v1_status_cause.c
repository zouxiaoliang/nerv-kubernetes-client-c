#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_status_cause.h"



io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_create(
    char *field,
    char *message,
    char *reason
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_local_var->field = field;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_local_var->message = message;
    io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_local_var->reason = reason;

    return io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_free(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_status_cause){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->field) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->field);
        io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->field = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->message) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->message);
        io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->message = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->reason) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->reason);
        io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->reason = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->field
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->field) { 
    if(cJSON_AddStringToObject(item, "field", io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->field) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->message
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->message) { 
    if(cJSON_AddStringToObject(item, "message", io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->message) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->reason
    if(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->reason) { 
    if(cJSON_AddStringToObject(item, "reason", io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->reason) == NULL) {
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

io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_causeJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->field
    cJSON *field = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_status_causeJSON, "field");
    if (field) { 
    if(!cJSON_IsString(field))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_status_causeJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_status_cause->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_status_causeJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason))
    {
    goto end; //String
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_create (
        field ? strdup(field->valuestring) : NULL,
        message ? strdup(message->valuestring) : NULL,
        reason ? strdup(reason->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_local_var;
end:
    return NULL;

}
