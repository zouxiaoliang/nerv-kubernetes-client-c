#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_node_v1alpha1_overhead.h"



io_k8s_api_node_v1alpha1_overhead_t *io_k8s_api_node_v1alpha1_overhead_create(
    list_t* pod_fixed
    ) {
    io_k8s_api_node_v1alpha1_overhead_t *io_k8s_api_node_v1alpha1_overhead_local_var = malloc(sizeof(io_k8s_api_node_v1alpha1_overhead_t));
    if (!io_k8s_api_node_v1alpha1_overhead_local_var) {
        return NULL;
    }
    io_k8s_api_node_v1alpha1_overhead_local_var->pod_fixed = pod_fixed;

    return io_k8s_api_node_v1alpha1_overhead_local_var;
}


void io_k8s_api_node_v1alpha1_overhead_free(io_k8s_api_node_v1alpha1_overhead_t *io_k8s_api_node_v1alpha1_overhead) {
    if(NULL == io_k8s_api_node_v1alpha1_overhead){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_node_v1alpha1_overhead->pod_fixed) {
        list_ForEach(listEntry, io_k8s_api_node_v1alpha1_overhead->pod_fixed) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_node_v1alpha1_overhead->pod_fixed);
        io_k8s_api_node_v1alpha1_overhead->pod_fixed = NULL;
    }
    free(io_k8s_api_node_v1alpha1_overhead);
}

cJSON *io_k8s_api_node_v1alpha1_overhead_convertToJSON(io_k8s_api_node_v1alpha1_overhead_t *io_k8s_api_node_v1alpha1_overhead) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_node_v1alpha1_overhead->pod_fixed
    if(io_k8s_api_node_v1alpha1_overhead->pod_fixed) { 
    cJSON *pod_fixed = cJSON_AddObjectToObject(item, "podFixed");
    if(pod_fixed == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = pod_fixed;
    listEntry_t *pod_fixedListEntry;
    if (io_k8s_api_node_v1alpha1_overhead->pod_fixed) {
    list_ForEach(pod_fixedListEntry, io_k8s_api_node_v1alpha1_overhead->pod_fixed) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)pod_fixedListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
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

io_k8s_api_node_v1alpha1_overhead_t *io_k8s_api_node_v1alpha1_overhead_parseFromJSON(cJSON *io_k8s_api_node_v1alpha1_overheadJSON){

    io_k8s_api_node_v1alpha1_overhead_t *io_k8s_api_node_v1alpha1_overhead_local_var = NULL;

    // io_k8s_api_node_v1alpha1_overhead->pod_fixed
    cJSON *pod_fixed = cJSON_GetObjectItemCaseSensitive(io_k8s_api_node_v1alpha1_overheadJSON, "podFixed");
    list_t *pod_fixedList;
    if (pod_fixed) { 
    cJSON *pod_fixed_local_map;
    if(!cJSON_IsObject(pod_fixed)) {
        goto end;//primitive map container
    }
    pod_fixedList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(pod_fixed_local_map, pod_fixed)
    {
		cJSON *localMapObject = pod_fixed_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(pod_fixedList , localMapKeyPair);
    }
    }


    io_k8s_api_node_v1alpha1_overhead_local_var = io_k8s_api_node_v1alpha1_overhead_create (
        pod_fixed ? pod_fixedList : NULL
        );

    return io_k8s_api_node_v1alpha1_overhead_local_var;
end:
    return NULL;

}
