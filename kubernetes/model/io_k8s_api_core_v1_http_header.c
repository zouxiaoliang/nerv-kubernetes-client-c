#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_http_header.h"



io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header_create(
    char *name,
    char *value
    ) {
    io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header_local_var = malloc(sizeof(io_k8s_api_core_v1_http_header_t));
    if (!io_k8s_api_core_v1_http_header_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_http_header_local_var->name = name;
    io_k8s_api_core_v1_http_header_local_var->value = value;

    return io_k8s_api_core_v1_http_header_local_var;
}


void io_k8s_api_core_v1_http_header_free(io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header) {
    if(NULL == io_k8s_api_core_v1_http_header){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_http_header->name) {
        free(io_k8s_api_core_v1_http_header->name);
        io_k8s_api_core_v1_http_header->name = NULL;
    }
    if (io_k8s_api_core_v1_http_header->value) {
        free(io_k8s_api_core_v1_http_header->value);
        io_k8s_api_core_v1_http_header->value = NULL;
    }
    free(io_k8s_api_core_v1_http_header);
}

cJSON *io_k8s_api_core_v1_http_header_convertToJSON(io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_http_header->name
    if (!io_k8s_api_core_v1_http_header->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_http_header->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_http_header->value
    if (!io_k8s_api_core_v1_http_header->value) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "value", io_k8s_api_core_v1_http_header->value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header_parseFromJSON(cJSON *io_k8s_api_core_v1_http_headerJSON){

    io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header_local_var = NULL;

    // io_k8s_api_core_v1_http_header->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_http_headerJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_http_header->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_http_headerJSON, "value");
    if (!value) {
        goto end;
    }

    
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_http_header_local_var = io_k8s_api_core_v1_http_header_create (
        strdup(name->valuestring),
        strdup(value->valuestring)
        );

    return io_k8s_api_core_v1_http_header_local_var;
end:
    return NULL;

}
