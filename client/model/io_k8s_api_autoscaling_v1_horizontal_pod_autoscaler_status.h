/*
 * io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status.h
 *
 * current status of a horizontal pod autoscaler
 */

#ifndef _io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_H_
#define _io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t;




typedef struct io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t {
    int current_cpu_utilization_percentage; //numeric
    int current_replicas; //numeric
    int desired_replicas; //numeric
    char *last_scale_time; //date time
    long observed_generation; //numeric

} io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t;

io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_create(
    int current_cpu_utilization_percentage,
    int current_replicas,
    int desired_replicas,
    char *last_scale_time,
    long observed_generation
);

void io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_free(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status);

io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_statusJSON);

cJSON *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_convertToJSON(io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_t *io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status);

#endif /* _io_k8s_api_autoscaling_v1_horizontal_pod_autoscaler_status_H_ */

