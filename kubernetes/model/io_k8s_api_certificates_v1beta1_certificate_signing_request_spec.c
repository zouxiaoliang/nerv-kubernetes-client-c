#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_certificates_v1beta1_certificate_signing_request_spec.h"



io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_create(
    list_t* extra,
    list_t *groups,
    char request,
    char *signer_name,
    char *uid,
    list_t *usages,
    char *username
    ) {
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var = malloc(sizeof(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t));
    if (!io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var) {
        return NULL;
    }
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var->extra = extra;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var->groups = groups;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var->request = request;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var->signer_name = signer_name;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var->uid = uid;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var->usages = usages;
    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var->username = username;

    return io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var;
}


void io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_free(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec) {
    if(NULL == io_k8s_api_certificates_v1beta1_certificate_signing_request_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->extra) {
        list_ForEach(listEntry, io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->extra) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->extra);
        io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->extra = NULL;
    }
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->groups) {
        list_ForEach(listEntry, io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->groups) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->groups);
        io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->groups = NULL;
    }
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->signer_name) {
        free(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->signer_name);
        io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->signer_name = NULL;
    }
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->uid) {
        free(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->uid);
        io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->uid = NULL;
    }
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->usages) {
        list_ForEach(listEntry, io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->usages) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->usages);
        io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->usages = NULL;
    }
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->username) {
        free(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->username);
        io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->username = NULL;
    }
    free(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec);
}

cJSON *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_convertToJSON(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->extra
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->extra) { 
    cJSON *extra = cJSON_AddObjectToObject(item, "extra");
    if(extra == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = extra;
    listEntry_t *extraListEntry;
    if (io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->extra) {
    list_ForEach(extraListEntry, io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->extra) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)extraListEntry->data;
    }
    }
     } 


    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->groups
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->groups) { 
    cJSON *groups = cJSON_AddArrayToObject(item, "groups");
    if(groups == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *groupsListEntry;
    list_ForEach(groupsListEntry, io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->groups) {
    if(cJSON_AddStringToObject(groups, "", (char*)groupsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->request
    if (!io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->request) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "request", io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->request) == NULL) {
    goto fail; //Byte
    }


    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->signer_name
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->signer_name) { 
    if(cJSON_AddStringToObject(item, "signerName", io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->signer_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->uid
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->uid) { 
    if(cJSON_AddStringToObject(item, "uid", io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->uid) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->usages
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->usages) { 
    cJSON *usages = cJSON_AddArrayToObject(item, "usages");
    if(usages == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *usagesListEntry;
    list_ForEach(usagesListEntry, io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->usages) {
    if(cJSON_AddStringToObject(usages, "", (char*)usagesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->username
    if(io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->username) { 
    if(cJSON_AddStringToObject(item, "username", io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->username) == NULL) {
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

io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_parseFromJSON(cJSON *io_k8s_api_certificates_v1beta1_certificate_signing_request_specJSON){

    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_t *io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var = NULL;

    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->extra
    cJSON *extra = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_request_specJSON, "extra");
    list_t *extraList;
    if (extra) { 
    cJSON *extra_local_map;
    if(!cJSON_IsObject(extra)) {
        goto end;//primitive map container
    }
    extraList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(extra_local_map, extra)
    {
		cJSON *localMapObject = extra_local_map;
        list_addElement(extraList , localMapKeyPair);
    }
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->groups
    cJSON *groups = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_request_specJSON, "groups");
    list_t *groupsList;
    if (groups) { 
    cJSON *groups_local;
    if(!cJSON_IsArray(groups)) {
        goto end;//primitive container
    }
    groupsList = list_create();

    cJSON_ArrayForEach(groups_local, groups)
    {
        if(!cJSON_IsString(groups_local))
        {
            goto end;
        }
        list_addElement(groupsList , strdup(groups_local->valuestring));
    }
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->request
    cJSON *request = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_request_specJSON, "request");
    if (!request) {
        goto end;
    }

    
    if(!cJSON_IsNumber(request))
    {
    goto end; //Byte
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->signer_name
    cJSON *signer_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_request_specJSON, "signerName");
    if (signer_name) { 
    if(!cJSON_IsString(signer_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_request_specJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->usages
    cJSON *usages = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_request_specJSON, "usages");
    list_t *usagesList;
    if (usages) { 
    cJSON *usages_local;
    if(!cJSON_IsArray(usages)) {
        goto end;//primitive container
    }
    usagesList = list_create();

    cJSON_ArrayForEach(usages_local, usages)
    {
        if(!cJSON_IsString(usages_local))
        {
            goto end;
        }
        list_addElement(usagesList , strdup(usages_local->valuestring));
    }
    }

    // io_k8s_api_certificates_v1beta1_certificate_signing_request_spec->username
    cJSON *username = cJSON_GetObjectItemCaseSensitive(io_k8s_api_certificates_v1beta1_certificate_signing_request_specJSON, "username");
    if (username) { 
    if(!cJSON_IsString(username))
    {
    goto end; //String
    }
    }


    io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var = io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_create (
        extra ? extraList : NULL,
        groups ? groupsList : NULL,
        request->valueint,
        signer_name ? strdup(signer_name->valuestring) : NULL,
        uid ? strdup(uid->valuestring) : NULL,
        usages ? usagesList : NULL,
        username ? strdup(username->valuestring) : NULL
        );

    return io_k8s_api_certificates_v1beta1_certificate_signing_request_spec_local_var;
end:
    return NULL;

}
