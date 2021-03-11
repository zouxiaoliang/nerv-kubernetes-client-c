/*
 * io_k8s_api_batch_v1_job_spec.h
 *
 * JobSpec describes how the job execution will look like.
 */

#ifndef _io_k8s_api_batch_v1_job_spec_H_
#define _io_k8s_api_batch_v1_job_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_batch_v1_job_spec_t io_k8s_api_batch_v1_job_spec_t;

#include "io_k8s_api_core_v1_pod_template_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_batch_v1_job_spec_t {
    long active_deadline_seconds; //numeric
    int backoff_limit; //numeric
    char *completion_mode; // string
    int completions; //numeric
    int manual_selector; //boolean
    int parallelism; //numeric
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector; //model
    struct io_k8s_api_core_v1_pod_template_spec_t *_template; //model
    int ttl_seconds_after_finished; //numeric

} io_k8s_api_batch_v1_job_spec_t;

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
);

void io_k8s_api_batch_v1_job_spec_free(io_k8s_api_batch_v1_job_spec_t *io_k8s_api_batch_v1_job_spec);

io_k8s_api_batch_v1_job_spec_t *io_k8s_api_batch_v1_job_spec_parseFromJSON(cJSON *io_k8s_api_batch_v1_job_specJSON);

cJSON *io_k8s_api_batch_v1_job_spec_convertToJSON(io_k8s_api_batch_v1_job_spec_t *io_k8s_api_batch_v1_job_spec);

#endif /* _io_k8s_api_batch_v1_job_spec_H_ */

