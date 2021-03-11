#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_secret_key_selector.h"



io_k8s_api_core_v1_secret_key_selector_t *io_k8s_api_core_v1_secret_key_selector_create(
    char *key,
    char *name,
    int optional
    ) {
    io_k8s_api_core_v1_secret_key_selector_t *io_k8s_api_core_v1_secret_key_selector_local_var = malloc(sizeof(io_k8s_api_core_v1_secret_key_selector_t));
    if (!io_k8s_api_core_v1_secret_key_selector_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_secret_key_selector_local_var->key = key;
    io_k8s_api_core_v1_secret_key_selector_local_var->name = name;
    io_k8s_api_core_v1_secret_key_selector_local_var->optional = optional;

    return io_k8s_api_core_v1_secret_key_selector_local_var;
}


void io_k8s_api_core_v1_secret_key_selector_free(io_k8s_api_core_v1_secret_key_selector_t *io_k8s_api_core_v1_secret_key_selector) {
    if(NULL == io_k8s_api_core_v1_secret_key_selector){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_secret_key_selector->key) {
        free(io_k8s_api_core_v1_secret_key_selector->key);
        io_k8s_api_core_v1_secret_key_selector->key = NULL;
    }
    if (io_k8s_api_core_v1_secret_key_selector->name) {
        free(io_k8s_api_core_v1_secret_key_selector->name);
        io_k8s_api_core_v1_secret_key_selector->name = NULL;
    }
    free(io_k8s_api_core_v1_secret_key_selector);
}

cJSON *io_k8s_api_core_v1_secret_key_selector_convertToJSON(io_k8s_api_core_v1_secret_key_selector_t *io_k8s_api_core_v1_secret_key_selector) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_secret_key_selector->key
    if (!io_k8s_api_core_v1_secret_key_selector->key) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "key", io_k8s_api_core_v1_secret_key_selector->key) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_secret_key_selector->name
    if(io_k8s_api_core_v1_secret_key_selector->name) { 
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_secret_key_selector->name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_secret_key_selector->optional
    if(io_k8s_api_core_v1_secret_key_selector->optional) { 
    if(cJSON_AddBoolToObject(item, "optional", io_k8s_api_core_v1_secret_key_selector->optional) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_secret_key_selector_t *io_k8s_api_core_v1_secret_key_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_secret_key_selectorJSON){

    io_k8s_api_core_v1_secret_key_selector_t *io_k8s_api_core_v1_secret_key_selector_local_var = NULL;

    // io_k8s_api_core_v1_secret_key_selector->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secret_key_selectorJSON, "key");
    if (!key) {
        goto end;
    }

    
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_secret_key_selector->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secret_key_selectorJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_secret_key_selector->optional
    cJSON *optional = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_secret_key_selectorJSON, "optional");
    if (optional) { 
    if(!cJSON_IsBool(optional))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_core_v1_secret_key_selector_local_var = io_k8s_api_core_v1_secret_key_selector_create (
        strdup(key->valuestring),
        name ? strdup(name->valuestring) : NULL,
        optional ? optional->valueint : 0
        );

    return io_k8s_api_core_v1_secret_key_selector_local_var;
end:
    return NULL;

}
