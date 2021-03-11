/*
 * io_k8s_api_coordination_v1beta1_lease.h
 *
 * Lease defines a lease concept.
 */

#ifndef _io_k8s_api_coordination_v1beta1_lease_H_
#define _io_k8s_api_coordination_v1beta1_lease_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_coordination_v1beta1_lease_t io_k8s_api_coordination_v1beta1_lease_t;

#include "io_k8s_api_coordination_v1beta1_lease_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_coordination_v1beta1_lease_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_coordination_v1beta1_lease_spec_t *spec; //model

} io_k8s_api_coordination_v1beta1_lease_t;

io_k8s_api_coordination_v1beta1_lease_t *io_k8s_api_coordination_v1beta1_lease_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_coordination_v1beta1_lease_spec_t *spec
);

void io_k8s_api_coordination_v1beta1_lease_free(io_k8s_api_coordination_v1beta1_lease_t *io_k8s_api_coordination_v1beta1_lease);

io_k8s_api_coordination_v1beta1_lease_t *io_k8s_api_coordination_v1beta1_lease_parseFromJSON(cJSON *io_k8s_api_coordination_v1beta1_leaseJSON);

cJSON *io_k8s_api_coordination_v1beta1_lease_convertToJSON(io_k8s_api_coordination_v1beta1_lease_t *io_k8s_api_coordination_v1beta1_lease);

#endif /* _io_k8s_api_coordination_v1beta1_lease_H_ */

