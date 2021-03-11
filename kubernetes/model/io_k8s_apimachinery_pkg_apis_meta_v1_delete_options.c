#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h"



io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_create(
    char *api_version,
    list_t *dry_run,
    long grace_period_seconds,
    char *kind,
    int orphan_dependents,
    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *preconditions,
    char *propagation_policy
    ) {
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var = malloc(sizeof(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t));
    if (!io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var) {
        return NULL;
    }
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var->api_version = api_version;
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var->dry_run = dry_run;
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var->grace_period_seconds = grace_period_seconds;
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var->kind = kind;
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var->orphan_dependents = orphan_dependents;
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var->preconditions = preconditions;
    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var->propagation_policy = propagation_policy;

    return io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var;
}


void io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_free(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options) {
    if(NULL == io_k8s_apimachinery_pkg_apis_meta_v1_delete_options){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->api_version) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->api_version);
        io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->api_version = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->dry_run) {
        list_ForEach(listEntry, io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->dry_run) {
            free(listEntry->data);
        }
        list_free(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->dry_run);
        io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->dry_run = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->kind) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->kind);
        io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->kind = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->preconditions) {
        io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_free(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->preconditions);
        io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->preconditions = NULL;
    }
    if (io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->propagation_policy) {
        free(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->propagation_policy);
        io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->propagation_policy = NULL;
    }
    free(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options);
}

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->api_version
    if(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->api_version) { 
    if(cJSON_AddStringToObject(item, "apiVersion", io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->api_version) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->dry_run
    if(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->dry_run) { 
    cJSON *dry_run = cJSON_AddArrayToObject(item, "dryRun");
    if(dry_run == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *dry_runListEntry;
    list_ForEach(dry_runListEntry, io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->dry_run) {
    if(cJSON_AddStringToObject(dry_run, "", (char*)dry_runListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->grace_period_seconds
    if(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->grace_period_seconds) { 
    if(cJSON_AddNumberToObject(item, "gracePeriodSeconds", io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->grace_period_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->kind
    if(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->kind) { 
    if(cJSON_AddStringToObject(item, "kind", io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->kind) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->orphan_dependents
    if(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->orphan_dependents) { 
    if(cJSON_AddBoolToObject(item, "orphanDependents", io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->orphan_dependents) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->preconditions
    if(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->preconditions) { 
    cJSON *preconditions_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->preconditions);
    if(preconditions_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preconditions", preconditions_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->propagation_policy
    if(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->propagation_policy) { 
    if(cJSON_AddStringToObject(item, "propagationPolicy", io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->propagation_policy) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_delete_optionsJSON){

    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var = NULL;

    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_delete_optionsJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->dry_run
    cJSON *dry_run = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_delete_optionsJSON, "dryRun");
    list_t *dry_runList;
    if (dry_run) { 
    cJSON *dry_run_local;
    if(!cJSON_IsArray(dry_run)) {
        goto end;//primitive container
    }
    dry_runList = list_create();

    cJSON_ArrayForEach(dry_run_local, dry_run)
    {
        if(!cJSON_IsString(dry_run_local))
        {
            goto end;
        }
        list_addElement(dry_runList , strdup(dry_run_local->valuestring));
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->grace_period_seconds
    cJSON *grace_period_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_delete_optionsJSON, "gracePeriodSeconds");
    if (grace_period_seconds) { 
    if(!cJSON_IsNumber(grace_period_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_delete_optionsJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //String
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->orphan_dependents
    cJSON *orphan_dependents = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_delete_optionsJSON, "orphanDependents");
    if (orphan_dependents) { 
    if(!cJSON_IsBool(orphan_dependents))
    {
    goto end; //Bool
    }
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->preconditions
    cJSON *preconditions = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_delete_optionsJSON, "preconditions");
    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *preconditions_local_nonprim = NULL;
    if (preconditions) { 
    preconditions_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_parseFromJSON(preconditions); //nonprimitive
    }

    // io_k8s_apimachinery_pkg_apis_meta_v1_delete_options->propagation_policy
    cJSON *propagation_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_apimachinery_pkg_apis_meta_v1_delete_optionsJSON, "propagationPolicy");
    if (propagation_policy) { 
    if(!cJSON_IsString(propagation_policy))
    {
    goto end; //String
    }
    }


    io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var = io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_create (
        api_version ? strdup(api_version->valuestring) : NULL,
        dry_run ? dry_runList : NULL,
        grace_period_seconds ? grace_period_seconds->valuedouble : 0,
        kind ? strdup(kind->valuestring) : NULL,
        orphan_dependents ? orphan_dependents->valueint : 0,
        preconditions ? preconditions_local_nonprim : NULL,
        propagation_policy ? strdup(propagation_policy->valuestring) : NULL
        );

    return io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_local_var;
end:
    if (preconditions_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_free(preconditions_local_nonprim);
        preconditions_local_nonprim = NULL;
    }
    return NULL;

}
