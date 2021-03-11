#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_persistent_volume_claim_volume_source.h"



io_k8s_api_core_v1_persistent_volume_claim_volume_source_t *io_k8s_api_core_v1_persistent_volume_claim_volume_source_create(
    char *claim_name,
    int read_only
    ) {
    io_k8s_api_core_v1_persistent_volume_claim_volume_source_t *io_k8s_api_core_v1_persistent_volume_claim_volume_source_local_var = malloc(sizeof(io_k8s_api_core_v1_persistent_volume_claim_volume_source_t));
    if (!io_k8s_api_core_v1_persistent_volume_claim_volume_source_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_persistent_volume_claim_volume_source_local_var->claim_name = claim_name;
    io_k8s_api_core_v1_persistent_volume_claim_volume_source_local_var->read_only = read_only;

    return io_k8s_api_core_v1_persistent_volume_claim_volume_source_local_var;
}


void io_k8s_api_core_v1_persistent_volume_claim_volume_source_free(io_k8s_api_core_v1_persistent_volume_claim_volume_source_t *io_k8s_api_core_v1_persistent_volume_claim_volume_source) {
    if(NULL == io_k8s_api_core_v1_persistent_volume_claim_volume_source){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_persistent_volume_claim_volume_source->claim_name) {
        free(io_k8s_api_core_v1_persistent_volume_claim_volume_source->claim_name);
        io_k8s_api_core_v1_persistent_volume_claim_volume_source->claim_name = NULL;
    }
    free(io_k8s_api_core_v1_persistent_volume_claim_volume_source);
}

cJSON *io_k8s_api_core_v1_persistent_volume_claim_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_volume_source_t *io_k8s_api_core_v1_persistent_volume_claim_volume_source) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_persistent_volume_claim_volume_source->claim_name
    if (!io_k8s_api_core_v1_persistent_volume_claim_volume_source->claim_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "claimName", io_k8s_api_core_v1_persistent_volume_claim_volume_source->claim_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_persistent_volume_claim_volume_source->read_only
    if(io_k8s_api_core_v1_persistent_volume_claim_volume_source->read_only) { 
    if(cJSON_AddBoolToObject(item, "readOnly", io_k8s_api_core_v1_persistent_volume_claim_volume_source->read_only) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_persistent_volume_claim_volume_source_t *io_k8s_api_core_v1_persistent_volume_claim_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_claim_volume_sourceJSON){

    io_k8s_api_core_v1_persistent_volume_claim_volume_source_t *io_k8s_api_core_v1_persistent_volume_claim_volume_source_local_var = NULL;

    // io_k8s_api_core_v1_persistent_volume_claim_volume_source->claim_name
    cJSON *claim_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_volume_sourceJSON, "claimName");
    if (!claim_name) {
        goto end;
    }

    
    if(!cJSON_IsString(claim_name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_persistent_volume_claim_volume_source->read_only
    cJSON *read_only = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_claim_volume_sourceJSON, "readOnly");
    if (read_only) { 
    if(!cJSON_IsBool(read_only))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_core_v1_persistent_volume_claim_volume_source_local_var = io_k8s_api_core_v1_persistent_volume_claim_volume_source_create (
        strdup(claim_name->valuestring),
        read_only ? read_only->valueint : 0
        );

    return io_k8s_api_core_v1_persistent_volume_claim_volume_source_local_var;
end:
    return NULL;

}
