#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_object_field_selector.h"



io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector_create(
    char *api_version,
    char *field_path
    ) {
    io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector_local_var = malloc(sizeof(io_k8s_api_core_v1_object_field_selector_t));
    if (!io_k8s_api_core_v1_object_field_selector_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_object_field_selector_local_var->api_version = api_version;
    io_k8s_api_core_v1_object_field_selector_local_var->field_path = field_path;

    return io_k8s_api_core_v1_object_field_selector_local_var;
}


void io_k8s_api_core_v1_object_field_selector_free(io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector) {
    if(NULL == io_k8s_api_core_v1_object_field_selector){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_object_field_selector->api_version) {
        free(io_k8s_api_core_v1_object_field_selector->api_version);
        io_k8s_api_core_v1_object_field_selector->api_version = NULL;
    }
    if (io_k8s_api_core_v1_object_field_selector->field_path) {
        free(io_k8s_api_core_v1_object_field_selector->field_path);
        io_k8s_api_core_v1_object_field_selector->field_path = NULL;
    }
    free(io_k8s_api_core_v1_object_field_selector);
}

cJSON *io_k8s_api_core_v1_object_field_selector_convertToJSON(io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_object_field_selector->api_version
    if(io_k8s_api_core_v1_object_field_selector->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_object_field_selector->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_object_field_selector->field_path
    if (!io_k8s_api_core_v1_object_field_selector->field_path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "fieldPath", io_k8s_api_core_v1_object_field_selector->field_path) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_object_field_selectorJSON){

    io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector_local_var = NULL;

    // io_k8s_api_core_v1_object_field_selector->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_object_field_selectorJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_object_field_selector->field_path
    cJSON *field_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_object_field_selectorJSON, "fieldPath");
    if (!field_path) {
        goto end;
    }

    
    if(!cJSON_IsString(field_path))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_object_field_selector_local_var = io_k8s_api_core_v1_object_field_selector_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        strdup(field_path->valuestring)
        );

    return io_k8s_api_core_v1_object_field_selector_local_var;
end:
    return NULL;

}
