/*
 * io_k8s_api_batch_v1_job_status.h
 *
 * JobStatus represents the current state of a Job.
 */

#ifndef _io_k8s_api_batch_v1_job_status_H_
#define _io_k8s_api_batch_v1_job_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_batch_v1_job_status_t io_k8s_api_batch_v1_job_status_t;

#include "io_k8s_api_batch_v1_job_condition.h"



typedef struct io_k8s_api_batch_v1_job_status_t {
    int active; //numeric
    char *completed_indexes; // string
    char *completion_time; //date time
    list_t *conditions; //nonprimitive container
    int failed; //numeric
    char *start_time; //date time
    int succeeded; //numeric

} io_k8s_api_batch_v1_job_status_t;

io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status_create(
    int active,
    char *completed_indexes,
    char *completion_time,
    list_t *conditions,
    int failed,
    char *start_time,
    int succeeded
);

void io_k8s_api_batch_v1_job_status_free(io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status);

io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status_parseFromJSON(cJSON *io_k8s_api_batch_v1_job_statusJSON);

cJSON *io_k8s_api_batch_v1_job_status_convertToJSON(io_k8s_api_batch_v1_job_status_t *io_k8s_api_batch_v1_job_status);

#endif /* _io_k8s_api_batch_v1_job_status_H_ */

