/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_condition.h
 *
 * Condition contains details for one aspect of the current state of this API Resource.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_condition_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_condition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_condition_t io_k8s_apimachinery_pkg_apis_meta_v1_condition_t;




typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_condition_t {
    char *last_transition_time; //date time
    char *message; // string
    long observed_generation; //numeric
    char *reason; // string
    char *status; // string
    char *type; // string

} io_k8s_apimachinery_pkg_apis_meta_v1_condition_t;

io_k8s_apimachinery_pkg_apis_meta_v1_condition_t *io_k8s_apimachinery_pkg_apis_meta_v1_condition_create(
    char *last_transition_time,
    char *message,
    long observed_generation,
    char *reason,
    char *status,
    char *type
);

void io_k8s_apimachinery_pkg_apis_meta_v1_condition_free(io_k8s_apimachinery_pkg_apis_meta_v1_condition_t *io_k8s_apimachinery_pkg_apis_meta_v1_condition);

io_k8s_apimachinery_pkg_apis_meta_v1_condition_t *io_k8s_apimachinery_pkg_apis_meta_v1_condition_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_conditionJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_condition_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_condition_t *io_k8s_apimachinery_pkg_apis_meta_v1_condition);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_condition_H_ */

