#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_networking_v1_network_policy.h"



io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_networking_v1_network_policy_spec_t *spec
    ) {
    io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy_local_var = malloc(sizeof(io_k8s_api_networking_v1_network_policy_t));
    if (!io_k8s_api_networking_v1_network_policy_local_var) {
        return NULL;
    }
    io_k8s_api_networking_v1_network_policy_local_var->api_version = api_version;
    io_k8s_api_networking_v1_network_policy_local_var->kind = kind;
    io_k8s_api_networking_v1_network_policy_local_var->metadata = metadata;
    io_k8s_api_networking_v1_network_policy_local_var->spec = spec;

    return io_k8s_api_networking_v1_network_policy_local_var;
}


void io_k8s_api_networking_v1_network_policy_free(io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy) {
    if(NULL == io_k8s_api_networking_v1_network_policy){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_networking_v1_network_policy->api_version) {
        free(io_k8s_api_networking_v1_network_policy->api_version);
        io_k8s_api_networking_v1_network_policy->api_version = NULL;
    }
    if (io_k8s_api_networking_v1_network_policy->kind) {
        free(io_k8s_api_networking_v1_network_policy->kind);
        io_k8s_api_networking_v1_network_policy->kind = NULL;
    }
    if (io_k8s_api_networking_v1_network_policy->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_networking_v1_network_policy->metadata);
        io_k8s_api_networking_v1_network_policy->metadata = NULL;
    }
    if (io_k8s_api_networking_v1_network_policy->spec) {
        io_k8s_api_networking_v1_network_policy_spec_free(io_k8s_api_networking_v1_network_policy->spec);
        io_k8s_api_networking_v1_network_policy->spec = NULL;
    }
    free(io_k8s_api_networking_v1_network_policy);
}

cJSON *io_k8s_api_networking_v1_network_policy_convertToJSON(io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_networking_v1_network_policy->api_version
    if(io_k8s_api_networking_v1_network_policy->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_networking_v1_network_policy->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1_network_policy->kind
    if(io_k8s_api_networking_v1_network_policy->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_networking_v1_network_policy->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_networking_v1_network_policy->metadata
    if(io_k8s_api_networking_v1_network_policy->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_networking_v1_network_policy->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_networking_v1_network_policy->spec
    if(io_k8s_api_networking_v1_network_policy->spec) { 
    cJSON *spec_local_JSON = io_k8s_api_networking_v1_network_policy_spec_convertToJSON(io_k8s_api_networking_v1_network_policy->spec);
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

io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy_parseFromJSON(cJSON *io_k8s_api_networking_v1_network_policyJSON){

    io_k8s_api_networking_v1_network_policy_t *io_k8s_api_networking_v1_network_policy_local_var = NULL;

    // io_k8s_api_networking_v1_network_policy->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policyJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1_network_policy->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policyJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_networking_v1_network_policy->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policyJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_networking_v1_network_policy->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(io_k8s_api_networking_v1_network_policyJSON, "spec");
    io_k8s_api_networking_v1_network_policy_spec_t *spec_local_nonprim = NULL;
    if (spec) { 
    spec_local_nonprim = io_k8s_api_networking_v1_network_policy_spec_parseFromJSON(spec); //nonprimitive
    }


    io_k8s_api_networking_v1_network_policy_local_var = io_k8s_api_networking_v1_network_policy_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        spec ? spec_local_nonprim : NULL
        );

    return io_k8s_api_networking_v1_network_policy_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (spec_local_nonprim) {
        io_k8s_api_networking_v1_network_policy_spec_free(spec_local_nonprim);
        spec_local_nonprim = NULL;
    }
    return NULL;

}