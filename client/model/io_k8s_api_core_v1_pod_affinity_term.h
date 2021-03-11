/*
 * io_k8s_api_core_v1_pod_affinity_term.h
 *
 * Defines a set of pods (namely those matching the labelSelector relative to the given namespace(s)) that this pod should be co-located (affinity) or not co-located (anti-affinity) with, where co-located is defined as running on a node whose value of the label with key &lt;topologyKey&gt; matches that of any node on which a pod of the set of pods is running
 */

#ifndef _io_k8s_api_core_v1_pod_affinity_term_H_
#define _io_k8s_api_core_v1_pod_affinity_term_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_affinity_term_t io_k8s_api_core_v1_pod_affinity_term_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_core_v1_pod_affinity_term_t {
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *label_selector; //model
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector; //model
    list_t *namespaces; //primitive container
    char *topology_key; // string

} io_k8s_api_core_v1_pod_affinity_term_t;

io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term_create(
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *label_selector,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *namespace_selector,
    list_t *namespaces,
    char *topology_key
);

void io_k8s_api_core_v1_pod_affinity_term_free(io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term);

io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_affinity_termJSON);

cJSON *io_k8s_api_core_v1_pod_affinity_term_convertToJSON(io_k8s_api_core_v1_pod_affinity_term_t *io_k8s_api_core_v1_pod_affinity_term);

#endif /* _io_k8s_api_core_v1_pod_affinity_term_H_ */

