#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1alpha1_csi_storage_capacity.h"



io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity_create(
    char *api_version,
    char *capacity,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *node_topology,
    char *storage_class_name
    ) {
    io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var = malloc(sizeof(io_k8s_api_storage_v1alpha1_csi_storage_capacity_t));
    if (!io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var->api_version = api_version;
    io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var->capacity = capacity;
    io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var->kind = kind;
    io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var->metadata = metadata;
    io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var->node_topology = node_topology;
    io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var->storage_class_name = storage_class_name;

    return io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var;
}


void io_k8s_api_storage_v1alpha1_csi_storage_capacity_free(io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity) {
    if(NULL == io_k8s_api_storage_v1alpha1_csi_storage_capacity){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1alpha1_csi_storage_capacity->api_version) {
        free(io_k8s_api_storage_v1alpha1_csi_storage_capacity->api_version);
        io_k8s_api_storage_v1alpha1_csi_storage_capacity->api_version = NULL;
    }
    if (io_k8s_api_storage_v1alpha1_csi_storage_capacity->capacity) {
        free(io_k8s_api_storage_v1alpha1_csi_storage_capacity->capacity);
        io_k8s_api_storage_v1alpha1_csi_storage_capacity->capacity = NULL;
    }
    if (io_k8s_api_storage_v1alpha1_csi_storage_capacity->kind) {
        free(io_k8s_api_storage_v1alpha1_csi_storage_capacity->kind);
        io_k8s_api_storage_v1alpha1_csi_storage_capacity->kind = NULL;
    }
    if (io_k8s_api_storage_v1alpha1_csi_storage_capacity->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_storage_v1alpha1_csi_storage_capacity->metadata);
        io_k8s_api_storage_v1alpha1_csi_storage_capacity->metadata = NULL;
    }
    if (io_k8s_api_storage_v1alpha1_csi_storage_capacity->node_topology) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_storage_v1alpha1_csi_storage_capacity->node_topology);
        io_k8s_api_storage_v1alpha1_csi_storage_capacity->node_topology = NULL;
    }
    if (io_k8s_api_storage_v1alpha1_csi_storage_capacity->storage_class_name) {
        free(io_k8s_api_storage_v1alpha1_csi_storage_capacity->storage_class_name);
        io_k8s_api_storage_v1alpha1_csi_storage_capacity->storage_class_name = NULL;
    }
    free(io_k8s_api_storage_v1alpha1_csi_storage_capacity);
}

cJSON *io_k8s_api_storage_v1alpha1_csi_storage_capacity_convertToJSON(io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->api_version
    if(io_k8s_api_storage_v1alpha1_csi_storage_capacity->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_storage_v1alpha1_csi_storage_capacity->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->capacity
    if(io_k8s_api_storage_v1alpha1_csi_storage_capacity->capacity) { 
    if(cJSON_AddStringToObject(item, "capacity", io_k8s_api_storage_v1alpha1_csi_storage_capacity->capacity) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->kind
    if(io_k8s_api_storage_v1alpha1_csi_storage_capacity->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_storage_v1alpha1_csi_storage_capacity->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->metadata
    if(io_k8s_api_storage_v1alpha1_csi_storage_capacity->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_storage_v1alpha1_csi_storage_capacity->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->node_topology
    if(io_k8s_api_storage_v1alpha1_csi_storage_capacity->node_topology) { 
    cJSON *node_topology_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_storage_v1alpha1_csi_storage_capacity->node_topology);
    if(node_topology_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nodeTopology", node_topology_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->storage_class_name
    if (!io_k8s_api_storage_v1alpha1_csi_storage_capacity->storage_class_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "storageClassName", io_k8s_api_storage_v1alpha1_csi_storage_capacity->storage_class_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity_parseFromJSON(cJSON *io_k8s_api_storage_v1alpha1_csi_storage_capacityJSON){

    io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var = NULL;

    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1alpha1_csi_storage_capacityJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->capacity
    cJSON *capacity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1alpha1_csi_storage_capacityJSON, "capacity");
    if (capacity) { 
    if(!cJSON_IsString(capacity))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1alpha1_csi_storage_capacityJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1alpha1_csi_storage_capacityJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->node_topology
    cJSON *node_topology = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1alpha1_csi_storage_capacityJSON, "nodeTopology");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *node_topology_local_nonprim = NULL;
    if (node_topology) { 
    node_topology_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(node_topology); //nonprimitive
    }

    // io_k8s_api_storage_v1alpha1_csi_storage_capacity->storage_class_name
    cJSON *storage_class_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1alpha1_csi_storage_capacityJSON, "storageClassName");
    if (!storage_class_name) {
        goto end;
    }

    
    if(!cJSON_IsString(storage_class_name))
    {
    goto end; //String
    }


    io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var = io_k8s_api_storage_v1alpha1_csi_storage_capacity_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        capacity ? strdup(capacity->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        node_topology ? node_topology_local_nonprim : NULL,
        strdup(storage_class_name->valuestring)
        );

    return io_k8s_api_storage_v1alpha1_csi_storage_capacity_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (node_topology_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(node_topology_local_nonprim);
        node_topology_local_nonprim = NULL;
    }
    return NULL;

}
