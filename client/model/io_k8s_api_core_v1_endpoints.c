#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_endpoints.h"



io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *subsets
    ) {
    io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints_local_var = malloc(sizeof(io_k8s_api_core_v1_endpoints_t));
    if (!io_k8s_api_core_v1_endpoints_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_endpoints_local_var->api_version = api_version;
    io_k8s_api_core_v1_endpoints_local_var->kind = kind;
    io_k8s_api_core_v1_endpoints_local_var->metadata = metadata;
    io_k8s_api_core_v1_endpoints_local_var->subsets = subsets;

    return io_k8s_api_core_v1_endpoints_local_var;
}


void io_k8s_api_core_v1_endpoints_free(io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints) {
    if(NULL == io_k8s_api_core_v1_endpoints){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_endpoints->api_version) {
        free(io_k8s_api_core_v1_endpoints->api_version);
        io_k8s_api_core_v1_endpoints->api_version = NULL;
    }
    if (io_k8s_api_core_v1_endpoints->kind) {
        free(io_k8s_api_core_v1_endpoints->kind);
        io_k8s_api_core_v1_endpoints->kind = NULL;
    }
    if (io_k8s_api_core_v1_endpoints->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_endpoints->metadata);
        io_k8s_api_core_v1_endpoints->metadata = NULL;
    }
    if (io_k8s_api_core_v1_endpoints->subsets) {
        list_ForEach(listEntry, io_k8s_api_core_v1_endpoints->subsets) {
            io_k8s_api_core_v1_endpoint_subset_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_endpoints->subsets);
        io_k8s_api_core_v1_endpoints->subsets = NULL;
    }
    free(io_k8s_api_core_v1_endpoints);
}

cJSON *io_k8s_api_core_v1_endpoints_convertToJSON(io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_endpoints->api_version
    if(io_k8s_api_core_v1_endpoints->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_endpoints->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_endpoints->kind
    if(io_k8s_api_core_v1_endpoints->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_endpoints->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_endpoints->metadata
    if(io_k8s_api_core_v1_endpoints->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_endpoints->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_endpoints->subsets
    if(io_k8s_api_core_v1_endpoints->subsets) { 
    cJSON *subsets = cJSON_AddArrayToObject(item, "subsets");
    if(subsets == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *subsetsListEntry;
    if (io_k8s_api_core_v1_endpoints->subsets) {
    list_ForEach(subsetsListEntry, io_k8s_api_core_v1_endpoints->subsets) {
    cJSON *itemLocal = io_k8s_api_core_v1_endpoint_subset_convertToJSON(subsetsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(subsets, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints_parseFromJSON(cJSON *io_k8s_api_core_v1_endpointsJSON){

    io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints_local_var = NULL;

    // io_k8s_api_core_v1_endpoints->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpointsJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_endpoints->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpointsJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_endpoints->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpointsJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_core_v1_endpoints->subsets
    cJSON *subsets = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_endpointsJSON, "subsets");
    list_t *subsetsList;
    if (subsets) { 
    cJSON *subsets_local_nonprimitive;
    if(!cJSON_IsArray(subsets)){
        goto end; //nonprimitive container
    }

    subsetsList = list_create();

    cJSON_ArrayForEach(subsets_local_nonprimitive,subsets )
    {
        if(!cJSON_IsObject(subsets_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_endpoint_subset_t *subsetsItem = io_k8s_api_core_v1_endpoint_subset_parseFromJSON(subsets_local_nonprimitive);

        list_addElement(subsetsList, subsetsItem);
    }
    }


    io_k8s_api_core_v1_endpoints_local_var = io_k8s_api_core_v1_endpoints_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        subsets ? subsetsList : NULL
        );

    return io_k8s_api_core_v1_endpoints_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
