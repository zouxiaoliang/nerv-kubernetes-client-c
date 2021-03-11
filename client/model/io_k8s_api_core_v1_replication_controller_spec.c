#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_replication_controller_spec.h"



io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec_create(
    int min_ready_seconds,
    int replicas,
    list_t* selector,
    io_k8s_api_core_v1_pod_template_spec_t *_template
    ) {
    io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_replication_controller_spec_t));
    if (!io_k8s_api_core_v1_replication_controller_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_replication_controller_spec_local_var->min_ready_seconds = min_ready_seconds;
    io_k8s_api_core_v1_replication_controller_spec_local_var->replicas = replicas;
    io_k8s_api_core_v1_replication_controller_spec_local_var->selector = selector;
    io_k8s_api_core_v1_replication_controller_spec_local_var->_template = _template;

    return io_k8s_api_core_v1_replication_controller_spec_local_var;
}


void io_k8s_api_core_v1_replication_controller_spec_free(io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec) {
    if(NULL == io_k8s_api_core_v1_replication_controller_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_replication_controller_spec->selector) {
        list_ForEach(listEntry, io_k8s_api_core_v1_replication_controller_spec->selector) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_replication_controller_spec->selector);
        io_k8s_api_core_v1_replication_controller_spec->selector = NULL;
    }
    if (io_k8s_api_core_v1_replication_controller_spec->_template) {
        io_k8s_api_core_v1_pod_template_spec_free(io_k8s_api_core_v1_replication_controller_spec->_template);
        io_k8s_api_core_v1_replication_controller_spec->_template = NULL;
    }
    free(io_k8s_api_core_v1_replication_controller_spec);
}

cJSON *io_k8s_api_core_v1_replication_controller_spec_convertToJSON(io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_replication_controller_spec->min_ready_seconds
    if(io_k8s_api_core_v1_replication_controller_spec->min_ready_seconds) { 
    if(cJSON_AddNumberToObject(item, "minReadySeconds", io_k8s_api_core_v1_replication_controller_spec->min_ready_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_replication_controller_spec->replicas
    if(io_k8s_api_core_v1_replication_controller_spec->replicas) { 
    if(cJSON_AddNumberToObject(item, "replicas", io_k8s_api_core_v1_replication_controller_spec->replicas) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_core_v1_replication_controller_spec->selector
    if(io_k8s_api_core_v1_replication_controller_spec->selector) { 
    cJSON *selector = cJSON_AddObjectToObject(item, "selector");
    if(selector == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = selector;
    listEntry_t *selectorListEntry;
    if (io_k8s_api_core_v1_replication_controller_spec->selector) {
    list_ForEach(selectorListEntry, io_k8s_api_core_v1_replication_controller_spec->selector) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)selectorListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_replication_controller_spec->_template
    if(io_k8s_api_core_v1_replication_controller_spec->_template) { 
    cJSON *_template_local_JSON = io_k8s_api_core_v1_pod_template_spec_convertToJSON(io_k8s_api_core_v1_replication_controller_spec->_template);
    if(_template_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "template", _template_local_JSON);
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

io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_replication_controller_specJSON){

    io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec_local_var = NULL;

    // io_k8s_api_core_v1_replication_controller_spec->min_ready_seconds
    cJSON *min_ready_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_specJSON, "minReadySeconds");
    if (min_ready_seconds) { 
    if(!cJSON_IsNumber(min_ready_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_replication_controller_spec->replicas
    cJSON *replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_specJSON, "replicas");
    if (replicas) { 
    if(!cJSON_IsNumber(replicas))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_core_v1_replication_controller_spec->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_specJSON, "selector");
    list_t *selectorList;
    if (selector) { 
    cJSON *selector_local_map;
    if(!cJSON_IsObject(selector)) {
        goto end;//primitive map container
    }
    selectorList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(selector_local_map, selector)
    {
		cJSON *localMapObject = selector_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(selectorList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_replication_controller_spec->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_replication_controller_specJSON, "template");
    io_k8s_api_core_v1_pod_template_spec_t *_template_local_nonprim = NULL;
    if (_template) { 
    _template_local_nonprim = io_k8s_api_core_v1_pod_template_spec_parseFromJSON(_template); //nonprimitive
    }


    io_k8s_api_core_v1_replication_controller_spec_local_var = io_k8s_api_core_v1_replication_controller_spec_create (
        min_ready_seconds ? min_ready_seconds->valuedouble : 0,
        replicas ? replicas->valuedouble : 0,
        selector ? selectorList : NULL,
        _template ? _template_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_replication_controller_spec_local_var;
end:
    if (_template_local_nonprim) {
        io_k8s_api_core_v1_pod_template_spec_free(_template_local_nonprim);
        _template_local_nonprim = NULL;
    }
    return NULL;

}
