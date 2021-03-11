/*
 * io_k8s_api_autoscaling_v2beta1_object_metric_source.h
 *
 * ObjectMetricSource indicates how to scale on a metric describing a kubernetes object (for example, hits-per-second on an Ingress object).
 */

#ifndef _io_k8s_api_autoscaling_v2beta1_object_metric_source_H_
#define _io_k8s_api_autoscaling_v2beta1_object_metric_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta1_object_metric_source_t io_k8s_api_autoscaling_v2beta1_object_metric_source_t;

#include "io_k8s_api_autoscaling_v2beta1_cross_version_object_reference.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_autoscaling_v2beta1_object_metric_source_t {
    char *average_value; // string
    char *metric_name; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector; //model
    struct io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *target; //model
    char *target_value; // string

} io_k8s_api_autoscaling_v2beta1_object_metric_source_t;

io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source_create(
    char *average_value,
    char *metric_name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    io_k8s_api_autoscaling_v2beta1_cross_version_object_reference_t *target,
    char *target_value
);

void io_k8s_api_autoscaling_v2beta1_object_metric_source_free(io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source);

io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta1_object_metric_sourceJSON);

cJSON *io_k8s_api_autoscaling_v2beta1_object_metric_source_convertToJSON(io_k8s_api_autoscaling_v2beta1_object_metric_source_t *io_k8s_api_autoscaling_v2beta1_object_metric_source);

#endif /* _io_k8s_api_autoscaling_v2beta1_object_metric_source_H_ */

