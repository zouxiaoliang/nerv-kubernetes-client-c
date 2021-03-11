#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_service_account.h"



io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account_create(
    char *api_version,
    int automount_service_account_token,
    list_t *image_pull_secrets,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *secrets
    ) {
    io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account_local_var = malloc(sizeof(io_k8s_api_core_v1_service_account_t));
    if (!io_k8s_api_core_v1_service_account_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_service_account_local_var->api_version = api_version;
    io_k8s_api_core_v1_service_account_local_var->automount_service_account_token = automount_service_account_token;
    io_k8s_api_core_v1_service_account_local_var->image_pull_secrets = image_pull_secrets;
    io_k8s_api_core_v1_service_account_local_var->kind = kind;
    io_k8s_api_core_v1_service_account_local_var->metadata = metadata;
    io_k8s_api_core_v1_service_account_local_var->secrets = secrets;

    return io_k8s_api_core_v1_service_account_local_var;
}


void io_k8s_api_core_v1_service_account_free(io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account) {
    if(NULL == io_k8s_api_core_v1_service_account){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_service_account->api_version) {
        free(io_k8s_api_core_v1_service_account->api_version);
        io_k8s_api_core_v1_service_account->api_version = NULL;
    }
    if (io_k8s_api_core_v1_service_account->image_pull_secrets) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_account->image_pull_secrets) {
            io_k8s_api_core_v1_local_object_reference_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_service_account->image_pull_secrets);
        io_k8s_api_core_v1_service_account->image_pull_secrets = NULL;
    }
    if (io_k8s_api_core_v1_service_account->kind) {
        free(io_k8s_api_core_v1_service_account->kind);
        io_k8s_api_core_v1_service_account->kind = NULL;
    }
    if (io_k8s_api_core_v1_service_account->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_service_account->metadata);
        io_k8s_api_core_v1_service_account->metadata = NULL;
    }
    if (io_k8s_api_core_v1_service_account->secrets) {
        list_ForEach(listEntry, io_k8s_api_core_v1_service_account->secrets) {
            io_k8s_api_core_v1_object_reference_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_service_account->secrets);
        io_k8s_api_core_v1_service_account->secrets = NULL;
    }
    free(io_k8s_api_core_v1_service_account);
}

cJSON *io_k8s_api_core_v1_service_account_convertToJSON(io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_service_account->api_version
    if(io_k8s_api_core_v1_service_account->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_service_account->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_service_account->automount_service_account_token
    if(io_k8s_api_core_v1_service_account->automount_service_account_token) { 
    if(cJSON_AddBoolToObject(item, "automountServiceAccountToken", io_k8s_api_core_v1_service_account->automount_service_account_token) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_service_account->image_pull_secrets
    if(io_k8s_api_core_v1_service_account->image_pull_secrets) { 
    cJSON *image_pull_secrets = cJSON_AddArrayToObject(item, "imagePullSecrets");
    if(image_pull_secrets == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *image_pull_secretsListEntry;
    if (io_k8s_api_core_v1_service_account->image_pull_secrets) {
    list_ForEach(image_pull_secretsListEntry, io_k8s_api_core_v1_service_account->image_pull_secrets) {
    cJSON *itemLocal = io_k8s_api_core_v1_local_object_reference_convertToJSON(image_pull_secretsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(image_pull_secrets, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_service_account->kind
    if(io_k8s_api_core_v1_service_account->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_service_account->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_service_account->metadata
    if(io_k8s_api_core_v1_service_account->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_service_account->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_service_account->secrets
    if(io_k8s_api_core_v1_service_account->secrets) { 
    cJSON *secrets = cJSON_AddArrayToObject(item, "secrets");
    if(secrets == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *secretsListEntry;
    if (io_k8s_api_core_v1_service_account->secrets) {
    list_ForEach(secretsListEntry, io_k8s_api_core_v1_service_account->secrets) {
    cJSON *itemLocal = io_k8s_api_core_v1_object_reference_convertToJSON(secretsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(secrets, itemLocal);
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

io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account_parseFromJSON(cJSON *io_k8s_api_core_v1_service_accountJSON){

    io_k8s_api_core_v1_service_account_t *io_k8s_api_core_v1_service_account_local_var = NULL;

    // io_k8s_api_core_v1_service_account->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_accountJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_service_account->automount_service_account_token
    cJSON *automount_service_account_token = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_accountJSON, "automountServiceAccountToken");
    if (automount_service_account_token) { 
    if(!cJSON_IsBool(automount_service_account_token))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_service_account->image_pull_secrets
    cJSON *image_pull_secrets = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_accountJSON, "imagePullSecrets");
    list_t *image_pull_secretsList;
    if (image_pull_secrets) { 
    cJSON *image_pull_secrets_local_nonprimitive;
    if(!cJSON_IsArray(image_pull_secrets)){
        goto end; //nonprimitive container
    }

    image_pull_secretsList = list_create();

    cJSON_ArrayForEach(image_pull_secrets_local_nonprimitive,image_pull_secrets )
    {
        if(!cJSON_IsObject(image_pull_secrets_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_local_object_reference_t *image_pull_secretsItem = io_k8s_api_core_v1_local_object_reference_parseFromJSON(image_pull_secrets_local_nonprimitive);

        list_addElement(image_pull_secretsList, image_pull_secretsItem);
    }
    }

    // io_k8s_api_core_v1_service_account->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_accountJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_service_account->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_accountJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_core_v1_service_account->secrets
    cJSON *secrets = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_service_accountJSON, "secrets");
    list_t *secretsList;
    if (secrets) { 
    cJSON *secrets_local_nonprimitive;
    if(!cJSON_IsArray(secrets)){
        goto end; //nonprimitive container
    }

    secretsList = list_create();

    cJSON_ArrayForEach(secrets_local_nonprimitive,secrets )
    {
        if(!cJSON_IsObject(secrets_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_object_reference_t *secretsItem = io_k8s_api_core_v1_object_reference_parseFromJSON(secrets_local_nonprimitive);

        list_addElement(secretsList, secretsItem);
    }
    }


    io_k8s_api_core_v1_service_account_local_var = io_k8s_api_core_v1_service_account_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        automount_service_account_token ? automount_service_account_token->valueint : 0,
        image_pull_secrets ? image_pull_secretsList : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        secrets ? secretsList : NULL
        );

    return io_k8s_api_core_v1_service_account_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
