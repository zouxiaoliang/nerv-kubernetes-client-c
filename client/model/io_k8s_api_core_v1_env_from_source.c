#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_env_from_source.h"



io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source_create(
    io_k8s_api_core_v1_config_map_env_source_t *config_map_ref,
    char *prefix,
    io_k8s_api_core_v1_secret_env_source_t *secret_ref
    ) {
    io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source_local_var = malloc(sizeof(io_k8s_api_core_v1_env_from_source_t));
    if (!io_k8s_api_core_v1_env_from_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_env_from_source_local_var->config_map_ref = config_map_ref;
    io_k8s_api_core_v1_env_from_source_local_var->prefix = prefix;
    io_k8s_api_core_v1_env_from_source_local_var->secret_ref = secret_ref;

    return io_k8s_api_core_v1_env_from_source_local_var;
}


void io_k8s_api_core_v1_env_from_source_free(io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source) {
    if(NULL == io_k8s_api_core_v1_env_from_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_env_from_source->config_map_ref) {
        io_k8s_api_core_v1_config_map_env_source_free(io_k8s_api_core_v1_env_from_source->config_map_ref);
        io_k8s_api_core_v1_env_from_source->config_map_ref = NULL;
    }
    if (io_k8s_api_core_v1_env_from_source->prefix) {
        free(io_k8s_api_core_v1_env_from_source->prefix);
        io_k8s_api_core_v1_env_from_source->prefix = NULL;
    }
    if (io_k8s_api_core_v1_env_from_source->secret_ref) {
        io_k8s_api_core_v1_secret_env_source_free(io_k8s_api_core_v1_env_from_source->secret_ref);
        io_k8s_api_core_v1_env_from_source->secret_ref = NULL;
    }
    free(io_k8s_api_core_v1_env_from_source);
}

cJSON *io_k8s_api_core_v1_env_from_source_convertToJSON(io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_env_from_source->config_map_ref
    if(io_k8s_api_core_v1_env_from_source->config_map_ref) { 
    cJSON *config_map_ref_local_JSON = io_k8s_api_core_v1_config_map_env_source_convertToJSON(io_k8s_api_core_v1_env_from_source->config_map_ref);
    if(config_map_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "configMapRef", config_map_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_env_from_source->prefix
    if(io_k8s_api_core_v1_env_from_source->prefix) { 
    if(cJSON_AddStringToObject(item, "prefix", io_k8s_api_core_v1_env_from_source->prefix) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_env_from_source->secret_ref
    if(io_k8s_api_core_v1_env_from_source->secret_ref) { 
    cJSON *secret_ref_local_JSON = io_k8s_api_core_v1_secret_env_source_convertToJSON(io_k8s_api_core_v1_env_from_source->secret_ref);
    if(secret_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secretRef", secret_ref_local_JSON);
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

io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source_parseFromJSON(cJSON *io_k8s_api_core_v1_env_from_sourceJSON){

    io_k8s_api_core_v1_env_from_source_t *io_k8s_api_core_v1_env_from_source_local_var = NULL;

    // io_k8s_api_core_v1_env_from_source->config_map_ref
    cJSON *config_map_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_from_sourceJSON, "configMapRef");
    io_k8s_api_core_v1_config_map_env_source_t *config_map_ref_local_nonprim = NULL;
    if (config_map_ref) { 
    config_map_ref_local_nonprim = io_k8s_api_core_v1_config_map_env_source_parseFromJSON(config_map_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_env_from_source->prefix
    cJSON *prefix = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_from_sourceJSON, "prefix");
    if (prefix) { 
    if(!cJSON_IsString(prefix))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_env_from_source->secret_ref
    cJSON *secret_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_env_from_sourceJSON, "secretRef");
    io_k8s_api_core_v1_secret_env_source_t *secret_ref_local_nonprim = NULL;
    if (secret_ref) { 
    secret_ref_local_nonprim = io_k8s_api_core_v1_secret_env_source_parseFromJSON(secret_ref); //nonprimitive
    }


    io_k8s_api_core_v1_env_from_source_local_var = io_k8s_api_core_v1_env_from_source_create (
        config_map_ref ? config_map_ref_local_nonprim : NULL,
        prefix ? strdup(prefix->valuestring) : NULL,
        secret_ref ? secret_ref_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_env_from_source_local_var;
end:
    if (config_map_ref_local_nonprim) {
        io_k8s_api_core_v1_config_map_env_source_free(config_map_ref_local_nonprim);
        config_map_ref_local_nonprim = NULL;
    }
    if (secret_ref_local_nonprim) {
        io_k8s_api_core_v1_secret_env_source_free(secret_ref_local_nonprim);
        secret_ref_local_nonprim = NULL;
    }
    return NULL;

}
