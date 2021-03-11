/*
 * io_k8s_api_authentication_v1_bound_object_reference.h
 *
 * BoundObjectReference is a reference to an object that a token is bound to.
 */

#ifndef _io_k8s_api_authentication_v1_bound_object_reference_H_
#define _io_k8s_api_authentication_v1_bound_object_reference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authentication_v1_bound_object_reference_t io_k8s_api_authentication_v1_bound_object_reference_t;




typedef struct io_k8s_api_authentication_v1_bound_object_reference_t {
    char *api_version; // string
    char *kind; // string
    char *name; // string
    char *uid; // string

} io_k8s_api_authentication_v1_bound_object_reference_t;

io_k8s_api_authentication_v1_bound_object_reference_t *io_k8s_api_authentication_v1_bound_object_reference_create(
    char *api_version,
    char *kind,
    char *name,
    char *uid
);

void io_k8s_api_authentication_v1_bound_object_reference_free(io_k8s_api_authentication_v1_bound_object_reference_t *io_k8s_api_authentication_v1_bound_object_reference);

io_k8s_api_authentication_v1_bound_object_reference_t *io_k8s_api_authentication_v1_bound_object_reference_parseFromJSON(cJSON *io_k8s_api_authentication_v1_bound_object_referenceJSON);

cJSON *io_k8s_api_authentication_v1_bound_object_reference_convertToJSON(io_k8s_api_authentication_v1_bound_object_reference_t *io_k8s_api_authentication_v1_bound_object_reference);

#endif /* _io_k8s_api_authentication_v1_bound_object_reference_H_ */

