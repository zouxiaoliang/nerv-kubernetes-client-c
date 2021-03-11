/*
 * io_k8s_api_autoscaling_v2beta2_pods_metric_source.h
 *
 * PodsMetricSource indicates how to scale on a metric describing each pod in the current scale target (for example, transactions-processed-per-second). The values will be averaged together before being compared to the target value.
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_pods_metric_source_H_
#define _io_k8s_api_autoscaling_v2beta2_pods_metric_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_pods_metric_source_t io_k8s_api_autoscaling_v2beta2_pods_metric_source_t;

#include "io_k8s_api_autoscaling_v2beta2_metric_identifier.h"
#include "io_k8s_api_autoscaling_v2beta2_metric_target.h"



typedef struct io_k8s_api_autoscaling_v2beta2_pods_metric_source_t {
    struct io_k8s_api_autoscaling_v2beta2_metric_identifier_t *metric; //model
    struct io_k8s_api_autoscaling_v2beta2_metric_target_t *target; //model

} io_k8s_api_autoscaling_v2beta2_pods_metric_source_t;

io_k8s_api_autoscaling_v2beta2_pods_metric_source_t *io_k8s_api_autoscaling_v2beta2_pods_metric_source_create(
    io_k8s_api_autoscaling_v2beta2_metric_identifier_t *metric,
    io_k8s_api_autoscaling_v2beta2_metric_target_t *target
);

void io_k8s_api_autoscaling_v2beta2_pods_metric_source_free(io_k8s_api_autoscaling_v2beta2_pods_metric_source_t *io_k8s_api_autoscaling_v2beta2_pods_metric_source);

io_k8s_api_autoscaling_v2beta2_pods_metric_source_t *io_k8s_api_autoscaling_v2beta2_pods_metric_source_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_pods_metric_sourceJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_pods_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta2_pods_metric_source_t *io_k8s_api_autoscaling_v2beta2_pods_metric_source);

#endif /* _io_k8s_api_autoscaling_v2beta2_pods_metric_source_H_ */

