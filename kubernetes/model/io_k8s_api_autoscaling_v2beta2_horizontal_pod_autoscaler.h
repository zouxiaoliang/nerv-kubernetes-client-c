/*
 * io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler.h
 *
 * HorizontalPodAutoscaler is the configuration for a horizontal pod autoscaler, which automatically manages the replica count of any resource implementing the scale subresource based on the metrics specified.
 */

#ifndef _io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_H_
#define _io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_t io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_t;

#include "io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec.h"
#include "io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_t *spec; //model
    struct io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *status; //model

} io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_t;

io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_spec_t *spec,
    io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_status_t *status
);

void io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_free(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler);

io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_parseFromJSON(cJSON *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscalerJSON);

cJSON *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_convertToJSON(io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_t *io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler);

#endif /* _io_k8s_api_autoscaling_v2beta2_horizontal_pod_autoscaler_H_ */

