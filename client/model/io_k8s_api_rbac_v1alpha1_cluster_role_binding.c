#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_rbac_v1alpha1_cluster_role_binding.h"



io_k8s_api_rbac_v1alpha1_cluster_role_binding_t *io_k8s_api_rbac_v1alpha1_cluster_role_binding_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_rbac_v1alpha1_role_ref_t *role_ref,
    list_t *subjects
    ) {
    io_k8s_api_rbac_v1alpha1_cluster_role_binding_t *io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var = malloc(sizeof(io_k8s_api_rbac_v1alpha1_cluster_role_binding_t));
    if (!io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var) {
        return NULL;
    }
    io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var->api_version = api_version;
    io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var->kind = kind;
    io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var->metadata = metadata;
    io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var->role_ref = role_ref;
    io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var->subjects = subjects;

    return io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var;
}


void io_k8s_api_rbac_v1alpha1_cluster_role_binding_free(io_k8s_api_rbac_v1alpha1_cluster_role_binding_t *io_k8s_api_rbac_v1alpha1_cluster_role_binding) {
    if(NULL == io_k8s_api_rbac_v1alpha1_cluster_role_binding){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_rbac_v1alpha1_cluster_role_binding->api_version) {
        free(io_k8s_api_rbac_v1alpha1_cluster_role_binding->api_version);
        io_k8s_api_rbac_v1alpha1_cluster_role_binding->api_version = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_cluster_role_binding->kind) {
        free(io_k8s_api_rbac_v1alpha1_cluster_role_binding->kind);
        io_k8s_api_rbac_v1alpha1_cluster_role_binding->kind = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_cluster_role_binding->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_rbac_v1alpha1_cluster_role_binding->metadata);
        io_k8s_api_rbac_v1alpha1_cluster_role_binding->metadata = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_cluster_role_binding->role_ref) {
        io_k8s_api_rbac_v1alpha1_role_ref_free(io_k8s_api_rbac_v1alpha1_cluster_role_binding->role_ref);
        io_k8s_api_rbac_v1alpha1_cluster_role_binding->role_ref = NULL;
    }
    if (io_k8s_api_rbac_v1alpha1_cluster_role_binding->subjects) {
        list_ForEach(listEntry, io_k8s_api_rbac_v1alpha1_cluster_role_binding->subjects) {
            io_k8s_api_rbac_v1alpha1_subject_free(listEntry->data);
        }
        list_free(io_k8s_api_rbac_v1alpha1_cluster_role_binding->subjects);
        io_k8s_api_rbac_v1alpha1_cluster_role_binding->subjects = NULL;
    }
    free(io_k8s_api_rbac_v1alpha1_cluster_role_binding);
}

cJSON *io_k8s_api_rbac_v1alpha1_cluster_role_binding_convertToJSON(io_k8s_api_rbac_v1alpha1_cluster_role_binding_t *io_k8s_api_rbac_v1alpha1_cluster_role_binding) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->api_version
    if(io_k8s_api_rbac_v1alpha1_cluster_role_binding->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_rbac_v1alpha1_cluster_role_binding->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->kind
    if(io_k8s_api_rbac_v1alpha1_cluster_role_binding->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_rbac_v1alpha1_cluster_role_binding->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->metadata
    if(io_k8s_api_rbac_v1alpha1_cluster_role_binding->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_rbac_v1alpha1_cluster_role_binding->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->role_ref
    if (!io_k8s_api_rbac_v1alpha1_cluster_role_binding->role_ref) {
        goto fail;
    }
    
    cJSON *role_ref_local_JSON = io_k8s_api_rbac_v1alpha1_role_ref_convertToJSON(io_k8s_api_rbac_v1alpha1_cluster_role_binding->role_ref);
    if(role_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "roleRef", role_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->subjects
    if(io_k8s_api_rbac_v1alpha1_cluster_role_binding->subjects) { 
    cJSON *subjects = cJSON_AddArrayToObject(item, "subjects");
    if(subjects == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *subjectsListEntry;
    if (io_k8s_api_rbac_v1alpha1_cluster_role_binding->subjects) {
    list_ForEach(subjectsListEntry, io_k8s_api_rbac_v1alpha1_cluster_role_binding->subjects) {
    cJSON *itemLocal = io_k8s_api_rbac_v1alpha1_subject_convertToJSON(subjectsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(subjects, itemLocal);
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

io_k8s_api_rbac_v1alpha1_cluster_role_binding_t *io_k8s_api_rbac_v1alpha1_cluster_role_binding_parseFromJSON(cJSON *io_k8s_api_rbac_v1alpha1_cluster_role_bindingJSON){

    io_k8s_api_rbac_v1alpha1_cluster_role_binding_t *io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var = NULL;

    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_cluster_role_bindingJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_cluster_role_bindingJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_cluster_role_bindingJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->role_ref
    cJSON *role_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_cluster_role_bindingJSON, "roleRef");
    if (!role_ref) {
        goto end;
    }

    io_k8s_api_rbac_v1alpha1_role_ref_t *role_ref_local_nonprim = NULL;
    
    role_ref_local_nonprim = io_k8s_api_rbac_v1alpha1_role_ref_parseFromJSON(role_ref); //nonprimitive

    // io_k8s_api_rbac_v1alpha1_cluster_role_binding->subjects
    cJSON *subjects = cJSON_GetObjectItemCaseSensitive(io_k8s_api_rbac_v1alpha1_cluster_role_bindingJSON, "subjects");
    list_t *subjectsList;
    if (subjects) { 
    cJSON *subjects_local_nonprimitive;
    if(!cJSON_IsArray(subjects)){
        goto end; //nonprimitive container
    }

    subjectsList = list_create();

    cJSON_ArrayForEach(subjects_local_nonprimitive,subjects )
    {
        if(!cJSON_IsObject(subjects_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_rbac_v1alpha1_subject_t *subjectsItem = io_k8s_api_rbac_v1alpha1_subject_parseFromJSON(subjects_local_nonprimitive);

        list_addElement(subjectsList, subjectsItem);
    }
    }


    io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var = io_k8s_api_rbac_v1alpha1_cluster_role_binding_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        role_ref_local_nonprim,
        subjects ? subjectsList : NULL
        );

    return io_k8s_api_rbac_v1alpha1_cluster_role_binding_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (role_ref_local_nonprim) {
        io_k8s_api_rbac_v1alpha1_role_ref_free(role_ref_local_nonprim);
        role_ref_local_nonprim = NULL;
    }
    return NULL;

}
