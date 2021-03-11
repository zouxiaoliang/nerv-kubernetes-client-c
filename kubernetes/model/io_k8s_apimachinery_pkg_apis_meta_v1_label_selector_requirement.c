#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement.h"



io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_create(
    char *key,
    char *_operator,
    list_t *values
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_local_var->key = key;
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_local_var->_operator = _operator;
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_local_var->values = values;

    return io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->key) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->key);
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->key = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->_operator) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->_operator);
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->_operator = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->values) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->values) {
            free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->values);
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->values = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->key
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->key) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "key", io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->key) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->_operator
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->_operator) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "operator", io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->_operator) == NULL) {
    goto fail; //String
    }


    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->values
    if(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->values) { 
    cJSON *values = cJSON_AddArrayToObject(item, "values");
    if(values == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *valuesListEntry;
    list_ForEach(valuesListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->values) {
    if(cJSON_AddStringToObject(values, "", (char*)valuesListEntry->data) == NULL)
    {
        goto fail;
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

io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirementJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirementJSON, "key");
    if (!key) {
        goto end;
    }

    
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->_operator
    cJSON *_operator = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirementJSON, "operator");
    if (!_operator) {
        goto end;
    }

    
    if(!cJSON_IsString(_operator))
    {
    goto end; //String
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement->values
    cJSON *values = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirementJSON, "values");
    list_t *valuesList;
    if (values) { 
    cJSON *values_local;
    if(!cJSON_IsArray(values)) {
        goto end;//primitive container
    }
    valuesList = list_create();

    cJSON_ArrayForEach(values_local, values)
    {
        if(!cJSON_IsString(values_local))
        {
            goto end;
        }
        list_addElement(valuesList , strdup(values_local->valuestring));
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_create (
        strdup(key->valuestring),
        strdup(_operator->valuestring),
        values ? valuesList : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_local_var;
end:
    return NULL;

}
