/*
 * io_k8s_api_networking_v1_ingress_service_backend.h
 *
 * IngressServiceBackend references a Kubernetes Service as a Backend.
 */

#ifndef _io_k8s_api_networking_v1_ingress_service_backend_H_
#define _io_k8s_api_networking_v1_ingress_service_backend_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_ingress_service_backend_t io_k8s_api_networking_v1_ingress_service_backend_t;

#include "io_k8s_api_networking_v1_service_backend_port.h"



typedef struct io_k8s_api_networking_v1_ingress_service_backend_t {
    char *name; // string
    struct io_k8s_api_networking_v1_service_backend_port_t *port; //model

} io_k8s_api_networking_v1_ingress_service_backend_t;

io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend_create(
    char *name,
    io_k8s_api_networking_v1_service_backend_port_t *port
);

void io_k8s_api_networking_v1_ingress_service_backend_free(io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend);

io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend_parseFromJSON(cJSON *io_k8s_api_networking_v1_ingress_service_backendJSON);

cJSON *io_k8s_api_networking_v1_ingress_service_backend_convertToJSON(io_k8s_api_networking_v1_ingress_service_backend_t *io_k8s_api_networking_v1_ingress_service_backend);

#endif /* _io_k8s_api_networking_v1_ingress_service_backend_H_ */

