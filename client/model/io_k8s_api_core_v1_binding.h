/*
 * io_k8s_api_core_v1_binding.h
 *
 * Binding ties one object to another; for example, a pod is bound to a node by a scheduler. Deprecated in 1.7, please use the bindings subresource of pods instead.
 */

#ifndef _io_k8s_api_core_v1_binding_H_
#define _io_k8s_api_core_v1_binding_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_binding_t io_k8s_api_core_v1_binding_t;

#include "io_k8s_api_core_v1_object_reference.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_binding_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_object_reference_t *target; //model

} io_k8s_api_core_v1_binding_t;

io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_object_reference_t *target
);

void io_k8s_api_core_v1_binding_free(io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding);

io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding_parseFromJSON(cJSON *io_k8s_api_core_v1_bindingJSON);

cJSON *io_k8s_api_core_v1_binding_convertToJSON(io_k8s_api_core_v1_binding_t *io_k8s_api_core_v1_binding);

#endif /* _io_k8s_api_core_v1_binding_H_ */

