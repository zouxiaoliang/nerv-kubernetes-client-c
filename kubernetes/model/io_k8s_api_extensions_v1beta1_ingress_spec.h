/*
 * io_k8s_api_extensions_v1beta1_ingress_spec.h
 *
 * IngressSpec describes the Ingress the user wishes to exist.
 */

#ifndef _io_k8s_api_extensions_v1beta1_ingress_spec_H_
#define _io_k8s_api_extensions_v1beta1_ingress_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_extensions_v1beta1_ingress_spec_t io_k8s_api_extensions_v1beta1_ingress_spec_t;

#include "io_k8s_api_extensions_v1beta1_ingress_backend.h"
#include "io_k8s_api_extensions_v1beta1_ingress_rule.h"
#include "io_k8s_api_extensions_v1beta1_ingress_tls.h"



typedef struct io_k8s_api_extensions_v1beta1_ingress_spec_t {
    struct io_k8s_api_extensions_v1beta1_ingress_backend_t *backend; //model
    char *ingress_class_name; // string
    list_t *rules; //nonprimitive container
    list_t *tls; //nonprimitive container

} io_k8s_api_extensions_v1beta1_ingress_spec_t;

io_k8s_api_extensions_v1beta1_ingress_spec_t *io_k8s_api_extensions_v1beta1_ingress_spec_create(
    io_k8s_api_extensions_v1beta1_ingress_backend_t *backend,
    char *ingress_class_name,
    list_t *rules,
    list_t *tls
);

void io_k8s_api_extensions_v1beta1_ingress_spec_free(io_k8s_api_extensions_v1beta1_ingress_spec_t *io_k8s_api_extensions_v1beta1_ingress_spec);

io_k8s_api_extensions_v1beta1_ingress_spec_t *io_k8s_api_extensions_v1beta1_ingress_spec_parseFromJSON(cJSON *io_k8s_api_extensions_v1beta1_ingress_specJSON);

cJSON *io_k8s_api_extensions_v1beta1_ingress_spec_convertToJSON(io_k8s_api_extensions_v1beta1_ingress_spec_t *io_k8s_api_extensions_v1beta1_ingress_spec);

#endif /* _io_k8s_api_extensions_v1beta1_ingress_spec_H_ */

