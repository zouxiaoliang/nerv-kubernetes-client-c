/*
 * io_k8s_api_networking_v1_service_backend_port.h
 *
 * ServiceBackendPort is the service port being referenced.
 */

#ifndef _io_k8s_api_networking_v1_service_backend_port_H_
#define _io_k8s_api_networking_v1_service_backend_port_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_service_backend_port_t io_k8s_api_networking_v1_service_backend_port_t;




typedef struct io_k8s_api_networking_v1_service_backend_port_t {
    char *name; // string
    int number; //numeric

} io_k8s_api_networking_v1_service_backend_port_t;

io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port_create(
    char *name,
    int number
);

void io_k8s_api_networking_v1_service_backend_port_free(io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port);

io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port_parseFromJSON(cJSON *io_k8s_api_networking_v1_service_backend_portJSON);

cJSON *io_k8s_api_networking_v1_service_backend_port_convertToJSON(io_k8s_api_networking_v1_service_backend_port_t *io_k8s_api_networking_v1_service_backend_port);

#endif /* _io_k8s_api_networking_v1_service_backend_port_H_ */

