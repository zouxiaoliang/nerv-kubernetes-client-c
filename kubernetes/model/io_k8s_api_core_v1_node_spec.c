#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_node_spec.h"



io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec_create(
    io_k8s_api_core_v1_node_config_source_t *config_source,
    char *external_id,
    char *pod_cidr,
    list_t *pod_cidrs,
    char *provider_id,
    list_t *taints,
    int unschedulable
    ) {
    io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_node_spec_t));
    if (!io_k8s_api_core_v1_node_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_node_spec_local_var->config_source = config_source;
    io_k8s_api_core_v1_node_spec_local_var->external_id = external_id;
    io_k8s_api_core_v1_node_spec_local_var->pod_cidr = pod_cidr;
    io_k8s_api_core_v1_node_spec_local_var->pod_cidrs = pod_cidrs;
    io_k8s_api_core_v1_node_spec_local_var->provider_id = provider_id;
    io_k8s_api_core_v1_node_spec_local_var->taints = taints;
    io_k8s_api_core_v1_node_spec_local_var->unschedulable = unschedulable;

    return io_k8s_api_core_v1_node_spec_local_var;
}


void io_k8s_api_core_v1_node_spec_free(io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec) {
    if(NULL == io_k8s_api_core_v1_node_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_node_spec->config_source) {
        io_k8s_api_core_v1_node_config_source_free(io_k8s_api_core_v1_node_spec->config_source);
        io_k8s_api_core_v1_node_spec->config_source = NULL;
    }
    if (io_k8s_api_core_v1_node_spec->external_id) {
        free(io_k8s_api_core_v1_node_spec->external_id);
        io_k8s_api_core_v1_node_spec->external_id = NULL;
    }
    if (io_k8s_api_core_v1_node_spec->pod_cidr) {
        free(io_k8s_api_core_v1_node_spec->pod_cidr);
        io_k8s_api_core_v1_node_spec->pod_cidr = NULL;
    }
    if (io_k8s_api_core_v1_node_spec->pod_cidrs) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_spec->pod_cidrs) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_spec->pod_cidrs);
        io_k8s_api_core_v1_node_spec->pod_cidrs = NULL;
    }
    if (io_k8s_api_core_v1_node_spec->provider_id) {
        free(io_k8s_api_core_v1_node_spec->provider_id);
        io_k8s_api_core_v1_node_spec->provider_id = NULL;
    }
    if (io_k8s_api_core_v1_node_spec->taints) {
        list_ForEach(listEntry, io_k8s_api_core_v1_node_spec->taints) {
            io_k8s_api_core_v1_taint_free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_node_spec->taints);
        io_k8s_api_core_v1_node_spec->taints = NULL;
    }
    free(io_k8s_api_core_v1_node_spec);
}

cJSON *io_k8s_api_core_v1_node_spec_convertToJSON(io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_node_spec->config_source
    if(io_k8s_api_core_v1_node_spec->config_source) { 
    cJSON *config_source_local_JSON = io_k8s_api_core_v1_node_config_source_convertToJSON(io_k8s_api_core_v1_node_spec->config_source);
    if(config_source_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "configSource", config_source_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_node_spec->external_id
    if(io_k8s_api_core_v1_node_spec->external_id) { 
    if(cJSON_AddStringToObject(item, "externalID", io_k8s_api_core_v1_node_spec->external_id) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_node_spec->pod_cidr
    if(io_k8s_api_core_v1_node_spec->pod_cidr) { 
    if(cJSON_AddStringToObject(item, "podCIDR", io_k8s_api_core_v1_node_spec->pod_cidr) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_node_spec->pod_cidrs
    if(io_k8s_api_core_v1_node_spec->pod_cidrs) { 
    cJSON *pod_cidrs = cJSON_AddArrayToObject(item, "podCIDRs");
    if(pod_cidrs == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *pod_cidrsListEntry;
    list_ForEach(pod_cidrsListEntry, io_k8s_api_core_v1_node_spec->pod_cidrs) {
    if(cJSON_AddStringToObject(pod_cidrs, "", (char*)pod_cidrsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_node_spec->provider_id
    if(io_k8s_api_core_v1_node_spec->provider_id) { 
    if(cJSON_AddStringToObject(item, "providerID", io_k8s_api_core_v1_node_spec->provider_id) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_node_spec->taints
    if(io_k8s_api_core_v1_node_spec->taints) { 
    cJSON *taints = cJSON_AddArrayToObject(item, "taints");
    if(taints == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *taintsListEntry;
    if (io_k8s_api_core_v1_node_spec->taints) {
    list_ForEach(taintsListEntry, io_k8s_api_core_v1_node_spec->taints) {
    cJSON *itemLocal = io_k8s_api_core_v1_taint_convertToJSON(taintsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(taints, itemLocal);
    }
    }
     } 


    // io_k8s_api_core_v1_node_spec->unschedulable
    if(io_k8s_api_core_v1_node_spec->unschedulable) { 
    if(cJSON_AddBoolToObject(item, "unschedulable", io_k8s_api_core_v1_node_spec->unschedulable) == NULL) {
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

io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_node_specJSON){

    io_k8s_api_core_v1_node_spec_t *io_k8s_api_core_v1_node_spec_local_var = NULL;

    // io_k8s_api_core_v1_node_spec->config_source
    cJSON *config_source = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_specJSON, "configSource");
    io_k8s_api_core_v1_node_config_source_t *config_source_local_nonprim = NULL;
    if (config_source) { 
    config_source_local_nonprim = io_k8s_api_core_v1_node_config_source_parseFromJSON(config_source); //nonprimitive
    }

    // io_k8s_api_core_v1_node_spec->external_id
    cJSON *external_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_specJSON, "externalID");
    if (external_id) { 
    if(!cJSON_IsString(external_id))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_node_spec->pod_cidr
    cJSON *pod_cidr = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_specJSON, "podCIDR");
    if (pod_cidr) { 
    if(!cJSON_IsString(pod_cidr))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_node_spec->pod_cidrs
    cJSON *pod_cidrs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_specJSON, "podCIDRs");
    list_t *pod_cidrsList;
    if (pod_cidrs) { 
    cJSON *pod_cidrs_local;
    if(!cJSON_IsArray(pod_cidrs)) {
        goto end;//primitive container
    }
    pod_cidrsList = list_create();

    cJSON_ArrayForEach(pod_cidrs_local, pod_cidrs)
    {
        if(!cJSON_IsString(pod_cidrs_local))
        {
            goto end;
        }
        list_addElement(pod_cidrsList , strdup(pod_cidrs_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_node_spec->provider_id
    cJSON *provider_id = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_specJSON, "providerID");
    if (provider_id) { 
    if(!cJSON_IsString(provider_id))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_node_spec->taints
    cJSON *taints = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_specJSON, "taints");
    list_t *taintsList;
    if (taints) { 
    cJSON *taints_local_nonprimitive;
    if(!cJSON_IsArray(taints)){
        goto end; //nonprimitive container
    }

    taintsList = list_create();

    cJSON_ArrayForEach(taints_local_nonprimitive,taints )
    {
        if(!cJSON_IsObject(taints_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_taint_t *taintsItem = io_k8s_api_core_v1_taint_parseFromJSON(taints_local_nonprimitive);

        list_addElement(taintsList, taintsItem);
    }
    }

    // io_k8s_api_core_v1_node_spec->unschedulable
    cJSON *unschedulable = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_node_specJSON, "unschedulable");
    if (unschedulable) { 
    if(!cJSON_IsBool(unschedulable))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_core_v1_node_spec_local_var = io_k8s_api_core_v1_node_spec_create (
        config_source ? config_source_local_nonprim : NULL,
        external_id ? strdup(external_id->valuestring) : NULL,
        pod_cidr ? strdup(pod_cidr->valuestring) : NULL,
        pod_cidrs ? pod_cidrsList : NULL,
        provider_id ? strdup(provider_id->valuestring) : NULL,
        taints ? taintsList : NULL,
        unschedulable ? unschedulable->valueint : 0
        );

    return io_k8s_api_core_v1_node_spec_local_var;
end:
    if (config_source_local_nonprim) {
        io_k8s_api_core_v1_node_config_source_free(config_source_local_nonprim);
        config_source_local_nonprim = NULL;
    }
    return NULL;

}
