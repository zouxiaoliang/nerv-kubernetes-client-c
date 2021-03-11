/*
 * io_k8s_api_authentication_v1beta1_token_review_spec.h
 *
 * TokenReviewSpec is a description of the token authentication request.
 */

#ifndef _io_k8s_api_authentication_v1beta1_token_review_spec_H_
#define _io_k8s_api_authentication_v1beta1_token_review_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authentication_v1beta1_token_review_spec_t io_k8s_api_authentication_v1beta1_token_review_spec_t;




typedef struct io_k8s_api_authentication_v1beta1_token_review_spec_t {
    list_t *audiences; //primitive container
    char *token; // string

} io_k8s_api_authentication_v1beta1_token_review_spec_t;

io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec_create(
    list_t *audiences,
    char *token
);

void io_k8s_api_authentication_v1beta1_token_review_spec_free(io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec);

io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec_parseFromJSON(cJSON *io_k8s_api_authentication_v1beta1_token_review_specJSON);

cJSON *io_k8s_api_authentication_v1beta1_token_review_spec_convertToJSON(io_k8s_api_authentication_v1beta1_token_review_spec_t *io_k8s_api_authentication_v1beta1_token_review_spec);

#endif /* _io_k8s_api_authentication_v1beta1_token_review_spec_H_ */

