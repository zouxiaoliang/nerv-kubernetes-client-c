#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_ephemeral_containers.h"



io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers_create(
    char *api_version,
    list_t *ephemeral_containers,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata
    ) {
    io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers_local_var = malloc(sizeof(io_k8s_api_core_v1_ephemeral_containers_t));
    if (!io_k8s_api_core_v1_ephemeral_containers_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_ephemeral_containers_local_var->api_version = api_version;
    io_k8s_api_core_v1_ephemeral_containers_local_var->ephemeral_containers = ephemeral_containers;
    io_k8s_api_core_v1_ephemeral_containers_local_var->kind = kind;
    io_k8s_api_core_v1_ephemeral_containers_local_var->metadata = metadata;

    return io_k8s_api_core_v1_ephemeral_containers_local_var;
}


void io_k8s_api_core_v1_ephemeral_containers_free(io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers) {
    if(NULL == io_k8s_api_core_v1_ephemeral_containers){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_ephemeral_containers->api_version) {
        free(io_k8s_api_core_v1_ephemeral_containers->api_version);
        io_k8s_api_core_v1_ephemeral_containers->api_version = NULL;
    }
    if (io_k8s_api_core_v1_ephemeral_containers->ephemeral_containers) {
        list_ForEach(listEntry, io_k8s_api_core_v1_ephemeral_containers->ephemeral_containers) {
            io_k8s_api_core_v1_ephemeral_container_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_ephemeral_containers->ephemeral_containers);
        io_k8s_api_core_v1_ephemeral_containers->ephemeral_containers = NULL;
    }
    if (io_k8s_api_core_v1_ephemeral_containers->kind) {
        free(io_k8s_api_core_v1_ephemeral_containers->kind);
        io_k8s_api_core_v1_ephemeral_containers->kind = NULL;
    }
    if (io_k8s_api_core_v1_ephemeral_containers->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_ephemeral_containers->metadata);
        io_k8s_api_core_v1_ephemeral_containers->metadata = NULL;
    }
    free(io_k8s_api_core_v1_ephemeral_containers);
}

cJSON *io_k8s_api_core_v1_ephemeral_containers_convertToJSON(io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_ephemeral_containers->api_version
    if(io_k8s_api_core_v1_ephemeral_containers->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_ephemeral_containers->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_ephemeral_containers->ephemeral_containers
    if (!io_k8s_api_core_v1_ephemeral_containers->ephemeral_containers) {
        goto fail;
    }
    
    cJSON *ephemeral_containers = cJSON_AddArrayToObject(item, "ephemeralContainers");
    if(ephemeral_containers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ephemeral_containersListEntry;
    if (io_k8s_api_core_v1_ephemeral_containers->ephemeral_containers) {
    list_ForEach(ephemeral_containersListEntry, io_k8s_api_core_v1_ephemeral_containers->ephemeral_containers) {
    cJSON *itemLocal = io_k8s_api_core_v1_ephemeral_container_convertToJSON(ephemeral_containersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ephemeral_containers, itemLocal);
    }
    }


    // io_k8s_api_core_v1_ephemeral_containers->kind
    if(io_k8s_api_core_v1_ephemeral_containers->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_ephemeral_containers->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_ephemeral_containers->metadata
    if(io_k8s_api_core_v1_ephemeral_containers->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_ephemeral_containers->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
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

io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers_parseFromJSON(cJSON *io_k8s_api_core_v1_ephemeral_containersJSON){

    io_k8s_api_core_v1_ephemeral_containers_t *io_k8s_api_core_v1_ephemeral_containers_local_var = NULL;

    // io_k8s_api_core_v1_ephemeral_containers->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ephemeral_containersJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_ephemeral_containers->ephemeral_containers
    cJSON *ephemeral_containers = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ephemeral_containersJSON, "ephemeralContainers");
    if (!ephemeral_containers) {
        goto end;
    }

    list_t *ephemeral_containersList;
    
    cJSON *ephemeral_containers_local_nonprimitive;
    if(!cJSON_IsArray(ephemeral_containers)){
        goto end; //nonprimitive container
    }

    ephemeral_containersList = list_create();

    cJSON_ArrayForEach(ephemeral_containers_local_nonprimitive,ephemeral_containers )
    {
        if(!cJSON_IsObject(ephemeral_containers_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_ephemeral_container_t *ephemeral_containersItem = io_k8s_api_core_v1_ephemeral_container_parseFromJSON(ephemeral_containers_local_nonprimitive);

        list_addElement(ephemeral_containersList, ephemeral_containersItem);
    }

    // io_k8s_api_core_v1_ephemeral_containers->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ephemeral_containersJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_ephemeral_containers->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ephemeral_containersJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }


    io_k8s_api_core_v1_ephemeral_containers_local_var = io_k8s_api_core_v1_ephemeral_containers_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        ephemeral_containersList,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_ephemeral_containers_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
