/*
 * io_k8s_api_autoscaling_v2beta2_metric_spec.h
 *
 * MetricSpec specifies how to scale based on a single metric (only &#x60;type&#x60; and one other matching field should be set at once).
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_metric_spec_H_
#define _io_k8s_api_autoscaling_v2beta2_metric_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_metric_spec_t io_k8s_api_autoscaling_v2beta2_metric_spec_t;

#include "io_k8s_api_autoscaling_v2beta2_container_resource_metric_source.h"
#include "io_k8s_api_autoscaling_v2beta2_external_metric_source.h"
#include "io_k8s_api_autoscaling_v2beta2_object_metric_source.h"
#include "io_k8s_api_autoscaling_v2beta2_pods_metric_source.h"
#include "io_k8s_api_autoscaling_v2beta2_resource_metric_source.h"



typedef struct io_k8s_api_autoscaling_v2beta2_metric_spec_t {
    struct io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t *container_resource; //model
    struct io_k8s_api_autoscaling_v2beta2_external_metric_source_t *external; //model
    struct io_k8s_api_autoscaling_v2beta2_object_metric_source_t *object; //model
    struct io_k8s_api_autoscaling_v2beta2_pods_metric_source_t *pods; //model
    struct io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *resource; //model
    char *type; // string

} io_k8s_api_autoscaling_v2beta2_metric_spec_t;

io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec_create(
    io_k8s_api_autoscaling_v2beta2_container_resource_metric_source_t *container_resource,
    io_k8s_api_autoscaling_v2beta2_external_metric_source_t *external,
    io_k8s_api_autoscaling_v2beta2_object_metric_source_t *object,
    io_k8s_api_autoscaling_v2beta2_pods_metric_source_t *pods,
    io_k8s_api_autoscaling_v2beta2_resource_metric_source_t *resource,
    char *type
);

void io_k8s_api_autoscaling_v2beta2_metric_spec_free(io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec);

io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_metric_specJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_metric_spec_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_spec_t *io_k8s_api_autoscaling_v2beta2_metric_spec);

#endif /* _io_k8s_api_autoscaling_v2beta2_metric_spec_H_ */

