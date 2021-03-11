/*
 * io_k8s_api_authentication_v1_token_request.h
 *
 * TokenRequest requests a token for a given service account.
 */

#ifndef _io_k8s_api_authentication_v1_token_request_H_
#define _io_k8s_api_authentication_v1_token_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_authentication_v1_token_request_t io_k8s_api_authentication_v1_token_request_t;

#include "io_k8s_api_authentication_v1_token_request_spec.h"
#include "io_k8s_api_authentication_v1_token_request_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_authentication_v1_token_request_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_authentication_v1_token_request_spec_t *spec; //model
    struct io_k8s_api_authentication_v1_token_request_status_t *status; //model

} io_k8s_api_authentication_v1_token_request_t;

io_k8s_api_authentication_v1_token_request_t *io_k8s_api_authentication_v1_token_request_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_authentication_v1_token_request_spec_t *spec,
    io_k8s_api_authentication_v1_token_request_status_t *status
);

void io_k8s_api_authentication_v1_token_request_free(io_k8s_api_authentication_v1_token_request_t *io_k8s_api_authentication_v1_token_request);

io_k8s_api_authentication_v1_token_request_t *io_k8s_api_authentication_v1_token_request_parseFromJSON(cJSON *io_k8s_api_authentication_v1_token_requestJSON);

cJSON *io_k8s_api_authentication_v1_token_request_convertToJSON(io_k8s_api_authentication_v1_token_request_t *io_k8s_api_authentication_v1_token_request);

#endif /* _io_k8s_api_authentication_v1_token_request_H_ */

