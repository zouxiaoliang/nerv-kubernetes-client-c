#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_template_spec.h"



io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec_create(
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_pod_spec_t *spec
    ) {
    io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_template_spec_t));
    if (!io_k8s_api_core_v1_pod_template_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_template_spec_local_var->metadata = metadata;
    io_k8s_api_core_v1_pod_template_spec_local_var->spec = spec;

    return io_k8s_api_core_v1_pod_template_spec_local_var;
}


void io_k8s_api_core_v1_pod_template_spec_free(io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec) {
    if(NULL == io_k8s_api_core_v1_pod_template_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_template_spec->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_pod_template_spec->metadata);
        io_k8s_api_core_v1_pod_template_spec->metadata = NULL;
    }
    if (io_k8s_api_core_v1_pod_template_spec->spec) {
        io_k8s_api_core_v1_pod_spec_free(io_k8s_api_core_v1_pod_template_spec->spec);
        io_k8s_api_core_v1_pod_template_spec->spec = NULL;
    }
    free(io_k8s_api_core_v1_pod_template_spec);
}

cJSON *io_k8s_api_core_v1_pod_template_spec_convertToJSON(io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_template_spec->metadata
    if(io_k8s_api_core_v1_pod_template_spec->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_pod_template_spec->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_pod_template_spec->spec
    if(io_k8s_api_core_v1_pod_template_spec->spec) { 
    cJSON *spec_local_JSON = io_k8s_api_core_v1_pod_spec_convertToJSON(io_k8s_api_core_v1_pod_template_spec->spec);
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

io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_template_specJSON){

    io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec_local_var = NULL;

    // io_k8s_api_core_v1_pod_template_spec->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_template_specJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_core_v1_pod_template_spec->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_template_specJSON, "spec");
    io_k8s_api_core_v1_pod_spec_t *spec_local_nonprim = NULL;
    if (spec) { 
    spec_local_nonprim = io_k8s_api_core_v1_pod_spec_parseFromJSON(spec); //nonprimitive
    }


    io_k8s_api_core_v1_pod_template_spec_local_var = io_k8s_api_core_v1_pod_template_spec_create (
        metadata ? metadata_local_nonprim : NULL,
        spec ? spec_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_pod_template_spec_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (spec_local_nonprim) {
        io_k8s_api_core_v1_pod_spec_free(spec_local_nonprim);
        spec_local_nonprim = NULL;
    }
    return NULL;

}
