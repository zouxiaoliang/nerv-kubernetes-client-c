/*
 * io_k8s_api_core_v1_service_port.h
 *
 * ServicePort contains information on service&#39;s port.
 */

#ifndef _io_k8s_api_core_v1_service_port_H_
#define _io_k8s_api_core_v1_service_port_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_service_port_t io_k8s_api_core_v1_service_port_t;




typedef struct io_k8s_api_core_v1_service_port_t {
    char *app_protocol; // string
    char *name; // string
    int node_port; //numeric
    int port; //numeric
    char *protocol; // string
    char *target_port; // string

} io_k8s_api_core_v1_service_port_t;

io_k8s_api_core_v1_service_port_t *io_k8s_api_core_v1_service_port_create(
    char *app_protocol,
    char *name,
    int node_port,
    int port,
    char *protocol,
    char *target_port
);

void io_k8s_api_core_v1_service_port_free(io_k8s_api_core_v1_service_port_t *io_k8s_api_core_v1_service_port);

io_k8s_api_core_v1_service_port_t *io_k8s_api_core_v1_service_port_parseFromJSON(cJSON *io_k8s_api_core_v1_service_portJSON);

cJSON *io_k8s_api_core_v1_service_port_convertToJSON(io_k8s_api_core_v1_service_port_t *io_k8s_api_core_v1_service_port);

#endif /* _io_k8s_api_core_v1_service_port_H_ */

