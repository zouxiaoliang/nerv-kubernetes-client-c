#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1beta1_csi_node.h"



io_k8s_api_storage_v1beta1_csi_node_t *io_k8s_api_storage_v1beta1_csi_node_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_storage_v1beta1_csi_node_spec_t *spec
    ) {
    io_k8s_api_storage_v1beta1_csi_node_t *io_k8s_api_storage_v1beta1_csi_node_local_var = malloc(sizeof(io_k8s_api_storage_v1beta1_csi_node_t));
    if (!io_k8s_api_storage_v1beta1_csi_node_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1beta1_csi_node_local_var->api_version = api_version;
    io_k8s_api_storage_v1beta1_csi_node_local_var->kind = kind;
    io_k8s_api_storage_v1beta1_csi_node_local_var->metadata = metadata;
    io_k8s_api_storage_v1beta1_csi_node_local_var->spec = spec;

    return io_k8s_api_storage_v1beta1_csi_node_local_var;
}


void io_k8s_api_storage_v1beta1_csi_node_free(io_k8s_api_storage_v1beta1_csi_node_t *io_k8s_api_storage_v1beta1_csi_node) {
    if(NULL == io_k8s_api_storage_v1beta1_csi_node){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1beta1_csi_node->api_version) {
        free(io_k8s_api_storage_v1beta1_csi_node->api_version);
        io_k8s_api_storage_v1beta1_csi_node->api_version = NULL;
    }
    if (io_k8s_api_storage_v1beta1_csi_node->kind) {
        free(io_k8s_api_storage_v1beta1_csi_node->kind);
        io_k8s_api_storage_v1beta1_csi_node->kind = NULL;
    }
    if (io_k8s_api_storage_v1beta1_csi_node->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_storage_v1beta1_csi_node->metadata);
        io_k8s_api_storage_v1beta1_csi_node->metadata = NULL;
    }
    if (io_k8s_api_storage_v1beta1_csi_node->spec) {
        io_k8s_api_storage_v1beta1_csi_node_spec_free(io_k8s_api_storage_v1beta1_csi_node->spec);
        io_k8s_api_storage_v1beta1_csi_node->spec = NULL;
    }
    free(io_k8s_api_storage_v1beta1_csi_node);
}

cJSON *io_k8s_api_storage_v1beta1_csi_node_convertToJSON(io_k8s_api_storage_v1beta1_csi_node_t *io_k8s_api_storage_v1beta1_csi_node) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1beta1_csi_node->api_version
    if(io_k8s_api_storage_v1beta1_csi_node->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_storage_v1beta1_csi_node->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1beta1_csi_node->kind
    if(io_k8s_api_storage_v1beta1_csi_node->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_storage_v1beta1_csi_node->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1beta1_csi_node->metadata
    if(io_k8s_api_storage_v1beta1_csi_node->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_storage_v1beta1_csi_node->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_storage_v1beta1_csi_node->spec
    if (!io_k8s_api_storage_v1beta1_csi_node->spec) {
        goto fail;
    }
    
    cJSON *spec_local_JSON = io_k8s_api_storage_v1beta1_csi_node_spec_convertToJSON(io_k8s_api_storage_v1beta1_csi_node->spec);
    if(spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "spec", spec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_storage_v1beta1_csi_node_t *io_k8s_api_storage_v1beta1_csi_node_parseFromJSON(cJSON *io_k8s_api_storage_v1beta1_csi_nodeJSON){

    io_k8s_api_storage_v1beta1_csi_node_t *io_k8s_api_storage_v1beta1_csi_node_local_var = NULL;

    // io_k8s_api_storage_v1beta1_csi_node->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_nodeJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1beta1_csi_node->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_nodeJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1beta1_csi_node->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_nodeJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_storage_v1beta1_csi_node->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1beta1_csi_nodeJSON, "spec");
    if (!spec) {
        goto end;
    }

    io_k8s_api_storage_v1beta1_csi_node_spec_t *spec_local_nonprim = NULL;
    
    spec_local_nonprim = io_k8s_api_storage_v1beta1_csi_node_spec_parseFromJSON(spec); //nonprimitive


    io_k8s_api_storage_v1beta1_csi_node_local_var = io_k8s_api_storage_v1beta1_csi_node_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        spec_local_nonprim
        );

    return io_k8s_api_storage_v1beta1_csi_node_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (spec_local_nonprim) {
        io_k8s_api_storage_v1beta1_csi_node_spec_free(spec_local_nonprim);
        spec_local_nonprim = NULL;
    }
    return NULL;

}
