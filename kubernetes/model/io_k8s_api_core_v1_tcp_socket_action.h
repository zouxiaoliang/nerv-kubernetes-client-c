/*
 * io_k8s_api_core_v1_tcp_socket_action.h
 *
 * TCPSocketAction describes an action based on opening a socket
 */

#ifndef _io_k8s_api_core_v1_tcp_socket_action_H_
#define _io_k8s_api_core_v1_tcp_socket_action_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_tcp_socket_action_t io_k8s_api_core_v1_tcp_socket_action_t;




typedef struct io_k8s_api_core_v1_tcp_socket_action_t {
    char *host; // string
    char *port; // string

} io_k8s_api_core_v1_tcp_socket_action_t;

io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action_create(
    char *host,
    char *port
);

void io_k8s_api_core_v1_tcp_socket_action_free(io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action);

io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action_parseFromJSON(cJSON *io_k8s_api_core_v1_tcp_socket_actionJSON);

cJSON *io_k8s_api_core_v1_tcp_socket_action_convertToJSON(io_k8s_api_core_v1_tcp_socket_action_t *io_k8s_api_core_v1_tcp_socket_action);

#endif /* _io_k8s_api_core_v1_tcp_socket_action_H_ */

