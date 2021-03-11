/*
 * io_k8s_api_discovery_v1beta1_endpoint_port.h
 *
 * EndpointPort represents a Port used by an EndpointSlice
 */

#ifndef _io_k8s_api_discovery_v1beta1_endpoint_port_H_
#define _io_k8s_api_discovery_v1beta1_endpoint_port_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_discovery_v1beta1_endpoint_port_t io_k8s_api_discovery_v1beta1_endpoint_port_t;




typedef struct io_k8s_api_discovery_v1beta1_endpoint_port_t {
    char *app_protocol; // string
    char *name; // string
    int port; //numeric
    char *protocol; // string

} io_k8s_api_discovery_v1beta1_endpoint_port_t;

io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port_create(
    char *app_protocol,
    char *name,
    int port,
    char *protocol
);

void io_k8s_api_discovery_v1beta1_endpoint_port_free(io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port);

io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port_parseFromJSON(cJSON *io_k8s_api_discovery_v1beta1_endpoint_portJSON);

cJSON *io_k8s_api_discovery_v1beta1_endpoint_port_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_port_t *io_k8s_api_discovery_v1beta1_endpoint_port);

#endif /* _io_k8s_api_discovery_v1beta1_endpoint_port_H_ */

