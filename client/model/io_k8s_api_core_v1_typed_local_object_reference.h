/*
 * io_k8s_api_core_v1_typed_local_object_reference.h
 *
 * TypedLocalObjectReference contains enough information to let you locate the typed referenced object inside the same namespace.
 */

#ifndef _io_k8s_api_core_v1_typed_local_object_reference_H_
#define _io_k8s_api_core_v1_typed_local_object_reference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_typed_local_object_reference_t io_k8s_api_core_v1_typed_local_object_reference_t;




typedef struct io_k8s_api_core_v1_typed_local_object_reference_t {
    char *api_group; // string
    char *kind; // string
    char *name; // string

} io_k8s_api_core_v1_typed_local_object_reference_t;

io_k8s_api_core_v1_typed_local_object_reference_t *io_k8s_api_core_v1_typed_local_object_reference_create(
    char *api_group,
    char *kind,
    char *name
);

void io_k8s_api_core_v1_typed_local_object_reference_free(io_k8s_api_core_v1_typed_local_object_reference_t *io_k8s_api_core_v1_typed_local_object_reference);

io_k8s_api_core_v1_typed_local_object_reference_t *io_k8s_api_core_v1_typed_local_object_reference_parseFromJSON(cJSON *io_k8s_api_core_v1_typed_local_object_referenceJSON);

cJSON *io_k8s_api_core_v1_typed_local_object_reference_convertToJSON(io_k8s_api_core_v1_typed_local_object_reference_t *io_k8s_api_core_v1_typed_local_object_reference);

#endif /* _io_k8s_api_core_v1_typed_local_object_reference_H_ */

