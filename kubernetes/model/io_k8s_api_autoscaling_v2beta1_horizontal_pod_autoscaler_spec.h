/*
 * io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec.h
 *
 * HorizontalPodAutoscalerSpec describes the desired functionality of the HorizontalPodAutoscaler.
 */

#ifndef _io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_H_
#define _io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t;

#include "io_k8s_api_autoscaling_v2beta1_cross_version_object_reference.h"
#include "io_k8s_api_autoscaling_v2beta1_metric_spec.h"



typedef struct io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t {
    int max_replicas; //numeric
    list_t *metrics; //nonprimitive container
    int min_replicas; //numeric
    struct io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *scale_target_ref; //model

} io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t;

io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_create(
    int max_replicas,
    list_t *metrics,
    int min_replicas,
    io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *scale_target_ref
);

void io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_free(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec);

io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_specJSON);

cJSON *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_convertToJSON(io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec);

#endif /* _io_k8s_api_autoscaling_v2beta1_horizontal_pod_autoscaler_spec_H_ */

