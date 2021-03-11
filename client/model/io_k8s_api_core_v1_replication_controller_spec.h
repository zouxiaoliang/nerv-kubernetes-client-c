/*
 * io_k8s_api_core_v1_replication_controller_spec.h
 *
 * ReplicationControllerSpec is the specification of a replication controller.
 */

#ifndef _io_k8s_api_core_v1_replication_controller_spec_H_
#define _io_k8s_api_core_v1_replication_controller_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_replication_controller_spec_t io_k8s_api_core_v1_replication_controller_spec_t;

#include "io_k8s_api_core_v1_pod_template_spec.h"



typedef struct io_k8s_api_core_v1_replication_controller_spec_t {
    int min_ready_seconds; //numeric
    int replicas; //numeric
    list_t* selector; //map
    struct io_k8s_api_core_v1_pod_template_spec_t *_template; //model

} io_k8s_api_core_v1_replication_controller_spec_t;

io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec_create(
    int min_ready_seconds,
    int replicas,
    list_t* selector,
    io_k8s_api_core_v1_pod_template_spec_t *_template
);

void io_k8s_api_core_v1_replication_controller_spec_free(io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec);

io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_replication_controller_specJSON);

cJSON *io_k8s_api_core_v1_replication_controller_spec_convertToJSON(io_k8s_api_core_v1_replication_controller_spec_t *io_k8s_api_core_v1_replication_controller_spec);

#endif /* _io_k8s_api_core_v1_replication_controller_spec_H_ */

