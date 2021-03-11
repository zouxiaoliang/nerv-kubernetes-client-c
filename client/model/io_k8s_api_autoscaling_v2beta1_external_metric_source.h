/*
 * io_k8s_api_autoscaling_v2beta1_external_metric_source.h
 *
 * ExternalMetricSource indicates how to scale on a metric not associated with any Kubernetes object (for example length of queue in cloud messaging service, or QPS from loadbalancer running outside of cluster). Exactly one \&quot;target\&quot; type should be set.
 */

#ifndef _io_k8s_api_autoscaling_v2beta1_external_metric_source_H_
#define _io_k8s_api_autoscaling_v2beta1_external_metric_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta1_external_metric_source_t io_k8s_api_autoscaling_v2beta1_external_metric_source_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_autoscaling_v2beta1_external_metric_source_t {
    char *metric_name; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *metric_selector; //model
    char *target_average_value; // string
    char *target_value; // string

} io_k8s_api_autoscaling_v2beta1_external_metric_source_t;

io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source_create(
    char *metric_name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *metric_selector,
    char *target_average_value,
    char *target_value
);

void io_k8s_api_autoscaling_v2beta1_external_metric_source_free(io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source);

io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_external_metric_sourceJSON);

cJSON *io_k8s_api_autoscaling_v2beta1_external_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta1_external_metric_source_t *io_k8s_api_autoscaling_v2beta1_external_metric_source);

#endif /* _io_k8s_api_autoscaling_v2beta1_external_metric_source_H_ */

