#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_ephemeral_volume_source.h"



io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source_create(
    int read_only,
    io_k8s_api_core_v1_persistent_volume_claim_template_t *volume_claim_template
    ) {
    io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_ephemeral_volume_source_t));
    if (!io_k8s_api_core_v1_ephemeral_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_ephemeral_volume_source_local_var->read_only = read_only;
    io_k8s_api_core_v1_ephemeral_volume_source_local_var->volume_claim_template = volume_claim_template;

    return io_k8s_api_core_v1_ephemeral_volume_source_local_var;
}


void io_k8s_api_core_v1_ephemeral_volume_source_free(io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source) {
    if(NULL == io_k8s_api_core_v1_ephemeral_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_ephemeral_volume_source->volume_claim_template) {
        io_k8s_api_core_v1_persistent_volume_claim_template_free(io_k8s_api_core_v1_ephemeral_volume_source->volume_claim_template);
        io_k8s_api_core_v1_ephemeral_volume_source->volume_claim_template = NULL;
    }
    free(io_k8s_api_core_v1_ephemeral_volume_source);
}

cJSON *io_k8s_api_core_v1_ephemeral_volume_source_convertToJSON(io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_ephemeral_volume_source->read_only
    if(io_k8s_api_core_v1_ephemeral_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_ephemeral_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_core_v1_ephemeral_volume_source->volume_claim_template
    if(io_k8s_api_core_v1_ephemeral_volume_source->volume_claim_template) { 
    cJSON *volume_claim_template_local_JSON = io_k8s_api_core_v1_persistent_volume_claim_template_convertToJSON(io_k8s_api_core_v1_ephemeral_volume_source->volume_claim_template);
    if(volume_claim_template_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "volumeClaimTemplate", volume_claim_template_local_JSON);
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

io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_ephemeral_volume_sourceJSON){

    io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_ephemeral_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ephemeral_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_core_v1_ephemeral_volume_source->volume_claim_template
    cJSON *volume_claim_template = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_ephemeral_volume_sourceJSON, "volumeClaimTemplate");
    io_k8s_api_core_v1_persistent_volume_claim_template_t *volume_claim_template_local_nonprim = NULL;
    if (volume_claim_template) { 
    volume_claim_template_local_nonprim = io_k8s_api_core_v1_persistent_volume_claim_template_parseFromJSON(volume_claim_template); //nonprimitive
    }


    io_k8s_api_core_v1_ephemeral_volume_source_local_var = io_k8s_api_core_v1_ephemeral_volume_source_create (
        read_only ? read_only->valueint : 0,
        volume_claim_template ? volume_claim_template_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_ephemeral_volume_source_local_var;
end:
    if (volume_claim_template_local_nonprim) {
        io_k8s_api_core_v1_persistent_volume_claim_template_free(volume_claim_template_local_nonprim);
        volume_claim_template_local_nonprim = NULL;
    }
    return NULL;

}
