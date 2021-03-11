/*
 * io_k8s_api_storage_v1_token_request.h
 *
 * TokenRequest contains parameters of a service account token.
 */

#ifndef _io_k8s_api_storage_v1_token_request_H_
#define _io_k8s_api_storage_v1_token_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1_token_request_t io_k8s_api_storage_v1_token_request_t;




typedef struct io_k8s_api_storage_v1_token_request_t {
    char *audience; // string
    long expiration_seconds; //numeric

} io_k8s_api_storage_v1_token_request_t;

io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request_create(
    char *audience,
    long expiration_seconds
);

void io_k8s_api_storage_v1_token_request_free(io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request);

io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request_parseFromJSON(cJSON *io_k8s_api_storage_v1_token_requestJSON);

cJSON *io_k8s_api_storage_v1_token_request_convertToJSON(io_k8s_api_storage_v1_token_request_t *io_k8s_api_storage_v1_token_request);

#endif /* _io_k8s_api_storage_v1_token_request_H_ */

