/*
 * io_k8s_api_autoscaling_v2beta1_metric_status.h
 *
 * MetricStatus describes the last-read state of a single metric.
 */

#ifndef _io_k8s_api_autoscaling_v2beta1_metric_status_H_
#define _io_k8s_api_autoscaling_v2beta1_metric_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta1_metric_status_t io_k8s_api_autoscaling_v2beta1_metric_status_t;

#include "io_k8s_api_autoscaling_v2beta1_container_resource_metric_status.h"
#include "io_k8s_api_autoscaling_v2beta1_external_metric_status.h"
#include "io_k8s_api_autoscaling_v2beta1_object_metric_status.h"
#include "io_k8s_api_autoscaling_v2beta1_pods_metric_status.h"
#include "io_k8s_api_autoscaling_v2beta1_resource_metric_status.h"



typedef struct io_k8s_api_autoscaling_v2beta1_metric_status_t {
    struct io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_t *container_resource; //model
    struct io_k8s_api_autoscaling_v2beta1_external_metric_status_t *external; //model
    struct io_k8s_api_autoscaling_v2beta1_object_metric_status_t *object; //model
    struct io_k8s_api_autoscaling_v2beta1_pods_metric_status_t *pods; //model
    struct io_k8s_api_autoscaling_v2beta1_resource_metric_status_t *resource; //model
    char *type; // string

} io_k8s_api_autoscaling_v2beta1_metric_status_t;

io_k8s_api_autoscaling_v2beta1_metric_status_t *io_k8s_api_autoscaling_v2beta1_metric_status_create(
    io_k8s_api_autoscaling_v2beta1_container_resource_metric_status_t *container_resource,
    io_k8s_api_autoscaling_v2beta1_external_metric_status_t *external,
    io_k8s_api_autoscaling_v2beta1_object_metric_status_t *object,
    io_k8s_api_autoscaling_v2beta1_pods_metric_status_t *pods,
    io_k8s_api_autoscaling_v2beta1_resource_metric_status_t *resource,
    char *type
);

void io_k8s_api_autoscaling_v2beta1_metric_status_free(io_k8s_api_autoscaling_v2beta1_metric_status_t *io_k8s_api_autoscaling_v2beta1_metric_status);

io_k8s_api_autoscaling_v2beta1_metric_status_t *io_k8s_api_autoscaling_v2beta1_metric_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_metric_statusJSON);

cJSON *io_k8s_api_autoscaling_v2beta1_metric_status_convertToJSON(io_k8s_api_autoscaling_v2beta1_metric_status_t *io_k8s_api_autoscaling_v2beta1_metric_status);

#endif /* _io_k8s_api_autoscaling_v2beta1_metric_status_H_ */

