/*
 * io_k8s_api_core_v1_endpoints.h
 *
 * Endpoints is a collection of endpoints that implement the actual service. Example:   Name: \&quot;mysvc\&quot;,   Subsets: [     {       Addresses: [{\&quot;ip\&quot;: \&quot;10.10.1.1\&quot;}, {\&quot;ip\&quot;: \&quot;10.10.2.2\&quot;}],       Ports: [{\&quot;name\&quot;: \&quot;a\&quot;, \&quot;port\&quot;: 8675}, {\&quot;name\&quot;: \&quot;b\&quot;, \&quot;port\&quot;: 309}]     },     {       Addresses: [{\&quot;ip\&quot;: \&quot;10.10.3.3\&quot;}],       Ports: [{\&quot;name\&quot;: \&quot;a\&quot;, \&quot;port\&quot;: 93}, {\&quot;name\&quot;: \&quot;b\&quot;, \&quot;port\&quot;: 76}]     },  ]
 */

#ifndef _io_k8s_api_core_v1_endpoints_H_
#define _io_k8s_api_core_v1_endpoints_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_endpoints_t io_k8s_api_core_v1_endpoints_t;

#include "io_k8s_api_core_v1_endpoint_subset.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_endpoints_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    list_t *subsets; //nonprimitive container

} io_k8s_api_core_v1_endpoints_t;

io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t *subsets
);

void io_k8s_api_core_v1_endpoints_free(io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints);

io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints_parseFromJSON(cJSON *io_k8s_api_core_v1_endpointsJSON);

cJSON *io_k8s_api_core_v1_endpoints_convertToJSON(io_k8s_api_core_v1_endpoints_t *io_k8s_api_core_v1_endpoints);

#endif /* _io_k8s_api_core_v1_endpoints_H_ */

