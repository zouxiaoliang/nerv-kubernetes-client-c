#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_env_var_source.h"



io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source_create(
    io_k8s_api_core_v1_config_map_key_selector_t *config_map_key_ref,
    io_k8s_api_core_v1_object_field_selector_t *field_ref,
    io_k8s_api_core_v1_resource_field_selector_t *resource_field_ref,
    io_k8s_api_core_v1_secret_key_selector_t *secret_key_ref
    ) {
    io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source_local_var = malloc(sizeof(io_k8s_api_core_v1_env_var_source_t));
    if (!io_k8s_api_core_v1_env_var_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_env_var_source_local_var->config_map_key_ref = config_map_key_ref;
    io_k8s_api_core_v1_env_var_source_local_var->field_ref = field_ref;
    io_k8s_api_core_v1_env_var_source_local_var->resource_field_ref = resource_field_ref;
    io_k8s_api_core_v1_env_var_source_local_var->secret_key_ref = secret_key_ref;

    return io_k8s_api_core_v1_env_var_source_local_var;
}


void io_k8s_api_core_v1_env_var_source_free(io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source) {
    if(NULL == io_k8s_api_core_v1_env_var_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_env_var_source->config_map_key_ref) {
        io_k8s_api_core_v1_config_map_key_selector_free(io_k8s_api_core_v1_env_var_source->config_map_key_ref);
        io_k8s_api_core_v1_env_var_source->config_map_key_ref = NULL;
    }
    if (io_k8s_api_core_v1_env_var_source->field_ref) {
        io_k8s_api_core_v1_object_field_selector_free(io_k8s_api_core_v1_env_var_source->field_ref);
        io_k8s_api_core_v1_env_var_source->field_ref = NULL;
    }
    if (io_k8s_api_core_v1_env_var_source->resource_field_ref) {
        io_k8s_api_core_v1_resource_field_selector_free(io_k8s_api_core_v1_env_var_source->resource_field_ref);
        io_k8s_api_core_v1_env_var_source->resource_field_ref = NULL;
    }
    if (io_k8s_api_core_v1_env_var_source->secret_key_ref) {
        io_k8s_api_core_v1_secret_key_selector_free(io_k8s_api_core_v1_env_var_source->secret_key_ref);
        io_k8s_api_core_v1_env_var_source->secret_key_ref = NULL;
    }
    free(io_k8s_api_core_v1_env_var_source);
}

cJSON *io_k8s_api_core_v1_env_var_source_convertToJSON(io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_env_var_source->config_map_key_ref
    if(io_k8s_api_core_v1_env_var_source->config_map_key_ref) { 
    cJSON *config_map_key_ref_local_JSON = io_k8s_api_core_v1_config_map_key_selector_convertToJSON(io_k8s_api_core_v1_env_var_source->config_map_key_ref);
    if(config_map_key_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "configMapKeyRef", config_map_key_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_env_var_source->field_ref
    if(io_k8s_api_core_v1_env_var_source->field_ref) { 
    cJSON *field_ref_local_JSON = io_k8s_api_core_v1_object_field_selector_convertToJSON(io_k8s_api_core_v1_env_var_source->field_ref);
    if(field_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fieldRef", field_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_env_var_source->resource_field_ref
    if(io_k8s_api_core_v1_env_var_source->resource_field_ref) { 
    cJSON *resource_field_ref_local_JSON = io_k8s_api_core_v1_resource_field_selector_convertToJSON(io_k8s_api_core_v1_env_var_source->resource_field_ref);
    if(resource_field_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resourceFieldRef", resource_field_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_env_var_source->secret_key_ref
    if(io_k8s_api_core_v1_env_var_source->secret_key_ref) { 
    cJSON *secret_key_ref_local_JSON = io_k8s_api_core_v1_secret_key_selector_convertToJSON(io_k8s_api_core_v1_env_var_source->secret_key_ref);
    if(secret_key_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secretKeyRef", secret_key_ref_local_JSON);
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

io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source_parseFromJSON(cJSON *io_k8s_api_core_v1_env_var_sourceJSON){

    io_k8s_api_core_v1_env_var_source_t *io_k8s_api_core_v1_env_var_source_local_var = NULL;

    // io_k8s_api_core_v1_env_var_source->config_map_key_ref
    cJSON *config_map_key_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_var_sourceJSON, "configMapKeyRef");
    io_k8s_api_core_v1_config_map_key_selector_t *config_map_key_ref_local_nonprim = NULL;
    if (config_map_key_ref) { 
    config_map_key_ref_local_nonprim = io_k8s_api_core_v1_config_map_key_selector_parseFromJSON(config_map_key_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_env_var_source->field_ref
    cJSON *field_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_var_sourceJSON, "fieldRef");
    io_k8s_api_core_v1_object_field_selector_t *field_ref_local_nonprim = NULL;
    if (field_ref) { 
    field_ref_local_nonprim = io_k8s_api_core_v1_object_field_selector_parseFromJSON(field_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_env_var_source->resource_field_ref
    cJSON *resource_field_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_var_sourceJSON, "resourceFieldRef");
    io_k8s_api_core_v1_resource_field_selector_t *resource_field_ref_local_nonprim = NULL;
    if (resource_field_ref) { 
    resource_field_ref_local_nonprim = io_k8s_api_core_v1_resource_field_selector_parseFromJSON(resource_field_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_env_var_source->secret_key_ref
    cJSON *secret_key_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_var_sourceJSON, "secretKeyRef");
    io_k8s_api_core_v1_secret_key_selector_t *secret_key_ref_local_nonprim = NULL;
    if (secret_key_ref) { 
    secret_key_ref_local_nonprim = io_k8s_api_core_v1_secret_key_selector_parseFromJSON(secret_key_ref); //nonprimitive
    }


    io_k8s_api_core_v1_env_var_source_local_var = io_k8s_api_core_v1_env_var_source_create (
        config_map_key_ref ? config_map_key_ref_local_nonprim : NULL,
        field_ref ? field_ref_local_nonprim : NULL,
        resource_field_ref ? resource_field_ref_local_nonprim : NULL,
        secret_key_ref ? secret_key_ref_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_env_var_source_local_var;
end:
    if (config_map_key_ref_local_nonprim) {
        io_k8s_api_core_v1_config_map_key_selector_free(config_map_key_ref_local_nonprim);
        config_map_key_ref_local_nonprim = NULL;
    }
    if (field_ref_local_nonprim) {
        io_k8s_api_core_v1_object_field_selector_free(field_ref_local_nonprim);
        field_ref_local_nonprim = NULL;
    }
    if (resource_field_ref_local_nonprim) {
        io_k8s_api_core_v1_resource_field_selector_free(resource_field_ref_local_nonprim);
        resource_field_ref_local_nonprim = NULL;
    }
    if (secret_key_ref_local_nonprim) {
        io_k8s_api_core_v1_secret_key_selector_free(secret_key_ref_local_nonprim);
        secret_key_ref_local_nonprim = NULL;
    }
    return NULL;

}
