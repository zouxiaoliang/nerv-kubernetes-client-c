/*
 * io_k8s_api_core_v1_limit_range.h
 *
 * LimitRange sets resource usage limits for each kind of resource in a Namespace.
 */

#ifndef _io_k8s_api_core_v1_limit_range_H_
#define _io_k8s_api_core_v1_limit_range_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_limit_range_t io_k8s_api_core_v1_limit_range_t;

#include "io_k8s_api_core_v1_limit_range_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_limit_range_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_limit_range_spec_t *spec; //model

} io_k8s_api_core_v1_limit_range_t;

io_k8s_api_core_v1_limit_range_t *io_k8s_api_core_v1_limit_range_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_limit_range_spec_t *spec
);

void io_k8s_api_core_v1_limit_range_free(io_k8s_api_core_v1_limit_range_t *io_k8s_api_core_v1_limit_range);

io_k8s_api_core_v1_limit_range_t *io_k8s_api_core_v1_limit_range_parseFromJSON(cJSON *io_k8s_api_core_v1_limit_rangeJSON);

cJSON *io_k8s_api_core_v1_limit_range_convertToJSON(io_k8s_api_core_v1_limit_range_t *io_k8s_api_core_v1_limit_range);

#endif /* _io_k8s_api_core_v1_limit_range_H_ */

