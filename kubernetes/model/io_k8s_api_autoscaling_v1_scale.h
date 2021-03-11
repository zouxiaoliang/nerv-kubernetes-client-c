/*
 * io_k8s_api_autoscaling_v1_scale.h
 *
 * Scale represents a scaling request for a resource.
 */

#ifndef _io_k8s_api_autoscaling_v1_scale_H_
#define _io_k8s_api_autoscaling_v1_scale_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_autoscaling_v1_scale_t io_k8s_api_autoscaling_v1_scale_t;

#include "io_k8s_api_autoscaling_v1_scale_spec.h"
#include "io_k8s_api_autoscaling_v1_scale_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_autoscaling_v1_scale_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_autoscaling_v1_scale_spec_t *spec; //model
    struct io_k8s_api_autoscaling_v1_scale_status_t *status; //model

} io_k8s_api_autoscaling_v1_scale_t;

io_k8s_api_autoscaling_v1_scale_t *io_k8s_api_autoscaling_v1_scale_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_autoscaling_v1_scale_spec_t *spec,
    io_k8s_api_autoscaling_v1_scale_status_t *status
);

void io_k8s_api_autoscaling_v1_scale_free(io_k8s_api_autoscaling_v1_scale_t *io_k8s_api_autoscaling_v1_scale);

io_k8s_api_autoscaling_v1_scale_t *io_k8s_api_autoscaling_v1_scale_parseFromJSON(cJSON *io_k8s_api_autoscaling_v1_scaleJSON);

cJSON *io_k8s_api_autoscaling_v1_scale_convertToJSON(io_k8s_api_autoscaling_v1_scale_t *io_k8s_api_autoscaling_v1_scale);

#endif /* _io_k8s_api_autoscaling_v1_scale_H_ */

