#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apps_v1_stateful_set_spec.h"



io_k8s_api_apps_v1_stateful_set_spec_t *io_k8s_api_apps_v1_stateful_set_spec_create(
    char *pod_management_policy,
    int replicas,
    int revision_history_limit,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    char *service_name,
    io_k8s_api_core_v1_pod_template_spec_t *_template,
    io_k8s_api_apps_v1_stateful_set_update_strategy_t *update_strategy,
    list_t *volume_claim_templates
    ) {
    io_k8s_api_apps_v1_stateful_set_spec_t *io_k8s_api_apps_v1_stateful_set_spec_local_var = malloc(sizeof(io_k8s_api_apps_v1_stateful_set_spec_t));
    if (!io_k8s_api_apps_v1_stateful_set_spec_local_var) {
        return NULL;
    }
    io_k8s_api_apps_v1_stateful_set_spec_local_var->pod_management_policy = pod_management_policy;
    io_k8s_api_apps_v1_stateful_set_spec_local_var->replicas = replicas;
    io_k8s_api_apps_v1_stateful_set_spec_local_var->revision_history_limit = revision_history_limit;
    io_k8s_api_apps_v1_stateful_set_spec_local_var->selector = selector;
    io_k8s_api_apps_v1_stateful_set_spec_local_var->service_name = service_name;
    io_k8s_api_apps_v1_stateful_set_spec_local_var->_template = _template;
    io_k8s_api_apps_v1_stateful_set_spec_local_var->update_strategy = update_strategy;
    io_k8s_api_apps_v1_stateful_set_spec_local_var->volume_claim_templates = volume_claim_templates;

    return io_k8s_api_apps_v1_stateful_set_spec_local_var;
}


void io_k8s_api_apps_v1_stateful_set_spec_free(io_k8s_api_apps_v1_stateful_set_spec_t *io_k8s_api_apps_v1_stateful_set_spec) {
    if(NULL == io_k8s_api_apps_v1_stateful_set_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apps_v1_stateful_set_spec->pod_management_policy) {
        free(io_k8s_api_apps_v1_stateful_set_spec->pod_management_policy);
        io_k8s_api_apps_v1_stateful_set_spec->pod_management_policy = NULL;
    }
    if (io_k8s_api_apps_v1_stateful_set_spec->selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_apps_v1_stateful_set_spec->selector);
        io_k8s_api_apps_v1_stateful_set_spec->selector = NULL;
    }
    if (io_k8s_api_apps_v1_stateful_set_spec->service_name) {
        free(io_k8s_api_apps_v1_stateful_set_spec->service_name);
        io_k8s_api_apps_v1_stateful_set_spec->service_name = NULL;
    }
    if (io_k8s_api_apps_v1_stateful_set_spec->_template) {
        io_k8s_api_core_v1_pod_template_spec_free(io_k8s_api_apps_v1_stateful_set_spec->_template);
        io_k8s_api_apps_v1_stateful_set_spec->_template = NULL;
    }
    if (io_k8s_api_apps_v1_stateful_set_spec->update_strategy) {
        io_k8s_api_apps_v1_stateful_set_update_strategy_free(io_k8s_api_apps_v1_stateful_set_spec->update_strategy);
        io_k8s_api_apps_v1_stateful_set_spec->update_strategy = NULL;
    }
    if (io_k8s_api_apps_v1_stateful_set_spec->volume_claim_templates) {
        list_ForEach(listEntry, io_k8s_api_apps_v1_stateful_set_spec->volume_claim_templates) {
            io_k8s_api_core_v1_persistent_volume_claim_free(listEntry->data);
        }
        list_free(io_k8s_api_apps_v1_stateful_set_spec->volume_claim_templates);
        io_k8s_api_apps_v1_stateful_set_spec->volume_claim_templates = NULL;
    }
    free(io_k8s_api_apps_v1_stateful_set_spec);
}

cJSON *io_k8s_api_apps_v1_stateful_set_spec_convertToJSON(io_k8s_api_apps_v1_stateful_set_spec_t *io_k8s_api_apps_v1_stateful_set_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apps_v1_stateful_set_spec->pod_management_policy
    if(io_k8s_api_apps_v1_stateful_set_spec->pod_management_policy) { 
    if(cJSON_AddStringToObject(item, "podManagementPolicy", io_k8s_api_apps_v1_stateful_set_spec->pod_management_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_apps_v1_stateful_set_spec->replicas
    if(io_k8s_api_apps_v1_stateful_set_spec->replicas) { 
    if(cJSON_AddNumberToObject(item, "replicas", io_k8s_api_apps_v1_stateful_set_spec->replicas) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_apps_v1_stateful_set_spec->revision_history_limit
    if(io_k8s_api_apps_v1_stateful_set_spec->revision_history_limit) { 
    if(cJSON_AddNumberToObject(item, "revisionHistoryLimit", io_k8s_api_apps_v1_stateful_set_spec->revision_history_limit) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_apps_v1_stateful_set_spec->selector
    if (!io_k8s_api_apps_v1_stateful_set_spec->selector) {
        goto fail;
    }
    
    cJSON *selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_apps_v1_stateful_set_spec->selector);
    if(selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selector", selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_apps_v1_stateful_set_spec->service_name
    if (!io_k8s_api_apps_v1_stateful_set_spec->service_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "serviceName", io_k8s_api_apps_v1_stateful_set_spec->service_name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_apps_v1_stateful_set_spec->_template
    if (!io_k8s_api_apps_v1_stateful_set_spec->_template) {
        goto fail;
    }
    
    cJSON *_template_local_JSON = io_k8s_api_core_v1_pod_template_spec_convertToJSON(io_k8s_api_apps_v1_stateful_set_spec->_template);
    if(_template_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "template", _template_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_apps_v1_stateful_set_spec->update_strategy
    if(io_k8s_api_apps_v1_stateful_set_spec->update_strategy) { 
    cJSON *update_strategy_local_JSON = io_k8s_api_apps_v1_stateful_set_update_strategy_convertToJSON(io_k8s_api_apps_v1_stateful_set_spec->update_strategy);
    if(update_strategy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "updateStrategy", update_strategy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_apps_v1_stateful_set_spec->volume_claim_templates
    if(io_k8s_api_apps_v1_stateful_set_spec->volume_claim_templates) { 
    cJSON *volume_claim_templates = cJSON_AddArrayToObject(item, "volumeClaimTemplates");
    if(volume_claim_templates == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *volume_claim_templatesListEntry;
    if (io_k8s_api_apps_v1_stateful_set_spec->volume_claim_templates) {
    list_ForEach(volume_claim_templatesListEntry, io_k8s_api_apps_v1_stateful_set_spec->volume_claim_templates) {
    cJSON *itemLocal = io_k8s_api_core_v1_persistent_volume_claim_convertToJSON(volume_claim_templatesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(volume_claim_templates, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_apps_v1_stateful_set_spec_t *io_k8s_api_apps_v1_stateful_set_spec_parseFromJSON(cJSON *io_k8s_api_apps_v1_stateful_set_specJSON){

    io_k8s_api_apps_v1_stateful_set_spec_t *io_k8s_api_apps_v1_stateful_set_spec_local_var = NULL;

    // io_k8s_api_apps_v1_stateful_set_spec->pod_management_policy
    cJSON *pod_management_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_stateful_set_specJSON, "podManagementPolicy");
    if (pod_management_policy) { 
    if(!cJSON_IsString(pod_management_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_apps_v1_stateful_set_spec->replicas
    cJSON *replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_stateful_set_specJSON, "replicas");
    if (replicas) { 
    if(!cJSON_IsNumber(replicas))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_apps_v1_stateful_set_spec->revision_history_limit
    cJSON *revision_history_limit = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_stateful_set_specJSON, "revisionHistoryLimit");
    if (revision_history_limit) { 
    if(!cJSON_IsNumber(revision_history_limit))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_apps_v1_stateful_set_spec->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_stateful_set_specJSON, "selector");
    if (!selector) {
        goto end;
    }

    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector_local_nonprim = NULL;
    
    selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(selector); //nonprimitive

    // io_k8s_api_apps_v1_stateful_set_spec->service_name
    cJSON *service_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_stateful_set_specJSON, "serviceName");
    if (!service_name) {
        goto end;
    }

    
    if(!cJSON_IsString(service_name))
    {
    goto end; //String
    }

    // io_k8s_api_apps_v1_stateful_set_spec->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_stateful_set_specJSON, "template");
    if (!_template) {
        goto end;
    }

    io_k8s_api_core_v1_pod_template_spec_t *_template_local_nonprim = NULL;
    
    _template_local_nonprim = io_k8s_api_core_v1_pod_template_spec_parseFromJSON(_template); //nonprimitive

    // io_k8s_api_apps_v1_stateful_set_spec->update_strategy
    cJSON *update_strategy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_stateful_set_specJSON, "updateStrategy");
    io_k8s_api_apps_v1_stateful_set_update_strategy_t *update_strategy_local_nonprim = NULL;
    if (update_strategy) { 
    update_strategy_local_nonprim = io_k8s_api_apps_v1_stateful_set_update_strategy_parseFromJSON(update_strategy); //nonprimitive
    }

    // io_k8s_api_apps_v1_stateful_set_spec->volume_claim_templates
    cJSON *volume_claim_templates = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_stateful_set_specJSON, "volumeClaimTemplates");
    list_t *volume_claim_templatesList;
    if (volume_claim_templates) { 
    cJSON *volume_claim_templates_local_nonprimitive;
    if(!cJSON_IsArray(volume_claim_templates)){
        goto end; //nonprimitive container
    }

    volume_claim_templatesList = list_create();

    cJSON_ArrayForEach(volume_claim_templates_local_nonprimitive,volume_claim_templates )
    {
        if(!cJSON_IsObject(volume_claim_templates_local_nonprimitive)){
            goto end;
        }
        io_k8s_api_core_v1_persistent_volume_claim_t *volume_claim_templatesItem = io_k8s_api_core_v1_persistent_volume_claim_parseFromJSON(volume_claim_templates_local_nonprimitive);

        list_addElement(volume_claim_templatesList, volume_claim_templatesItem);
    }
    }


    io_k8s_api_apps_v1_stateful_set_spec_local_var = io_k8s_api_apps_v1_stateful_set_spec_create (
        pod_management_policy ? strdup(pod_management_policy->valuestring) : NULL,
        replicas ? replicas->valuedouble : 0,
        revision_history_limit ? revision_history_limit->valuedouble : 0,
        selector_local_nonprim,
        strdup(service_name->valuestring),
        _template_local_nonprim,
        update_strategy ? update_strategy_local_nonprim : NULL,
        volume_claim_templates ? volume_claim_templatesList : NULL
        );

    return io_k8s_api_apps_v1_stateful_set_spec_local_var;
end:
    if (selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(selector_local_nonprim);
        selector_local_nonprim = NULL;
    }
    if (_template_local_nonprim) {
        io_k8s_api_core_v1_pod_template_spec_free(_template_local_nonprim);
        _template_local_nonprim = NULL;
    }
    if (update_strategy_local_nonprim) {
        io_k8s_api_apps_v1_stateful_set_update_strategy_free(update_strategy_local_nonprim);
        update_strategy_local_nonprim = NULL;
    }
    return NULL;

}
