/*
 * io_k8s_api_authentication_v1_token_review.h
 *
 * TokenReview attempts to authenticate a token to a known user. Note: TokenReview requests may be cached by the webhook token authenticator plugin in the kube-apiserver.
 */

#ifndef _io_k8s_api_authentication_v1_token_review_H_
#define _io_k8s_api_authentication_v1_token_review_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authentication_v1_token_review_t io_k8s_api_authentication_v1_token_review_t;

#include "io_k8s_api_authentication_v1_token_review_spec.h"
#include "io_k8s_api_authentication_v1_token_review_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_authentication_v1_token_review_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_authentication_v1_token_review_spec_t *spec; //model
    struct io_k8s_api_authentication_v1_token_review_status_t *status; //model

} io_k8s_api_authentication_v1_token_review_t;

io_k8s_api_authentication_v1_token_review_t *io_k8s_api_authentication_v1_token_review_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_authentication_v1_token_review_spec_t *spec,
    io_k8s_api_authentication_v1_token_review_status_t *status
);

void io_k8s_api_authentication_v1_token_review_free(io_k8s_api_authentication_v1_token_review_t *io_k8s_api_authentication_v1_token_review);

io_k8s_api_authentication_v1_token_review_t *io_k8s_api_authentication_v1_token_review_parseFromJSON(cJSON *io_k8s_api_authentication_v1_token_reviewJSON);

cJSON *io_k8s_api_authentication_v1_token_review_convertToJSON(io_k8s_api_authentication_v1_token_review_t *io_k8s_api_authentication_v1_token_review);

#endif /* _io_k8s_api_authentication_v1_token_review_H_ */

