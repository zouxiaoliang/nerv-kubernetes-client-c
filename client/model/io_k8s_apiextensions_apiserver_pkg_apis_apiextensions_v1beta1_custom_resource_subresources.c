#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources.h"



io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_create(
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t *scale,
    object_t *status
    ) {
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_local_var = malloc(sizeof(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_t));
    if (!io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_local_var) {
        return NULL;
    }
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_local_var->scale = scale;
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_local_var->status = status;

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_local_var;
}


void io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources) {
    if(NULL == io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->scale) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->scale);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->scale = NULL;
    }
    if (io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->status) {
        object_free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->status);
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->status = NULL;
    }
    free(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources);
}

cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->scale
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->scale) { 
    cJSON *scale_local_JSON = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->scale);
    if(scale_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scale", scale_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->status
    if(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->status) { 
    cJSON *status_object = object_convertToJSON(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->status);
    if(status_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_object);
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

io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_parseFromJSON(cJSON *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresourcesJSON){

    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_t *io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_local_var = NULL;

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->scale
    cJSON *scale = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresourcesJSON, "scale");
    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_t *scale_local_nonprim = NULL;
    if (scale) { 
    scale_local_nonprim = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_parseFromJSON(scale); //nonprimitive
    }

    // io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresourcesJSON, "status");
    object_t *status_local_object = NULL;
    if (status) { 
    status_local_object = object_parseFromJSON(status); //object
    }


    io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_local_var = io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_create (
        scale ? scale_local_nonprim : NULL,
        status ? status_local_object : NULL
        );

    return io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresources_local_var;
end:
    if (scale_local_nonprim) {
        io_k8s_apiextensions_apiserver_pkg_apis_apiextensions_v1beta1_custom_resource_subresource_scale_free(scale_local_nonprim);
        scale_local_nonprim = NULL;
    }
    return NULL;

}
