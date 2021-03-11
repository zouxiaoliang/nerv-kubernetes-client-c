/*
 * io_k8s_api_core_v1_probe.h
 *
 * Probe describes a health check to be performed against a container to determine whether it is alive or ready to receive traffic.
 */

#ifndef _io_k8s_api_core_v1_probe_H_
#define _io_k8s_api_core_v1_probe_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_probe_t io_k8s_api_core_v1_probe_t;

#include "io_k8s_api_core_v1_exec_action.h"
#include "io_k8s_api_core_v1_http_get_action.h"
#include "io_k8s_api_core_v1_tcp_socket_action.h"



typedef struct io_k8s_api_core_v1_probe_t {
    struct io_k8s_api_core_v1_exec_action_t *exec; //model
    int failure_threshold; //numeric
    struct io_k8s_api_core_v1_http_get_action_t *http_get; //model
    int initial_delay_seconds; //numeric
    int period_seconds; //numeric
    int success_threshold; //numeric
    struct io_k8s_api_core_v1_tcp_socket_action_t *tcp_socket; //model
    int timeout_seconds; //numeric

} io_k8s_api_core_v1_probe_t;

io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe_create(
    io_k8s_api_core_v1_exec_action_t *exec,
    int failure_threshold,
    io_k8s_api_core_v1_http_get_action_t *http_get,
    int initial_delay_seconds,
    int period_seconds,
    int success_threshold,
    io_k8s_api_core_v1_tcp_socket_action_t *tcp_socket,
    int timeout_seconds
);

void io_k8s_api_core_v1_probe_free(io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe);

io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe_parseFromJSON(cJSON *io_k8s_api_core_v1_probeJSON);

cJSON *io_k8s_api_core_v1_probe_convertToJSON(io_k8s_api_core_v1_probe_t *io_k8s_api_core_v1_probe);

#endif /* _io_k8s_api_core_v1_probe_H_ */

