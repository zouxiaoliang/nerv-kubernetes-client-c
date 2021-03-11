/*
 * io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec.h
 *
 * specification of a horizontal pod autoscaler.
 */

#ifndef _io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_H_
#define _io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t;

#include "io_k8s_api_autoscaling_v1_cross_version_object_reference.h"



typedef struct io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t {
    int max_replicas; //numeric
    int min_replicas; //numeric
    struct io_k8s_api_autoscaling_v1_cross_version_object_reference_t *scale_target_ref; //model
    int target_cpu_utilization_percentage; //numeric

} io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t;

io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_create(
    int max_replicas,
    int min_replicas,
    io_k8s_api_autoscaling_v1_cross_version_object_reference_t *scale_target_ref,
    int target_cpu_utilization_percentage
);

void io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_free(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec);

io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_parseFromJSON(cJSON *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_specJSON);

cJSON *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_convertToJSON(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec);

#endif /* _io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_spec_H_ */

