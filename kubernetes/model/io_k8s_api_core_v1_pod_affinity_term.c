#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_affinity_term.h"



io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term_create(
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *label_selector,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector,
    list_t *namespaces,
    char *topology_key
    ) {
    io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_affinity_term_t));
    if (!io_k8s_api_core_v1_pod_affinity_term_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_affinity_term_local_var->label_selector = label_selector;
    io_k8s_api_core_v1_pod_affinity_term_local_var->namespace_selector = namespace_selector;
    io_k8s_api_core_v1_pod_affinity_term_local_var->namespaces = namespaces;
    io_k8s_api_core_v1_pod_affinity_term_local_var->topology_key = topology_key;

    return io_k8s_api_core_v1_pod_affinity_term_local_var;
}


void io_k8s_api_core_v1_pod_affinity_term_free(io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term) {
    if(NULL == io_k8s_api_core_v1_pod_affinity_term){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_affinity_term->label_selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_core_v1_pod_affinity_term->label_selector);
        io_k8s_api_core_v1_pod_affinity_term->label_selector = NULL;
    }
    if (io_k8s_api_core_v1_pod_affinity_term->namespace_selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_core_v1_pod_affinity_term->namespace_selector);
        io_k8s_api_core_v1_pod_affinity_term->namespace_selector = NULL;
    }
    if (io_k8s_api_core_v1_pod_affinity_term->namespaces) {
        list_ForEach(listEntry, io_k8s_api_core_v1_pod_affinity_term->namespaces) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_pod_affinity_term->namespaces);
        io_k8s_api_core_v1_pod_affinity_term->namespaces = NULL;
    }
    if (io_k8s_api_core_v1_pod_affinity_term->topology_key) {
        free(io_k8s_api_core_v1_pod_affinity_term->topology_key);
        io_k8s_api_core_v1_pod_affinity_term->topology_key = NULL;
    }
    free(io_k8s_api_core_v1_pod_affinity_term);
}

cJSON *io_k8s_api_core_v1_pod_affinity_term_convertToJSON(io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_affinity_term->label_selector
    if(io_k8s_api_core_v1_pod_affinity_term->label_selector) { 
    cJSON *label_selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_core_v1_pod_affinity_term->label_selector);
    if(label_selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "labelSelector", label_selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_pod_affinity_term->namespace_selector
    if(io_k8s_api_core_v1_pod_affinity_term->namespace_selector) { 
    cJSON *namespace_selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_core_v1_pod_affinity_term->namespace_selector);
    if(namespace_selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "namespaceSelector", namespace_selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_pod_affinity_term->namespaces
    if(io_k8s_api_core_v1_pod_affinity_term->namespaces) { 
    cJSON *namespaces = cJSON_AddArrayToObject(item, "namespaces");
    if(namespaces == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *namespacesListEntry;
    list_ForEach(namespacesListEntry, io_k8s_api_core_v1_pod_affinity_term->namespaces) {
    if(cJSON_AddStringToObject(namespaces, "", (char*)namespacesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_pod_affinity_term->topology_key
    if (!io_k8s_api_core_v1_pod_affinity_term->topology_key) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "topologyKey", io_k8s_api_core_v1_pod_affinity_term->topology_key) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_affinity_termJSON){

    io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term_local_var = NULL;

    // io_k8s_api_core_v1_pod_affinity_term->label_selector
    cJSON *label_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_affinity_termJSON, "labelSelector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *label_selector_local_nonprim = NULL;
    if (label_selector) { 
    label_selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(label_selector); //nonprimitive
    }

    // io_k8s_api_core_v1_pod_affinity_term->namespace_selector
    cJSON *namespace_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_affinity_termJSON, "namespaceSelector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector_local_nonprim = NULL;
    if (namespace_selector) { 
    namespace_selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(namespace_selector); //nonprimitive
    }

    // io_k8s_api_core_v1_pod_affinity_term->namespaces
    cJSON *namespaces = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_affinity_termJSON, "namespaces");
    list_t *namespacesList;
    if (namespaces) { 
    cJSON *namespaces_local;
    if(!cJSON_IsArray(namespaces)) {
        goto end;//primitive container
    }
    namespacesList = list_create();

    cJSON_ArrayForEach(namespaces_local, namespaces)
    {
        if(!cJSON_IsString(namespaces_local))
        {
            goto end;
        }
        list_addElement(namespacesList , strdup(namespaces_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_pod_affinity_term->topology_key
    cJSON *topology_key = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_affinity_termJSON, "topologyKey");
    if (!topology_key) {
        goto end;
    }

    
    if(!cJSON_IsString(topology_key))
    {
    goto end; //String
    }


    io_k8s_api_core_v1_pod_affinity_term_local_var = io_k8s_api_core_v1_pod_affinity_term_create (
        label_selector ? label_selector_local_nonprim : NULL,
        namespace_selector ? namespace_selector_local_nonprim : NULL,
        namespaces ? namespacesList : NULL,
        strdup(topology_key->valuestring)
        );

    return io_k8s_api_core_v1_pod_affinity_term_local_var;
end:
    if (label_selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(label_selector_local_nonprim);
        label_selector_local_nonprim = NULL;
    }
    if (namespace_selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(namespace_selector_local_nonprim);
        namespace_selector_local_nonprim = NULL;
    }
    return NULL;

}
