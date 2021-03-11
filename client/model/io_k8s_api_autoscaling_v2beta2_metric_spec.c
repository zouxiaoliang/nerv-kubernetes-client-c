#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_autoscaling_v2beta2_metric_spec.h"



io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec_create(
    io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t *container_resource,
    io_k8s_api_autoscaling_v2beta2_external_metric_source_t *external,
    io_k8s_api_autoscaling_v2beta2_object_metric_source_t *object,
    io_k8s_api_autoscaling_v2beta2_pods_metric_source_t *pods,
    io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *resource,
    char *type
    ) {
    io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec_local_var = malloc(sizeof(io_k8s_api_autoscaling_v2beta2_metric_spec_t));
    if (!io_k8s_api_autoscaling_v2beta2_metric_spec_local_var) {
        return NULL;
    }
    io_k8s_api_autoscaling_v2beta2_metric_spec_local_var->container_resource = container_resource;
    io_k8s_api_autoscaling_v2beta2_metric_spec_local_var->external = external;
    io_k8s_api_autoscaling_v2beta2_metric_spec_local_var->object = object;
    io_k8s_api_autoscaling_v2beta2_metric_spec_local_var->pods = pods;
    io_k8s_api_autoscaling_v2beta2_metric_spec_local_var->resource = resource;
    io_k8s_api_autoscaling_v2beta2_metric_spec_local_var->type = type;

    return io_k8s_api_autoscaling_v2beta2_metric_spec_local_var;
}


void io_k8s_api_autoscaling_v2beta2_metric_spec_free(io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec) {
    if(NULL == io_k8s_api_autoscaling_v2beta2_metric_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_autoscaling_v2beta2_metric_spec->container_resource) {
        io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_free(io_k8s_api_autoscaling_v2beta2_metric_spec->container_resource);
        io_k8s_api_autoscaling_v2beta2_metric_spec->container_resource = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_metric_spec->external) {
        io_k8s_api_autoscaling_v2beta2_external_metric_source_free(io_k8s_api_autoscaling_v2beta2_metric_spec->external);
        io_k8s_api_autoscaling_v2beta2_metric_spec->external = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_metric_spec->object) {
        io_k8s_api_autoscaling_v2beta2_object_metric_source_free(io_k8s_api_autoscaling_v2beta2_metric_spec->object);
        io_k8s_api_autoscaling_v2beta2_metric_spec->object = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_metric_spec->pods) {
        io_k8s_api_autoscaling_v2beta2_pods_metric_source_free(io_k8s_api_autoscaling_v2beta2_metric_spec->pods);
        io_k8s_api_autoscaling_v2beta2_metric_spec->pods = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_metric_spec->resource) {
        io_k8s_api_autoscaling_v2beta2_resource_metric_source_free(io_k8s_api_autoscaling_v2beta2_metric_spec->resource);
        io_k8s_api_autoscaling_v2beta2_metric_spec->resource = NULL;
    }
    if (io_k8s_api_autoscaling_v2beta2_metric_spec->type) {
        free(io_k8s_api_autoscaling_v2beta2_metric_spec->type);
        io_k8s_api_autoscaling_v2beta2_metric_spec->type = NULL;
    }
    free(io_k8s_api_autoscaling_v2beta2_metric_spec);
}

cJSON *io_k8s_api_autoscaling_v2beta2_metric_spec_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_autoscaling_v2beta2_metric_spec->container_resource
    if(io_k8s_api_autoscaling_v2beta2_metric_spec->container_resource) { 
    cJSON *container_resource_local_JSON = io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_spec->container_resource);
    if(container_resource_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "containerResource", container_resource_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_metric_spec->external
    if(io_k8s_api_autoscaling_v2beta2_metric_spec->external) { 
    cJSON *external_local_JSON = io_k8s_api_autoscaling_v2beta2_external_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_spec->external);
    if(external_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "external", external_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_metric_spec->object
    if(io_k8s_api_autoscaling_v2beta2_metric_spec->object) { 
    cJSON *object_local_JSON = io_k8s_api_autoscaling_v2beta2_object_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_spec->object);
    if(object_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "object", object_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_metric_spec->pods
    if(io_k8s_api_autoscaling_v2beta2_metric_spec->pods) { 
    cJSON *pods_local_JSON = io_k8s_api_autoscaling_v2beta2_pods_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_spec->pods);
    if(pods_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pods", pods_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_metric_spec->resource
    if(io_k8s_api_autoscaling_v2beta2_metric_spec->resource) { 
    cJSON *resource_local_JSON = io_k8s_api_autoscaling_v2beta2_resource_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_spec->resource);
    if(resource_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resource", resource_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_autoscaling_v2beta2_metric_spec->type
    if (!io_k8s_api_autoscaling_v2beta2_metric_spec->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", io_k8s_api_autoscaling_v2beta2_metric_spec->type) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_metric_specJSON){

    io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec_local_var = NULL;

    // io_k8s_api_autoscaling_v2beta2_metric_spec->container_resource
    cJSON *container_resource = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_specJSON, "containerResource");
    io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t *container_resource_local_nonprim = NULL;
    if (container_resource) { 
    container_resource_local_nonprim = io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_parseFromJSON(container_resource); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta2_metric_spec->external
    cJSON *external = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_specJSON, "external");
    io_k8s_api_autoscaling_v2beta2_external_metric_source_t *external_local_nonprim = NULL;
    if (external) { 
    external_local_nonprim = io_k8s_api_autoscaling_v2beta2_external_metric_source_parseFromJSON(external); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta2_metric_spec->object
    cJSON *object = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_specJSON, "object");
    io_k8s_api_autoscaling_v2beta2_object_metric_source_t *object_local_nonprim = NULL;
    if (object) { 
    object_local_nonprim = io_k8s_api_autoscaling_v2beta2_object_metric_source_parseFromJSON(object); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta2_metric_spec->pods
    cJSON *pods = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_specJSON, "pods");
    io_k8s_api_autoscaling_v2beta2_pods_metric_source_t *pods_local_nonprim = NULL;
    if (pods) { 
    pods_local_nonprim = io_k8s_api_autoscaling_v2beta2_pods_metric_source_parseFromJSON(pods); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta2_metric_spec->resource
    cJSON *resource = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_specJSON, "resource");
    io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *resource_local_nonprim = NULL;
    if (resource) { 
    resource_local_nonprim = io_k8s_api_autoscaling_v2beta2_resource_metric_source_parseFromJSON(resource); //nonprimitive
    }

    // io_k8s_api_autoscaling_v2beta2_metric_spec->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(io_k8s_api_autoscaling_v2beta2_metric_specJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }


    io_k8s_api_autoscaling_v2beta2_metric_spec_local_var = io_k8s_api_autoscaling_v2beta2_metric_spec_create (
        container_resource ? container_resource_local_nonprim : NULL,
        external ? external_local_nonprim : NULL,
        object ? object_local_nonprim : NULL,
        pods ? pods_local_nonprim : NULL,
        resource ? resource_local_nonprim : NULL,
        strdup(type->valuestring)
        );

    return io_k8s_api_autoscaling_v2beta2_metric_spec_local_var;
end:
    if (container_resource_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_free(container_resource_local_nonprim);
        container_resource_local_nonprim = NULL;
    }
    if (external_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_external_metric_source_free(external_local_nonprim);
        external_local_nonprim = NULL;
    }
    if (object_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_object_metric_source_free(object_local_nonprim);
        object_local_nonprim = NULL;
    }
    if (pods_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_pods_metric_source_free(pods_local_nonprim);
        pods_local_nonprim = NULL;
    }
    if (resource_local_nonprim) {
        io_k8s_api_autoscaling_v2beta2_resource_metric_source_free(resource_local_nonprim);
        resource_local_nonprim = NULL;
    }
    return NULL;

}
