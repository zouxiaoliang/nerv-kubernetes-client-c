#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_metric_identifier.h"



io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier_create(
    char *name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector
    ) {
    io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_metric_identifier_t));
    if (!io_k8s_api_autoscaling_v2beta2_metric_identifier_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_metric_identifier_local_var->name = name;
    io_k8s_api_autoscaling_v2beta2_metric_identifier_local_var->selector = selector;

    return io_k8s_api_autoscaling_v2beta2_metric_identifier_local_var;
}


void io_k8s_api_autoscaling_v2beta2_metric_identifier_free(io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_metric_identifier){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_metric_identifier->name) {
        free(io_k8s_api_autoscaling_v2beta2_metric_identifier->name);
        io_k8s_api_autoscaling_v2beta2_metric_identifier->name = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_metric_identifier->selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_autoscaling_v2beta2_metric_identifier->selector);
        io_k8s_api_autoscaling_v2beta2_metric_identifier->selector = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_metric_identifier);
}

cJSON *io_k8s_api_autoscaling_v2beta2_metric_identifier_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_metric_identifier->name
    if (!io_k8s_api_autoscaling_v2beta2_metric_identifier->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_autoscaling_v2beta2_metric_identifier->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_autoscaling_v2beta2_metric_identifier->selector
    if(io_k8s_api_autoscaling_v2beta2_metric_identifier->selector) { 
    cJSON *selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_identifier->selector);
    if(selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selector", selector_local_JSON);
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

io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_metric_identifierJSON){

    io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_metric_identifier->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_identifierJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_autoscaling_v2beta2_metric_identifier->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_identifierJSON, "selector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector_local_nonprim = NULL;
    if (selector) { 
    selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(selector); //nonprimitive
    }


    io_k8s_api_autoscaling_v2beta2_metric_identifier_local_var = io_k8s_api_autoscaling_v2beta2_metric_identifier_create (
        strdup(name->valuestring),
        selector ? selector_local_nonprim : NULL
        );

    return io_k8s_api_autoscaling_v2beta2_metric_identifier_local_var;
end:
    if (selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(selector_local_nonprim);
        selector_local_nonprim = NULL;
    }
    return NULL;

}
