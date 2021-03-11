#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authentication_v1beta1_user_info.h"



io_k8s_api_authentication_v1beta1_user_info_t *io_k8s_api_authentication_v1beta1_user_info_create(
    list_t* extra,
    list_t *groups,
    char *uid,
    char *username
    ) {
    io_k8s_api_authentication_v1beta1_user_info_t *io_k8s_api_authentication_v1beta1_user_info_local_var = malloc(sizeof(io_k8s_api_authentication_v1beta1_user_info_t));
    if (!io_k8s_api_authentication_v1beta1_user_info_local_var) {
        return NULL;
    }
    io_k8s_api_authentication_v1beta1_user_info_local_var->extra = extra;
    io_k8s_api_authentication_v1beta1_user_info_local_var->groups = groups;
    io_k8s_api_authentication_v1beta1_user_info_local_var->uid = uid;
    io_k8s_api_authentication_v1beta1_user_info_local_var->username = username;

    return io_k8s_api_authentication_v1beta1_user_info_local_var;
}


void io_k8s_api_authentication_v1beta1_user_info_free(io_k8s_api_authentication_v1beta1_user_info_t *io_k8s_api_authentication_v1beta1_user_info) {
    if(NULL == io_k8s_api_authentication_v1beta1_user_info){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authentication_v1beta1_user_info->extra) {
        list_ForEach(listEntry, io_k8s_api_authentication_v1beta1_user_info->extra) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_authentication_v1beta1_user_info->extra);
        io_k8s_api_authentication_v1beta1_user_info->extra = NULL;
    }
    if (io_k8s_api_authentication_v1beta1_user_info->groups) {
        list_ForEach(listEntry, io_k8s_api_authentication_v1beta1_user_info->groups) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_authentication_v1beta1_user_info->groups);
        io_k8s_api_authentication_v1beta1_user_info->groups = NULL;
    }
    if (io_k8s_api_authentication_v1beta1_user_info->uid) {
        free(io_k8s_api_authentication_v1beta1_user_info->uid);
        io_k8s_api_authentication_v1beta1_user_info->uid = NULL;
    }
    if (io_k8s_api_authentication_v1beta1_user_info->username) {
        free(io_k8s_api_authentication_v1beta1_user_info->username);
        io_k8s_api_authentication_v1beta1_user_info->username = NULL;
    }
    free(io_k8s_api_authentication_v1beta1_user_info);
}

cJSON *io_k8s_api_authentication_v1beta1_user_info_convertToJSON(io_k8s_api_authentication_v1beta1_user_info_t *io_k8s_api_authentication_v1beta1_user_info) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authentication_v1beta1_user_info->extra
    if(io_k8s_api_authentication_v1beta1_user_info->extra) { 
    cJSON *extra = cJSON_AddObjectToObject(item, "extra");
    if(extra == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = extra;
    listEntry_t *extraListEntry;
    if (io_k8s_api_authentication_v1beta1_user_info->extra) {
    list_ForEach(extraListEntry, io_k8s_api_authentication_v1beta1_user_info->extra) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)extraListEntry->data;
    }
    }
     } 


    // io_k8s_api_authentication_v1beta1_user_info->groups
    if(io_k8s_api_authentication_v1beta1_user_info->groups) { 
    cJSON *groups = cJSON_AddArrayToObject(item, "groups");
    if(groups == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *groupsListEntry;
    list_ForEach(groupsListEntry, io_k8s_api_authentication_v1beta1_user_info->groups) {
    if(cJSON_AddStringToObject(groups, "", (char*)groupsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_authentication_v1beta1_user_info->uid
    if(io_k8s_api_authentication_v1beta1_user_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", io_k8s_api_authentication_v1beta1_user_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authentication_v1beta1_user_info->username
    if(io_k8s_api_authentication_v1beta1_user_info->username) { 
    if(cJSON_AddStringToObject(item, "username", io_k8s_api_authentication_v1beta1_user_info->username) == NULL) {
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

io_k8s_api_authentication_v1beta1_user_info_t *io_k8s_api_authentication_v1beta1_user_info_parseFromJSON(cJSON *io_k8s_api_authentication_v1beta1_user_infoJSON){

    io_k8s_api_authentication_v1beta1_user_info_t *io_k8s_api_authentication_v1beta1_user_info_local_var = NULL;

    // io_k8s_api_authentication_v1beta1_user_info->extra
    cJSON *extra = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1beta1_user_infoJSON, "extra");
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

    // io_k8s_api_authentication_v1beta1_user_info->groups
    cJSON *groups = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1beta1_user_infoJSON, "groups");
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

    // io_k8s_api_authentication_v1beta1_user_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1beta1_user_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authentication_v1beta1_user_info->username
    cJSON *username = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authentication_v1beta1_user_infoJSON, "username");
    if (username) { 
    if(!cJSON_IsString(username))
    {
    goto end; //String
    }
    }


    io_k8s_api_authentication_v1beta1_user_info_local_var = io_k8s_api_authentication_v1beta1_user_info_create (
        extra ? extraList : NULL,
        groups ? groupsList : NULL,
        uid ? strdup(uid->valuestring) : NULL,
        username ? strdup(username->valuestring) : NULL
        );

    return io_k8s_api_authentication_v1beta1_user_info_local_var;
end:
    return NULL;

}
