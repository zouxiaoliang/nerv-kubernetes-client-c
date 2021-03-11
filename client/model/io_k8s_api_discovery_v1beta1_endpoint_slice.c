#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_discovery_v1beta1_endpoint_slice.h"



io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice_create(
    char *address_type,
    char *api_version,
    list_t *endpoints,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *ports
    ) {
    io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice_local_var = malloc(sizeof(io_k8s_api_discovery_v1beta1_endpoint_slice_t));
    if (!io_k8s_api_discovery_v1beta1_endpoint_slice_local_var) {
        return NULL;
    }
    io_k8s_api_discovery_v1beta1_endpoint_slice_local_var->address_type = address_type;
    io_k8s_api_discovery_v1beta1_endpoint_slice_local_var->api_version = api_version;
    io_k8s_api_discovery_v1beta1_endpoint_slice_local_var->endpoints = endpoints;
    io_k8s_api_discovery_v1beta1_endpoint_slice_local_var->kind = kind;
    io_k8s_api_discovery_v1beta1_endpoint_slice_local_var->metadata = metadata;
    io_k8s_api_discovery_v1beta1_endpoint_slice_local_var->ports = ports;

    return io_k8s_api_discovery_v1beta1_endpoint_slice_local_var;
}


void io_k8s_api_discovery_v1beta1_endpoint_slice_free(io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice) {
    if(NULL == io_k8s_api_discovery_v1beta1_endpoint_slice){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_discovery_v1beta1_endpoint_slice->address_type) {
        free(io_k8s_api_discovery_v1beta1_endpoint_slice->address_type);
        io_k8s_api_discovery_v1beta1_endpoint_slice->address_type = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint_slice->api_version) {
        free(io_k8s_api_discovery_v1beta1_endpoint_slice->api_version);
        io_k8s_api_discovery_v1beta1_endpoint_slice->api_version = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint_slice->endpoints) {
        list_ForEach(listEntry, io_k8s_api_discovery_v1beta1_endpoint_slice->endpoints) {
            io_k8s_api_discovery_v1beta1_endpoint_free(listEntry->data);
        }
        list_free(io_k8s_api_discovery_v1beta1_endpoint_slice->endpoints);
        io_k8s_api_discovery_v1beta1_endpoint_slice->endpoints = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint_slice->kind) {
        free(io_k8s_api_discovery_v1beta1_endpoint_slice->kind);
        io_k8s_api_discovery_v1beta1_endpoint_slice->kind = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint_slice->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_discovery_v1beta1_endpoint_slice->metadata);
        io_k8s_api_discovery_v1beta1_endpoint_slice->metadata = NULL;
    }
    if (io_k8s_api_discovery_v1beta1_endpoint_slice->ports) {
        list_ForEach(listEntry, io_k8s_api_discovery_v1beta1_endpoint_slice->ports) {
            io_k8s_api_discovery_v1beta1_endpoint_port_free(listEntry->data);
        }
        list_free(io_k8s_api_discovery_v1beta1_endpoint_slice->ports);
        io_k8s_api_discovery_v1beta1_endpoint_slice->ports = NULL;
    }
    free(io_k8s_api_discovery_v1beta1_endpoint_slice);
}

cJSON *io_k8s_api_discovery_v1beta1_endpoint_slice_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_discovery_v1beta1_endpoint_slice->address_type
    if (!io_k8s_api_discovery_v1beta1_endpoint_slice->address_type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "addressType", io_k8s_api_discovery_v1beta1_endpoint_slice->address_type) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_discovery_v1beta1_endpoint_slice->api_version
    if(io_k8s_api_discovery_v1beta1_endpoint_slice->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_discovery_v1beta1_endpoint_slice->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint_slice->endpoints
    if (!io_k8s_api_discovery_v1beta1_endpoint_slice->endpoints) {
        goto fail;
    }
    
    cJSON *endpoints = cJSON_AddArrayToObject(item, "endpoints");
    if(endpoints == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *endpointsListEntry;
    if (io_k8s_api_discovery_v1beta1_endpoint_slice->endpoints) {
    list_ForEach(endpointsListEntry, io_k8s_api_discovery_v1beta1_endpoint_slice->endpoints) {
    cJSON *itemLocal = io_k8s_api_discovery_v1beta1_endpoint_convertToJSON(endpointsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(endpoints, itemLocal);
    }
    }


    // io_k8s_api_discovery_v1beta1_endpoint_slice->kind
    if(io_k8s_api_discovery_v1beta1_endpoint_slice->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_discovery_v1beta1_endpoint_slice->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint_slice->metadata
    if(io_k8s_api_discovery_v1beta1_endpoint_slice->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_slice->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_discovery_v1beta1_endpoint_slice->ports
    if(io_k8s_api_discovery_v1beta1_endpoint_slice->ports) { 
    cJSON *ports = cJSON_AddArrayToObject(item, "ports");
    if(ports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *portsListEntry;
    if (io_k8s_api_discovery_v1beta1_endpoint_slice->ports) {
    list_ForEach(portsListEntry, io_k8s_api_discovery_v1beta1_endpoint_slice->ports) {
    cJSON *itemLocal = io_k8s_api_discovery_v1beta1_endpoint_port_convertToJSON(portsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ports, itemLocal);
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

io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice_parseFromJSON(cJSON *io_k8s_api_discovery_v1beta1_endpoint_sliceJSON){

    io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice_local_var = NULL;

    // io_k8s_api_discovery_v1beta1_endpoint_slice->address_type
    cJSON *address_type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_sliceJSON, "addressType");
    if (!address_type) {
        goto end;
    }

    
    if(!cJSON_IsString(address_type))
    {
    goto end; //String
    }

    // io_k8s_api_discovery_v1beta1_endpoint_slice->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_sliceJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_discovery_v1beta1_endpoint_slice->endpoints
    cJSON *endpoints = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_sliceJSON, "endpoints");
    if (!endpoints) {
        goto end;
    }

    list_t *endpointsList;
    
    cJSON *endpoints_local_nonprimitive;
    if(!cJSON_IsArray(endpoints)){
        goto end; //nonprimitive container
    }

    endpointsList = list_create();

    cJSON_ArrayForEach(endpoints_local_nonprimitive,endpoints )
    {
        if(!cJSON_IsObject(endpoints_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_discovery_v1beta1_endpoint_t *endpointsItem = io_k8s_api_discovery_v1beta1_endpoint_parseFromJSON(endpoints_local_nonprimitive);

        list_addElement(endpointsList, endpointsItem);
    }

    // io_k8s_api_discovery_v1beta1_endpoint_slice->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_sliceJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_discovery_v1beta1_endpoint_slice->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_sliceJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_discovery_v1beta1_endpoint_slice->ports
    cJSON *ports = cJSON_GetObjectItemCaseSensitive(io_k8s_api_discovery_v1beta1_endpoint_sliceJSON, "ports");
    list_t *portsList;
    if (ports) { 
    cJSON *ports_local_nonprimitive;
    if(!cJSON_IsArray(ports)){
        goto end; //nonprimitive container
    }

    portsList = list_create();

    cJSON_ArrayForEach(ports_local_nonprimitive,ports )
    {
        if(!cJSON_IsObject(ports_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_discovery_v1beta1_endpoint_port_t *portsItem = io_k8s_api_discovery_v1beta1_endpoint_port_parseFromJSON(ports_local_nonprimitive);

        list_addElement(portsList, portsItem);
    }
    }


    io_k8s_api_discovery_v1beta1_endpoint_slice_local_var = io_k8s_api_discovery_v1beta1_endpoint_slice_create (
        strdup(address_type->valuestring),
        api_version ? strdup(api_version->valuestring) : NULL,
        endpointsList,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        ports ? portsList : NULL
        );

    return io_k8s_api_discovery_v1beta1_endpoint_slice_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
