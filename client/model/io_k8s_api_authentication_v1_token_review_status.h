/*
 * io_k8s_api_authentication_v1_token_review_status.h
 *
 * TokenReviewStatus is the result of the token authentication request.
 */

#ifndef _io_k8s_api_authentication_v1_token_review_status_H_
#define _io_k8s_api_authentication_v1_token_review_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authentication_v1_token_review_status_t io_k8s_api_authentication_v1_token_review_status_t;

#include "io_k8s_api_authentication_v1_user_info.h"



typedef struct io_k8s_api_authentication_v1_token_review_status_t {
    list_t *audiences; //primitive container
    int authenticated; //boolean
    char *error; // string
    struct io_k8s_api_authentication_v1_user_info_t *user; //model

} io_k8s_api_authentication_v1_token_review_status_t;

io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status_create(
    list_t *audiences,
    int authenticated,
    char *error,
    io_k8s_api_authentication_v1_user_info_t *user
);

void io_k8s_api_authentication_v1_token_review_status_free(io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status);

io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status_parseFromJSON(cJSON *io_k8s_api_authentication_v1_token_review_statusJSON);

cJSON *io_k8s_api_authentication_v1_token_review_status_convertToJSON(io_k8s_api_authentication_v1_token_review_status_t *io_k8s_api_authentication_v1_token_review_status);

#endif /* _io_k8s_api_authentication_v1_token_review_status_H_ */

