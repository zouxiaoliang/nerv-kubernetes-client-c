/*
 * io_k8s_api_authentication_v1_token_request_spec.h
 *
 * TokenRequestSpec contains client provided parameters of a token request.
 */

#ifndef _io_k8s_api_authentication_v1_token_request_spec_H_
#define _io_k8s_api_authentication_v1_token_request_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authentication_v1_token_request_spec_t io_k8s_api_authentication_v1_token_request_spec_t;

#include "io_k8s_api_authentication_v1_bound_object_reference.h"



typedef struct io_k8s_api_authentication_v1_token_request_spec_t {
    list_t *audiences; //primitive container
    struct io_k8s_api_authentication_v1_bound_object_reference_t *bound_object_ref; //model
    long expiration_seconds; //numeric

} io_k8s_api_authentication_v1_token_request_spec_t;

io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec_create(
    list_t *audiences,
    io_k8s_api_authentication_v1_bound_object_reference_t *bound_object_ref,
    long expiration_seconds
);

void io_k8s_api_authentication_v1_token_request_spec_free(io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec);

io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec_parseFromJSON(cJSON *io_k8s_api_authentication_v1_token_request_specJSON);

cJSON *io_k8s_api_authentication_v1_token_request_spec_convertToJSON(io_k8s_api_authentication_v1_token_request_spec_t *io_k8s_api_authentication_v1_token_request_spec);

#endif /* _io_k8s_api_authentication_v1_token_request_spec_H_ */

