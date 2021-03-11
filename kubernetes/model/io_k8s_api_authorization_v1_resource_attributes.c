#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authorization_v1_resource_attributes.h"



io_k8s_api_authorization_v1_resource_attributes_t *io_k8s_api_authorization_v1_resource_attributes_create(
    char *group,
    char *name,
    char *_namespace,
    char *resource,
    char *subresource,
    char *verb,
    char *version
    ) {
    io_k8s_api_authorization_v1_resource_attributes_t *io_k8s_api_authorization_v1_resource_attributes_local_var = malloc(sizeof(io_k8s_api_authorization_v1_resource_attributes_t));
    if (!io_k8s_api_authorization_v1_resource_attributes_local_var) {
        return NULL;
    }
    io_k8s_api_authorization_v1_resource_attributes_local_var->group = group;
    io_k8s_api_authorization_v1_resource_attributes_local_var->name = name;
    io_k8s_api_authorization_v1_resource_attributes_local_var->_namespace = _namespace;
    io_k8s_api_authorization_v1_resource_attributes_local_var->resource = resource;
    io_k8s_api_authorization_v1_resource_attributes_local_var->subresource = subresource;
    io_k8s_api_authorization_v1_resource_attributes_local_var->verb = verb;
    io_k8s_api_authorization_v1_resource_attributes_local_var->version = version;

    return io_k8s_api_authorization_v1_resource_attributes_local_var;
}


void io_k8s_api_authorization_v1_resource_attributes_free(io_k8s_api_authorization_v1_resource_attributes_t *io_k8s_api_authorization_v1_resource_attributes) {
    if(NULL == io_k8s_api_authorization_v1_resource_attributes){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authorization_v1_resource_attributes->group) {
        free(io_k8s_api_authorization_v1_resource_attributes->group);
        io_k8s_api_authorization_v1_resource_attributes->group = NULL;
    }
    if (io_k8s_api_authorization_v1_resource_attributes->name) {
        free(io_k8s_api_authorization_v1_resource_attributes->name);
        io_k8s_api_authorization_v1_resource_attributes->name = NULL;
    }
    if (io_k8s_api_authorization_v1_resource_attributes->_namespace) {
        free(io_k8s_api_authorization_v1_resource_attributes->_namespace);
        io_k8s_api_authorization_v1_resource_attributes->_namespace = NULL;
    }
    if (io_k8s_api_authorization_v1_resource_attributes->resource) {
        free(io_k8s_api_authorization_v1_resource_attributes->resource);
        io_k8s_api_authorization_v1_resource_attributes->resource = NULL;
    }
    if (io_k8s_api_authorization_v1_resource_attributes->subresource) {
        free(io_k8s_api_authorization_v1_resource_attributes->subresource);
        io_k8s_api_authorization_v1_resource_attributes->subresource = NULL;
    }
    if (io_k8s_api_authorization_v1_resource_attributes->verb) {
        free(io_k8s_api_authorization_v1_resource_attributes->verb);
        io_k8s_api_authorization_v1_resource_attributes->verb = NULL;
    }
    if (io_k8s_api_authorization_v1_resource_attributes->version) {
        free(io_k8s_api_authorization_v1_resource_attributes->version);
        io_k8s_api_authorization_v1_resource_attributes->version = NULL;
    }
    free(io_k8s_api_authorization_v1_resource_attributes);
}

cJSON *io_k8s_api_authorization_v1_resource_attributes_convertToJSON(io_k8s_api_authorization_v1_resource_attributes_t *io_k8s_api_authorization_v1_resource_attributes) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authorization_v1_resource_attributes->group
    if(io_k8s_api_authorization_v1_resource_attributes->group) { 
    if(cJSON_AddStringToObject(item, "group", io_k8s_api_authorization_v1_resource_attributes->group) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1_resource_attributes->name
    if(io_k8s_api_authorization_v1_resource_attributes->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_authorization_v1_resource_attributes->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1_resource_attributes->_namespace
    if(io_k8s_api_authorization_v1_resource_attributes->_namespace) { 
    if(cJSON_AddStringToObject(item, "namespace", io_k8s_api_authorization_v1_resource_attributes->_namespace) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1_resource_attributes->resource
    if(io_k8s_api_authorization_v1_resource_attributes->resource) { 
    if(cJSON_AddStringToObject(item, "resource", io_k8s_api_authorization_v1_resource_attributes->resource) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1_resource_attributes->subresource
    if(io_k8s_api_authorization_v1_resource_attributes->subresource) { 
    if(cJSON_AddStringToObject(item, "subresource", io_k8s_api_authorization_v1_resource_attributes->subresource) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1_resource_attributes->verb
    if(io_k8s_api_authorization_v1_resource_attributes->verb) { 
    if(cJSON_AddStringToObject(item, "verb", io_k8s_api_authorization_v1_resource_attributes->verb) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1_resource_attributes->version
    if(io_k8s_api_authorization_v1_resource_attributes->version) { 
    if(cJSON_AddStringToObject(item, "version", io_k8s_api_authorization_v1_resource_attributes->version) == NULL) {
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

io_k8s_api_authorization_v1_resource_attributes_t *io_k8s_api_authorization_v1_resource_attributes_parseFromJSON(cJSON *io_k8s_api_authorization_v1_resource_attributesJSON){

    io_k8s_api_authorization_v1_resource_attributes_t *io_k8s_api_authorization_v1_resource_attributes_local_var = NULL;

    // io_k8s_api_authorization_v1_resource_attributes->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_resource_attributesJSON, "group");
    if (group) { 
    if(!cJSON_IsString(group))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1_resource_attributes->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_resource_attributesJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1_resource_attributes->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_resource_attributesJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1_resource_attributes->resource
    cJSON *resource = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_resource_attributesJSON, "resource");
    if (resource) { 
    if(!cJSON_IsString(resource))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1_resource_attributes->subresource
    cJSON *subresource = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_resource_attributesJSON, "subresource");
    if (subresource) { 
    if(!cJSON_IsString(subresource))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1_resource_attributes->verb
    cJSON *verb = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_resource_attributesJSON, "verb");
    if (verb) { 
    if(!cJSON_IsString(verb))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1_resource_attributes->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_resource_attributesJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }
    }


    io_k8s_api_authorization_v1_resource_attributes_local_var = io_k8s_api_authorization_v1_resource_attributes_create (
        group ? strdup(group->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        _namespace ? strdup(_namespace->valuestring) : NULL,
        resource ? strdup(resource->valuestring) : NULL,
        subresource ? strdup(subresource->valuestring) : NULL,
        verb ? strdup(verb->valuestring) : NULL,
        version ? strdup(version->valuestring) : NULL
        );

    return io_k8s_api_authorization_v1_resource_attributes_local_var;
end:
    return NULL;

}
