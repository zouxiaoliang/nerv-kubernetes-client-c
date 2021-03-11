#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_batch_v1_job_spec.h"



io_k8s_api_batch_v1_job_spec_t *io_k8s_api_batch_v1_job_spec_create(
    long active_deadline_seconds,
    int backoff_limit,
    char *completion_mode,
    int completions,
    int manual_selector,
    int parallelism,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    io_k8s_api_core_v1_pod_template_spec_t *_template,
    int ttl_seconds_after_finished
    ) {
    io_k8s_api_batch_v1_job_spec_t *io_k8s_api_batch_v1_job_spec_local_var = malloc(sizeof(io_k8s_api_batch_v1_job_spec_t));
    if (!io_k8s_api_batch_v1_job_spec_local_var) {
        return NULL;
    }
    io_k8s_api_batch_v1_job_spec_local_var->active_deadline_seconds = active_deadline_seconds;
    io_k8s_api_batch_v1_job_spec_local_var->backoff_limit = backoff_limit;
    io_k8s_api_batch_v1_job_spec_local_var->completion_mode = completion_mode;
    io_k8s_api_batch_v1_job_spec_local_var->completions = completions;
    io_k8s_api_batch_v1_job_spec_local_var->manual_selector = manual_selector;
    io_k8s_api_batch_v1_job_spec_local_var->parallelism = parallelism;
    io_k8s_api_batch_v1_job_spec_local_var->selector = selector;
    io_k8s_api_batch_v1_job_spec_local_var->_template = _template;
    io_k8s_api_batch_v1_job_spec_local_var->ttl_seconds_after_finished = ttl_seconds_after_finished;

    return io_k8s_api_batch_v1_job_spec_local_var;
}


void io_k8s_api_batch_v1_job_spec_free(io_k8s_api_batch_v1_job_spec_t *io_k8s_api_batch_v1_job_spec) {
    if(NULL == io_k8s_api_batch_v1_job_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_batch_v1_job_spec->completion_mode) {
        free(io_k8s_api_batch_v1_job_spec->completion_mode);
        io_k8s_api_batch_v1_job_spec->completion_mode = NULL;
    }
    if (io_k8s_api_batch_v1_job_spec->selector) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_api_batch_v1_job_spec->selector);
        io_k8s_api_batch_v1_job_spec->selector = NULL;
    }
    if (io_k8s_api_batch_v1_job_spec->_template) {
        io_k8s_api_core_v1_pod_template_spec_free(io_k8s_api_batch_v1_job_spec->_template);
        io_k8s_api_batch_v1_job_spec->_template = NULL;
    }
    free(io_k8s_api_batch_v1_job_spec);
}

cJSON *io_k8s_api_batch_v1_job_spec_convertToJSON(io_k8s_api_batch_v1_job_spec_t *io_k8s_api_batch_v1_job_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_batch_v1_job_spec->active_deadline_seconds
    if(io_k8s_api_batch_v1_job_spec->active_deadline_seconds) { 
    if(cJSON_AddNumberToObject(item, "activeDeadlineSeconds", io_k8s_api_batch_v1_job_spec->active_deadline_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_batch_v1_job_spec->backoff_limit
    if(io_k8s_api_batch_v1_job_spec->backoff_limit) { 
    if(cJSON_AddNumberToObject(item, "backoffLimit", io_k8s_api_batch_v1_job_spec->backoff_limit) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_batch_v1_job_spec->completion_mode
    if(io_k8s_api_batch_v1_job_spec->completion_mode) { 
    if(cJSON_AddStringToObject(item, "completionMode", io_k8s_api_batch_v1_job_spec->completion_mode) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_batch_v1_job_spec->completions
    if(io_k8s_api_batch_v1_job_spec->completions) { 
    if(cJSON_AddNumberToObject(item, "completions", io_k8s_api_batch_v1_job_spec->completions) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_batch_v1_job_spec->manual_selector
    if(io_k8s_api_batch_v1_job_spec->manual_selector) { 
    if(cJSON_AddBoolToObject(item, "manualSelector", io_k8s_api_batch_v1_job_spec->manual_selector) == NULL) {
    goto fail; //Bool
    }
     } 


    // io_k8s_api_batch_v1_job_spec->parallelism
    if(io_k8s_api_batch_v1_job_spec->parallelism) { 
    if(cJSON_AddNumberToObject(item, "parallelism", io_k8s_api_batch_v1_job_spec->parallelism) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_batch_v1_job_spec->selector
    if(io_k8s_api_batch_v1_job_spec->selector) { 
    cJSON *selector_local_JSON = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_api_batch_v1_job_spec->selector);
    if(selector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selector", selector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_batch_v1_job_spec->_template
    if (!io_k8s_api_batch_v1_job_spec->_template) {
        goto fail;
    }
    
    cJSON *_template_local_JSON = io_k8s_api_core_v1_pod_template_spec_convertToJSON(io_k8s_api_batch_v1_job_spec->_template);
    if(_template_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "template", _template_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_batch_v1_job_spec->ttl_seconds_after_finished
    if(io_k8s_api_batch_v1_job_spec->ttl_seconds_after_finished) { 
    if(cJSON_AddNumberToObject(item, "ttlSecondsAfterFinished", io_k8s_api_batch_v1_job_spec->ttl_seconds_after_finished) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_batch_v1_job_spec_t *io_k8s_api_batch_v1_job_spec_parseFromJSON(cJSON *io_k8s_api_batch_v1_job_specJSON){

    io_k8s_api_batch_v1_job_spec_t *io_k8s_api_batch_v1_job_spec_local_var = NULL;

    // io_k8s_api_batch_v1_job_spec->active_deadline_seconds
    cJSON *active_deadline_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_specJSON, "activeDeadlineSeconds");
    if (active_deadline_seconds) { 
    if(!cJSON_IsNumber(active_deadline_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_batch_v1_job_spec->backoff_limit
    cJSON *backoff_limit = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_specJSON, "backoffLimit");
    if (backoff_limit) { 
    if(!cJSON_IsNumber(backoff_limit))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_batch_v1_job_spec->completion_mode
    cJSON *completion_mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_specJSON, "completionMode");
    if (completion_mode) { 
    if(!cJSON_IsString(completion_mode))
    {
    goto end; //String
    }
    }

    // io_k8s_api_batch_v1_job_spec->completions
    cJSON *completions = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_specJSON, "completions");
    if (completions) { 
    if(!cJSON_IsNumber(completions))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_batch_v1_job_spec->manual_selector
    cJSON *manual_selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_specJSON, "manualSelector");
    if (manual_selector) { 
    if(!cJSON_IsBool(manual_selector))
    {
    goto end; //Bool
    }
    }

    // io_k8s_api_batch_v1_job_spec->parallelism
    cJSON *parallelism = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_specJSON, "parallelism");
    if (parallelism) { 
    if(!cJSON_IsNumber(parallelism))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_batch_v1_job_spec->selector
    cJSON *selector = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_specJSON, "selector");
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector_local_nonprim = NULL;
    if (selector) { 
    selector_local_nonprim = io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(selector); //nonprimitive
    }

    // io_k8s_api_batch_v1_job_spec->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_specJSON, "template");
    if (!_template) {
        goto end;
    }

    io_k8s_api_core_v1_pod_template_spec_t *_template_local_nonprim = NULL;
    
    _template_local_nonprim = io_k8s_api_core_v1_pod_template_spec_parseFromJSON(_template); //nonprimitive

    // io_k8s_api_batch_v1_job_spec->ttl_seconds_after_finished
    cJSON *ttl_seconds_after_finished = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1_job_specJSON, "ttlSecondsAfterFinished");
    if (ttl_seconds_after_finished) { 
    if(!cJSON_IsNumber(ttl_seconds_after_finished))
    {
    goto end; //Numeric
    }
    }


    io_k8s_api_batch_v1_job_spec_local_var = io_k8s_api_batch_v1_job_spec_create (
        active_deadline_seconds ? active_deadline_seconds->valuedouble : 0,
        backoff_limit ? backoff_limit->valuedouble : 0,
        completion_mode ? strdup(completion_mode->valuestring) : NULL,
        completions ? completions->valuedouble : 0,
        manual_selector ? manual_selector->valueint : 0,
        parallelism ? parallelism->valuedouble : 0,
        selector ? selector_local_nonprim : NULL,
        _template_local_nonprim,
        ttl_seconds_after_finished ? ttl_seconds_after_finished->valuedouble : 0
        );

    return io_k8s_api_batch_v1_job_spec_local_var;
end:
    if (selector_local_nonprim) {
        io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(selector_local_nonprim);
        selector_local_nonprim = NULL;
    }
    if (_template_local_nonprim) {
        io_k8s_api_core_v1_pod_template_spec_free(_template_local_nonprim);
        _template_local_nonprim = NULL;
    }
    return NULL;

}
