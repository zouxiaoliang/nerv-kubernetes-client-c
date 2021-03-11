#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_node_v1beta1_runtime_class.h"



io_k8s_api_node_v1beta1_runtime_class_t *io_k8s_api_node_v1beta1_runtime_class_create(
    char *api_version,
    char *handler,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_node_v1beta1_overhead_t *overhead,
    io_k8s_api_node_v1beta1_scheduling_t *scheduling
    ) {
    io_k8s_api_node_v1beta1_runtime_class_t *io_k8s_api_node_v1beta1_runtime_class_local_var = malloc(sizeof(io_k8s_api_node_v1beta1_runtime_class_t));
    if (!io_k8s_api_node_v1beta1_runtime_class_local_var) {
        return NULL;
    }
    io_k8s_api_node_v1beta1_runtime_class_local_var->api_version = api_version;
    io_k8s_api_node_v1beta1_runtime_class_local_var->handler = handler;
    io_k8s_api_node_v1beta1_runtime_class_local_var->kind = kind;
    io_k8s_api_node_v1beta1_runtime_class_local_var->metadata = metadata;
    io_k8s_api_node_v1beta1_runtime_class_local_var->overhead = overhead;
    io_k8s_api_node_v1beta1_runtime_class_local_var->scheduling = scheduling;

    return io_k8s_api_node_v1beta1_runtime_class_local_var;
}


void io_k8s_api_node_v1beta1_runtime_class_free(io_k8s_api_node_v1beta1_runtime_class_t *io_k8s_api_node_v1beta1_runtime_class) {
    if(NULL == io_k8s_api_node_v1beta1_runtime_class){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_node_v1beta1_runtime_class->api_version) {
        free(io_k8s_api_node_v1beta1_runtime_class->api_version);
        io_k8s_api_node_v1beta1_runtime_class->api_version = NULL;
    }
    if (io_k8s_api_node_v1beta1_runtime_class->handler) {
        free(io_k8s_api_node_v1beta1_runtime_class->handler);
        io_k8s_api_node_v1beta1_runtime_class->handler = NULL;
    }
    if (io_k8s_api_node_v1beta1_runtime_class->kind) {
        free(io_k8s_api_node_v1beta1_runtime_class->kind);
        io_k8s_api_node_v1beta1_runtime_class->kind = NULL;
    }
    if (io_k8s_api_node_v1beta1_runtime_class->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_node_v1beta1_runtime_class->metadata);
        io_k8s_api_node_v1beta1_runtime_class->metadata = NULL;
    }
    if (io_k8s_api_node_v1beta1_runtime_class->overhead) {
        io_k8s_api_node_v1beta1_overhead_free(io_k8s_api_node_v1beta1_runtime_class->overhead);
        io_k8s_api_node_v1beta1_runtime_class->overhead = NULL;
    }
    if (io_k8s_api_node_v1beta1_runtime_class->scheduling) {
        io_k8s_api_node_v1beta1_scheduling_free(io_k8s_api_node_v1beta1_runtime_class->scheduling);
        io_k8s_api_node_v1beta1_runtime_class->scheduling = NULL;
    }
    free(io_k8s_api_node_v1beta1_runtime_class);
}

cJSON *io_k8s_api_node_v1beta1_runtime_class_convertToJSON(io_k8s_api_node_v1beta1_runtime_class_t *io_k8s_api_node_v1beta1_runtime_class) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_node_v1beta1_runtime_class->api_version
    if(io_k8s_api_node_v1beta1_runtime_class->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_node_v1beta1_runtime_class->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_node_v1beta1_runtime_class->handler
    if (!io_k8s_api_node_v1beta1_runtime_class->handler) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "handler", io_k8s_api_node_v1beta1_runtime_class->handler) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_node_v1beta1_runtime_class->kind
    if(io_k8s_api_node_v1beta1_runtime_class->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_node_v1beta1_runtime_class->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_node_v1beta1_runtime_class->metadata
    if(io_k8s_api_node_v1beta1_runtime_class->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_node_v1beta1_runtime_class->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_node_v1beta1_runtime_class->overhead
    if(io_k8s_api_node_v1beta1_runtime_class->overhead) { 
    cJSON *overhead_local_JSON = io_k8s_api_node_v1beta1_overhead_convertToJSON(io_k8s_api_node_v1beta1_runtime_class->overhead);
    if(overhead_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "overhead", overhead_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_node_v1beta1_runtime_class->scheduling
    if(io_k8s_api_node_v1beta1_runtime_class->scheduling) { 
    cJSON *scheduling_local_JSON = io_k8s_api_node_v1beta1_scheduling_convertToJSON(io_k8s_api_node_v1beta1_runtime_class->scheduling);
    if(scheduling_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scheduling", scheduling_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_node_v1beta1_runtime_class_t *io_k8s_api_node_v1beta1_runtime_class_parseFromJSON(cJSON *io_k8s_api_node_v1beta1_runtime_classJSON){

    io_k8s_api_node_v1beta1_runtime_class_t *io_k8s_api_node_v1beta1_runtime_class_local_var = NULL;

    // io_k8s_api_node_v1beta1_runtime_class->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1beta1_runtime_classJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_node_v1beta1_runtime_class->handler
    cJSON *handler = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1beta1_runtime_classJSON, "handler");
    if (!handler) {
        goto end;
    }

    
    if(!cJSON_IsString(handler))
    {
    goto end; //String
    }

    // io_k8s_api_node_v1beta1_runtime_class->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1beta1_runtime_classJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_node_v1beta1_runtime_class->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1beta1_runtime_classJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_node_v1beta1_runtime_class->overhead
    cJSON *overhead = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1beta1_runtime_classJSON, "overhead");
    io_k8s_api_node_v1beta1_overhead_t *overhead_local_nonprim = NULL;
    if (overhead) { 
    overhead_local_nonprim = io_k8s_api_node_v1beta1_overhead_parseFromJSON(overhead); //nonprimitive
    }

    // io_k8s_api_node_v1beta1_runtime_class->scheduling
    cJSON *scheduling = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1beta1_runtime_classJSON, "scheduling");
    io_k8s_api_node_v1beta1_scheduling_t *scheduling_local_nonprim = NULL;
    if (scheduling) { 
    scheduling_local_nonprim = io_k8s_api_node_v1beta1_scheduling_parseFromJSON(scheduling); //nonprimitive
    }


    io_k8s_api_node_v1beta1_runtime_class_local_var = io_k8s_api_node_v1beta1_runtime_class_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        strdup(handler->valuestring),
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        overhead ? overhead_local_nonprim : NULL,
        scheduling ? scheduling_local_nonprim : NULL
        );

    return io_k8s_api_node_v1beta1_runtime_class_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (overhead_local_nonprim) {
        io_k8s_api_node_v1beta1_overhead_free(overhead_local_nonprim);
        overhead_local_nonprim = NULL;
    }
    if (scheduling_local_nonprim) {
        io_k8s_api_node_v1beta1_scheduling_free(scheduling_local_nonprim);
        scheduling_local_nonprim = NULL;
    }
    return NULL;

}
