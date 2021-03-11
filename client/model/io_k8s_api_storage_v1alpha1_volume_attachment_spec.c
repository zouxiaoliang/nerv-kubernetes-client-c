#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_storage_v1alpha1_volume_attachment_spec.h"



io_k8s_api_storage_v1alpha1_volume_attachment_spec_t *io_k8s_api_storage_v1alpha1_volume_attachment_spec_create(
    char *attacher,
    char *node_name,
    io_k8s_api_storage_v1alpha1_volume_attachment_source_t *source
    ) {
    io_k8s_api_storage_v1alpha1_volume_attachment_spec_t *io_k8s_api_storage_v1alpha1_volume_attachment_spec_local_var = malloc(sizeof(io_k8s_api_storage_v1alpha1_volume_attachment_spec_t));
    if (!io_k8s_api_storage_v1alpha1_volume_attachment_spec_local_var) {
        return NULL;
    }
    io_k8s_api_storage_v1alpha1_volume_attachment_spec_local_var->attacher = attacher;
    io_k8s_api_storage_v1alpha1_volume_attachment_spec_local_var->node_name = node_name;
    io_k8s_api_storage_v1alpha1_volume_attachment_spec_local_var->source = source;

    return io_k8s_api_storage_v1alpha1_volume_attachment_spec_local_var;
}


void io_k8s_api_storage_v1alpha1_volume_attachment_spec_free(io_k8s_api_storage_v1alpha1_volume_attachment_spec_t *io_k8s_api_storage_v1alpha1_volume_attachment_spec) {
    if(NULL == io_k8s_api_storage_v1alpha1_volume_attachment_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_storage_v1alpha1_volume_attachment_spec->attacher) {
        free(io_k8s_api_storage_v1alpha1_volume_attachment_spec->attacher);
        io_k8s_api_storage_v1alpha1_volume_attachment_spec->attacher = NULL;
    }
    if (io_k8s_api_storage_v1alpha1_volume_attachment_spec->node_name) {
        free(io_k8s_api_storage_v1alpha1_volume_attachment_spec->node_name);
        io_k8s_api_storage_v1alpha1_volume_attachment_spec->node_name = NULL;
    }
    if (io_k8s_api_storage_v1alpha1_volume_attachment_spec->source) {
        io_k8s_api_storage_v1alpha1_volume_attachment_source_free(io_k8s_api_storage_v1alpha1_volume_attachment_spec->source);
        io_k8s_api_storage_v1alpha1_volume_attachment_spec->source = NULL;
    }
    free(io_k8s_api_storage_v1alpha1_volume_attachment_spec);
}

cJSON *io_k8s_api_storage_v1alpha1_volume_attachment_spec_convertToJSON(io_k8s_api_storage_v1alpha1_volume_attachment_spec_t *io_k8s_api_storage_v1alpha1_volume_attachment_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_storage_v1alpha1_volume_attachment_spec->attacher
    if (!io_k8s_api_storage_v1alpha1_volume_attachment_spec->attacher) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "attacher", io_k8s_api_storage_v1alpha1_volume_attachment_spec->attacher) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_storage_v1alpha1_volume_attachment_spec->node_name
    if (!io_k8s_api_storage_v1alpha1_volume_attachment_spec->node_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "nodeName", io_k8s_api_storage_v1alpha1_volume_attachment_spec->node_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_storage_v1alpha1_volume_attachment_spec->source
    if (!io_k8s_api_storage_v1alpha1_volume_attachment_spec->source) {
        goto fail;
    }
    
    cJSON *source_local_JSON = io_k8s_api_storage_v1alpha1_volume_attachment_source_convertToJSON(io_k8s_api_storage_v1alpha1_volume_attachment_spec->source);
    if(source_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "source", source_local_JSON);
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

io_k8s_api_storage_v1alpha1_volume_attachment_spec_t *io_k8s_api_storage_v1alpha1_volume_attachment_spec_parseFromJSON(cJSON *io_k8s_api_storage_v1alpha1_volume_attachment_specJSON){

    io_k8s_api_storage_v1alpha1_volume_attachment_spec_t *io_k8s_api_storage_v1alpha1_volume_attachment_spec_local_var = NULL;

    // io_k8s_api_storage_v1alpha1_volume_attachment_spec->attacher
    cJSON *attacher = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1alpha1_volume_attachment_specJSON, "attacher");
    if (!attacher) {
        goto end;
    }

    
    if(!cJSON_IsString(attacher))
    {
    goto end; //String
    }

    // io_k8s_api_storage_v1alpha1_volume_attachment_spec->node_name
    cJSON *node_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1alpha1_volume_attachment_specJSON, "nodeName");
    if (!node_name) {
        goto end;
    }

    
    if(!cJSON_IsString(node_name))
    {
    goto end; //String
    }

    // io_k8s_api_storage_v1alpha1_volume_attachment_spec->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(io_k8s_api_storage_v1alpha1_volume_attachment_specJSON, "source");
    if (!source) {
        goto end;
    }

    io_k8s_api_storage_v1alpha1_volume_attachment_source_t *source_local_nonprim = NULL;
    
    source_local_nonprim = io_k8s_api_storage_v1alpha1_volume_attachment_source_parseFromJSON(source); //nonprimitive


    io_k8s_api_storage_v1alpha1_volume_attachment_spec_local_var = io_k8s_api_storage_v1alpha1_volume_attachment_spec_create (
        strdup(attacher->valuestring),
        strdup(node_name->valuestring),
        source_local_nonprim
        );

    return io_k8s_api_storage_v1alpha1_volume_attachment_spec_local_var;
end:
    if (source_local_nonprim) {
        io_k8s_api_storage_v1alpha1_volume_attachment_source_free(source_local_nonprim);
        source_local_nonprim = NULL;
    }
    return NULL;

}
