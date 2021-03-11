/*
 * io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy.h
 *
 * HPAScalingPolicy is a single policy which must hold true for a specified past interval.
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_H_
#define _io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t;




typedef struct io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t {
    int period_seconds; //numeric
    char *type; // string
    int value; //numeric

} io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t;

io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_create(
    int period_seconds,
    char *type,
    int value
);

void io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_free(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy);

io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policyJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_convertToJSON(io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_t *io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy);

#endif /* _io_k8s_api_autoscaling_v2beta2_hpa_scaling_policy_H_ */

