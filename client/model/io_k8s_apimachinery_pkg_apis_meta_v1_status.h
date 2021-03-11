/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_status.h
 *
 * Status is a return value for calls that don&#39;t return other objects.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_status_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_status_t io_k8s_apimachinery_pkg_apis_meta_v1_status_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_list_meta.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_status_details.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_status_t {
    char *api_version; // string
    int code; //numeric
    struct io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *details; //model
    char *kind; // string
    char *message; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata; //model
    char *reason; // string
    char *status; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_status_t;

io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_create(
    char *api_version,
    int code,
    io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *details,
    char *kind,
    char *message,
    io_k8s_apimachinery_pkg_apis_meta_v1_list_meta_t *metadata,
    char *reason,
    char *status
);

void io_k8s_apimachinery_pkg_apis_meta_v1_status_free(io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status);

io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_statusJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_t *io_k8s_apimachinery_pkg_apis_meta_v1_status);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_status_H_ */

