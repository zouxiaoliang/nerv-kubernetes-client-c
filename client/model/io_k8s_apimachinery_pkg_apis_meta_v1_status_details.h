/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_status_details.h
 *
 * StatusDetails is a set of additional properties that MAY be set by the server to provide additional information about a response. The Reason field of a Status object defines what attributes will be set. Clients must ignore fields that do not match the defined type of each attribute, and should assume that any attribute may be empty, invalid, or under defined.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_status_details_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_status_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_status_cause.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t {
    list_t *causes; //nonprimitive container
    char *group; // string
    char *kind; // string
    char *name; // string
    int retry_after_seconds; //numeric
    char *uid; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t;

io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details_create(
    list_t *causes,
    char *group,
    char *kind,
    char *name,
    int retry_after_seconds,
    char *uid
);

void io_k8s_apimachinery_pkg_apis_meta_v1_status_details_free(io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details);

io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_detailsJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_status_details_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_status_details_t *io_k8s_apimachinery_pkg_apis_meta_v1_status_details);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_status_details_H_ */

