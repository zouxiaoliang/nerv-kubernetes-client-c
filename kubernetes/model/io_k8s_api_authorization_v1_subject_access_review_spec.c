#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_authorization_v1_subject_access_review_spec.h"



io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec_create(
    list_t* extra,
    list_t *groups,
    io_k8s_api_authorization_v1_non_resource_attributes_t *non_resource_attributes,
    io_k8s_api_authorization_v1_resource_attributes_t *resource_attributes,
    char *uid,
    char *user
    ) {
    io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec_local_var = malloc(sizeof(io_k8s_api_authorization_v1_subject_access_review_spec_t));
    if (!io_k8s_api_authorization_v1_subject_access_review_spec_local_var) {
        return NULL;
    }
    io_k8s_api_authorization_v1_subject_access_review_spec_local_var->extra = extra;
    io_k8s_api_authorization_v1_subject_access_review_spec_local_var->groups = groups;
    io_k8s_api_authorization_v1_subject_access_review_spec_local_var->non_resource_attributes = non_resource_attributes;
    io_k8s_api_authorization_v1_subject_access_review_spec_local_var->resource_attributes = resource_attributes;
    io_k8s_api_authorization_v1_subject_access_review_spec_local_var->uid = uid;
    io_k8s_api_authorization_v1_subject_access_review_spec_local_var->user = user;

    return io_k8s_api_authorization_v1_subject_access_review_spec_local_var;
}


void io_k8s_api_authorization_v1_subject_access_review_spec_free(io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec) {
    if(NULL == io_k8s_api_authorization_v1_subject_access_review_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_authorization_v1_subject_access_review_spec->extra) {
        list_ForEach(listEntry, io_k8s_api_authorization_v1_subject_access_review_spec->extra) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_authorization_v1_subject_access_review_spec->extra);
        io_k8s_api_authorization_v1_subject_access_review_spec->extra = NULL;
    }
    if (io_k8s_api_authorization_v1_subject_access_review_spec->groups) {
        list_ForEach(listEntry, io_k8s_api_authorization_v1_subject_access_review_spec->groups) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_authorization_v1_subject_access_review_spec->groups);
        io_k8s_api_authorization_v1_subject_access_review_spec->groups = NULL;
    }
    if (io_k8s_api_authorization_v1_subject_access_review_spec->non_resource_attributes) {
        io_k8s_api_authorization_v1_non_resource_attributes_free(io_k8s_api_authorization_v1_subject_access_review_spec->non_resource_attributes);
        io_k8s_api_authorization_v1_subject_access_review_spec->non_resource_attributes = NULL;
    }
    if (io_k8s_api_authorization_v1_subject_access_review_spec->resource_attributes) {
        io_k8s_api_authorization_v1_resource_attributes_free(io_k8s_api_authorization_v1_subject_access_review_spec->resource_attributes);
        io_k8s_api_authorization_v1_subject_access_review_spec->resource_attributes = NULL;
    }
    if (io_k8s_api_authorization_v1_subject_access_review_spec->uid) {
        free(io_k8s_api_authorization_v1_subject_access_review_spec->uid);
        io_k8s_api_authorization_v1_subject_access_review_spec->uid = NULL;
    }
    if (io_k8s_api_authorization_v1_subject_access_review_spec->user) {
        free(io_k8s_api_authorization_v1_subject_access_review_spec->user);
        io_k8s_api_authorization_v1_subject_access_review_spec->user = NULL;
    }
    free(io_k8s_api_authorization_v1_subject_access_review_spec);
}

cJSON *io_k8s_api_authorization_v1_subject_access_review_spec_convertToJSON(io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_authorization_v1_subject_access_review_spec->extra
    if(io_k8s_api_authorization_v1_subject_access_review_spec->extra) { 
    cJSON *extra = cJSON_AddObjectToObject(item, "extra");
    if(extra == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = extra;
    listEntry_t *extraListEntry;
    if (io_k8s_api_authorization_v1_subject_access_review_spec->extra) {
    list_ForEach(extraListEntry, io_k8s_api_authorization_v1_subject_access_review_spec->extra) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)extraListEntry->data;
    }
    }
     } 


    // io_k8s_api_authorization_v1_subject_access_review_spec->groups
    if(io_k8s_api_authorization_v1_subject_access_review_spec->groups) { 
    cJSON *groups = cJSON_AddArrayToObject(item, "groups");
    if(groups == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *groupsListEntry;
    list_ForEach(groupsListEntry, io_k8s_api_authorization_v1_subject_access_review_spec->groups) {
    if(cJSON_AddStringToObject(groups, "", (char*)groupsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_authorization_v1_subject_access_review_spec->non_resource_attributes
    if(io_k8s_api_authorization_v1_subject_access_review_spec->non_resource_attributes) { 
    cJSON *non_resource_attributes_local_JSON = io_k8s_api_authorization_v1_non_resource_attributes_convertToJSON(io_k8s_api_authorization_v1_subject_access_review_spec->non_resource_attributes);
    if(non_resource_attributes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nonResourceAttributes", non_resource_attributes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_authorization_v1_subject_access_review_spec->resource_attributes
    if(io_k8s_api_authorization_v1_subject_access_review_spec->resource_attributes) { 
    cJSON *resource_attributes_local_JSON = io_k8s_api_authorization_v1_resource_attributes_convertToJSON(io_k8s_api_authorization_v1_subject_access_review_spec->resource_attributes);
    if(resource_attributes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resourceAttributes", resource_attributes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_authorization_v1_subject_access_review_spec->uid
    if(io_k8s_api_authorization_v1_subject_access_review_spec->uid) { 
    if(cJSON_AddStringToObject(item, "uid", io_k8s_api_authorization_v1_subject_access_review_spec->uid) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_authorization_v1_subject_access_review_spec->user
    if(io_k8s_api_authorization_v1_subject_access_review_spec->user) { 
    if(cJSON_AddStringToObject(item, "user", io_k8s_api_authorization_v1_subject_access_review_spec->user) == NULL) {
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

io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec_parseFromJSON(cJSON *io_k8s_api_authorization_v1_subject_access_review_specJSON){

    io_k8s_api_authorization_v1_subject_access_review_spec_t *io_k8s_api_authorization_v1_subject_access_review_spec_local_var = NULL;

    // io_k8s_api_authorization_v1_subject_access_review_spec->extra
    cJSON *extra = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_specJSON, "extra");
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

    // io_k8s_api_authorization_v1_subject_access_review_spec->groups
    cJSON *groups = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_specJSON, "groups");
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

    // io_k8s_api_authorization_v1_subject_access_review_spec->non_resource_attributes
    cJSON *non_resource_attributes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_specJSON, "nonResourceAttributes");
    io_k8s_api_authorization_v1_non_resource_attributes_t *non_resource_attributes_local_nonprim = NULL;
    if (non_resource_attributes) { 
    non_resource_attributes_local_nonprim = io_k8s_api_authorization_v1_non_resource_attributes_parseFromJSON(non_resource_attributes); //nonprimitive
    }

    // io_k8s_api_authorization_v1_subject_access_review_spec->resource_attributes
    cJSON *resource_attributes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_specJSON, "resourceAttributes");
    io_k8s_api_authorization_v1_resource_attributes_t *resource_attributes_local_nonprim = NULL;
    if (resource_attributes) { 
    resource_attributes_local_nonprim = io_k8s_api_authorization_v1_resource_attributes_parseFromJSON(resource_attributes); //nonprimitive
    }

    // io_k8s_api_authorization_v1_subject_access_review_spec->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_specJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // io_k8s_api_authorization_v1_subject_access_review_spec->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(io_k8s_api_authorization_v1_subject_access_review_specJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }
    }


    io_k8s_api_authorization_v1_subject_access_review_spec_local_var = io_k8s_api_authorization_v1_subject_access_review_spec_create (
        extra ? extraList : NULL,
        groups ? groupsList : NULL,
        non_resource_attributes ? non_resource_attributes_local_nonprim : NULL,
        resource_attributes ? resource_attributes_local_nonprim : NULL,
        uid ? strdup(uid->valuestring) : NULL,
        user ? strdup(user->valuestring) : NULL
        );

    return io_k8s_api_authorization_v1_subject_access_review_spec_local_var;
end:
    if (non_resource_attributes_local_nonprim) {
        io_k8s_api_authorization_v1_non_resource_attributes_free(non_resource_attributes_local_nonprim);
        non_resource_attributes_local_nonprim = NULL;
    }
    if (resource_attributes_local_nonprim) {
        io_k8s_api_authorization_v1_resource_attributes_free(resource_attributes_local_nonprim);
        resource_attributes_local_nonprim = NULL;
    }
    return NULL;

}
