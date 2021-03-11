/*
 * io_k8s_api_extensions_v1beta1_ingress_status.h
 *
 * IngressStatus describe the current state of the Ingress.
 */

#ifndef _io_k8s_api_extensions_v1beta1_ingress_status_H_
#define _io_k8s_api_extensions_v1beta1_ingress_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_extensions_v1beta1_ingress_status_t io_k8s_api_extensions_v1beta1_ingress_status_t;

#include "io_k8s_api_core_v1_load_balancer_status.h"



typedef struct io_k8s_api_extensions_v1beta1_ingress_status_t {
    struct io_k8s_api_core_v1_load_balancer_status_t *load_balancer; //model

} io_k8s_api_extensions_v1beta1_ingress_status_t;

io_k8s_api_extensions_v1beta1_ingress_status_t *io_k8s_api_extensions_v1beta1_ingress_status_create(
    io_k8s_api_core_v1_load_balancer_status_t *load_balancer
);

void io_k8s_api_extensions_v1beta1_ingress_status_free(io_k8s_api_extensions_v1beta1_ingress_status_t *io_k8s_api_extensions_v1beta1_ingress_status);

io_k8s_api_extensions_v1beta1_ingress_status_t *io_k8s_api_extensions_v1beta1_ingress_status_parseFromJSON(cJSON *io_k8s_api_extensions_v1beta1_ingress_statusJSON);

cJSON *io_k8s_api_extensions_v1beta1_ingress_status_convertToJSON(io_k8s_api_extensions_v1beta1_ingress_status_t *io_k8s_api_extensions_v1beta1_ingress_status);

#endif /* _io_k8s_api_extensions_v1beta1_ingress_status_H_ */

