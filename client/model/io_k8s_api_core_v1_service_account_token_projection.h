/*
 * io_k8s_api_core_v1_service_account_token_projection.h
 *
 * ServiceAccountTokenProjection represents a projected service account token volume. This projection can be used to insert a service account token into the pods runtime filesystem for use against APIs (Kubernetes API Server or otherwise).
 */

#ifndef _io_k8s_api_core_v1_service_account_token_projection_H_
#define _io_k8s_api_core_v1_service_account_token_projection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_service_account_token_projection_t io_k8s_api_core_v1_service_account_token_projection_t;




typedef struct io_k8s_api_core_v1_service_account_token_projection_t {
    char *audience; // string
    long expiration_seconds; //numeric
    char *path; // string

} io_k8s_api_core_v1_service_account_token_projection_t;

io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection_create(
    char *audience,
    long expiration_seconds,
    char *path
);

void io_k8s_api_core_v1_service_account_token_projection_free(io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection);

io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection_parseFromJSON(cJSON *io_k8s_api_core_v1_service_account_token_projectionJSON);

cJSON *io_k8s_api_core_v1_service_account_token_projection_convertToJSON(io_k8s_api_core_v1_service_account_token_projection_t *io_k8s_api_core_v1_service_account_token_projection);

#endif /* _io_k8s_api_core_v1_service_account_token_projection_H_ */

