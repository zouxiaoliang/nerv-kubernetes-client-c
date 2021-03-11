/*
 * io_k8s_api_core_v1_http_get_action.h
 *
 * HTTPGetAction describes an action based on HTTP Get requests.
 */

#ifndef _io_k8s_api_core_v1_http_get_action_H_
#define _io_k8s_api_core_v1_http_get_action_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_http_get_action_t io_k8s_api_core_v1_http_get_action_t;

#include "io_k8s_api_core_v1_http_header.h"



typedef struct io_k8s_api_core_v1_http_get_action_t {
    char *host; // string
    list_t *http_headers; //nonprimitive container
    char *path; // string
    char *port; // string
    char *scheme; // string

} io_k8s_api_core_v1_http_get_action_t;

io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action_create(
    char *host,
    list_t *http_headers,
    char *path,
    char *port,
    char *scheme
);

void io_k8s_api_core_v1_http_get_action_free(io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action);

io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action_parseFromJSON(cJSON *io_k8s_api_core_v1_http_get_actionJSON);

cJSON *io_k8s_api_core_v1_http_get_action_convertToJSON(io_k8s_api_core_v1_http_get_action_t *io_k8s_api_core_v1_http_get_action);

#endif /* _io_k8s_api_core_v1_http_get_action_H_ */

