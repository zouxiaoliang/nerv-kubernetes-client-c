/*
 * io_k8s_api_autoscaling_v2beta2_metric_value_status.h
 *
 * MetricValueStatus holds the current value for a metric
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_metric_value_status_H_
#define _io_k8s_api_autoscaling_v2beta2_metric_value_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_metric_value_status_t io_k8s_api_autoscaling_v2beta2_metric_value_status_t;




typedef struct io_k8s_api_autoscaling_v2beta2_metric_value_status_t {
    int average_utilization; //numeric
    char *average_value; // string
    char *value; // string

} io_k8s_api_autoscaling_v2beta2_metric_value_status_t;

io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status_create(
    int average_utilization,
    char *average_value,
    char *value
);

void io_k8s_api_autoscaling_v2beta2_metric_value_status_free(io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status);

io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_metric_value_statusJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_metric_value_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_value_status_t *io_k8s_api_autoscaling_v2beta2_metric_value_status);

#endif /* _io_k8s_api_autoscaling_v2beta2_metric_value_status_H_ */

