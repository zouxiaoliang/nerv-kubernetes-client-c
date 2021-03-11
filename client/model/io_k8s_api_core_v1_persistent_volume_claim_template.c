#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_persistent_volume_claim_template.h"



io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template_create(
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_persistent_volume_claim_spec_t *spec
    ) {
    io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template_local_var = malloc(sizeof(io_k8s_api_core_v1_persistent_volume_claim_template_t));
    if (!io_k8s_api_core_v1_persistent_volume_claim_template_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_persistent_volume_claim_template_local_var->metadata = metadata;
    io_k8s_api_core_v1_persistent_volume_claim_template_local_var->spec = spec;

    return io_k8s_api_core_v1_persistent_volume_claim_template_local_var;
}


void io_k8s_api_core_v1_persistent_volume_claim_template_free(io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template) {
    if(NULL == io_k8s_api_core_v1_persistent_volume_claim_template){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_persistent_volume_claim_template->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_persistent_volume_claim_template->metadata);
        io_k8s_api_core_v1_persistent_volume_claim_template->metadata = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_claim_template->spec) {
        io_k8s_api_core_v1_persistent_volume_claim_spec_free(io_k8s_api_core_v1_persistent_volume_claim_template->spec);
        io_k8s_api_core_v1_persistent_volume_claim_template->spec = NULL;
    }
    free(io_k8s_api_core_v1_persistent_volume_claim_template);
}

cJSON *io_k8s_api_core_v1_persistent_volume_claim_template_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_persistent_volume_claim_template->metadata
    if(io_k8s_api_core_v1_persistent_volume_claim_template->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_template->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_claim_template->spec
    if (!io_k8s_api_core_v1_persistent_volume_claim_template->spec) {
        goto fail;
    }
    
    cJSON *spec_local_JSON = io_k8s_api_core_v1_persistent_volume_claim_spec_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_template->spec);
    if(spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "spec", spec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_claim_templateJSON){

    io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template_local_var = NULL;

    // io_k8s_api_core_v1_persistent_volume_claim_template->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_templateJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_claim_template->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_templateJSON, "spec");
    if (!spec) {
        goto end;
    }

    io_k8s_api_core_v1_persistent_volume_claim_spec_t *spec_local_nonprim = NULL;
    
    spec_local_nonprim = io_k8s_api_core_v1_persistent_volume_claim_spec_parseFromJSON(spec); //nonprimitive


    io_k8s_api_core_v1_persistent_volume_claim_template_local_var = io_k8s_api_core_v1_persistent_volume_claim_template_create (
        metadata ? metadata_local_nonprim : NULL,
        spec_local_nonprim
        );

    return io_k8s_api_core_v1_persistent_volume_claim_template_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (spec_local_nonprim) {
        io_k8s_api_core_v1_persistent_volume_claim_spec_free(spec_local_nonprim);
        spec_local_nonprim = NULL;
    }
    return NULL;

}
