#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_pod_template.h"



io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_pod_template_spec_t *_template
    ) {
    io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template_local_var = malloc(sizeof(io_k8s_api_core_v1_pod_template_t));
    if (!io_k8s_api_core_v1_pod_template_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_pod_template_local_var->api_version = api_version;
    io_k8s_api_core_v1_pod_template_local_var->kind = kind;
    io_k8s_api_core_v1_pod_template_local_var->metadata = metadata;
    io_k8s_api_core_v1_pod_template_local_var->_template = _template;

    return io_k8s_api_core_v1_pod_template_local_var;
}


void io_k8s_api_core_v1_pod_template_free(io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template) {
    if(NULL == io_k8s_api_core_v1_pod_template){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_pod_template->api_version) {
        free(io_k8s_api_core_v1_pod_template->api_version);
        io_k8s_api_core_v1_pod_template->api_version = NULL;
    }
    if (io_k8s_api_core_v1_pod_template->kind) {
        free(io_k8s_api_core_v1_pod_template->kind);
        io_k8s_api_core_v1_pod_template->kind = NULL;
    }
    if (io_k8s_api_core_v1_pod_template->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_core_v1_pod_template->metadata);
        io_k8s_api_core_v1_pod_template->metadata = NULL;
    }
    if (io_k8s_api_core_v1_pod_template->_template) {
        io_k8s_api_core_v1_pod_template_spec_free(io_k8s_api_core_v1_pod_template->_template);
        io_k8s_api_core_v1_pod_template->_template = NULL;
    }
    free(io_k8s_api_core_v1_pod_template);
}

cJSON *io_k8s_api_core_v1_pod_template_convertToJSON(io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_pod_template->api_version
    if(io_k8s_api_core_v1_pod_template->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_core_v1_pod_template->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_template->kind
    if(io_k8s_api_core_v1_pod_template->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_core_v1_pod_template->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_pod_template->metadata
    if(io_k8s_api_core_v1_pod_template->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_core_v1_pod_template->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_pod_template->_template
    if(io_k8s_api_core_v1_pod_template->_template) { 
    cJSON *_template_local_JSON = io_k8s_api_core_v1_pod_template_spec_convertToJSON(io_k8s_api_core_v1_pod_template->_template);
    if(_template_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "template", _template_local_JSON);
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

io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_templateJSON){

    io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template_local_var = NULL;

    // io_k8s_api_core_v1_pod_template->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_templateJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_template->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_templateJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_pod_template->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_templateJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_core_v1_pod_template->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_pod_templateJSON, "template");
    io_k8s_api_core_v1_pod_template_spec_t *_template_local_nonprim = NULL;
    if (_template) { 
    _template_local_nonprim = io_k8s_api_core_v1_pod_template_spec_parseFromJSON(_template); //nonprimitive
    }


    io_k8s_api_core_v1_pod_template_local_var = io_k8s_api_core_v1_pod_template_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        _template ? _template_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_pod_template_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (_template_local_nonprim) {
        io_k8s_api_core_v1_pod_template_spec_free(_template_local_nonprim);
        _template_local_nonprim = NULL;
    }
    return NULL;

}
