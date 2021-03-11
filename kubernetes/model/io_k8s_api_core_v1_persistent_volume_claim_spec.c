#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_persistent_volume_claim_spec.h"



io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec_create(
    list_t *access_modes,
    io_k8s_api_core_v1_typed_local_object_reference_t *data_source,
    io_k8s_api_core_v1_resource_requirements_t *resources,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    char *storage_class_name,
    char *volume_mode,
    char *volume_name
    ) {
    io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_persistent_volume_claim_spec_t));
    if (!io_k8s_api_core_v1_persistent_volume_claim_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_persistent_volume_claim_spec_local_var->access_modes = access_modes;
    io_k8s_api_core_v1_persistent_volume_claim_spec_local_var->data_source = data_source;
    io_k8s_api_core_v1_persistent_volume_claim_spec_local_var->resources = resources;
    io_k8s_api_core_v1_persistent_volume_claim_spec_local_var->selector = selector;
    io_k8s_api_core_v1_persistent_volume_claim_spec_local_var->storage_class_name = storage_class_name;
    io_k8s_api_core_v1_persistent_volume_claim_spec_local_var->volume_mode = volume_mode;
    io_k8s_api_core_v1_persistent_volume_claim_spec_local_var->volume_name = volume_name;

    return io_k8s_api_core_v1_persistent_volume_claim_spec_local_var;
}


void io_k8s_api_core_v1_persistent_volume_claim_spec_free(io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec) {
    if(NULL == io_k8s_api_core_v1_persistent_volume_claim_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_persistent_volume_claim_spec->access_modes) {
        list_ForEach(listEntry, io_k8s_api_core_v1_persistent_volume_claim_spec->access_modes) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_persistent_volume_claim_spec->access_modes);
        io_k8s_api_core_v1_persistent_volume_claim_spec->access_modes = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_spec->data_source) {
        io_k8s_api_core_v1_typed_local_object_reference_free(io_k8s_api_core_v1_persistent_volume_claim_spec->data_source);
        io_k8s_api_core_v1_persistent_volume_claim_spec->data_source = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_spec->resources) {
        io_k8s_api_core_v1_resource_requirements_free(io_k8s_api_core_v1_persistent_volume_claim_spec->resources);
        io_k8s_api_core_v1_persistent_volume_claim_spec->resources = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_spec->selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_core_v1_persistent_volume_claim_spec->selector);
        io_k8s_api_core_v1_persistent_volume_claim_spec->selector = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_spec->storage_class_name) {
        free(io_k8s_api_core_v1_persistent_volume_claim_spec->storage_class_name);
        io_k8s_api_core_v1_persistent_volume_claim_spec->storage_class_name = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_spec->volume_mode) {
        free(io_k8s_api_core_v1_persistent_volume_claim_spec->volume_mode);
        io_k8s_api_core_v1_persistent_volume_claim_spec->volume_mode = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_spec->volume_name) {
        free(io_k8s_api_core_v1_persistent_volume_claim_spec->volume_name);
        io_k8s_api_core_v1_persistent_volume_claim_spec->volume_name = NULL;
    }
    free(io_k8s_api_core_v1_persistent_volume_claim_spec);
}

cJSON *io_k8s_api_core_v1_persistent_volume_claim_spec_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_persistent_volume_claim_spec->access_modes
    if(io_k8s_api_core_v1_persistent_volume_claim_spec->access_modes) { 
    cJSON *access_modes = cJSON_AddArrayToObject(item, "accessModes");
    if(access_modes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *access_modesListEntry;
    list_ForEach(access_modesListEntry, io_k8s_api_core_v1_persistent_volume_claim_spec->access_modes) {
    if(cJSON_AddStringToObject(access_modes, "", (char*)access_modesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_spec->data_source
    if(io_k8s_api_core_v1_persistent_volume_claim_spec->data_source) { 
    cJSON *data_source_local_JSON = io_k8s_api_core_v1_typed_local_object_reference_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_spec->data_source);
    if(data_source_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dataSource", data_source_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_spec->resources
    if(io_k8s_api_core_v1_persistent_volume_claim_spec->resources) { 
    cJSON *resources_local_JSON = io_k8s_api_core_v1_resource_requirements_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_spec->resources);
    if(resources_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resources", resources_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_spec->selector
    if(io_k8s_api_core_v1_persistent_volume_claim_spec->selector) { 
    cJSON *selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_spec->selector);
    if(selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selector", selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_spec->storage_class_name
    if(io_k8s_api_core_v1_persistent_volume_claim_spec->storage_class_name) { 
    if(cJSON_AddStringToObject(item, "storageClassName", io_k8s_api_core_v1_persistent_volume_claim_spec->storage_class_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_spec->volume_mode
    if(io_k8s_api_core_v1_persistent_volume_claim_spec->volume_mode) { 
    if(cJSON_AddStringToObject(item, "volumeMode", io_k8s_api_core_v1_persistent_volume_claim_spec->volume_mode) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_spec->volume_name
    if(io_k8s_api_core_v1_persistent_volume_claim_spec->volume_name) { 
    if(cJSON_AddStringToObject(item, "volumeName", io_k8s_api_core_v1_persistent_volume_claim_spec->volume_name) == NULL) {
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

io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_claim_specJSON){

    io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec_local_var = NULL;

    // io_k8s_api_core_v1_persistent_volume_claim_spec->access_modes
    cJSON *access_modes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_specJSON, "accessModes");
    list_t *access_modesList;
    if (access_modes) { 
    cJSON *access_modes_local;
    if(!cJSON_IsArray(access_modes)) {
        goto end;//primitive container
    }
    access_modesList = list_create();

    cJSON_ArrayForEach(access_modes_local, access_modes)
    {
        if(!cJSON_IsString(access_modes_local))
        {
            goto end;
        }
        list_addElement(access_modesList , strdup(access_modes_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_persistent_volume_claim_spec->data_source
    cJSON *data_source = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_specJSON, "dataSource");
    io_k8s_api_core_v1_typed_local_object_reference_t *data_source_local_nonprim = NULL;
    if (data_source) { 
    data_source_local_nonprim = io_k8s_api_core_v1_typed_local_object_reference_parseFromJSON(data_source); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_claim_spec->resources
    cJSON *resources = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_specJSON, "resources");
    io_k8s_api_core_v1_resource_requirements_t *resources_local_nonprim = NULL;
    if (resources) { 
    resources_local_nonprim = io_k8s_api_core_v1_resource_requirements_parseFromJSON(resources); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_claim_spec->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_specJSON, "selector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector_local_nonprim = NULL;
    if (selector) { 
    selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(selector); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_claim_spec->storage_class_name
    cJSON *storage_class_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_specJSON, "storageClassName");
    if (storage_class_name) { 
    if(!cJSON_IsString(storage_class_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_persistent_volume_claim_spec->volume_mode
    cJSON *volume_mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_specJSON, "volumeMode");
    if (volume_mode) { 
    if(!cJSON_IsString(volume_mode))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_persistent_volume_claim_spec->volume_name
    cJSON *volume_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_specJSON, "volumeName");
    if (volume_name) { 
    if(!cJSON_IsString(volume_name))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_persistent_volume_claim_spec_local_var = io_k8s_api_core_v1_persistent_volume_claim_spec_create (
        access_modes ? access_modesList : NULL,
        data_source ? data_source_local_nonprim : NULL,
        resources ? resources_local_nonprim : NULL,
        selector ? selector_local_nonprim : NULL,
        storage_class_name ? strdup(storage_class_name->valuestring) : NULL,
        volume_mode ? strdup(volume_mode->valuestring) : NULL,
        volume_name ? strdup(volume_name->valuestring) : NULL
        );

    return io_k8s_api_core_v1_persistent_volume_claim_spec_local_var;
end:
    if (data_source_local_nonprim) {
        io_k8s_api_core_v1_typed_local_object_reference_free(data_source_local_nonprim);
        data_source_local_nonprim = NULL;
    }
    if (resources_local_nonprim) {
        io_k8s_api_core_v1_resource_requirements_free(resources_local_nonprim);
        resources_local_nonprim = NULL;
    }
    if (selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(selector_local_nonprim);
        selector_local_nonprim = NULL;
    }
    return NULL;

}
