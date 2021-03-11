/*
 * io_k8s_api_core_v1_secret_reference.h
 *
 * SecretReference represents a Secret Reference. It has enough information to retrieve secret in any namespace
 */

#ifndef _io_k8s_api_core_v1_secret_reference_H_
#define _io_k8s_api_core_v1_secret_reference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_secret_reference_t io_k8s_api_core_v1_secret_reference_t;




typedef struct io_k8s_api_core_v1_secret_reference_t {
    char *name; // string
    char *_namespace; // string

} io_k8s_api_core_v1_secret_reference_t;

io_k8s_api_core_v1_secret_reference_t *io_k8s_api_core_v1_secret_reference_create(
    char *name,
    char *_namespace
);

void io_k8s_api_core_v1_secret_reference_free(io_k8s_api_core_v1_secret_reference_t *io_k8s_api_core_v1_secret_reference);

io_k8s_api_core_v1_secret_reference_t *io_k8s_api_core_v1_secret_reference_parseFromJSON(cJSON *io_k8s_api_core_v1_secret_referenceJSON);

cJSON *io_k8s_api_core_v1_secret_reference_convertToJSON(io_k8s_api_core_v1_secret_reference_t *io_k8s_api_core_v1_secret_reference);

#endif /* _io_k8s_api_core_v1_secret_reference_H_ */

