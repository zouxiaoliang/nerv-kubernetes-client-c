/*
 * io_k8s_api_extensions_v1beta1_ingress_backend.h
 *
 * IngressBackend describes all endpoints for a given service and port.
 */

#ifndef _io_k8s_api_extensions_v1beta1_ingress_backend_H_
#define _io_k8s_api_extensions_v1beta1_ingress_backend_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_extensions_v1beta1_ingress_backend_t io_k8s_api_extensions_v1beta1_ingress_backend_t;

#include "io_k8s_api_core_v1_typed_local_object_reference.h"



typedef struct io_k8s_api_extensions_v1beta1_ingress_backend_t {
    struct io_k8s_api_core_v1_typed_local_object_reference_t *resource; //model
    char *service_name; // string
    char *service_port; // string

} io_k8s_api_extensions_v1beta1_ingress_backend_t;

io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend_create(
    io_k8s_api_core_v1_typed_local_object_reference_t *resource,
    char *service_name,
    char *service_port
);

void io_k8s_api_extensions_v1beta1_ingress_backend_free(io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend);

io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend_parseFromJSON(cJSON *io_k8s_api_extensions_v1beta1_ingress_backendJSON);

cJSON *io_k8s_api_extensions_v1beta1_ingress_backend_convertToJSON(io_k8s_api_extensions_v1beta1_ingress_backend_t *io_k8s_api_extensions_v1beta1_ingress_backend);

#endif /* _io_k8s_api_extensions_v1beta1_ingress_backend_H_ */

