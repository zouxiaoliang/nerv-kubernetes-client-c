/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_preconditions.h
 *
 * Preconditions must be fulfilled before an operation (update, delete, etc.) is carried out.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t;




typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t {
    char *resource_version; // string
    char *uid; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t;

io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_create(
    char *resource_version,
    char *uid
);

void io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_free(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions);

io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_preconditionsJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *io_k8s_apimachinery_pkg_apis_meta_v1_preconditions);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_H_ */

