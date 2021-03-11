#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_resource_quota_spec.h"



io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec_create(
    list_t* hard,
    io_k8s_api_core_v1_scope_selector_t *scope_selector,
    list_t *scopes
    ) {
    io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_resource_quota_spec_t));
    if (!io_k8s_api_core_v1_resource_quota_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_resource_quota_spec_local_var->hard = hard;
    io_k8s_api_core_v1_resource_quota_spec_local_var->scope_selector = scope_selector;
    io_k8s_api_core_v1_resource_quota_spec_local_var->scopes = scopes;

    return io_k8s_api_core_v1_resource_quota_spec_local_var;
}


void io_k8s_api_core_v1_resource_quota_spec_free(io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec) {
    if(NULL == io_k8s_api_core_v1_resource_quota_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_resource_quota_spec->hard) {
        list_ForEach(listEntry, io_k8s_api_core_v1_resource_quota_spec->hard) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_resource_quota_spec->hard);
        io_k8s_api_core_v1_resource_quota_spec->hard = NULL;
    }
    if (io_k8s_api_core_v1_resource_quota_spec->scope_selector) {
        io_k8s_api_core_v1_scope_selector_free(io_k8s_api_core_v1_resource_quota_spec->scope_selector);
        io_k8s_api_core_v1_resource_quota_spec->scope_selector = NULL;
    }
    if (io_k8s_api_core_v1_resource_quota_spec->scopes) {
        list_ForEach(listEntry, io_k8s_api_core_v1_resource_quota_spec->scopes) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_resource_quota_spec->scopes);
        io_k8s_api_core_v1_resource_quota_spec->scopes = NULL;
    }
    free(io_k8s_api_core_v1_resource_quota_spec);
}

cJSON *io_k8s_api_core_v1_resource_quota_spec_convertToJSON(io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_resource_quota_spec->hard
    if(io_k8s_api_core_v1_resource_quota_spec->hard) { 
    cJSON *hard = cJSON_AddObjectToObject(item, "hard");
    if(hard == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = hard;
    listEntry_t *hardListEntry;
    if (io_k8s_api_core_v1_resource_quota_spec->hard) {
    list_ForEach(hardListEntry, io_k8s_api_core_v1_resource_quota_spec->hard) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)hardListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_resource_quota_spec->scope_selector
    if(io_k8s_api_core_v1_resource_quota_spec->scope_selector) { 
    cJSON *scope_selector_local_JSON = io_k8s_api_core_v1_scope_selector_convertToJSON(io_k8s_api_core_v1_resource_quota_spec->scope_selector);
    if(scope_selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scopeSelector", scope_selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_resource_quota_spec->scopes
    if(io_k8s_api_core_v1_resource_quota_spec->scopes) { 
    cJSON *scopes = cJSON_AddArrayToObject(item, "scopes");
    if(scopes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *scopesListEntry;
    list_ForEach(scopesListEntry, io_k8s_api_core_v1_resource_quota_spec->scopes) {
    if(cJSON_AddStringToObject(scopes, "", (char*)scopesListEntry->data) == NULL)
    {
        goto fail;
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

io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_resource_quota_specJSON){

    io_k8s_api_core_v1_resource_quota_spec_t *io_k8s_api_core_v1_resource_quota_spec_local_var = NULL;

    // io_k8s_api_core_v1_resource_quota_spec->hard
    cJSON *hard = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_quota_specJSON, "hard");
    list_t *hardList;
    if (hard) { 
    cJSON *hard_local_map;
    if(!cJSON_IsObject(hard)) {
        goto end;//primitive map container
    }
    hardList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(hard_local_map, hard)
    {
		cJSON *localMapObject = hard_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(hardList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_resource_quota_spec->scope_selector
    cJSON *scope_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_quota_specJSON, "scopeSelector");
    io_k8s_api_core_v1_scope_selector_t *scope_selector_local_nonprim = NULL;
    if (scope_selector) { 
    scope_selector_local_nonprim = io_k8s_api_core_v1_scope_selector_parseFromJSON(scope_selector); //nonprimitive
    }

    // io_k8s_api_core_v1_resource_quota_spec->scopes
    cJSON *scopes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_resource_quota_specJSON, "scopes");
    list_t *scopesList;
    if (scopes) { 
    cJSON *scopes_local;
    if(!cJSON_IsArray(scopes)) {
        goto end;//primitive container
    }
    scopesList = list_create();

    cJSON_ArrayForEach(scopes_local, scopes)
    {
        if(!cJSON_IsString(scopes_local))
        {
            goto end;
        }
        list_addElement(scopesList , strdup(scopes_local->valuestring));
    }
    }


    io_k8s_api_core_v1_resource_quota_spec_local_var = io_k8s_api_core_v1_resource_quota_spec_create (
        hard ? hardList : NULL,
        scope_selector ? scope_selector_local_nonprim : NULL,
        scopes ? scopesList : NULL
        );

    return io_k8s_api_core_v1_resource_quota_spec_local_var;
end:
    if (scope_selector_local_nonprim) {
        io_k8s_api_core_v1_scope_selector_free(scope_selector_local_nonprim);
        scope_selector_local_nonprim = NULL;
    }
    return NULL;

}
