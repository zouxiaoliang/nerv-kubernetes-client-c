/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement.h
 *
 * A label selector requirement is a selector that contains values, a key, and an operator that relates the key and values.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t;




typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t {
    char *key; // string
    char *_operator; // string
    list_t *values; //primitive container

} io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t;

io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_create(
    char *key,
    char *_operator,
    list_t *values
);

void io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement);

io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirementJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement_H_ */

