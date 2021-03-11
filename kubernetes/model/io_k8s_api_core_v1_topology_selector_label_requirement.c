#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_topology_selector_label_requirement.h"



io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement_create(
    char *key,
    list_t *values
    ) {
    io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement_local_var = malloc(sizeof(io_k8s_api_core_v1_topology_selector_label_requirement_t));
    if (!io_k8s_api_core_v1_topology_selector_label_requirement_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_topology_selector_label_requirement_local_var->key = key;
    io_k8s_api_core_v1_topology_selector_label_requirement_local_var->values = values;

    return io_k8s_api_core_v1_topology_selector_label_requirement_local_var;
}


void io_k8s_api_core_v1_topology_selector_label_requirement_free(io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement) {
    if(NULL == io_k8s_api_core_v1_topology_selector_label_requirement){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_topology_selector_label_requirement->key) {
        free(io_k8s_api_core_v1_topology_selector_label_requirement->key);
        io_k8s_api_core_v1_topology_selector_label_requirement->key = NULL;
    }
    if (io_k8s_api_core_v1_topology_selector_label_requirement->values) {
        list_ForEach(listEntry, io_k8s_api_core_v1_topology_selector_label_requirement->values) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_topology_selector_label_requirement->values);
        io_k8s_api_core_v1_topology_selector_label_requirement->values = NULL;
    }
    free(io_k8s_api_core_v1_topology_selector_label_requirement);
}

cJSON *io_k8s_api_core_v1_topology_selector_label_requirement_convertToJSON(io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_topology_selector_label_requirement->key
    if (!io_k8s_api_core_v1_topology_selector_label_requirement->key) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "key", io_k8s_api_core_v1_topology_selector_label_requirement->key) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_topology_selector_label_requirement->values
    if (!io_k8s_api_core_v1_topology_selector_label_requirement->values) {
        goto fail;
    }
    
    cJSON *values = cJSON_AddArrayToObject(item, "values");
    if(values == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *valuesListEntry;
    list_ForEach(valuesListEntry, io_k8s_api_core_v1_topology_selector_label_requirement->values) {
    if(cJSON_AddStringToObject(values, "", (char*)valuesListEntry->data) == NULL)
    {
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

io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement_parseFromJSON(cJSON *io_k8s_api_core_v1_topology_selector_label_requirementJSON){

    io_k8s_api_core_v1_topology_selector_label_requirement_t *io_k8s_api_core_v1_topology_selector_label_requirement_local_var = NULL;

    // io_k8s_api_core_v1_topology_selector_label_requirement->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_topology_selector_label_requirementJSON, "key");
    if (!key) {
        goto end;
    }

    
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_topology_selector_label_requirement->values
    cJSON *values = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_topology_selector_label_requirementJSON, "values");
    if (!values) {
        goto end;
    }

    list_t *valuesList;
    
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


    io_k8s_api_core_v1_topology_selector_label_requirement_local_var = io_k8s_api_core_v1_topology_selector_label_requirement_create (
        strdup(key->valuestring),
        valuesList
        );

    return io_k8s_api_core_v1_topology_selector_label_requirement_local_var;
end:
    return NULL;

}
