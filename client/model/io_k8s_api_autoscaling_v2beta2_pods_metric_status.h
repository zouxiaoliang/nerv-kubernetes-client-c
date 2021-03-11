/*
 * io_k8s_api_autoscaling_v2beta2_pods_metric_status.h
 *
 * PodsMetricStatus indicates the current value of a metric describing each pod in the current scale target (for example, transactions-processed-per-second).
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_pods_metric_status_H_
#define _io_k8s_api_autoscaling_v2beta2_pods_metric_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_pods_metric_status_t io_k8s_api_autoscaling_v2beta2_pods_metric_status_t;

#include "io_k8s_api_autoscaling_v2beta2_metric_identifier.h"
#include "io_k8s_api_autoscaling_v2beta2_metric_value_status.h"



typedef struct io_k8s_api_autoscaling_v2beta2_pods_metric_status_t {
    struct io_k8s_api_autoscaling_v2beta2_metric_value_status_t *current; //model
    struct io_k8s_api_autoscaling_v2beta2_metric_identifier_t *metric; //model

} io_k8s_api_autoscaling_v2beta2_pods_metric_status_t;

io_k8s_api_autoscaling_v2beta2_pods_metric_status_t *io_k8s_api_autoscaling_v2beta2_pods_metric_status_create(
    io_k8s_api_autoscaling_v2beta2_metric_value_status_t *current,
    io_k8s_api_autoscaling_v2beta2_metric_identifier_t *metric
);

void io_k8s_api_autoscaling_v2beta2_pods_metric_status_free(io_k8s_api_autoscaling_v2beta2_pods_metric_status_t *io_k8s_api_autoscaling_v2beta2_pods_metric_status);

io_k8s_api_autoscaling_v2beta2_pods_metric_status_t *io_k8s_api_autoscaling_v2beta2_pods_metric_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_pods_metric_statusJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_pods_metric_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_pods_metric_status_t *io_k8s_api_autoscaling_v2beta2_pods_metric_status);

#endif /* _io_k8s_api_autoscaling_v2beta2_pods_metric_status_H_ */

