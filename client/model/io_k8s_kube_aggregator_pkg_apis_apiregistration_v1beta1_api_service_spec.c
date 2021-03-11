#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec.h"



io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_create(
    char ca_bundle,
    char *group,
    int group_priority_minimum,
    int insecure_skip_tls_verify,
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_service_reference_t *service,
    char *version,
    int version_priority
    ) {
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var = malloc(sizeof(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t));
    if (!io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var) {
        return NULL;
    }
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var->ca_bundle = ca_bundle;
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var->group = group;
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var->group_priority_minimum = group_priority_minimum;
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var->insecure_skip_tls_verify = insecure_skip_tls_verify;
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var->service = service;
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var->version = version;
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var->version_priority = version_priority;

    return io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var;
}


void io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec) {
    if(NULL == io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group) {
        free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group);
        io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group = NULL;
    }
    if (io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->service) {
        io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_service_reference_free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->service);
        io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->service = NULL;
    }
    if (io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version) {
        free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version);
        io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version = NULL;
    }
    free(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec);
}

cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->ca_bundle
    if(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->ca_bundle) { 
    if(cJSON_AddNumberToObject(item, "caBundle", io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->ca_bundle) == NULL) {
    goto fail; //Byte
    }
     } 


    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group
    if(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group) { 
    if(cJSON_AddStringToObject(item, "group", io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group_priority_minimum
    if (!io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group_priority_minimum) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "groupPriorityMinimum", io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group_priority_minimum) == NULL) {
    goto fail; //Numeric
    }


    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->insecure_skip_tls_verify
    if(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->insecure_skip_tls_verify) { 
    if(cJSON_AddBoolToObject(item, "insecureSkipTLSVerify", io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->insecure_skip_tls_verify) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->service
    if(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->service) { 
    cJSON *service_local_JSON = io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_service_reference_convertToJSON(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->service);
    if(service_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "service", service_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version
    if(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version) { 
    if(cJSON_AddStringToObject(item, "version", io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version_priority
    if (!io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version_priority) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "versionPriority", io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version_priority) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_parseFromJSON(cJSON *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_specJSON){

    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_t *io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var = NULL;

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->ca_bundle
    cJSON *ca_bundle = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_specJSON, "caBundle");
    if (ca_bundle) { 
    if(!cJSON_IsNumber(ca_bundle))
    {
    goto end; //Byte
    }
    }

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_specJSON, "group");
    if (group) { 
    if(!cJSON_IsString(group))
    {
    goto end; //String
    }
    }

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->group_priority_minimum
    cJSON *group_priority_minimum = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_specJSON, "groupPriorityMinimum");
    if (!group_priority_minimum) {
        goto end;
    }

    
    if(!cJSON_IsNumber(group_priority_minimum))
    {
    goto end; //Numeric
    }

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->insecure_skip_tls_verify
    cJSON *insecure_skip_tls_verify = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_specJSON, "insecureSkipTLSVerify");
    if (insecure_skip_tls_verify) { 
    if(!cJSON_IsBool(insecure_skip_tls_verify))
    {
    goto end; //Bool
    }
    }

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->service
    cJSON *service = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_specJSON, "service");
    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_service_reference_t *service_local_nonprim = NULL;
    if (service) { 
    service_local_nonprim = io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_service_reference_parseFromJSON(service); //nonprimitive
    }

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_specJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version))
    {
    goto end; //String
    }
    }

    // io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec->version_priority
    cJSON *version_priority = cJSON_GetObjectItemCaseSensitive(io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_specJSON, "versionPriority");
    if (!version_priority) {
        goto end;
    }

    
    if(!cJSON_IsNumber(version_priority))
    {
    goto end; //Numeric
    }


    io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var = io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_create (
        ca_bundle ? ca_bundle->valueint : 0,
        group ? strdup(group->valuestring) : NULL,
        group_priority_minimum->valuedouble,
        insecure_skip_tls_verify ? insecure_skip_tls_verify->valueint : 0,
        service ? service_local_nonprim : NULL,
        version ? strdup(version->valuestring) : NULL,
        version_priority->valuedouble
        );

    return io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_api_service_spec_local_var;
end:
    if (service_local_nonprim) {
        io_k8s_kube_aggregator_pkg_apis_apiregistration_v1beta1_service_reference_free(service_local_nonprim);
        service_local_nonprim = NULL;
    }
    return NULL;

}
