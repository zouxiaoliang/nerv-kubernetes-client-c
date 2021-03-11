#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_api_group.h"



io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_create(
    char *api_version,
    char *kind,
    char *name,
    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *preferred_version,
    list_t *server_address_by_client_cidrs,
    list_t *versions
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var->api_version = api_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var->kind = kind;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var->name = name;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var->preferred_version = preferred_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var->server_address_by_client_cidrs = server_address_by_client_cidrs;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var->versions = versions;

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_api_group_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_api_group){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group->api_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->api_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group->api_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group->kind) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->kind);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group->kind = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group->name) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->name);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group->name = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group->preferred_version) {
        io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->preferred_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group->preferred_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group->server_address_by_client_cidrs) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_group->server_address_by_client_cidrs) {
            io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->server_address_by_client_cidrs);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group->server_address_by_client_cidrs = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group->versions) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_group->versions) {
            io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->versions);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_group->versions = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_api_group);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->api_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_apimachinery_pkg_apis_meta_v1_api_group->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->kind
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apimachinery_pkg_apis_meta_v1_api_group->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->name
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_group->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_apimachinery_pkg_apis_meta_v1_api_group->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->preferred_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->preferred_version) { 
    cJSON *preferred_version_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->preferred_version);
    if(preferred_version_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preferredVersion", preferred_version_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->server_address_by_client_cidrs
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_group->server_address_by_client_cidrs) { 
    cJSON *server_address_by_client_cidrs = cJSON_AddArrayToObject(item, "serverAddressByClientCIDRs");
    if(server_address_by_client_cidrs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *server_address_by_client_cidrsListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group->server_address_by_client_cidrs) {
    list_ForEach(server_address_by_client_cidrsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_group->server_address_by_client_cidrs) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_convertToJSON(server_address_by_client_cidrsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(server_address_by_client_cidrs, itemLocal);
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->versions
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_group->versions) {
        goto fail;
    }
    
    cJSON *versions = cJSON_AddArrayToObject(item, "versions");
    if(versions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *versionsListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_group->versions) {
    list_ForEach(versionsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_group->versions) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_convertToJSON(versionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(versions, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_groupJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_groupJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_groupJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_groupJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->preferred_version
    cJSON *preferred_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_groupJSON, "preferredVersion");
    io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *preferred_version_local_nonprim = NULL;
    if (preferred_version) { 
    preferred_version_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_parseFromJSON(preferred_version); //nonprimitive
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->server_address_by_client_cidrs
    cJSON *server_address_by_client_cidrs = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_groupJSON, "serverAddressByClientCIDRs");
    list_t *server_address_by_client_cidrsList;
    if (server_address_by_client_cidrs) { 
    cJSON *server_address_by_client_cidrs_local_nonprimitive;
    if(!cJSON_IsArray(server_address_by_client_cidrs)){
        goto end; //nonprimitive container
    }

    server_address_by_client_cidrsList = list_create();

    cJSON_ArrayForEach(server_address_by_client_cidrs_local_nonprimitive,server_address_by_client_cidrs )
    {
        if(!cJSON_IsObject(server_address_by_client_cidrs_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_t *server_address_by_client_cidrsItem = io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_parseFromJSON(server_address_by_client_cidrs_local_nonprimitive);

        list_addElement(server_address_by_client_cidrsList, server_address_by_client_cidrsItem);
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_group->versions
    cJSON *versions = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_groupJSON, "versions");
    if (!versions) {
        goto end;
    }

    list_t *versionsList;
    
    cJSON *versions_local_nonprimitive;
    if(!cJSON_IsArray(versions)){
        goto end; //nonprimitive container
    }

    versionsList = list_create();

    cJSON_ArrayForEach(versions_local_nonprimitive,versions )
    {
        if(!cJSON_IsObject(versions_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_t *versionsItem = io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_parseFromJSON(versions_local_nonprimitive);

        list_addElement(versionsList, versionsItem);
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_api_group_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        strdup(name->valuestring),
        preferred_version ? preferred_version_local_nonprim : NULL,
        server_address_by_client_cidrs ? server_address_by_client_cidrsList : NULL,
        versionsList
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_group_local_var;
end:
    if (preferred_version_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_group_version_for_discovery_free(preferred_version_local_nonprim);
        preferred_version_local_nonprim = NULL;
    }
    return NULL;

}
