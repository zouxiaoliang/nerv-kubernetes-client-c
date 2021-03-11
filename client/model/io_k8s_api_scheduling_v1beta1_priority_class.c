#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_scheduling_v1beta1_priority_class.h"



io_k8s_api_scheduling_v1beta1_priority_class_t *io_k8s_api_scheduling_v1beta1_priority_class_create(
    char *api_version,
    char *description,
    int global_default,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    char *preemption_policy,
    int value
    ) {
    io_k8s_api_scheduling_v1beta1_priority_class_t *io_k8s_api_scheduling_v1beta1_priority_class_local_var = malloc(sizeof(io_k8s_api_scheduling_v1beta1_priority_class_t));
    if (!io_k8s_api_scheduling_v1beta1_priority_class_local_var) {
        return NULL;
    }
    io_k8s_api_scheduling_v1beta1_priority_class_local_var->api_version = api_version;
    io_k8s_api_scheduling_v1beta1_priority_class_local_var->description = description;
    io_k8s_api_scheduling_v1beta1_priority_class_local_var->global_default = global_default;
    io_k8s_api_scheduling_v1beta1_priority_class_local_var->kind = kind;
    io_k8s_api_scheduling_v1beta1_priority_class_local_var->metadata = metadata;
    io_k8s_api_scheduling_v1beta1_priority_class_local_var->preemption_policy = preemption_policy;
    io_k8s_api_scheduling_v1beta1_priority_class_local_var->value = value;

    return io_k8s_api_scheduling_v1beta1_priority_class_local_var;
}


void io_k8s_api_scheduling_v1beta1_priority_class_free(io_k8s_api_scheduling_v1beta1_priority_class_t *io_k8s_api_scheduling_v1beta1_priority_class) {
    if(NULL == io_k8s_api_scheduling_v1beta1_priority_class){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_scheduling_v1beta1_priority_class->api_version) {
        free(io_k8s_api_scheduling_v1beta1_priority_class->api_version);
        io_k8s_api_scheduling_v1beta1_priority_class->api_version = NULL;
    }
    if (io_k8s_api_scheduling_v1beta1_priority_class->description) {
        free(io_k8s_api_scheduling_v1beta1_priority_class->description);
        io_k8s_api_scheduling_v1beta1_priority_class->description = NULL;
    }
    if (io_k8s_api_scheduling_v1beta1_priority_class->kind) {
        free(io_k8s_api_scheduling_v1beta1_priority_class->kind);
        io_k8s_api_scheduling_v1beta1_priority_class->kind = NULL;
    }
    if (io_k8s_api_scheduling_v1beta1_priority_class->metadata) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(io_k8s_api_scheduling_v1beta1_priority_class->metadata);
        io_k8s_api_scheduling_v1beta1_priority_class->metadata = NULL;
    }
    if (io_k8s_api_scheduling_v1beta1_priority_class->preemption_policy) {
        free(io_k8s_api_scheduling_v1beta1_priority_class->preemption_policy);
        io_k8s_api_scheduling_v1beta1_priority_class->preemption_policy = NULL;
    }
    free(io_k8s_api_scheduling_v1beta1_priority_class);
}

cJSON *io_k8s_api_scheduling_v1beta1_priority_class_convertToJSON(io_k8s_api_scheduling_v1beta1_priority_class_t *io_k8s_api_scheduling_v1beta1_priority_class) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_scheduling_v1beta1_priority_class->api_version
    if(io_k8s_api_scheduling_v1beta1_priority_class->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_api_scheduling_v1beta1_priority_class->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_scheduling_v1beta1_priority_class->description
    if(io_k8s_api_scheduling_v1beta1_priority_class->description) { 
    if(cJSON_AddStringToObject(item, "description", io_k8s_api_scheduling_v1beta1_priority_class->description) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_scheduling_v1beta1_priority_class->global_default
    if(io_k8s_api_scheduling_v1beta1_priority_class->global_default) { 
    if(cJSON_AddBoolToObject(item, "globalDefault", io_k8s_api_scheduling_v1beta1_priority_class->global_default) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_scheduling_v1beta1_priority_class->kind
    if(io_k8s_api_scheduling_v1beta1_priority_class->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_api_scheduling_v1beta1_priority_class->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_scheduling_v1beta1_priority_class->metadata
    if(io_k8s_api_scheduling_v1beta1_priority_class->metadata) { 
    cJSON *metadata_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_convertToJSON(io_k8s_api_scheduling_v1beta1_priority_class->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_scheduling_v1beta1_priority_class->preemption_policy
    if(io_k8s_api_scheduling_v1beta1_priority_class->preemption_policy) { 
    if(cJSON_AddStringToObject(item, "preemptionPolicy", io_k8s_api_scheduling_v1beta1_priority_class->preemption_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_scheduling_v1beta1_priority_class->value
    if (!io_k8s_api_scheduling_v1beta1_priority_class->value) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "value", io_k8s_api_scheduling_v1beta1_priority_class->value) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_scheduling_v1beta1_priority_class_t *io_k8s_api_scheduling_v1beta1_priority_class_parseFromJSON(cJSON *io_k8s_api_scheduling_v1beta1_priority_classJSON){

    io_k8s_api_scheduling_v1beta1_priority_class_t *io_k8s_api_scheduling_v1beta1_priority_class_local_var = NULL;

    // io_k8s_api_scheduling_v1beta1_priority_class->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_api_scheduling_v1beta1_priority_classJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_api_scheduling_v1beta1_priority_class->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(io_k8s_api_scheduling_v1beta1_priority_classJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // io_k8s_api_scheduling_v1beta1_priority_class->global_default
    cJSON *global_default = cJSON_GetObjectItemCaseSensitive(io_k8s_api_scheduling_v1beta1_priority_classJSON, "globalDefault");
    if (global_default) { 
    if(!cJSON_IsBool(global_default))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_scheduling_v1beta1_priority_class->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_api_scheduling_v1beta1_priority_classJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_api_scheduling_v1beta1_priority_class->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(io_k8s_api_scheduling_v1beta1_priority_classJSON, "metadata");
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata_local_nonprim = NULL;
    if (metadata) { 
    metadata_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // io_k8s_api_scheduling_v1beta1_priority_class->preemption_policy
    cJSON *preemption_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_scheduling_v1beta1_priority_classJSON, "preemptionPolicy");
    if (preemption_policy) { 
    if(!cJSON_IsString(preemption_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_scheduling_v1beta1_priority_class->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(io_k8s_api_scheduling_v1beta1_priority_classJSON, "value");
    if (!value) {
        goto end;
    }

    
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }


    io_k8s_api_scheduling_v1beta1_priority_class_local_var = io_k8s_api_scheduling_v1beta1_priority_class_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        description ? strdup(description->valuestring) : NULL,
        global_default ? global_default->valueint : 0,
        kind ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        preemption_policy ? strdup(preemption_policy->valuestring) : NULL,
        value->valuedouble
        );

    return io_k8s_api_scheduling_v1beta1_priority_class_local_var;
end:
    if (metadata_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    return NULL;

}
