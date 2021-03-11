/*
 * io_k8s_api_authentication_v1_token_request_status.h
 *
 * TokenRequestStatus is the result of a token request.
 */

#ifndef _io_k8s_api_authentication_v1_token_request_status_H_
#define _io_k8s_api_authentication_v1_token_request_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authentication_v1_token_request_status_t io_k8s_api_authentication_v1_token_request_status_t;




typedef struct io_k8s_api_authentication_v1_token_request_status_t {
    char *expiration_timestamp; //date time
    char *token; // string

} io_k8s_api_authentication_v1_token_request_status_t;

io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status_create(
    char *expiration_timestamp,
    char *token
);

void io_k8s_api_authentication_v1_token_request_status_free(io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status);

io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status_parseFromJSON(cJSON *io_k8s_api_authentication_v1_token_request_statusJSON);

cJSON *io_k8s_api_authentication_v1_token_request_status_convertToJSON(io_k8s_api_authentication_v1_token_request_status_t *io_k8s_api_authentication_v1_token_request_status);

#endif /* _io_k8s_api_authentication_v1_token_request_status_H_ */

