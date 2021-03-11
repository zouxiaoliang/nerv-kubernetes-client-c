/*
 * io_k8s_api_core_v1_node_daemon_endpoints.h
 *
 * NodeDaemonEndpoints lists ports opened by daemons running on the Node.
 */

#ifndef _io_k8s_api_core_v1_node_daemon_endpoints_H_
#define _io_k8s_api_core_v1_node_daemon_endpoints_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_daemon_endpoints_t io_k8s_api_core_v1_node_daemon_endpoints_t;

#include "io_k8s_api_core_v1_daemon_endpoint.h"



typedef struct io_k8s_api_core_v1_node_daemon_endpoints_t {
    struct io_k8s_api_core_v1_daemon_endpoint_t *kubelet_endpoint; //model

} io_k8s_api_core_v1_node_daemon_endpoints_t;

io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints_create(
    io_k8s_api_core_v1_daemon_endpoint_t *kubelet_endpoint
);

void io_k8s_api_core_v1_node_daemon_endpoints_free(io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints);

io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints_parseFromJSON(cJSON *io_k8s_api_core_v1_node_daemon_endpointsJSON);

cJSON *io_k8s_api_core_v1_node_daemon_endpoints_convertToJSON(io_k8s_api_core_v1_node_daemon_endpoints_t *io_k8s_api_core_v1_node_daemon_endpoints);

#endif /* _io_k8s_api_core_v1_node_daemon_endpoints_H_ */

