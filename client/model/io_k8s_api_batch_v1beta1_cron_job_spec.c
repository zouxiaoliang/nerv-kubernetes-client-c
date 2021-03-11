#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_batch_v1beta1_cron_job_spec.h"



io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec_create(
    char *concurrency_policy,
    int failed_jobs_history_limit,
    io_k8s_api_batch_v1beta1_job_template_spec_t *job_template,
    char *schedule,
    long starting_deadline_seconds,
    int successful_jobs_history_limit,
    int suspend
    ) {
    io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec_local_var = malloc(sizeof(io_k8s_api_batch_v1beta1_cron_job_spec_t));
    if (!io_k8s_api_batch_v1beta1_cron_job_spec_local_var) {
        return NULL;
    }
    io_k8s_api_batch_v1beta1_cron_job_spec_local_var->concurrency_policy = concurrency_policy;
    io_k8s_api_batch_v1beta1_cron_job_spec_local_var->failed_jobs_history_limit = failed_jobs_history_limit;
    io_k8s_api_batch_v1beta1_cron_job_spec_local_var->job_template = job_template;
    io_k8s_api_batch_v1beta1_cron_job_spec_local_var->schedule = schedule;
    io_k8s_api_batch_v1beta1_cron_job_spec_local_var->starting_deadline_seconds = starting_deadline_seconds;
    io_k8s_api_batch_v1beta1_cron_job_spec_local_var->successful_jobs_history_limit = successful_jobs_history_limit;
    io_k8s_api_batch_v1beta1_cron_job_spec_local_var->suspend = suspend;

    return io_k8s_api_batch_v1beta1_cron_job_spec_local_var;
}


void io_k8s_api_batch_v1beta1_cron_job_spec_free(io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec) {
    if(NULL == io_k8s_api_batch_v1beta1_cron_job_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_batch_v1beta1_cron_job_spec->concurrency_policy) {
        free(io_k8s_api_batch_v1beta1_cron_job_spec->concurrency_policy);
        io_k8s_api_batch_v1beta1_cron_job_spec->concurrency_policy = NULL;
    }
    if (io_k8s_api_batch_v1beta1_cron_job_spec->job_template) {
        io_k8s_api_batch_v1beta1_job_template_spec_free(io_k8s_api_batch_v1beta1_cron_job_spec->job_template);
        io_k8s_api_batch_v1beta1_cron_job_spec->job_template = NULL;
    }
    if (io_k8s_api_batch_v1beta1_cron_job_spec->schedule) {
        free(io_k8s_api_batch_v1beta1_cron_job_spec->schedule);
        io_k8s_api_batch_v1beta1_cron_job_spec->schedule = NULL;
    }
    free(io_k8s_api_batch_v1beta1_cron_job_spec);
}

cJSON *io_k8s_api_batch_v1beta1_cron_job_spec_convertToJSON(io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_batch_v1beta1_cron_job_spec->concurrency_policy
    if(io_k8s_api_batch_v1beta1_cron_job_spec->concurrency_policy) { 
    if(cJSON_AddStringToObject(item, "concurrencyPolicy", io_k8s_api_batch_v1beta1_cron_job_spec->concurrency_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_batch_v1beta1_cron_job_spec->failed_jobs_history_limit
    if(io_k8s_api_batch_v1beta1_cron_job_spec->failed_jobs_history_limit) { 
    if(cJSON_AddNumberToObject(item, "failedJobsHistoryLimit", io_k8s_api_batch_v1beta1_cron_job_spec->failed_jobs_history_limit) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_batch_v1beta1_cron_job_spec->job_template
    if (!io_k8s_api_batch_v1beta1_cron_job_spec->job_template) {
        goto fail;
    }
    
    cJSON *job_template_local_JSON = io_k8s_api_batch_v1beta1_job_template_spec_convertToJSON(io_k8s_api_batch_v1beta1_cron_job_spec->job_template);
    if(job_template_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "jobTemplate", job_template_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // io_k8s_api_batch_v1beta1_cron_job_spec->schedule
    if (!io_k8s_api_batch_v1beta1_cron_job_spec->schedule) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "schedule", io_k8s_api_batch_v1beta1_cron_job_spec->schedule) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_batch_v1beta1_cron_job_spec->starting_deadline_seconds
    if(io_k8s_api_batch_v1beta1_cron_job_spec->starting_deadline_seconds) { 
    if(cJSON_AddNumberToObject(item, "startingDeadlineSeconds", io_k8s_api_batch_v1beta1_cron_job_spec->starting_deadline_seconds) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_batch_v1beta1_cron_job_spec->successful_jobs_history_limit
    if(io_k8s_api_batch_v1beta1_cron_job_spec->successful_jobs_history_limit) { 
    if(cJSON_AddNumberToObject(item, "successfulJobsHistoryLimit", io_k8s_api_batch_v1beta1_cron_job_spec->successful_jobs_history_limit) == NULL) {
    goto fail; //Numeric
    }
     } 


    // io_k8s_api_batch_v1beta1_cron_job_spec->suspend
    if(io_k8s_api_batch_v1beta1_cron_job_spec->suspend) { 
    if(cJSON_AddBoolToObject(item, "suspend", io_k8s_api_batch_v1beta1_cron_job_spec->suspend) == NULL) {
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

io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec_parseFromJSON(cJSON *io_k8s_api_batch_v1beta1_cron_job_specJSON){

    io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec_local_var = NULL;

    // io_k8s_api_batch_v1beta1_cron_job_spec->concurrency_policy
    cJSON *concurrency_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1beta1_cron_job_specJSON, "concurrencyPolicy");
    if (concurrency_policy) { 
    if(!cJSON_IsString(concurrency_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_batch_v1beta1_cron_job_spec->failed_jobs_history_limit
    cJSON *failed_jobs_history_limit = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1beta1_cron_job_specJSON, "failedJobsHistoryLimit");
    if (failed_jobs_history_limit) { 
    if(!cJSON_IsNumber(failed_jobs_history_limit))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_batch_v1beta1_cron_job_spec->job_template
    cJSON *job_template = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1beta1_cron_job_specJSON, "jobTemplate");
    if (!job_template) {
        goto end;
    }

    io_k8s_api_batch_v1beta1_job_template_spec_t *job_template_local_nonprim = NULL;
    
    job_template_local_nonprim = io_k8s_api_batch_v1beta1_job_template_spec_parseFromJSON(job_template); //nonprimitive

    // io_k8s_api_batch_v1beta1_cron_job_spec->schedule
    cJSON *schedule = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1beta1_cron_job_specJSON, "schedule");
    if (!schedule) {
        goto end;
    }

    
    if(!cJSON_IsString(schedule))
    {
    goto end; //String
    }

    // io_k8s_api_batch_v1beta1_cron_job_spec->starting_deadline_seconds
    cJSON *starting_deadline_seconds = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1beta1_cron_job_specJSON, "startingDeadlineSeconds");
    if (starting_deadline_seconds) { 
    if(!cJSON_IsNumber(starting_deadline_seconds))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_batch_v1beta1_cron_job_spec->successful_jobs_history_limit
    cJSON *successful_jobs_history_limit = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1beta1_cron_job_specJSON, "successfulJobsHistoryLimit");
    if (successful_jobs_history_limit) { 
    if(!cJSON_IsNumber(successful_jobs_history_limit))
    {
    goto end; //Numeric
    }
    }

    // io_k8s_api_batch_v1beta1_cron_job_spec->suspend
    cJSON *suspend = cJSON_GetObjectItemCaseSensitive(io_k8s_api_batch_v1beta1_cron_job_specJSON, "suspend");
    if (suspend) { 
    if(!cJSON_IsBool(suspend))
    {
    goto end; //Bool
    }
    }


    io_k8s_api_batch_v1beta1_cron_job_spec_local_var = io_k8s_api_batch_v1beta1_cron_job_spec_create (
        concurrency_policy ? strdup(concurrency_policy->valuestring) : NULL,
        failed_jobs_history_limit ? failed_jobs_history_limit->valuedouble : 0,
        job_template_local_nonprim,
        strdup(schedule->valuestring),
        starting_deadline_seconds ? starting_deadline_seconds->valuedouble : 0,
        successful_jobs_history_limit ? successful_jobs_history_limit->valuedouble : 0,
        suspend ? suspend->valueint : 0
        );

    return io_k8s_api_batch_v1beta1_cron_job_spec_local_var;
end:
    if (job_template_local_nonprim) {
        io_k8s_api_batch_v1beta1_job_template_spec_free(job_template_local_nonprim);
        job_template_local_nonprim = NULL;
    }
    return NULL;

}
