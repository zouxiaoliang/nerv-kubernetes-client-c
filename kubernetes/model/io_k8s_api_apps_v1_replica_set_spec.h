/*
 * io_k8s_api_apps_v1_replica_set_spec.h
 *
 * ReplicaSetSpec is the specification of a ReplicaSet.
 */

#ifndef _io_k8s_api_apps_v1_replica_set_spec_H_
#define _io_k8s_api_apps_v1_replica_set_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_replica_set_spec_t io_k8s_api_apps_v1_replica_set_spec_t;

#include "io_k8s_api_core_v1_pod_template_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_apps_v1_replica_set_spec_t {
    int min_ready_seconds; //numeric
    int replicas; //numeric
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector; //model
    struct io_k8s_api_core_v1_pod_template_spec_t *_template; //model

} io_k8s_api_apps_v1_replica_set_spec_t;

io_k8s_api_apps_v1_replica_set_spec_t *io_k8s_api_apps_v1_replica_set_spec_create(
    int min_ready_seconds,
    int replicas,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    io_k8s_api_core_v1_pod_template_spec_t *_template
);

void io_k8s_api_apps_v1_replica_set_spec_free(io_k8s_api_apps_v1_replica_set_spec_t *io_k8s_api_apps_v1_replica_set_spec);

io_k8s_api_apps_v1_replica_set_spec_t *io_k8s_api_apps_v1_replica_set_spec_parseFromJSON(cJSON *io_k8s_api_apps_v1_replica_set_specJSON);

cJSON *io_k8s_api_apps_v1_replica_set_spec_convertToJSON(io_k8s_api_apps_v1_replica_set_spec_t *io_k8s_api_apps_v1_replica_set_spec);

#endif /* _io_k8s_api_apps_v1_replica_set_spec_H_ */

