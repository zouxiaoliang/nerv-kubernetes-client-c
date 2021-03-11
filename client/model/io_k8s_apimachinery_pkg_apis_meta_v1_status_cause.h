/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_status_cause.h
 *
 * StatusCause provides more information about an api.Status failure, including cases when multiple errors are encountered.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t;




typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t {
    char *field; // string
    char *message; // string
    char *reason; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t;

io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_create(
    char *field,
    char *message,
    char *reason
);

void io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_free(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause);

io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_causeJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_cause);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_status_cause_H_ */

