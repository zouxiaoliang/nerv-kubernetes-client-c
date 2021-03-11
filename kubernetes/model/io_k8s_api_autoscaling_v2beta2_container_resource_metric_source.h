/*
 * io_k8s_api_autoscaling_v2beta2_container_resource_metric_source.h
 *
 * ContainerResourceMetricSource indicates how to scale on a resource metric known to Kubernetes, as specified in requests and limits, describing each pod in the current scale target (e.g. CPU or memory).  The values will be averaged together before being compared to the target.  Such metrics are built in to Kubernetes, and have special scaling options on top of those available to normal per-pod metrics using the \&quot;pods\&quot; source.  Only one \&quot;target\&quot; type should be set.
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_H_
#define _io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t;

#include "io_k8s_api_autoscaling_v2beta2_metric_target.h"



typedef struct io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t {
    char *container; // string
    char *name; // string
    struct io_k8s_api_autoscaling_v2beta2_metric_target_t *target; //model

} io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t;

io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_create(
    char *container,
    char *name,
    io_k8s_api_autoscaling_v2beta2_metric_target_t *target
);

void io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_free(io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_container_resource_metric_source);

io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_container_resource_metric_sourceJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t *io_k8s_api_autoscaling_v2beta2_container_resource_metric_source);

#endif /* _io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_H_ */

