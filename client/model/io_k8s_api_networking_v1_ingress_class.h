/*
 * io_k8s_api_networking_v1_ingress_class.h
 *
 * IngressClass represents the class of the Ingress, referenced by the Ingress Spec. The &#x60;ingressclass.kubernetes.io/is-default-class&#x60; annotation can be used to indicate that an IngressClass should be considered default. When a single IngressClass resource has this annotation set to true, new Ingress resources without a class specified will be assigned this default class.
 */

#ifndef _io_k8s_api_networking_v1_ingress_class_H_
#define _io_k8s_api_networking_v1_ingress_class_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_ingress_class_t io_k8s_api_networking_v1_ingress_class_t;

#include "io_k8s_api_networking_v1_ingress_class_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_networking_v1_ingress_class_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_networking_v1_ingress_class_spec_t *spec; //model

} io_k8s_api_networking_v1_ingress_class_t;

io_k8s_api_networking_v1_ingress_class_t *io_k8s_api_networking_v1_ingress_class_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_networking_v1_ingress_class_spec_t *spec
);

void io_k8s_api_networking_v1_ingress_class_free(io_k8s_api_networking_v1_ingress_class_t *io_k8s_api_networking_v1_ingress_class);

io_k8s_api_networking_v1_ingress_class_t *io_k8s_api_networking_v1_ingress_class_parseFromJSON(cJSON *io_k8s_api_networking_v1_ingress_classJSON);

cJSON *io_k8s_api_networking_v1_ingress_class_convertToJSON(io_k8s_api_networking_v1_ingress_class_t *io_k8s_api_networking_v1_ingress_class);

#endif /* _io_k8s_api_networking_v1_ingress_class_H_ */

