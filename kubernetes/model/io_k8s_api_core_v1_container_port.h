/*
 * io_k8s_api_core_v1_container_port.h
 *
 * ContainerPort represents a network port in a single container.
 */

#ifndef _io_k8s_api_core_v1_container_port_H_
#define _io_k8s_api_core_v1_container_port_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_container_port_t io_k8s_api_core_v1_container_port_t;




typedef struct io_k8s_api_core_v1_container_port_t {
    int container_port; //numeric
    char *host_ip; // string
    int host_port; //numeric
    char *name; // string
    char *protocol; // string

} io_k8s_api_core_v1_container_port_t;

io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port_create(
    int container_port,
    char *host_ip,
    int host_port,
    char *name,
    char *protocol
);

void io_k8s_api_core_v1_container_port_free(io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port);

io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port_parseFromJSON(cJSON *io_k8s_api_core_v1_container_portJSON);

cJSON *io_k8s_api_core_v1_container_port_convertToJSON(io_k8s_api_core_v1_container_port_t *io_k8s_api_core_v1_container_port);

#endif /* _io_k8s_api_core_v1_container_port_H_ */

