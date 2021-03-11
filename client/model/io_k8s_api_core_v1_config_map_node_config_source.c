#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_config_map_node_config_source.h"



io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source_create(
    char *kubelet_config_key,
    char *name,
    char *_namespace,
    char *resource_version,
    char *uid
    ) {
    io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source_local_var = malloc(sizeof(io_k8s_api_core_v1_config_map_node_config_source_t));
    if (!io_k8s_api_core_v1_config_map_node_config_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_config_map_node_config_source_local_var->kubelet_config_key = kubelet_config_key;
    io_k8s_api_core_v1_config_map_node_config_source_local_var->name = name;
    io_k8s_api_core_v1_config_map_node_config_source_local_var->_namespace = _namespace;
    io_k8s_api_core_v1_config_map_node_config_source_local_var->resource_version = resource_version;
    io_k8s_api_core_v1_config_map_node_config_source_local_var->uid = uid;

    return io_k8s_api_core_v1_config_map_node_config_source_local_var;
}


void io_k8s_api_core_v1_config_map_node_config_source_free(io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source) {
    if(NULL == io_k8s_api_core_v1_config_map_node_config_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_config_map_node_config_source->kubelet_config_key) {
        free(io_k8s_api_core_v1_config_map_node_config_source->kubelet_config_key);
        io_k8s_api_core_v1_config_map_node_config_source->kubelet_config_key = NULL;
    }
    if (io_k8s_api_core_v1_config_map_node_config_source->name) {
        free(io_k8s_api_core_v1_config_map_node_config_source->name);
        io_k8s_api_core_v1_config_map_node_config_source->name = NULL;
    }
    if (io_k8s_api_core_v1_config_map_node_config_source->_namespace) {
        free(io_k8s_api_core_v1_config_map_node_config_source->_namespace);
        io_k8s_api_core_v1_config_map_node_config_source->_namespace = NULL;
    }
    if (io_k8s_api_core_v1_config_map_node_config_source->resource_version) {
        free(io_k8s_api_core_v1_config_map_node_config_source->resource_version);
        io_k8s_api_core_v1_config_map_node_config_source->resource_version = NULL;
    }
    if (io_k8s_api_core_v1_config_map_node_config_source->uid) {
        free(io_k8s_api_core_v1_config_map_node_config_source->uid);
        io_k8s_api_core_v1_config_map_node_config_source->uid = NULL;
    }
    free(io_k8s_api_core_v1_config_map_node_config_source);
}

cJSON *io_k8s_api_core_v1_config_map_node_config_source_convertToJSON(io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_config_map_node_config_source->kubelet_config_key
    if (!io_k8s_api_core_v1_config_map_node_config_source->kubelet_config_key) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "kubeletConfigKey", io_k8s_api_core_v1_config_map_node_config_source->kubelet_config_key) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_config_map_node_config_source->name
    if (!io_k8s_api_core_v1_config_map_node_config_source->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_config_map_node_config_source->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_config_map_node_config_source->_namespace
    if (!io_k8s_api_core_v1_config_map_node_config_source->_namespace) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "namespace", io_k8s_api_core_v1_config_map_node_config_source->_namespace) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_config_map_node_config_source->resource_version
    if(io_k8s_api_core_v1_config_map_node_config_source->resource_version) { 
    if(cJSON_AddStringToObject(item, "resourceVersion", io_k8s_api_core_v1_config_map_node_config_source->resource_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_config_map_node_config_source->uid
    if(io_k8s_api_core_v1_config_map_node_config_source->uid) { 
    if(cJSON_AddStringToObject(item, "uid", io_k8s_api_core_v1_config_map_node_config_source->uid) == NULL) {
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

io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source_parseFromJSON(cJSON *io_k8s_api_core_v1_config_map_node_config_sourceJSON){

    io_k8s_api_core_v1_config_map_node_config_source_t *io_k8s_api_core_v1_config_map_node_config_source_local_var = NULL;

    // io_k8s_api_core_v1_config_map_node_config_source->kubelet_config_key
    cJSON *kubelet_config_key = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_node_config_sourceJSON, "kubeletConfigKey");
    if (!kubelet_config_key) {
        goto end;
    }

    
    if(!cJSON_IsString(kubelet_config_key))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_config_map_node_config_source->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_node_config_sourceJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_config_map_node_config_source->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_node_config_sourceJSON, "namespace");
    if (!_namespace) {
        goto end;
    }

    
    if(!cJSON_IsString(_namespace))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_config_map_node_config_source->resource_version
    cJSON *resource_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_node_config_sourceJSON, "resourceVersion");
    if (resource_version) { 
    if(!cJSON_IsString(resource_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_config_map_node_config_source->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_config_map_node_config_sourceJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_config_map_node_config_source_local_var = io_k8s_api_core_v1_config_map_node_config_source_create (
        strdup(kubelet_config_key->valuestring),
        strdup(name->valuestring),
        strdup(_namespace->valuestring),
        resource_version ? strdup(resource_version->valuestring) : NULL,
        uid ? strdup(uid->valuestring) : NULL
        );

    return io_k8s_api_core_v1_config_map_node_config_source_local_var;
end:
    return NULL;

}
