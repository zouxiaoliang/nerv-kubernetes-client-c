#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1beta1_ingress_class.h"



io_k8s_api_networking_v1beta1_ingress_class_t *io_k8s_api_networking_v1beta1_ingress_class_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_networking_v1beta1_ingress_class_spec_t *spec
    ) {
    io_k8s_api_networking_v1beta1_ingress_class_t *io_k8s_api_networking_v1beta1_ingress_class_local_var = malloc(sizeof(io_k8s_api_networking_v1beta1_ingress_class_t));
    if (!io_k8s_api_networking_v1beta1_ingress_class_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1beta1_ingress_class_local_var->api_version = api_version;
    io_k8s_api_networking_v1beta1_ingress_class_local_var->kind = kind;
    io_k8s_api_networking_v1beta1_ingress_class_local_var->metadata = metadata;
    io_k8s_api_networking_v1beta1_ingress_class_local_var->spec = spec;

    return io_k8s_api_networking_v1beta1_ingress_class_local_var;
}


void io_k8s_api_networking_v1beta1_ingress_class_free(io_k8s_api_networking_v1beta1_ingress_class_t *io_k8s_api_networking_v1beta1_ingress_class) {
    if(NULL == io_k8s_api_networking_v1beta1_ingress_class){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1beta1_ingress_class->api_version) {
        free(io_k8s_api_networking_v1beta1_ingress_class->api_version);
        io_k8s_api_networking_v1beta1_ingress_class->api_version = NULL;
    }
    if (io_k8s_api_networking_v1beta1_ingress_class->kind) {
        free(io_k8s_api_networking_v1beta1_ingress_class->kind);
        io_k8s_api_networking_v1beta1_ingress_class->kind = NULL;
    }
    if (io_k8s_api_networking_v1beta1_ingress_class->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_networking_v1beta1_ingress_class->metadata);
        io_k8s_api_networking_v1beta1_ingress_class->metadata = NULL;
    }
    if (io_k8s_api_networking_v1beta1_ingress_class->spec) {
        io_k8s_api_networking_v1beta1_ingress_class_spec_free(io_k8s_api_networking_v1beta1_ingress_class->spec);
        io_k8s_api_networking_v1beta1_ingress_class->spec = NULL;
    }
    free(io_k8s_api_networking_v1beta1_ingress_class);
}

cJSON *io_k8s_api_networking_v1beta1_ingress_class_convertToJSON(io_k8s_api_networking_v1beta1_ingress_class_t *io_k8s_api_networking_v1beta1_ingress_class) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1beta1_ingress_class->api_version
    if(io_k8s_api_networking_v1beta1_ingress_class->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_networking_v1beta1_ingress_class->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1beta1_ingress_class->kind
    if(io_k8s_api_networking_v1beta1_ingress_class->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_networking_v1beta1_ingress_class->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1beta1_ingress_class->metadata
    if(io_k8s_api_networking_v1beta1_ingress_class->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_networking_v1beta1_ingress_class->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_networking_v1beta1_ingress_class->spec
    if(io_k8s_api_networking_v1beta1_ingress_class->spec) { 
    cJSON *spec_local_JSON = io_k8s_api_networking_v1beta1_ingress_class_spec_convertToJSON(io_k8s_api_networking_v1beta1_ingress_class->spec);
    if(spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "spec", spec_local_JSON);
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

io_k8s_api_networking_v1beta1_ingress_class_t *io_k8s_api_networking_v1beta1_ingress_class_parseFromJSON(cJSON *io_k8s_api_networking_v1beta1_ingress_classJSON){

    io_k8s_api_networking_v1beta1_ingress_class_t *io_k8s_api_networking_v1beta1_ingress_class_local_var = NULL;

    // io_k8s_api_networking_v1beta1_ingress_class->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_ingress_classJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1beta1_ingress_class->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_ingress_classJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1beta1_ingress_class->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_ingress_classJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_networking_v1beta1_ingress_class->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1beta1_ingress_classJSON, "spec");
    io_k8s_api_networking_v1beta1_ingress_class_spec_t *spec_local_nonprim = NULL;
    if (spec) { 
    spec_local_nonprim = io_k8s_api_networking_v1beta1_ingress_class_spec_parseFromJSON(spec); //nonprimitive
    }


    io_k8s_api_networking_v1beta1_ingress_class_local_var = io_k8s_api_networking_v1beta1_ingress_class_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        spec ? spec_local_nonprim : NULL
        );

    return io_k8s_api_networking_v1beta1_ingress_class_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (spec_local_nonprim) {
        io_k8s_api_networking_v1beta1_ingress_class_spec_free(spec_local_nonprim);
        spec_local_nonprim = NULL;
    }
    return NULL;

}
