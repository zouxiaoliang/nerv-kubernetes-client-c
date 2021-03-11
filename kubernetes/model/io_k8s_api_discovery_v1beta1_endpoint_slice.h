/*
 * io_k8s_api_discovery_v1beta1_endpoint_slice.h
 *
 * EndpointSlice represents a subset of the endpoints that implement a service. For a given service there may be multiple EndpointSlice objects, selected by labels, which must be joined to produce the full set of endpoints.
 */

#ifndef _io_k8s_api_discovery_v1beta1_endpoint_slice_H_
#define _io_k8s_api_discovery_v1beta1_endpoint_slice_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_discovery_v1beta1_endpoint_slice_t io_k8s_api_discovery_v1beta1_endpoint_slice_t;

#include "io_k8s_api_discovery_v1beta1_endpoint.h"
#include "io_k8s_api_discovery_v1beta1_endpoint_port.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_discovery_v1beta1_endpoint_slice_t {
    char *address_type; // string
    char *api_version; // string
    list_t *endpoints; //nonprimitive container
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    list_t *ports; //nonprimitive container

} io_k8s_api_discovery_v1beta1_endpoint_slice_t;

io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice_create(
    char *address_type,
    char *api_version,
    list_t *endpoints,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *ports
);

void io_k8s_api_discovery_v1beta1_endpoint_slice_free(io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice);

io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice_parseFromJSON(cJSON *io_k8s_api_discovery_v1beta1_endpoint_sliceJSON);

cJSON *io_k8s_api_discovery_v1beta1_endpoint_slice_convertToJSON(io_k8s_api_discovery_v1beta1_endpoint_slice_t *io_k8s_api_discovery_v1beta1_endpoint_slice);

#endif /* _io_k8s_api_discovery_v1beta1_endpoint_slice_H_ */

