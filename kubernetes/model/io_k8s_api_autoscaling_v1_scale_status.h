/*
 * io_k8s_api_autoscaling_v1_scale_status.h
 *
 * ScaleStatus represents the current status of a scale subresource.
 */

#ifndef _io_k8s_api_autoscaling_v1_scale_status_H_
#define _io_k8s_api_autoscaling_v1_scale_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v1_scale_status_t io_k8s_api_autoscaling_v1_scale_status_t;




typedef struct io_k8s_api_autoscaling_v1_scale_status_t {
    int replicas; //numeric
    char *selector; // string

} io_k8s_api_autoscaling_v1_scale_status_t;

io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status_create(
    int replicas,
    char *selector
);

void io_k8s_api_autoscaling_v1_scale_status_free(io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status);

io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v1_scale_statusJSON);

cJSON *io_k8s_api_autoscaling_v1_scale_status_convertToJSON(io_k8s_api_autoscaling_v1_scale_status_t *io_k8s_api_autoscaling_v1_scale_status);

#endif /* _io_k8s_api_autoscaling_v1_scale_status_H_ */

