#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_rbac_v1beta1_role.h"



io_k8s_api_rbac_v1beta1_role_t *io_k8s_api_rbac_v1beta1_role_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *rules
    ) {
    io_k8s_api_rbac_v1beta1_role_t *io_k8s_api_rbac_v1beta1_role_local_var = malloc(sizeof(io_k8s_api_rbac_v1beta1_role_t));
    if (!io_k8s_api_rbac_v1beta1_role_local_var) {
        return NULL;
    }
    io_k8s_api_rbac_v1beta1_role_local_var->api_version = api_version;
    io_k8s_api_rbac_v1beta1_role_local_var->kind = kind;
    io_k8s_api_rbac_v1beta1_role_local_var->metadata = metadata;
    io_k8s_api_rbac_v1beta1_role_local_var->rules = rules;

    return io_k8s_api_rbac_v1beta1_role_local_var;
}


void io_k8s_api_rbac_v1beta1_role_free(io_k8s_api_rbac_v1beta1_role_t *io_k8s_api_rbac_v1beta1_role) {
    if(NULL == io_k8s_api_rbac_v1beta1_role){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_rbac_v1beta1_role->api_version) {
        free(io_k8s_api_rbac_v1beta1_role->api_version);
        io_k8s_api_rbac_v1beta1_role->api_version = NULL;
    }
    if (io_k8s_api_rbac_v1beta1_role->kind) {
        free(io_k8s_api_rbac_v1beta1_role->kind);
        io_k8s_api_rbac_v1beta1_role->kind = NULL;
    }
    if (io_k8s_api_rbac_v1beta1_role->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_rbac_v1beta1_role->metadata);
        io_k8s_api_rbac_v1beta1_role->metadata = NULL;
    }
    if (io_k8s_api_rbac_v1beta1_role->rules) {
        list_ForEach(listEntry, io_k8s_api_rbac_v1beta1_role->rules) {
            io_k8s_api_rbac_v1beta1_policy_rule_free(listEntry->data);
        }
        list_free(io_k8s_api_rbac_v1beta1_role->rules);
        io_k8s_api_rbac_v1beta1_role->rules = NULL;
    }
    free(io_k8s_api_rbac_v1beta1_role);
}

cJSON *io_k8s_api_rbac_v1beta1_role_convertToJSON(io_k8s_api_rbac_v1beta1_role_t *io_k8s_api_rbac_v1beta1_role) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_rbac_v1beta1_role->api_version
    if(io_k8s_api_rbac_v1beta1_role->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_rbac_v1beta1_role->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_rbac_v1beta1_role->kind
    if(io_k8s_api_rbac_v1beta1_role->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_rbac_v1beta1_role->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_rbac_v1beta1_role->metadata
    if(io_k8s_api_rbac_v1beta1_role->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_rbac_v1beta1_role->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_rbac_v1beta1_role->rules
    if(io_k8s_api_rbac_v1beta1_role->rules) { 
    cJSON *rules = cJSON_AddArrayToObject(item, "rules");
    if(rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rulesListEntry;
    if (io_k8s_api_rbac_v1beta1_role->rules) {
    list_ForEach(rulesListEntry, io_k8s_api_rbac_v1beta1_role->rules) {
    cJSON *itemLocal = io_k8s_api_rbac_v1beta1_policy_rule_convertToJSON(rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rules, itemLocal);
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

io_k8s_api_rbac_v1beta1_role_t *io_k8s_api_rbac_v1beta1_role_parseFromJSON(cJSON *io_k8s_api_rbac_v1beta1_roleJSON){

    io_k8s_api_rbac_v1beta1_role_t *io_k8s_api_rbac_v1beta1_role_local_var = NULL;

    // io_k8s_api_rbac_v1beta1_role->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1beta1_roleJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_rbac_v1beta1_role->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1beta1_roleJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_rbac_v1beta1_role->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1beta1_roleJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_rbac_v1beta1_role->rules
    cJSON *rules = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1beta1_roleJSON, "rules");
    list_t *rulesList;
    if (rules) { 
    cJSON *rules_local_nonprimitive;
    if(!cJSON_IsArray(rules)){
        goto end; //nonprimitive container
    }

    rulesList = list_create();

    cJSON_ArrayForEach(rules_local_nonprimitive,rules )
    {
        if(!cJSON_IsObject(rules_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_rbac_v1beta1_policy_rule_t *rulesItem = io_k8s_api_rbac_v1beta1_policy_rule_parseFromJSON(rules_local_nonprimitive);

        list_addElement(rulesList, rulesItem);
    }
    }


    io_k8s_api_rbac_v1beta1_role_local_var = io_k8s_api_rbac_v1beta1_role_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        rules ? rulesList : NULL
        );

    return io_k8s_api_rbac_v1beta1_role_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
