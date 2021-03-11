/*
 * io_k8s_api_core_v1_namespace_spec.h
 *
 * NamespaceSpec describes the attributes on a Namespace.
 */

#ifndef _io_k8s_api_core_v1_namespace_spec_H_
#define _io_k8s_api_core_v1_namespace_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_namespace_spec_t io_k8s_api_core_v1_namespace_spec_t;




typedef struct io_k8s_api_core_v1_namespace_spec_t {
    list_t *finalizers; //primitive container

} io_k8s_api_core_v1_namespace_spec_t;

io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec_create(
    list_t *finalizers
);

void io_k8s_api_core_v1_namespace_spec_free(io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec);

io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_namespace_specJSON);

cJSON *io_k8s_api_core_v1_namespace_spec_convertToJSON(io_k8s_api_core_v1_namespace_spec_t *io_k8s_api_core_v1_namespace_spec);

#endif /* _io_k8s_api_core_v1_namespace_spec_H_ */

