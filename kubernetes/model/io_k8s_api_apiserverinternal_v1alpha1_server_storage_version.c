#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apiserverinternal_v1alpha1_server_storage_version.h"



io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_create(
    char *api_server_id,
    list_t *decodable_versions,
    char *encoding_version
    ) {
    io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_local_var = malloc(sizeof(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t));
    if (!io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_local_var) {
        return NULL;
    }
    io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_local_var->api_server_id = api_server_id;
    io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_local_var->decodable_versions = decodable_versions;
    io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_local_var->encoding_version = encoding_version;

    return io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_local_var;
}


void io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_free(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version) {
    if(NULL == io_k8s_api_apiserverinternal_v1alpha1_server_storage_version){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->api_server_id) {
        free(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->api_server_id);
        io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->api_server_id = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->decodable_versions) {
        list_ForEach(listEntry, io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->decodable_versions) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->decodable_versions);
        io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->decodable_versions = NULL;
    }
    if (io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->encoding_version) {
        free(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->encoding_version);
        io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->encoding_version = NULL;
    }
    free(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version);
}

cJSON *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_convertToJSON(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->api_server_id
    if(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->api_server_id) { 
    if(cJSON_AddStringToObject(item, "apiServerID", io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->api_server_id) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->decodable_versions
    if(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->decodable_versions) { 
    cJSON *decodable_versions = cJSON_AddArrayToObject(item, "decodableVersions");
    if(decodable_versions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *decodable_versionsListEntry;
    list_ForEach(decodable_versionsListEntry, io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->decodable_versions) {
    if(cJSON_AddStringToObject(decodable_versions, "", (char*)decodable_versionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->encoding_version
    if(io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->encoding_version) { 
    if(cJSON_AddStringToObject(item, "encodingVersion", io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->encoding_version) == NULL) {
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

io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_parseFromJSON(cJSON *io_k8s_api_apiserverinternal_v1alpha1_server_storage_versionJSON){

    io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_t *io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_local_var = NULL;

    // io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->api_server_id
    cJSON *api_server_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_server_storage_versionJSON, "apiServerID");
    if (api_server_id) { 
    if(!cJSON_IsString(api_server_id))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->decodable_versions
    cJSON *decodable_versions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_server_storage_versionJSON, "decodableVersions");
    list_t *decodable_versionsList;
    if (decodable_versions) { 
    cJSON *decodable_versions_local;
    if(!cJSON_IsArray(decodable_versions)) {
        goto end;//primitive container
    }
    decodable_versionsList = list_create();

    cJSON_ArrayForEach(decodable_versions_local, decodable_versions)
    {
        if(!cJSON_IsString(decodable_versions_local))
        {
            goto end;
        }
        list_addElement(decodable_versionsList , strdup(decodable_versions_local->valuestring));
    }
    }

    // io_k8s_api_apiserverinternal_v1alpha1_server_storage_version->encoding_version
    cJSON *encoding_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apiserverinternal_v1alpha1_server_storage_versionJSON, "encodingVersion");
    if (encoding_version) { 
    if(!cJSON_IsString(encoding_version))
    {
    goto end; //String
    }
    }


    io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_local_var = io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_create (
        api_server_id ? strdup(api_server_id->valuestring) : NULL,
        decodable_versions ? decodable_versionsList : NULL,
        encoding_version ? strdup(encoding_version->valuestring) : NULL
        );

    return io_k8s_api_apiserverinternal_v1alpha1_server_storage_version_local_var;
end:
    return NULL;

}
