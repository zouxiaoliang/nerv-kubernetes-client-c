/*
 * io_k8s_api_core_v1_pod_template_spec.h
 *
 * PodTemplateSpec describes the data a pod should have when created from a template
 */

#ifndef _io_k8s_api_core_v1_pod_template_spec_H_
#define _io_k8s_api_core_v1_pod_template_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_template_spec_t io_k8s_api_core_v1_pod_template_spec_t;

#include "io_k8s_api_core_v1_pod_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_pod_template_spec_t {
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_pod_spec_t *spec; //model

} io_k8s_api_core_v1_pod_template_spec_t;

io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec_create(
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_pod_spec_t *spec
);

void io_k8s_api_core_v1_pod_template_spec_free(io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec);

io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_template_specJSON);

cJSON *io_k8s_api_core_v1_pod_template_spec_convertToJSON(io_k8s_api_core_v1_pod_template_spec_t *io_k8s_api_core_v1_pod_template_spec);

#endif /* _io_k8s_api_core_v1_pod_template_spec_H_ */

