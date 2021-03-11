/*
 * io_k8s_api_autoscaling_v2beta2_metric_identifier.h
 *
 * MetricIdentifier defines the name and optionally selector for a metric
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_metric_identifier_H_
#define _io_k8s_api_autoscaling_v2beta2_metric_identifier_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_metric_identifier_t io_k8s_api_autoscaling_v2beta2_metric_identifier_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_autoscaling_v2beta2_metric_identifier_t {
    char *name; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector; //model

} io_k8s_api_autoscaling_v2beta2_metric_identifier_t;

io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier_create(
    char *name,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector
);

void io_k8s_api_autoscaling_v2beta2_metric_identifier_free(io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier);

io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_metric_identifierJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_metric_identifier_convertToJSON(io_k8s_api_autoscaling_v2beta2_metric_identifier_t *io_k8s_api_autoscaling_v2beta2_metric_identifier);

#endif /* _io_k8s_api_autoscaling_v2beta2_metric_identifier_H_ */

