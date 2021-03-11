#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_create(
    char *label_selector_path,
    char *spec_replicas_path,
    char *status_replicas_path
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_local_var->label_selector_path = label_selector_path;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_local_var->spec_replicas_path = spec_replicas_path;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_local_var->status_replicas_path = status_replicas_path;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->label_selector_path) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->label_selector_path);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->label_selector_path = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->spec_replicas_path) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->spec_replicas_path);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->spec_replicas_path = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->status_replicas_path) {
        free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->status_replicas_path);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->status_replicas_path = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->label_selector_path
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->label_selector_path) { 
    if(cJSON_AddStringToObject(item, "labelSelectorPath", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->label_selector_path) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->spec_replicas_path
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->spec_replicas_path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "specReplicasPath", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->spec_replicas_path) == NULL) {
    goto fail; //String
    }


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->status_replicas_path
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->status_replicas_path) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "statusReplicasPath", io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->status_replicas_path) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scaleJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->label_selector_path
    cJSON *label_selector_path = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scaleJSON, "labelSelectorPath");
    if (label_selector_path) { 
    if(!cJSON_IsString(label_selector_path))
    {
    goto end; //String
    }
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->spec_replicas_path
    cJSON *spec_replicas_path = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scaleJSON, "specReplicasPath");
    if (!spec_replicas_path) {
        goto end;
    }

    
    if(!cJSON_IsString(spec_replicas_path))
    {
    goto end; //String
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale->status_replicas_path
    cJSON *status_replicas_path = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scaleJSON, "statusReplicasPath");
    if (!status_replicas_path) {
        goto end;
    }

    
    if(!cJSON_IsString(status_replicas_path))
    {
    goto end; //String
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_create (
        label_selector_path ? strdup(label_selector_path->valuestring) : NULL,
        strdup(spec_replicas_path->valuestring),
        strdup(status_replicas_path->valuestring)
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1_custom_resource_subresource_scale_local_var;
end:
    return NULL;

}
