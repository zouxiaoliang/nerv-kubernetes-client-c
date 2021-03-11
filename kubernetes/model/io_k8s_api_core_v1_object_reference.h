/*
 * io_k8s_api_core_v1_object_reference.h
 *
 * ObjectReference contains enough information to let you inspect or modify the referred object.
 */

#ifndef _io_k8s_api_core_v1_object_reference_H_
#define _io_k8s_api_core_v1_object_reference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_object_reference_t io_k8s_api_core_v1_object_reference_t;




typedef struct io_k8s_api_core_v1_object_reference_t {
    char *api_version; // string
    char *field_path; // string
    char *kind; // string
    char *name; // string
    char *_namespace; // string
    char *resource_version; // string
    char *uid; // string

} io_k8s_api_core_v1_object_reference_t;

io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference_create(
    char *api_version,
    char *field_path,
    char *kind,
    char *name,
    char *_namespace,
    char *resource_version,
    char *uid
);

void io_k8s_api_core_v1_object_reference_free(io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference);

io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference_parseFromJSON(cJSON *io_k8s_api_core_v1_object_referenceJSON);

cJSON *io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_core_v1_object_reference_t *io_k8s_api_core_v1_object_reference);

#endif /* _io_k8s_api_core_v1_object_reference_H_ */

