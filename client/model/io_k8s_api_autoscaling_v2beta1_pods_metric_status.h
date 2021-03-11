/*
 * io_k8s_api_autoscaling_v2beta1_pods_metric_status.h
 *
 * PodsMetricStatus indicates the current value of a metric describing each pod in the current scale target (for example, transactions-processed-per-second).
 */

#ifndef _io_k8s_api_autoscaling_v2beta1_pods_metric_status_H_
#define _io_k8s_api_autoscaling_v2beta1_pods_metric_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta1_pods_metric_status_t io_k8s_api_autoscaling_v2beta1_pods_metric_status_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_autoscaling_v2beta1_pods_metric_status_t {
    char *current_average_value; // string
    char *metric_name; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector; //model

} io_k8s_api_autoscaling_v2beta1_pods_metric_status_t;

io_k8s_api_autoscaling_v2beta1_pods_metric_status_t *io_k8s_api_autoscaling_v2beta1_pods_metric_status_create(
    char *current_average_value,
    char *metric_name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector
);

void io_k8s_api_autoscaling_v2beta1_pods_metric_status_free(io_k8s_api_autoscaling_v2beta1_pods_metric_status_t *io_k8s_api_autoscaling_v2beta1_pods_metric_status);

io_k8s_api_autoscaling_v2beta1_pods_metric_status_t *io_k8s_api_autoscaling_v2beta1_pods_metric_status_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_pods_metric_statusJSON);

cJSON *io_k8s_api_autoscaling_v2beta1_pods_metric_status_convertToJSON(io_k8s_api_autoscaling_v2beta1_pods_metric_status_t *io_k8s_api_autoscaling_v2beta1_pods_metric_status);

#endif /* _io_k8s_api_autoscaling_v2beta1_pods_metric_status_H_ */

