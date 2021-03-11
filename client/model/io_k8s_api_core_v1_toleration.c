#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_toleration.h"



io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration_create(
    char *effect,
    char *key,
    char *_operator,
    long toleration_seconds,
    char *value
    ) {
    io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration_local_var = malloc(sizeof(io_k8s_api_core_v1_toleration_t));
    if (!io_k8s_api_core_v1_toleration_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_toleration_local_var->effect = effect;
    io_k8s_api_core_v1_toleration_local_var->key = key;
    io_k8s_api_core_v1_toleration_local_var->_operator = _operator;
    io_k8s_api_core_v1_toleration_local_var->toleration_seconds = toleration_seconds;
    io_k8s_api_core_v1_toleration_local_var->value = value;

    return io_k8s_api_core_v1_toleration_local_var;
}


void io_k8s_api_core_v1_toleration_free(io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration) {
    if(NULL == io_k8s_api_core_v1_toleration){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_toleration->effect) {
        free(io_k8s_api_core_v1_toleration->effect);
        io_k8s_api_core_v1_toleration->effect = NULL;
    }
    if (io_k8s_api_core_v1_toleration->key) {
        free(io_k8s_api_core_v1_toleration->key);
        io_k8s_api_core_v1_toleration->key = NULL;
    }
    if (io_k8s_api_core_v1_toleration->_operator) {
        free(io_k8s_api_core_v1_toleration->_operator);
        io_k8s_api_core_v1_toleration->_operator = NULL;
    }
    if (io_k8s_api_core_v1_toleration->value) {
        free(io_k8s_api_core_v1_toleration->value);
        io_k8s_api_core_v1_toleration->value = NULL;
    }
    free(io_k8s_api_core_v1_toleration);
}

cJSON *io_k8s_api_core_v1_toleration_convertToJSON(io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_toleration->effect
    if(io_k8s_api_core_v1_toleration->effect) { 
    if(cJSON_AddStringToObject(item, "effect", io_k8s_api_core_v1_toleration->effect) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_toleration->key
    if(io_k8s_api_core_v1_toleration->key) { 
    if(cJSON_AddStringToObject(item, "key", io_k8s_api_core_v1_toleration->key) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_toleration->_operator
    if(io_k8s_api_core_v1_toleration->_operator) { 
    if(cJSON_AddStringToObject(item, "operator", io_k8s_api_core_v1_toleration->_operator) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_toleration->toleration_seconds
    if(io_k8s_api_core_v1_toleration->toleration_seconds) { 
    if(cJSON_AddNumberToObject(item, "tolerationSeconds", io_k8s_api_core_v1_toleration->toleration_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_toleration->value
    if(io_k8s_api_core_v1_toleration->value) { 
    if(cJSON_AddStringToObject(item, "value", io_k8s_api_core_v1_toleration->value) == NULL) {
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

io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration_parseFromJSON(cJSON *io_k8s_api_core_v1_tolerationJSON){

    io_k8s_api_core_v1_toleration_t *io_k8s_api_core_v1_toleration_local_var = NULL;

    // io_k8s_api_core_v1_toleration->effect
    cJSON *effect = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_tolerationJSON, "effect");
    if (effect) { 
    if(!cJSON_IsString(effect))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_toleration->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_tolerationJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_toleration->_operator
    cJSON *_operator = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_tolerationJSON, "operator");
    if (_operator) { 
    if(!cJSON_IsString(_operator))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_toleration->toleration_seconds
    cJSON *toleration_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_tolerationJSON, "tolerationSeconds");
    if (toleration_seconds) { 
    if(!cJSON_IsNumber(toleration_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_toleration->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_tolerationJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    io_k8s_api_core_v1_toleration_local_var = io_k8s_api_core_v1_toleration_create (
        effect ? strdup(effect->valuestring) : NULL,
        key ? strdup(key->valuestring) : NULL,
        _operator ? strdup(_operator->valuestring) : NULL,
        toleration_seconds ? toleration_seconds->valuedouble : 0,
        value ? strdup(value->valuestring) : NULL
        );

    return io_k8s_api_core_v1_toleration_local_var;
end:
    return NULL;

}
