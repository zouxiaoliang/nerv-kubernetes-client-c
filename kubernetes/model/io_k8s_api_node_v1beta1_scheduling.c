#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_node_v1beta1_scheduling.h"



io_k8s_api_node_v1beta1_scheduling_t *io_k8s_api_node_v1beta1_scheduling_create(
    list_t* node_selector,
    list_t *tolerations
    ) {
    io_k8s_api_node_v1beta1_scheduling_t *io_k8s_api_node_v1beta1_scheduling_local_var = malloc(sizeof(io_k8s_api_node_v1beta1_scheduling_t));
    if (!io_k8s_api_node_v1beta1_scheduling_local_var) {
        return NULL;
    }
    io_k8s_api_node_v1beta1_scheduling_local_var->node_selector = node_selector;
    io_k8s_api_node_v1beta1_scheduling_local_var->tolerations = tolerations;

    return io_k8s_api_node_v1beta1_scheduling_local_var;
}


void io_k8s_api_node_v1beta1_scheduling_free(io_k8s_api_node_v1beta1_scheduling_t *io_k8s_api_node_v1beta1_scheduling) {
    if(NULL == io_k8s_api_node_v1beta1_scheduling){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_node_v1beta1_scheduling->node_selector) {
        list_ForEach(listEntry, io_k8s_api_node_v1beta1_scheduling->node_selector) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_node_v1beta1_scheduling->node_selector);
        io_k8s_api_node_v1beta1_scheduling->node_selector = NULL;
    }
    if (io_k8s_api_node_v1beta1_scheduling->tolerations) {
        list_ForEach(listEntry, io_k8s_api_node_v1beta1_scheduling->tolerations) {
            io_k8s_api_core_v1_toleration_free(listEntry->data);
        }
        list_free(io_k8s_api_node_v1beta1_scheduling->tolerations);
        io_k8s_api_node_v1beta1_scheduling->tolerations = NULL;
    }
    free(io_k8s_api_node_v1beta1_scheduling);
}

cJSON *io_k8s_api_node_v1beta1_scheduling_convertToJSON(io_k8s_api_node_v1beta1_scheduling_t *io_k8s_api_node_v1beta1_scheduling) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_node_v1beta1_scheduling->node_selector
    if(io_k8s_api_node_v1beta1_scheduling->node_selector) { 
    cJSON *node_selector = cJSON_AddObjectToObject(item, "nodeSelector");
    if(node_selector == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = node_selector;
    listEntry_t *node_selectorListEntry;
    if (io_k8s_api_node_v1beta1_scheduling->node_selector) {
    list_ForEach(node_selectorListEntry, io_k8s_api_node_v1beta1_scheduling->node_selector) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)node_selectorListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_node_v1beta1_scheduling->tolerations
    if(io_k8s_api_node_v1beta1_scheduling->tolerations) { 
    cJSON *tolerations = cJSON_AddArrayToObject(item, "tolerations");
    if(tolerations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tolerationsListEntry;
    if (io_k8s_api_node_v1beta1_scheduling->tolerations) {
    list_ForEach(tolerationsListEntry, io_k8s_api_node_v1beta1_scheduling->tolerations) {
    cJSON *itemLocal = io_k8s_api_core_v1_toleration_convertToJSON(tolerationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tolerations, itemLocal);
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

io_k8s_api_node_v1beta1_scheduling_t *io_k8s_api_node_v1beta1_scheduling_parseFromJSON(cJSON *io_k8s_api_node_v1beta1_schedulingJSON){

    io_k8s_api_node_v1beta1_scheduling_t *io_k8s_api_node_v1beta1_scheduling_local_var = NULL;

    // io_k8s_api_node_v1beta1_scheduling->node_selector
    cJSON *node_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1beta1_schedulingJSON, "nodeSelector");
    list_t *node_selectorList;
    if (node_selector) { 
    cJSON *node_selector_local_map;
    if(!cJSON_IsObject(node_selector)) {
        goto end;//primitive map container
    }
    node_selectorList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(node_selector_local_map, node_selector)
    {
		cJSON *localMapObject = node_selector_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(node_selectorList , localMapKeyPair);
    }
    }

    // io_k8s_api_node_v1beta1_scheduling->tolerations
    cJSON *tolerations = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1beta1_schedulingJSON, "tolerations");
    list_t *tolerationsList;
    if (tolerations) { 
    cJSON *tolerations_local_nonprimitive;
    if(!cJSON_IsArray(tolerations)){
        goto end; //nonprimitive container
    }

    tolerationsList = list_create();

    cJSON_ArrayForEach(tolerations_local_nonprimitive,tolerations )
    {
        if(!cJSON_IsObject(tolerations_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_toleration_t *tolerationsItem = io_k8s_api_core_v1_toleration_parseFromJSON(tolerations_local_nonprimitive);

        list_addElement(tolerationsList, tolerationsItem);
    }
    }


    io_k8s_api_node_v1beta1_scheduling_local_var = io_k8s_api_node_v1beta1_scheduling_create (
        node_selector ? node_selectorList : NULL,
        tolerations ? tolerationsList : NULL
        );

    return io_k8s_api_node_v1beta1_scheduling_local_var;
end:
    return NULL;

}
