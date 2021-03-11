/*
 * io_k8s_api_core_v1_handler.h
 *
 * Handler defines a specific action that should be taken
 */

#ifndef _io_k8s_api_core_v1_handler_H_
#define _io_k8s_api_core_v1_handler_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_handler_t io_k8s_api_core_v1_handler_t;

#include "io_k8s_api_core_v1_exec_action.h"
#include "io_k8s_api_core_v1_http_get_action.h"
#include "io_k8s_api_core_v1_tcp_socket_action.h"



typedef struct io_k8s_api_core_v1_handler_t {
    struct io_k8s_api_core_v1_exec_action_t *exec; //model
    struct io_k8s_api_core_v1_http_get_action_t *http_get; //model
    struct io_k8s_api_core_v1_tcp_socket_action_t *tcp_socket; //model

} io_k8s_api_core_v1_handler_t;

io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler_create(
    io_k8s_api_core_v1_exec_action_t *exec,
    io_k8s_api_core_v1_http_get_action_t *http_get,
    io_k8s_api_core_v1_tcp_socket_action_t *tcp_socket
);

void io_k8s_api_core_v1_handler_free(io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler);

io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler_parseFromJSON(cJSON *io_k8s_api_core_v1_handlerJSON);

cJSON *io_k8s_api_core_v1_handler_convertToJSON(io_k8s_api_core_v1_handler_t *io_k8s_api_core_v1_handler);

#endif /* _io_k8s_api_core_v1_handler_H_ */

