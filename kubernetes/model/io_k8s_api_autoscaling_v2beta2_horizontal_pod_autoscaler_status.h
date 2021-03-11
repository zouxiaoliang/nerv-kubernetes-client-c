/*
 * io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status.h
 *
 * HorizontalPodAutoscalerStatus describes the current status of a horizontal pod autoscaler.
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_H_
#define _io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t;

#include "io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_condition.h"
#include "io_k8s_api_autoscaling_v2beta2_metric_status.h"



typedef struct io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t {
    list_t *conditions; //nonprimitive container
    list_t *current_metrics; //nonprimitive container
    int current_replicas; //numeric
    int desired_replicas; //numeric
    char *last_scale_time; //date time
    long observed_generation; //numeric

} io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t;

io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_create(
    list_t *conditions,
    list_t *current_metrics,
    int current_replicas,
    int desired_replicas,
    char *last_scale_time,
    long observed_generation
);

void io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status);

io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_statusJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status);

#endif /* _io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_H_ */

