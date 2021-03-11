/*
 * io_k8s_api_batch_v1beta1_cron_job_spec.h
 *
 * CronJobSpec describes how the job execution will look like and when it will actually run.
 */

#ifndef _io_k8s_api_batch_v1beta1_cron_job_spec_H_
#define _io_k8s_api_batch_v1beta1_cron_job_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_batch_v1beta1_cron_job_spec_t io_k8s_api_batch_v1beta1_cron_job_spec_t;

#include "io_k8s_api_batch_v1beta1_job_template_spec.h"



typedef struct io_k8s_api_batch_v1beta1_cron_job_spec_t {
    char *concurrency_policy; // string
    int failed_jobs_history_limit; //numeric
    struct io_k8s_api_batch_v1beta1_job_template_spec_t *job_template; //model
    char *schedule; // string
    long starting_deadline_seconds; //numeric
    int successful_jobs_history_limit; //numeric
    int suspend; //boolean

} io_k8s_api_batch_v1beta1_cron_job_spec_t;

io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec_create(
    char *concurrency_policy,
    int failed_jobs_history_limit,
    io_k8s_api_batch_v1beta1_job_template_spec_t *job_template,
    char *schedule,
    long starting_deadline_seconds,
    int successful_jobs_history_limit,
    int suspend
);

void io_k8s_api_batch_v1beta1_cron_job_spec_free(io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec);

io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec_parseFromJSON(cJSON *io_k8s_api_batch_v1beta1_cron_job_specJSON);

cJSON *io_k8s_api_batch_v1beta1_cron_job_spec_convertToJSON(io_k8s_api_batch_v1beta1_cron_job_spec_t *io_k8s_api_batch_v1beta1_cron_job_spec);

#endif /* _io_k8s_api_batch_v1beta1_cron_job_spec_H_ */

