/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_delete_options.h
 *
 * DeleteOptions may be provided when deleting an API object.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_preconditions.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t {
    char *api_version; // string
    list_t *dry_run; //primitive container
    long grace_period_seconds; //numeric
    char *kind; // string
    int orphan_dependents; //boolean
    struct io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *preconditions; //model
    char *propagation_policy; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t;

io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_create(
    char *api_version,
    list_t *dry_run,
    long grace_period_seconds,
    char *kind,
    int orphan_dependents,
    io_k8s_apimachinery_pkg_apis_meta_v1_preconditions_t *preconditions,
    char *propagation_policy
);

void io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_free(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options);

io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_delete_optionsJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_t *io_k8s_apimachinery_pkg_apis_meta_v1_delete_options);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_delete_options_H_ */

