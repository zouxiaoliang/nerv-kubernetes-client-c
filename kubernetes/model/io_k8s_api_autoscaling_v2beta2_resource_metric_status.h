/*
 * io_k8s_api_autoscaling_v2beta2_resource_metric_status.h
 *
 * ResourceMetricStatus indicates the current value of a resource metric known to Kubernetes, as specified in requests and limits, describing each pod in the current scale target (e.g. CPU or memory).  Such metrics are built in to Kubernetes, and have special scaling options on top of those available to normal per-pod metrics using the \&quot;pods\&quot; source.
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_resource_metric_status_H_
#define _io_k8s_api_autoscaling_v2beta2_resource_metric_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_resource_metric_status_t io_k8s_api_autoscaling_v2beta2_resource_metric_status_t;

#include "io_k8s_api_autoscaling_v2beta2_metric_value_status.h"



typedef struct io_k8s_api_autoscaling_v2beta2_resource_metric_status_t {
    struct io_k8s_api_autoscaling_v2beta2_metric_value_status_t *current; //model
    char *name; // string

} io_k8s_api_autoscaling_v2beta2_resource_metric_status_t;

io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status_create(
    io_k8s_api_autoscaling_v2beta2_metric_value_status_t *current,
    char *name
);

void io_k8s_api_autoscaling_v2beta2_resource_metric_status_free(io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status);

io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_resource_metric_statusJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_resource_metric_status_convertToJSON(io_k8s_api_autoscaling_v2beta2_resource_metric_status_t *io_k8s_api_autoscaling_v2beta2_resource_metric_status);

#endif /* _io_k8s_api_autoscaling_v2beta2_resource_metric_status_H_ */

