#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_resource_field_selector.h"



io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector_create(
    char *container_name,
    char *divisor,
    char *resource
    ) {
    io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector_local_var = malloc(sizeof(io_k8s_api_core_v1_resource_field_selector_t));
    if (!io_k8s_api_core_v1_resource_field_selector_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_resource_field_selector_local_var->container_name = container_name;
    io_k8s_api_core_v1_resource_field_selector_local_var->divisor = divisor;
    io_k8s_api_core_v1_resource_field_selector_local_var->resource = resource;

    return io_k8s_api_core_v1_resource_field_selector_local_var;
}


void io_k8s_api_core_v1_resource_field_selector_free(io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector) {
    if(NULL == io_k8s_api_core_v1_resource_field_selector){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_resource_field_selector->container_name) {
        free(io_k8s_api_core_v1_resource_field_selector->container_name);
        io_k8s_api_core_v1_resource_field_selector->container_name = NULL;
    }
    if (io_k8s_api_core_v1_resource_field_selector->divisor) {
        free(io_k8s_api_core_v1_resource_field_selector->divisor);
        io_k8s_api_core_v1_resource_field_selector->divisor = NULL;
    }
    if (io_k8s_api_core_v1_resource_field_selector->resource) {
        free(io_k8s_api_core_v1_resource_field_selector->resource);
        io_k8s_api_core_v1_resource_field_selector->resource = NULL;
    }
    free(io_k8s_api_core_v1_resource_field_selector);
}

cJSON *io_k8s_api_core_v1_resource_field_selector_convertToJSON(io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_resource_field_selector->container_name
    if(io_k8s_api_core_v1_resource_field_selector->container_name) { 
    if(cJSON_AddStringToObject(item, "containerName", io_k8s_api_core_v1_resource_field_selector->container_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_resource_field_selector->divisor
    if(io_k8s_api_core_v1_resource_field_selector->divisor) { 
    if(cJSON_AddStringToObject(item, "divisor", io_k8s_api_core_v1_resource_field_selector->divisor) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_resource_field_selector->resource
    if (!io_k8s_api_core_v1_resource_field_selector->resource) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "resource", io_k8s_api_core_v1_resource_field_selector->resource) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_resource_field_selectorJSON){

    io_k8s_api_core_v1_resource_field_selector_t *io_k8s_api_core_v1_resource_field_selector_local_var = NULL;

    // io_k8s_api_core_v1_resource_field_selector->container_name
    cJSON *container_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_field_selectorJSON, "containerName");
    if (container_name) { 
    if(!cJSON_IsString(container_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_resource_field_selector->divisor
    cJSON *divisor = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_field_selectorJSON, "divisor");
    if (divisor) { 
    if(!cJSON_IsString(divisor))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_resource_field_selector->resource
    cJSON *resource = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_field_selectorJSON, "resource");
    if (!resource) {
        goto end;
    }

    
    if(!cJSON_IsString(resource))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_resource_field_selector_local_var = io_k8s_api_core_v1_resource_field_selector_create (
        container_name ? strdup(container_name->valuestring) : NULL,
        divisor ? strdup(divisor->valuestring) : NULL,
        strdup(resource->valuestring)
        );

    return io_k8s_api_core_v1_resource_field_selector_local_var;
end:
    return NULL;

}
