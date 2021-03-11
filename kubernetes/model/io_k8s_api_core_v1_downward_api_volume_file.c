#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_downward_api_volume_file.h"



io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file_create(
    io_k8s_api_core_v1_object_field_selector_t *field_ref,
    int mode,
    char *path,
    io_k8s_api_core_v1_resource_field_selector_t *resource_field_ref
    ) {
    io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file_local_var = malloc(sizeof(io_k8s_api_core_v1_downward_api_volume_file_t));
    if (!io_k8s_api_core_v1_downward_api_volume_file_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_downward_api_volume_file_local_var->field_ref = field_ref;
    io_k8s_api_core_v1_downward_api_volume_file_local_var->mode = mode;
    io_k8s_api_core_v1_downward_api_volume_file_local_var->path = path;
    io_k8s_api_core_v1_downward_api_volume_file_local_var->resource_field_ref = resource_field_ref;

    return io_k8s_api_core_v1_downward_api_volume_file_local_var;
}


void io_k8s_api_core_v1_downward_api_volume_file_free(io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file) {
    if(NULL == io_k8s_api_core_v1_downward_api_volume_file){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_downward_api_volume_file->field_ref) {
        io_k8s_api_core_v1_object_field_selector_free(io_k8s_api_core_v1_downward_api_volume_file->field_ref);
        io_k8s_api_core_v1_downward_api_volume_file->field_ref = NULL;
    }
    if (io_k8s_api_core_v1_downward_api_volume_file->path) {
        free(io_k8s_api_core_v1_downward_api_volume_file->path);
        io_k8s_api_core_v1_downward_api_volume_file->path = NULL;
    }
    if (io_k8s_api_core_v1_downward_api_volume_file->resource_field_ref) {
        io_k8s_api_core_v1_resource_field_selector_free(io_k8s_api_core_v1_downward_api_volume_file->resource_field_ref);
        io_k8s_api_core_v1_downward_api_volume_file->resource_field_ref = NULL;
    }
    free(io_k8s_api_core_v1_downward_api_volume_file);
}

cJSON *io_k8s_api_core_v1_downward_api_volume_file_convertToJSON(io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_downward_api_volume_file->field_ref
    if(io_k8s_api_core_v1_downward_api_volume_file->field_ref) { 
    cJSON *field_ref_local_JSON = io_k8s_api_core_v1_object_field_selector_convertToJSON(io_k8s_api_core_v1_downward_api_volume_file->field_ref);
    if(field_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fieldRef", field_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_downward_api_volume_file->mode
    if(io_k8s_api_core_v1_downward_api_volume_file->mode) { 
    if(cJSON_AddNumberToObject(item, "mode", io_k8s_api_core_v1_downward_api_volume_file->mode) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_downward_api_volume_file->path
    if (!io_k8s_api_core_v1_downward_api_volume_file->path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "path", io_k8s_api_core_v1_downward_api_volume_file->path) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_downward_api_volume_file->resource_field_ref
    if(io_k8s_api_core_v1_downward_api_volume_file->resource_field_ref) { 
    cJSON *resource_field_ref_local_JSON = io_k8s_api_core_v1_resource_field_selector_convertToJSON(io_k8s_api_core_v1_downward_api_volume_file->resource_field_ref);
    if(resource_field_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resourceFieldRef", resource_field_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file_parseFromJSON(cJSON *io_k8s_api_core_v1_downward_api_volume_fileJSON){

    io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file_local_var = NULL;

    // io_k8s_api_core_v1_downward_api_volume_file->field_ref
    cJSON *field_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_downward_api_volume_fileJSON, "fieldRef");
    io_k8s_api_core_v1_object_field_selector_t *field_ref_local_nonprim = NULL;
    if (field_ref) { 
    field_ref_local_nonprim = io_k8s_api_core_v1_object_field_selector_parseFromJSON(field_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_downward_api_volume_file->mode
    cJSON *mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_downward_api_volume_fileJSON, "mode");
    if (mode) { 
    if(!cJSON_IsNumber(mode))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_downward_api_volume_file->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_downward_api_volume_fileJSON, "path");
    if (!path) {
        goto end;
    }

    
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_downward_api_volume_file->resource_field_ref
    cJSON *resource_field_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_downward_api_volume_fileJSON, "resourceFieldRef");
    io_k8s_api_core_v1_resource_field_selector_t *resource_field_ref_local_nonprim = NULL;
    if (resource_field_ref) { 
    resource_field_ref_local_nonprim = io_k8s_api_core_v1_resource_field_selector_parseFromJSON(resource_field_ref); //nonprimitive
    }


    io_k8s_api_core_v1_downward_api_volume_file_local_var = io_k8s_api_core_v1_downward_api_volume_file_create (
        field_ref ? field_ref_local_nonprim : NULL,
        mode ? mode->valuedouble : 0,
        strdup(path->valuestring),
        resource_field_ref ? resource_field_ref_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_downward_api_volume_file_local_var;
end:
    if (field_ref_local_nonprim) {
        io_k8s_api_core_v1_object_field_selector_free(field_ref_local_nonprim);
        field_ref_local_nonprim = NULL;
    }
    if (resource_field_ref_local_nonprim) {
        io_k8s_api_core_v1_resource_field_selector_free(resource_field_ref_local_nonprim);
        resource_field_ref_local_nonprim = NULL;
    }
    return NULL;

}
