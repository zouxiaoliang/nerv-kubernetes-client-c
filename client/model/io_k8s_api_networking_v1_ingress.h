/*
 * io_k8s_api_networking_v1_ingress.h
 *
 * Ingress is a collection of rules that allow inbound connections to reach the endpoints defined by a backend. An Ingress can be configured to give services externally-reachable urls, load balance traffic, terminate SSL, offer name based virtual hosting etc.
 */

#ifndef _io_k8s_api_networking_v1_ingress_H_
#define _io_k8s_api_networking_v1_ingress_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1_ingress_t io_k8s_api_networking_v1_ingress_t;

#include "io_k8s_api_networking_v1_ingress_spec.h"
#include "io_k8s_api_networking_v1_ingress_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_networking_v1_ingress_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_networking_v1_ingress_spec_t *spec; //model
    struct io_k8s_api_networking_v1_ingress_status_t *status; //model

} io_k8s_api_networking_v1_ingress_t;

io_k8s_api_networking_v1_ingress_t *io_k8s_api_networking_v1_ingress_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_networking_v1_ingress_spec_t *spec,
    io_k8s_api_networking_v1_ingress_status_t *status
);

void io_k8s_api_networking_v1_ingress_free(io_k8s_api_networking_v1_ingress_t *io_k8s_api_networking_v1_ingress);

io_k8s_api_networking_v1_ingress_t *io_k8s_api_networking_v1_ingress_parseFromJSON(cJSON *io_k8s_api_networking_v1_ingressJSON);

cJSON *io_k8s_api_networking_v1_ingress_convertToJSON(io_k8s_api_networking_v1_ingress_t *io_k8s_api_networking_v1_ingress);

#endif /* _io_k8s_api_networking_v1_ingress_H_ */

