/*
 * io_k8s_api_core_v1_local_object_reference.h
 *
 * LocalObjectReference contains enough information to let you locate the referenced object inside the same namespace.
 */

#ifndef _io_k8s_api_core_v1_local_object_reference_H_
#define _io_k8s_api_core_v1_local_object_reference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_local_object_reference_t io_k8s_api_core_v1_local_object_reference_t;




typedef struct io_k8s_api_core_v1_local_object_reference_t {
    char *name; // string

} io_k8s_api_core_v1_local_object_reference_t;

io_k8s_api_core_v1_local_object_reference_t *io_k8s_api_core_v1_local_object_reference_create(
    char *name
);

void io_k8s_api_core_v1_local_object_reference_free(io_k8s_api_core_v1_local_object_reference_t *io_k8s_api_core_v1_local_object_reference);

io_k8s_api_core_v1_local_object_reference_t *io_k8s_api_core_v1_local_object_reference_parseFromJSON(cJSON *io_k8s_api_core_v1_local_object_referenceJSON);

cJSON *io_k8s_api_core_v1_local_object_reference_convertToJSON(io_k8s_api_core_v1_local_object_reference_t *io_k8s_api_core_v1_local_object_reference);

#endif /* _io_k8s_api_core_v1_local_object_reference_H_ */

