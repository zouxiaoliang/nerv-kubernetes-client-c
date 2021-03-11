/*
 * io_k8s_api_core_v1_pod_template.h
 *
 * PodTemplate describes a template for creating copies of a predefined pod.
 */

#ifndef _io_k8s_api_core_v1_pod_template_H_
#define _io_k8s_api_core_v1_pod_template_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_template_t io_k8s_api_core_v1_pod_template_t;

#include "io_k8s_api_core_v1_pod_template_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_pod_template_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_pod_template_spec_t *_template; //model

} io_k8s_api_core_v1_pod_template_t;

io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_pod_template_spec_t *_template
);

void io_k8s_api_core_v1_pod_template_free(io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template);

io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_templateJSON);

cJSON *io_k8s_api_core_v1_pod_template_convertToJSON(io_k8s_api_core_v1_pod_template_t *io_k8s_api_core_v1_pod_template);

#endif /* _io_k8s_api_core_v1_pod_template_H_ */

