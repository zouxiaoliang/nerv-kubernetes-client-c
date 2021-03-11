#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_api_versions.h"



io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_create(
    char *api_version,
    char *kind,
    list_t *server_address_by_client_cidrs,
    list_t *versions
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var->api_version = api_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var->kind = kind;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var->server_address_by_client_cidrs = server_address_by_client_cidrs;
    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var->versions = versions;

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_api_versions){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->api_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->api_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->api_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->kind) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->kind);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->kind = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->server_address_by_client_cidrs) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->server_address_by_client_cidrs) {
            io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->server_address_by_client_cidrs);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->server_address_by_client_cidrs = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->versions) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->versions) {
            free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->versions);
        io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->versions = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->api_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->kind
    if(io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->server_address_by_client_cidrs
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->server_address_by_client_cidrs) {
        goto fail;
    }
    
    cJSON *server_address_by_client_cidrs = cJSON_AddArrayToObject(item, "serverAddressByClientCIDRs");
    if(server_address_by_client_cidrs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *server_address_by_client_cidrsListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->server_address_by_client_cidrs) {
    list_ForEach(server_address_by_client_cidrsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->server_address_by_client_cidrs) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_server_address_by_client_cidr_convertToJSON(server_address_by_client_cidrsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(server_address_by_client_cidrs, itemLocal);
    }
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->versions
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->versions) {
        goto fail;
    }
    
    cJSON *versions = cJSON_AddArrayToObject(item, "versions");
    if(versions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *versionsListEntry;
    list_ForEach(versionsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->versions) {
    if(cJSON_AddStringToObject(versions, "", (char*)versionsListEntry->data) == NULL)
    {
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

io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_api_versionsJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_t *io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_versionsJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_versionsJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->server_address_by_client_cidrs
    cJSON *server_address_by_client_cidrs = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_versionsJSON, "serverAddressByClientCIDRs");
    if (!server_address_by_client_cidrs) {
        goto end;
    }

    list_t *server_address_by_client_cidrsList;
    
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

    // io_k8s_apimachinery_pkg_apis_meta_v1_api_versions->versions
    cJSON *versions = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_api_versionsJSON, "versions");
    if (!versions) {
        goto end;
    }

    list_t *versionsList;
    
    cJSON *versions_local;
    if(!cJSON_IsArray(versions)) {
        goto end;//primitive container
    }
    versionsList = list_create();

    cJSON_ArrayForEach(versions_local, versions)
    {
        if(!cJSON_IsString(versions_local))
        {
            goto end;
        }
        list_addElement(versionsList , strdup(versions_local->valuestring));
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        server_address_by_client_cidrsList,
        versionsList
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_api_versions_local_var;
end:
    return NULL;

}
