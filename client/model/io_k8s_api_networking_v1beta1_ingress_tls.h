/*
 * io_k8s_api_networking_v1beta1_ingress_tls.h
 *
 * IngressTLS describes the transport layer security associated with an Ingress.
 */

#ifndef _io_k8s_api_networking_v1beta1_ingress_tls_H_
#define _io_k8s_api_networking_v1beta1_ingress_tls_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1beta1_ingress_tls_t io_k8s_api_networking_v1beta1_ingress_tls_t;




typedef struct io_k8s_api_networking_v1beta1_ingress_tls_t {
    list_t *hosts; //primitive container
    char *secret_name; // string

} io_k8s_api_networking_v1beta1_ingress_tls_t;

io_k8s_api_networking_v1beta1_ingress_tls_t *io_k8s_api_networking_v1beta1_ingress_tls_create(
    list_t *hosts,
    char *secret_name
);

void io_k8s_api_networking_v1beta1_ingress_tls_free(io_k8s_api_networking_v1beta1_ingress_tls_t *io_k8s_api_networking_v1beta1_ingress_tls);

io_k8s_api_networking_v1beta1_ingress_tls_t *io_k8s_api_networking_v1beta1_ingress_tls_parseFromJSON(cJSON *io_k8s_api_networking_v1beta1_ingress_tlsJSON);

cJSON *io_k8s_api_networking_v1beta1_ingress_tls_convertToJSON(io_k8s_api_networking_v1beta1_ingress_tls_t *io_k8s_api_networking_v1beta1_ingress_tls);

#endif /* _io_k8s_api_networking_v1beta1_ingress_tls_H_ */

