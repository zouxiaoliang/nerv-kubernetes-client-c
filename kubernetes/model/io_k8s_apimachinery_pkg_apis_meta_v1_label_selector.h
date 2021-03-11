/*
 * io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h
 *
 * A label selector is a label query over a set of resources. The result of matchLabels and matchExpressions are ANDed. An empty label selector matches all objects. A null label selector matches no objects.
 */

#ifndef _io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_H_
#define _io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_requirement.h"



typedef struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t {
    list_t *match_expressions; //nonprimitive container
    list_t* match_labels; //map

} io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t;

io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_create(
    list_t *match_expressions,
    list_t* match_labels
);

void io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_free(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector);

io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_parseFromJSON(cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_label_selectorJSON);

cJSON *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_convertToJSON(io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *io_k8s_apimachinery_pkg_apis_meta_v1_label_selector);

#endif /* _io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_H_ */

