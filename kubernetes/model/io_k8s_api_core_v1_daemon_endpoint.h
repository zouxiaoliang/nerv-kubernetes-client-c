/*
 * io_k8s_api_core_v1_daemon_endpoint.h
 *
 * DaemonEndpoint contains information about a single Daemon endpoint.
 */

#ifndef _io_k8s_api_core_v1_daemon_endpoint_H_
#define _io_k8s_api_core_v1_daemon_endpoint_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_daemon_endpoint_t io_k8s_api_core_v1_daemon_endpoint_t;




typedef struct io_k8s_api_core_v1_daemon_endpoint_t {
    int port; //numeric

} io_k8s_api_core_v1_daemon_endpoint_t;

io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint_create(
    int port
);

void io_k8s_api_core_v1_daemon_endpoint_free(io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint);

io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint_parseFromJSON(cJSON *io_k8s_api_core_v1_daemon_endpointJSON);

cJSON *io_k8s_api_core_v1_daemon_endpoint_convertToJSON(io_k8s_api_core_v1_daemon_endpoint_t *io_k8s_api_core_v1_daemon_endpoint);

#endif /* _io_k8s_api_core_v1_daemon_endpoint_H_ */

