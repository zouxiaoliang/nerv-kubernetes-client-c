#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1_storage_class.h"



io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class_create(
    int allow_volume_expansion,
    list_t *allowed_topologies,
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *mount_options,
    list_t* parameters,
    char *provisioner,
    char *reclaim_policy,
    char *volume_binding_mode
    ) {
    io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class_local_var = malloc(sizeof(io_k8s_api_storage_v1_storage_class_t));
    if (!io_k8s_api_storage_v1_storage_class_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1_storage_class_local_var->allow_volume_expansion = allow_volume_expansion;
    io_k8s_api_storage_v1_storage_class_local_var->allowed_topologies = allowed_topologies;
    io_k8s_api_storage_v1_storage_class_local_var->api_version = api_version;
    io_k8s_api_storage_v1_storage_class_local_var->kind = kind;
    io_k8s_api_storage_v1_storage_class_local_var->metadata = metadata;
    io_k8s_api_storage_v1_storage_class_local_var->mount_options = mount_options;
    io_k8s_api_storage_v1_storage_class_local_var->parameters = parameters;
    io_k8s_api_storage_v1_storage_class_local_var->provisioner = provisioner;
    io_k8s_api_storage_v1_storage_class_local_var->reclaim_policy = reclaim_policy;
    io_k8s_api_storage_v1_storage_class_local_var->volume_binding_mode = volume_binding_mode;

    return io_k8s_api_storage_v1_storage_class_local_var;
}


void io_k8s_api_storage_v1_storage_class_free(io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class) {
    if(NULL == io_k8s_api_storage_v1_storage_class){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1_storage_class->allowed_topologies) {
        list_ForEach(listEntry, io_k8s_api_storage_v1_storage_class->allowed_topologies) {
            io_k8s_api_core_v1_topology_selector_term_free(listEntry->data);
        }
        list_free(io_k8s_api_storage_v1_storage_class->allowed_topologies);
        io_k8s_api_storage_v1_storage_class->allowed_topologies = NULL;
    }
    if (io_k8s_api_storage_v1_storage_class->api_version) {
        free(io_k8s_api_storage_v1_storage_class->api_version);
        io_k8s_api_storage_v1_storage_class->api_version = NULL;
    }
    if (io_k8s_api_storage_v1_storage_class->kind) {
        free(io_k8s_api_storage_v1_storage_class->kind);
        io_k8s_api_storage_v1_storage_class->kind = NULL;
    }
    if (io_k8s_api_storage_v1_storage_class->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_storage_v1_storage_class->metadata);
        io_k8s_api_storage_v1_storage_class->metadata = NULL;
    }
    if (io_k8s_api_storage_v1_storage_class->mount_options) {
        list_ForEach(listEntry, io_k8s_api_storage_v1_storage_class->mount_options) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_storage_v1_storage_class->mount_options);
        io_k8s_api_storage_v1_storage_class->mount_options = NULL;
    }
    if (io_k8s_api_storage_v1_storage_class->parameters) {
        list_ForEach(listEntry, io_k8s_api_storage_v1_storage_class->parameters) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_storage_v1_storage_class->parameters);
        io_k8s_api_storage_v1_storage_class->parameters = NULL;
    }
    if (io_k8s_api_storage_v1_storage_class->provisioner) {
        free(io_k8s_api_storage_v1_storage_class->provisioner);
        io_k8s_api_storage_v1_storage_class->provisioner = NULL;
    }
    if (io_k8s_api_storage_v1_storage_class->reclaim_policy) {
        free(io_k8s_api_storage_v1_storage_class->reclaim_policy);
        io_k8s_api_storage_v1_storage_class->reclaim_policy = NULL;
    }
    if (io_k8s_api_storage_v1_storage_class->volume_binding_mode) {
        free(io_k8s_api_storage_v1_storage_class->volume_binding_mode);
        io_k8s_api_storage_v1_storage_class->volume_binding_mode = NULL;
    }
    free(io_k8s_api_storage_v1_storage_class);
}

cJSON *io_k8s_api_storage_v1_storage_class_convertToJSON(io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1_storage_class->allow_volume_expansion
    if(io_k8s_api_storage_v1_storage_class->allow_volume_expansion) { 
    if(cJSON_AddBoolToObject(item, "allowVolumeExpansion", io_k8s_api_storage_v1_storage_class->allow_volume_expansion) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_storage_v1_storage_class->allowed_topologies
    if(io_k8s_api_storage_v1_storage_class->allowed_topologies) { 
    cJSON *allowed_topologies = cJSON_AddArrayToObject(item, "allowedTopologies");
    if(allowed_topologies == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *allowed_topologiesListEntry;
    if (io_k8s_api_storage_v1_storage_class->allowed_topologies) {
    list_ForEach(allowed_topologiesListEntry, io_k8s_api_storage_v1_storage_class->allowed_topologies) {
    cJSON *itemLocal = io_k8s_api_core_v1_topology_selector_term_convertToJSON(allowed_topologiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(allowed_topologies, itemLocal);
    }
    }
     } 


    // io_k8s_api_storage_v1_storage_class->api_version
    if(io_k8s_api_storage_v1_storage_class->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_storage_v1_storage_class->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1_storage_class->kind
    if(io_k8s_api_storage_v1_storage_class->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_storage_v1_storage_class->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1_storage_class->metadata
    if(io_k8s_api_storage_v1_storage_class->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_storage_v1_storage_class->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_storage_v1_storage_class->mount_options
    if(io_k8s_api_storage_v1_storage_class->mount_options) { 
    cJSON *mount_options = cJSON_AddArrayToObject(item, "mountOptions");
    if(mount_options == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *mount_optionsListEntry;
    list_ForEach(mount_optionsListEntry, io_k8s_api_storage_v1_storage_class->mount_options) {
    if(cJSON_AddStringToObject(mount_options, "", (char*)mount_optionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_storage_v1_storage_class->parameters
    if(io_k8s_api_storage_v1_storage_class->parameters) { 
    cJSON *parameters = cJSON_AddObjectToObject(item, "parameters");
    if(parameters == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = parameters;
    listEntry_t *parametersListEntry;
    if (io_k8s_api_storage_v1_storage_class->parameters) {
    list_ForEach(parametersListEntry, io_k8s_api_storage_v1_storage_class->parameters) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)parametersListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_storage_v1_storage_class->provisioner
    if (!io_k8s_api_storage_v1_storage_class->provisioner) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "provisioner", io_k8s_api_storage_v1_storage_class->provisioner) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_storage_v1_storage_class->reclaim_policy
    if(io_k8s_api_storage_v1_storage_class->reclaim_policy) { 
    if(cJSON_AddStringToObject(item, "reclaimPolicy", io_k8s_api_storage_v1_storage_class->reclaim_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_storage_v1_storage_class->volume_binding_mode
    if(io_k8s_api_storage_v1_storage_class->volume_binding_mode) { 
    if(cJSON_AddStringToObject(item, "volumeBindingMode", io_k8s_api_storage_v1_storage_class->volume_binding_mode) == NULL) {
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

io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class_parseFromJSON(cJSON *io_k8s_api_storage_v1_storage_classJSON){

    io_k8s_api_storage_v1_storage_class_t *io_k8s_api_storage_v1_storage_class_local_var = NULL;

    // io_k8s_api_storage_v1_storage_class->allow_volume_expansion
    cJSON *allow_volume_expansion = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "allowVolumeExpansion");
    if (allow_volume_expansion) { 
    if(!cJSON_IsBool(allow_volume_expansion))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_storage_v1_storage_class->allowed_topologies
    cJSON *allowed_topologies = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "allowedTopologies");
    list_t *allowed_topologiesList;
    if (allowed_topologies) { 
    cJSON *allowed_topologies_local_nonprimitive;
    if(!cJSON_IsArray(allowed_topologies)){
        goto end; //nonprimitive container
    }

    allowed_topologiesList = list_create();

    cJSON_ArrayForEach(allowed_topologies_local_nonprimitive,allowed_topologies )
    {
        if(!cJSON_IsObject(allowed_topologies_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_topology_selector_term_t *allowed_topologiesItem = io_k8s_api_core_v1_topology_selector_term_parseFromJSON(allowed_topologies_local_nonprimitive);

        list_addElement(allowed_topologiesList, allowed_topologiesItem);
    }
    }

    // io_k8s_api_storage_v1_storage_class->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1_storage_class->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1_storage_class->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_storage_v1_storage_class->mount_options
    cJSON *mount_options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "mountOptions");
    list_t *mount_optionsList;
    if (mount_options) { 
    cJSON *mount_options_local;
    if(!cJSON_IsArray(mount_options)) {
        goto end;//primitive container
    }
    mount_optionsList = list_create();

    cJSON_ArrayForEach(mount_options_local, mount_options)
    {
        if(!cJSON_IsString(mount_options_local))
        {
            goto end;
        }
        list_addElement(mount_optionsList , strdup(mount_options_local->valuestring));
    }
    }

    // io_k8s_api_storage_v1_storage_class->parameters
    cJSON *parameters = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "parameters");
    list_t *parametersList;
    if (parameters) { 
    cJSON *parameters_local_map;
    if(!cJSON_IsObject(parameters)) {
        goto end;//primitive map container
    }
    parametersList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(parameters_local_map, parameters)
    {
		cJSON *localMapObject = parameters_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(parametersList , localMapKeyPair);
    }
    }

    // io_k8s_api_storage_v1_storage_class->provisioner
    cJSON *provisioner = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "provisioner");
    if (!provisioner) {
        goto end;
    }

    
    if(!cJSON_IsString(provisioner))
    {
    goto end; //String
    }

    // io_k8s_api_storage_v1_storage_class->reclaim_policy
    cJSON *reclaim_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "reclaimPolicy");
    if (reclaim_policy) { 
    if(!cJSON_IsString(reclaim_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_storage_v1_storage_class->volume_binding_mode
    cJSON *volume_binding_mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1_storage_classJSON, "volumeBindingMode");
    if (volume_binding_mode) { 
    if(!cJSON_IsString(volume_binding_mode))
    {
    goto end; //String
    }
    }


    io_k8s_api_storage_v1_storage_class_local_var = io_k8s_api_storage_v1_storage_class_create (
        allow_volume_expansion ? allow_volume_expansion->valueint : 0,
        allowed_topologies ? allowed_topologiesList : NULL,
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        mount_options ? mount_optionsList : NULL,
        parameters ? parametersList : NULL,
        strdup(provisioner->valuestring),
        reclaim_policy ? strdup(reclaim_policy->valuestring) : NULL,
        volume_binding_mode ? strdup(volume_binding_mode->valuestring) : NULL
        );

    return io_k8s_api_storage_v1_storage_class_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
