/*
 * io_k8s_api_autoscaling_v2beta2_metric_target.h
 *
 * MetricTarget defines the target value, average value, or average utilization of a specific metric
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_metric_target_H_
#define _io_k8s_api_autoscaling_v2beta2_metric_target_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_metric_target_t io_k8s_api_autoscaling_v2beta2_metric_target_t;




typedef struct io_k8s_api_autoscaling_v2beta2_metric_target_t {
    int average_utilization; //numeric
    char *average_value; // string
    char *type; // string
    char *value; // string

} io_k8s_api_autoscaling_v2beta2_metric_target_t;

io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target_create(
    int average_utilization,
    char *average_value,
    char *type,
    char *value
);

void io_k8s_api_autoscaling_v2beta2_metric_target_free(io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target);

io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_metric_targetJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_metric_target_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_target_t *io_k8s_api_autoscaling_v2beta2_metric_target);

#endif /* _io_k8s_api_autoscaling_v2beta2_metric_target_H_ */

