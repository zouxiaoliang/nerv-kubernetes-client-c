#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_create(
    char *description,
    char *format,
    char *json_path,
    char *name,
    int priority,
    char *type
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var->description = description;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var->format = format;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var->json_path = json_path;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var->name = name;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var->priority = priority;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var->type = type;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->description) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->description);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->description = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->format) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->format);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->format = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->json_path) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->json_path);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->json_path = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->name) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->name);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->name = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->type) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->type);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->type = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->description
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->description) { 
    if(cJSON_AddStringToObject(item, "description", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->description) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->format
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->format) { 
    if(cJSON_AddStringToObject(item, "format", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->format) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->json_path
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->json_path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "jsonPath", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->json_path) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->name
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->priority
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->priority) { 
    if(cJSON_AddNumberToObject(item, "priority", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->priority) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->type
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definitionJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definitionJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->format
    cJSON *format = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definitionJSON, "format");
    if (format) { 
    if(!cJSON_IsString(format))
    {
    goto end; //String
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->json_path
    cJSON *json_path = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definitionJSON, "jsonPath");
    if (!json_path) {
        goto end;
    }

    
    if(!cJSON_IsString(json_path))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definitionJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definitionJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definitionJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_create (
        description ? strdup(description->valuestring) : NULL,
        format ? strdup(format->valuestring) : NULL,
        strdup(json_path->valuestring),
        strdup(name->valuestring),
        priority ? priority->valuedouble : 0,
        strdup(type->valuestring)
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_column_definition_local_var;
end:
    return NULL;

}
