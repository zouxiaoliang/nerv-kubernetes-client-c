#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_apps_v1_deployment_spec.h"



io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec_create(
    int min_ready_seconds,
    int paused,
    int progress_deadline_seconds,
    int replicas,
    int revision_history_limit,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    io_k8s_api_apps_v1_deployment_strategy_t *strategy,
    io_k8s_api_core_v1_pod_template_spec_t *_template
    ) {
    io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec_local_var = malloc(sizeof(io_k8s_api_apps_v1_deployment_spec_t));
    if (!io_k8s_api_apps_v1_deployment_spec_local_var) {
        return NULL;
    }
    io_k8s_api_apps_v1_deployment_spec_local_var->min_ready_seconds = min_ready_seconds;
    io_k8s_api_apps_v1_deployment_spec_local_var->paused = paused;
    io_k8s_api_apps_v1_deployment_spec_local_var->progress_deadline_seconds = progress_deadline_seconds;
    io_k8s_api_apps_v1_deployment_spec_local_var->replicas = replicas;
    io_k8s_api_apps_v1_deployment_spec_local_var->revision_history_limit = revision_history_limit;
    io_k8s_api_apps_v1_deployment_spec_local_var->selector = selector;
    io_k8s_api_apps_v1_deployment_spec_local_var->strategy = strategy;
    io_k8s_api_apps_v1_deployment_spec_local_var->_template = _template;

    return io_k8s_api_apps_v1_deployment_spec_local_var;
}


void io_k8s_api_apps_v1_deployment_spec_free(io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec) {
    if(NULL == io_k8s_api_apps_v1_deployment_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_apps_v1_deployment_spec->selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_apps_v1_deployment_spec->selector);
        io_k8s_api_apps_v1_deployment_spec->selector = NULL;
    }
    if (io_k8s_api_apps_v1_deployment_spec->strategy) {
        io_k8s_api_apps_v1_deployment_strategy_free(io_k8s_api_apps_v1_deployment_spec->strategy);
        io_k8s_api_apps_v1_deployment_spec->strategy = NULL;
    }
    if (io_k8s_api_apps_v1_deployment_spec->_template) {
        io_k8s_api_core_v1_pod_template_spec_free(io_k8s_api_apps_v1_deployment_spec->_template);
        io_k8s_api_apps_v1_deployment_spec->_template = NULL;
    }
    free(io_k8s_api_apps_v1_deployment_spec);
}

cJSON *io_k8s_api_apps_v1_deployment_spec_convertToJSON(io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_apps_v1_deployment_spec->min_ready_seconds
    if(io_k8s_api_apps_v1_deployment_spec->min_ready_seconds) { 
    if(cJSON_AddNumberToObject(item, "minReadySeconds", io_k8s_api_apps_v1_deployment_spec->min_ready_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_apps_v1_deployment_spec->paused
    if(io_k8s_api_apps_v1_deployment_spec->paused) { 
    if(cJSON_AddBoolToObject(item, "paused", io_k8s_api_apps_v1_deployment_spec->paused) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_apps_v1_deployment_spec->progress_deadline_seconds
    if(io_k8s_api_apps_v1_deployment_spec->progress_deadline_seconds) { 
    if(cJSON_AddNumberToObject(item, "progressDeadlineSeconds", io_k8s_api_apps_v1_deployment_spec->progress_deadline_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_apps_v1_deployment_spec->replicas
    if(io_k8s_api_apps_v1_deployment_spec->replicas) { 
    if(cJSON_AddNumberToObject(item, "replicas", io_k8s_api_apps_v1_deployment_spec->replicas) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_apps_v1_deployment_spec->revision_history_limit
    if(io_k8s_api_apps_v1_deployment_spec->revision_history_limit) { 
    if(cJSON_AddNumberToObject(item, "revisionHistoryLimit", io_k8s_api_apps_v1_deployment_spec->revision_history_limit) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_apps_v1_deployment_spec->selector
    if (!io_k8s_api_apps_v1_deployment_spec->selector) {
        goto fail;
    }
    
    cJSON *selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_apps_v1_deployment_spec->selector);
    if(selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selector", selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_apps_v1_deployment_spec->strategy
    if(io_k8s_api_apps_v1_deployment_spec->strategy) { 
    cJSON *strategy_local_JSON = io_k8s_api_apps_v1_deployment_strategy_convertToJSON(io_k8s_api_apps_v1_deployment_spec->strategy);
    if(strategy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "strategy", strategy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_apps_v1_deployment_spec->_template
    if (!io_k8s_api_apps_v1_deployment_spec->_template) {
        goto fail;
    }
    
    cJSON *_template_local_JSON = io_k8s_api_core_v1_pod_template_spec_convertToJSON(io_k8s_api_apps_v1_deployment_spec->_template);
    if(_template_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "template", _template_local_JSON);
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

io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec_parseFromJSON(cJSON *io_k8s_api_apps_v1_deployment_specJSON){

    io_k8s_api_apps_v1_deployment_spec_t *io_k8s_api_apps_v1_deployment_spec_local_var = NULL;

    // io_k8s_api_apps_v1_deployment_spec->min_ready_seconds
    cJSON *min_ready_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_specJSON, "minReadySeconds");
    if (min_ready_seconds) { 
    if(!cJSON_IsNumber(min_ready_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_apps_v1_deployment_spec->paused
    cJSON *paused = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_specJSON, "paused");
    if (paused) { 
    if(!cJSON_IsBool(paused))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_apps_v1_deployment_spec->progress_deadline_seconds
    cJSON *progress_deadline_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_specJSON, "progressDeadlineSeconds");
    if (progress_deadline_seconds) { 
    if(!cJSON_IsNumber(progress_deadline_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_apps_v1_deployment_spec->replicas
    cJSON *replicas = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_specJSON, "replicas");
    if (replicas) { 
    if(!cJSON_IsNumber(replicas))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_apps_v1_deployment_spec->revision_history_limit
    cJSON *revision_history_limit = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_specJSON, "revisionHistoryLimit");
    if (revision_history_limit) { 
    if(!cJSON_IsNumber(revision_history_limit))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_apps_v1_deployment_spec->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_specJSON, "selector");
    if (!selector) {
        goto end;
    }

    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector_local_nonprim = NULL;
    
    selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(selector); //nonprimitive

    // io_k8s_api_apps_v1_deployment_spec->strategy
    cJSON *strategy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_specJSON, "strategy");
    io_k8s_api_apps_v1_deployment_strategy_t *strategy_local_nonprim = NULL;
    if (strategy) { 
    strategy_local_nonprim = io_k8s_api_apps_v1_deployment_strategy_parseFromJSON(strategy); //nonprimitive
    }

    // io_k8s_api_apps_v1_deployment_spec->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(io_k8s_api_apps_v1_deployment_specJSON, "template");
    if (!_template) {
        goto end;
    }

    io_k8s_api_core_v1_pod_template_spec_t *_template_local_nonprim = NULL;
    
    _template_local_nonprim = io_k8s_api_core_v1_pod_template_spec_parseFromJSON(_template); //nonprimitive


    io_k8s_api_apps_v1_deployment_spec_local_var = io_k8s_api_apps_v1_deployment_spec_create (
        min_ready_seconds ? min_ready_seconds->valuedouble : 0,
        paused ? paused->valueint : 0,
        progress_deadline_seconds ? progress_deadline_seconds->valuedouble : 0,
        replicas ? replicas->valuedouble : 0,
        revision_history_limit ? revision_history_limit->valuedouble : 0,
        selector_local_nonprim,
        strategy ? strategy_local_nonprim : NULL,
        _template_local_nonprim
        );

    return io_k8s_api_apps_v1_deployment_spec_local_var;
end:
    if (selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(selector_local_nonprim);
        selector_local_nonprim = NULL;
    }
    if (strategy_local_nonprim) {
        io_k8s_api_apps_v1_deployment_strategy_free(strategy_local_nonprim);
        strategy_local_nonprim = NULL;
    }
    if (_template_local_nonprim) {
        io_k8s_api_core_v1_pod_template_spec_free(_template_local_nonprim);
        _template_local_nonprim = NULL;
    }
    return NULL;

}
