/*
 * io_k8s_api_batch_v1beta1_cron_job_status.h
 *
 * CronJobStatus represents the current state of a cron job.
 */

#ifndef _io_k8s_api_batch_v1beta1_cron_job_status_H_
#define _io_k8s_api_batch_v1beta1_cron_job_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_batch_v1beta1_cron_job_status_t io_k8s_api_batch_v1beta1_cron_job_status_t;

#include "io_k8s_api_core_v1_object_reference.h"



typedef struct io_k8s_api_batch_v1beta1_cron_job_status_t {
    list_t *active; //nonprimitive container
    char *last_schedule_time; //date time

} io_k8s_api_batch_v1beta1_cron_job_status_t;

io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status_create(
    list_t *active,
    char *last_schedule_time
);

void io_k8s_api_batch_v1beta1_cron_job_status_free(io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status);

io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status_parseFromJSON(cJSON *io_k8s_api_batch_v1beta1_cron_job_statusJSON);

cJSON *io_k8s_api_batch_v1beta1_cron_job_status_convertToJSON(io_k8s_api_batch_v1beta1_cron_job_status_t *io_k8s_api_batch_v1beta1_cron_job_status);

#endif /* _io_k8s_api_batch_v1beta1_cron_job_status_H_ */

