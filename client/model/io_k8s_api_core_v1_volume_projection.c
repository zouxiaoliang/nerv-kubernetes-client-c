#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_volume_projection.h"



io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection_create(
    io_k8s_api_core_v1_config_map_projection_t *config_map,
    io_k8s_api_core_v1_downward_api_projection_t *downward_api,
    io_k8s_api_core_v1_secret_projection_t *secret,
    io_k8s_api_core_v1_service_account_token_projection_t *service_account_token
    ) {
    io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection_local_var = malloc(sizeof(io_k8s_api_core_v1_volume_projection_t));
    if (!io_k8s_api_core_v1_volume_projection_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_volume_projection_local_var->config_map = config_map;
    io_k8s_api_core_v1_volume_projection_local_var->downward_api = downward_api;
    io_k8s_api_core_v1_volume_projection_local_var->secret = secret;
    io_k8s_api_core_v1_volume_projection_local_var->service_account_token = service_account_token;

    return io_k8s_api_core_v1_volume_projection_local_var;
}


void io_k8s_api_core_v1_volume_projection_free(io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection) {
    if(NULL == io_k8s_api_core_v1_volume_projection){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_volume_projection->config_map) {
        io_k8s_api_core_v1_config_map_projection_free(io_k8s_api_core_v1_volume_projection->config_map);
        io_k8s_api_core_v1_volume_projection->config_map = NULL;
    }
    if (io_k8s_api_core_v1_volume_projection->downward_api) {
        io_k8s_api_core_v1_downward_api_projection_free(io_k8s_api_core_v1_volume_projection->downward_api);
        io_k8s_api_core_v1_volume_projection->downward_api = NULL;
    }
    if (io_k8s_api_core_v1_volume_projection->secret) {
        io_k8s_api_core_v1_secret_projection_free(io_k8s_api_core_v1_volume_projection->secret);
        io_k8s_api_core_v1_volume_projection->secret = NULL;
    }
    if (io_k8s_api_core_v1_volume_projection->service_account_token) {
        io_k8s_api_core_v1_service_account_token_projection_free(io_k8s_api_core_v1_volume_projection->service_account_token);
        io_k8s_api_core_v1_volume_projection->service_account_token = NULL;
    }
    free(io_k8s_api_core_v1_volume_projection);
}

cJSON *io_k8s_api_core_v1_volume_projection_convertToJSON(io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_volume_projection->config_map
    if(io_k8s_api_core_v1_volume_projection->config_map) { 
    cJSON *config_map_local_JSON = io_k8s_api_core_v1_config_map_projection_convertToJSON(io_k8s_api_core_v1_volume_projection->config_map);
    if(config_map_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "configMap", config_map_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume_projection->downward_api
    if(io_k8s_api_core_v1_volume_projection->downward_api) { 
    cJSON *downward_api_local_JSON = io_k8s_api_core_v1_downward_api_projection_convertToJSON(io_k8s_api_core_v1_volume_projection->downward_api);
    if(downward_api_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "downwardAPI", downward_api_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume_projection->secret
    if(io_k8s_api_core_v1_volume_projection->secret) { 
    cJSON *secret_local_JSON = io_k8s_api_core_v1_secret_projection_convertToJSON(io_k8s_api_core_v1_volume_projection->secret);
    if(secret_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secret", secret_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume_projection->service_account_token
    if(io_k8s_api_core_v1_volume_projection->service_account_token) { 
    cJSON *service_account_token_local_JSON = io_k8s_api_core_v1_service_account_token_projection_convertToJSON(io_k8s_api_core_v1_volume_projection->service_account_token);
    if(service_account_token_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceAccountToken", service_account_token_local_JSON);
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

io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection_parseFromJSON(cJSON *io_k8s_api_core_v1_volume_projectionJSON){

    io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection_local_var = NULL;

    // io_k8s_api_core_v1_volume_projection->config_map
    cJSON *config_map = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_projectionJSON, "configMap");
    io_k8s_api_core_v1_config_map_projection_t *config_map_local_nonprim = NULL;
    if (config_map) { 
    config_map_local_nonprim = io_k8s_api_core_v1_config_map_projection_parseFromJSON(config_map); //nonprimitive
    }

    // io_k8s_api_core_v1_volume_projection->downward_api
    cJSON *downward_api = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_projectionJSON, "downwardAPI");
    io_k8s_api_core_v1_downward_api_projection_t *downward_api_local_nonprim = NULL;
    if (downward_api) { 
    downward_api_local_nonprim = io_k8s_api_core_v1_downward_api_projection_parseFromJSON(downward_api); //nonprimitive
    }

    // io_k8s_api_core_v1_volume_projection->secret
    cJSON *secret = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_projectionJSON, "secret");
    io_k8s_api_core_v1_secret_projection_t *secret_local_nonprim = NULL;
    if (secret) { 
    secret_local_nonprim = io_k8s_api_core_v1_secret_projection_parseFromJSON(secret); //nonprimitive
    }

    // io_k8s_api_core_v1_volume_projection->service_account_token
    cJSON *service_account_token = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volume_projectionJSON, "serviceAccountToken");
    io_k8s_api_core_v1_service_account_token_projection_t *service_account_token_local_nonprim = NULL;
    if (service_account_token) { 
    service_account_token_local_nonprim = io_k8s_api_core_v1_service_account_token_projection_parseFromJSON(service_account_token); //nonprimitive
    }


    io_k8s_api_core_v1_volume_projection_local_var = io_k8s_api_core_v1_volume_projection_create (
        config_map ? config_map_local_nonprim : NULL,
        downward_api ? downward_api_local_nonprim : NULL,
        secret ? secret_local_nonprim : NULL,
        service_account_token ? service_account_token_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_volume_projection_local_var;
end:
    if (config_map_local_nonprim) {
        io_k8s_api_core_v1_config_map_projection_free(config_map_local_nonprim);
        config_map_local_nonprim = NULL;
    }
    if (downward_api_local_nonprim) {
        io_k8s_api_core_v1_downward_api_projection_free(downward_api_local_nonprim);
        downward_api_local_nonprim = NULL;
    }
    if (secret_local_nonprim) {
        io_k8s_api_core_v1_secret_projection_free(secret_local_nonprim);
        secret_local_nonprim = NULL;
    }
    if (service_account_token_local_nonprim) {
        io_k8s_api_core_v1_service_account_token_projection_free(service_account_token_local_nonprim);
        service_account_token_local_nonprim = NULL;
    }
    return NULL;

}
