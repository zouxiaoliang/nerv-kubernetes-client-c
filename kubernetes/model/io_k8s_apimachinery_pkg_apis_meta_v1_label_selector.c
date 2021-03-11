#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_create(
    list_t *match_expressions,
    list_t* match_labels
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_local_var->match_expressions = match_expressions;
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_local_var->match_labels = match_labels;

    return io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_label_selector){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_expressions) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_expressions) {
            io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_expressions);
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_expressions = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_labels) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_labels) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_labels);
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_labels = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_expressions
    if(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_expressions) { 
    cJSON *match_expressions = cJSON_AddArrayToObject(item, "matchExpressions");
    if(match_expressions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *match_expressionsListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_expressions) {
    list_ForEach(match_expressionsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_expressions) {
    cJSON *itemLocal = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_convertToJSON(match_expressionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(match_expressions, itemLocal);
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_labels
    if(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_labels) { 
    cJSON *match_labels = cJSON_AddObjectToObject(item, "matchLabels");
    if(match_labels == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = match_labels;
    listEntry_t *match_labelsListEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_labels) {
    list_ForEach(match_labelsListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_labels) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)match_labelsListEntry->data;
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

io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_label_selectorJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_expressions
    cJSON *match_expressions = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_label_selectorJSON, "matchExpressions");
    list_t *match_expressionsList;
    if (match_expressions) { 
    cJSON *match_expressions_local_nonprimitive;
    if(!cJSON_IsArray(match_expressions)){
        goto end; //nonprimitive container
    }

    match_expressionsList = list_create();

    cJSON_ArrayForEach(match_expressions_local_nonprimitive,match_expressions )
    {
        if(!cJSON_IsObject(match_expressions_local_nonprimitive)){
            goto end;
        }
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *match_expressionsItem = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_parseFromJSON(match_expressions_local_nonprimitive);

        list_addElement(match_expressionsList, match_expressionsItem);
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_label_selector->match_labels
    cJSON *match_labels = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_label_selectorJSON, "matchLabels");
    list_t *match_labelsList;
    if (match_labels) { 
    cJSON *match_labels_local_map;
    if(!cJSON_IsObject(match_labels)) {
        goto end;//primitive map container
    }
    match_labelsList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(match_labels_local_map, match_labels)
    {
		cJSON *localMapObject = match_labels_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(match_labelsList , localMapKeyPair);
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_create (
        match_expressions ? match_expressionsList : NULL,
        match_labels ? match_labelsList : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_local_var;
end:
    return NULL;

}
