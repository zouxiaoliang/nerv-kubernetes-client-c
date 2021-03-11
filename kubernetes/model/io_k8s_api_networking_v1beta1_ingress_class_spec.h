/*
 * io_k8s_api_networking_v1beta1_ingress_class_spec.h
 *
 * IngressClassSpec provides information about the class of an Ingress.
 */

#ifndef _io_k8s_api_networking_v1beta1_ingress_class_spec_H_
#define _io_k8s_api_networking_v1beta1_ingress_class_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1beta1_ingress_class_spec_t io_k8s_api_networking_v1beta1_ingress_class_spec_t;

#include "io_k8s_api_core_v1_typed_local_object_reference.h"



typedef struct io_k8s_api_networking_v1beta1_ingress_class_spec_t {
    char *controller; // string
    struct io_k8s_api_core_v1_typed_local_object_reference_t *parameters; //model

} io_k8s_api_networking_v1beta1_ingress_class_spec_t;

io_k8s_api_networking_v1beta1_ingress_class_spec_t *io_k8s_api_networking_v1beta1_ingress_class_spec_create(
    char *controller,
    io_k8s_api_core_v1_typed_local_object_reference_t *parameters
);

void io_k8s_api_networking_v1beta1_ingress_class_spec_free(io_k8s_api_networking_v1beta1_ingress_class_spec_t *io_k8s_api_networking_v1beta1_ingress_class_spec);

io_k8s_api_networking_v1beta1_ingress_class_spec_t *io_k8s_api_networking_v1beta1_ingress_class_spec_parseFromJSON(cJSON *io_k8s_api_networking_v1beta1_ingress_class_specJSON);

cJSON *io_k8s_api_networking_v1beta1_ingress_class_spec_convertToJSON(io_k8s_api_networking_v1beta1_ingress_class_spec_t *io_k8s_api_networking_v1beta1_ingress_class_spec);

#endif /* _io_k8s_api_networking_v1beta1_ingress_class_spec_H_ */

