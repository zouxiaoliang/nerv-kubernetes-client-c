/*
 * io_k8s_api_autoscaling_v1_scale_spec.h
 *
 * ScaleSpec describes the attributes of a scale subresource.
 */

#ifndef _io_k8s_api_autoscaling_v1_scale_spec_H_
#define _io_k8s_api_autoscaling_v1_scale_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v1_scale_spec_t io_k8s_api_autoscaling_v1_scale_spec_t;




typedef struct io_k8s_api_autoscaling_v1_scale_spec_t {
    int replicas; //numeric

} io_k8s_api_autoscaling_v1_scale_spec_t;

io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec_create(
    int replicas
);

void io_k8s_api_autoscaling_v1_scale_spec_free(io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec);

io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec_parseFromJSON(cJSON *io_k8s_api_autoscaling_v1_scale_specJSON);

cJSON *io_k8s_api_autoscaling_v1_scale_spec_convertToJSON(io_k8s_api_autoscaling_v1_scale_spec_t *io_k8s_api_autoscaling_v1_scale_spec);

#endif /* _io_k8s_api_autoscaling_v1_scale_spec_H_ */

