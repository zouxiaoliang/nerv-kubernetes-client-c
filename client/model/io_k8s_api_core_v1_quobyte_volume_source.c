#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_quobyte_volume_source.h"



io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source_create(
    char *group,
    int read_only,
    char *registry,
    char *tenant,
    char *user,
    char *volume
    ) {
    io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_quobyte_volume_source_t));
    if (!io_k8s_api_core_v1_quobyte_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_quobyte_volume_source_local_var->group = group;
    io_k8s_api_core_v1_quobyte_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_quobyte_volume_source_local_var->registry = registry;
    io_k8s_api_core_v1_quobyte_volume_source_local_var->tenant = tenant;
    io_k8s_api_core_v1_quobyte_volume_source_local_var->user = user;
    io_k8s_api_core_v1_quobyte_volume_source_local_var->volume = volume;

    return io_k8s_api_core_v1_quobyte_volume_source_local_var;
}


void io_k8s_api_core_v1_quobyte_volume_source_free(io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source) {
    if(NULL == io_k8s_api_core_v1_quobyte_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_quobyte_volume_source->group) {
        free(io_k8s_api_core_v1_quobyte_volume_source->group);
        io_k8s_api_core_v1_quobyte_volume_source->group = NULL;
    }
    if (io_k8s_api_core_v1_quobyte_volume_source->registry) {
        free(io_k8s_api_core_v1_quobyte_volume_source->registry);
        io_k8s_api_core_v1_quobyte_volume_source->registry = NULL;
    }
    if (io_k8s_api_core_v1_quobyte_volume_source->tenant) {
        free(io_k8s_api_core_v1_quobyte_volume_source->tenant);
        io_k8s_api_core_v1_quobyte_volume_source->tenant = NULL;
    }
    if (io_k8s_api_core_v1_quobyte_volume_source->user) {
        free(io_k8s_api_core_v1_quobyte_volume_source->user);
        io_k8s_api_core_v1_quobyte_volume_source->user = NULL;
    }
    if (io_k8s_api_core_v1_quobyte_volume_source->volume) {
        free(io_k8s_api_core_v1_quobyte_volume_source->volume);
        io_k8s_api_core_v1_quobyte_volume_source->volume = NULL;
    }
    free(io_k8s_api_core_v1_quobyte_volume_source);
}

cJSON *io_k8s_api_core_v1_quobyte_volume_source_convertToJSON(io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_quobyte_volume_source->group
    if(io_k8s_api_core_v1_quobyte_volume_source->group) { 
    if(cJSON_AddStringToObject(item, "group", io_k8s_api_core_v1_quobyte_volume_source->group) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_quobyte_volume_source->read_only
    if(io_k8s_api_core_v1_quobyte_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_quobyte_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_quobyte_volume_source->registry
    if (!io_k8s_api_core_v1_quobyte_volume_source->registry) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "registry", io_k8s_api_core_v1_quobyte_volume_source->registry) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_quobyte_volume_source->tenant
    if(io_k8s_api_core_v1_quobyte_volume_source->tenant) { 
    if(cJSON_AddStringToObject(item, "tenant", io_k8s_api_core_v1_quobyte_volume_source->tenant) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_quobyte_volume_source->user
    if(io_k8s_api_core_v1_quobyte_volume_source->user) { 
    if(cJSON_AddStringToObject(item, "user", io_k8s_api_core_v1_quobyte_volume_source->user) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_quobyte_volume_source->volume
    if (!io_k8s_api_core_v1_quobyte_volume_source->volume) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "volume", io_k8s_api_core_v1_quobyte_volume_source->volume) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_quobyte_volume_sourceJSON){

    io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_quobyte_volume_source->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_quobyte_volume_sourceJSON, "group");
    if (group) { 
    if(!cJSON_IsString(group))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_quobyte_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_quobyte_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_quobyte_volume_source->registry
    cJSON *registry = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_quobyte_volume_sourceJSON, "registry");
    if (!registry) {
        goto end;
    }

    
    if(!cJSON_IsString(registry))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_quobyte_volume_source->tenant
    cJSON *tenant = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_quobyte_volume_sourceJSON, "tenant");
    if (tenant) { 
    if(!cJSON_IsString(tenant))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_quobyte_volume_source->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_quobyte_volume_sourceJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_quobyte_volume_source->volume
    cJSON *volume = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_quobyte_volume_sourceJSON, "volume");
    if (!volume) {
        goto end;
    }

    
    if(!cJSON_IsString(volume))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_quobyte_volume_source_local_var = io_k8s_api_core_v1_quobyte_volume_source_create (
        group ? strdup(group->valuestring) : NULL,
        read_only ? read_only->valueint : 0,
        strdup(registry->valuestring),
        tenant ? strdup(tenant->valuestring) : NULL,
        user ? strdup(user->valuestring) : NULL,
        strdup(volume->valuestring)
        );

    return io_k8s_api_core_v1_quobyte_volume_source_local_var;
end:
    return NULL;

}
