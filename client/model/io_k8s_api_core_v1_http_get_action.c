#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_http_get_action.h"



io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action_create(
    char *host,
    list_t *http_headers,
    char *path,
    char *port,
    char *scheme
    ) {
    io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action_local_var = malloc(sizeof(io_k8s_api_core_v1_http_get_action_t));
    if (!io_k8s_api_core_v1_http_get_action_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_http_get_action_local_var->host = host;
    io_k8s_api_core_v1_http_get_action_local_var->http_headers = http_headers;
    io_k8s_api_core_v1_http_get_action_local_var->path = path;
    io_k8s_api_core_v1_http_get_action_local_var->port = port;
    io_k8s_api_core_v1_http_get_action_local_var->scheme = scheme;

    return io_k8s_api_core_v1_http_get_action_local_var;
}


void io_k8s_api_core_v1_http_get_action_free(io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action) {
    if(NULL == io_k8s_api_core_v1_http_get_action){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_http_get_action->host) {
        free(io_k8s_api_core_v1_http_get_action->host);
        io_k8s_api_core_v1_http_get_action->host = NULL;
    }
    if (io_k8s_api_core_v1_http_get_action->http_headers) {
        list_ForEach(listEntry, io_k8s_api_core_v1_http_get_action->http_headers) {
            io_k8s_api_core_v1_http_header_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_http_get_action->http_headers);
        io_k8s_api_core_v1_http_get_action->http_headers = NULL;
    }
    if (io_k8s_api_core_v1_http_get_action->path) {
        free(io_k8s_api_core_v1_http_get_action->path);
        io_k8s_api_core_v1_http_get_action->path = NULL;
    }
    if (io_k8s_api_core_v1_http_get_action->port) {
        free(io_k8s_api_core_v1_http_get_action->port);
        io_k8s_api_core_v1_http_get_action->port = NULL;
    }
    if (io_k8s_api_core_v1_http_get_action->scheme) {
        free(io_k8s_api_core_v1_http_get_action->scheme);
        io_k8s_api_core_v1_http_get_action->scheme = NULL;
    }
    free(io_k8s_api_core_v1_http_get_action);
}

cJSON *io_k8s_api_core_v1_http_get_action_convertToJSON(io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_http_get_action->host
    if(io_k8s_api_core_v1_http_get_action->host) { 
    if(cJSON_AddStringToObject(item, "host", io_k8s_api_core_v1_http_get_action->host) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_http_get_action->http_headers
    if(io_k8s_api_core_v1_http_get_action->http_headers) { 
    cJSON *http_headers = cJSON_AddArrayToObject(item, "httpHeaders");
    if(http_headers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *http_headersListEntry;
    if (io_k8s_api_core_v1_http_get_action->http_headers) {
    list_ForEach(http_headersListEntry, io_k8s_api_core_v1_http_get_action->http_headers) {
    cJSON *itemLocal = io_k8s_api_core_v1_http_header_convertToJSON(http_headersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(http_headers, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_http_get_action->path
    if(io_k8s_api_core_v1_http_get_action->path) { 
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_core_v1_http_get_action->path) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_http_get_action->port
    if (!io_k8s_api_core_v1_http_get_action->port) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "port", io_k8s_api_core_v1_http_get_action->port) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_http_get_action->scheme
    if(io_k8s_api_core_v1_http_get_action->scheme) { 
    if(cJSON_AddStringToObject(item, "scheme", io_k8s_api_core_v1_http_get_action->scheme) == NULL) {
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

io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action_parseFromJSON(cJSON *io_k8s_api_core_v1_http_get_actionJSON){

    io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action_local_var = NULL;

    // io_k8s_api_core_v1_http_get_action->host
    cJSON *host = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_http_get_actionJSON, "host");
    if (host) { 
    if(!cJSON_IsString(host))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_http_get_action->http_headers
    cJSON *http_headers = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_http_get_actionJSON, "httpHeaders");
    list_t *http_headersList;
    if (http_headers) { 
    cJSON *http_headers_local_nonprimitive;
    if(!cJSON_IsArray(http_headers)){
        goto end; //nonprimitive container
    }

    http_headersList = list_create();

    cJSON_ArrayForEach(http_headers_local_nonprimitive,http_headers )
    {
        if(!cJSON_IsObject(http_headers_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_http_header_t *http_headersItem = io_k8s_api_core_v1_http_header_parseFromJSON(http_headers_local_nonprimitive);

        list_addElement(http_headersList, http_headersItem);
    }
    }

    // io_k8s_api_core_v1_http_get_action->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_http_get_actionJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_http_get_action->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_http_get_actionJSON, "port");
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsString(port))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_http_get_action->scheme
    cJSON *scheme = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_http_get_actionJSON, "scheme");
    if (scheme) { 
    if(!cJSON_IsString(scheme))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_http_get_action_local_var = io_k8s_api_core_v1_http_get_action_create (
        host ? strdup(host->valuestring) : NULL,
        http_headers ? http_headersList : NULL,
        path ? strdup(path->valuestring) : NULL,
        strdup(port->valuestring),
        scheme ? strdup(scheme->valuestring) : NULL
        );

    return io_k8s_api_core_v1_http_get_action_local_var;
end:
    return NULL;

}
