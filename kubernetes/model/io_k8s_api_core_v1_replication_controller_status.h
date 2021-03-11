/*
 * io_k8s_api_core_v1_replication_controller_status.h
 *
 * ReplicationControllerStatus represents the current status of a replication controller.
 */

#ifndef _io_k8s_api_core_v1_replication_controller_status_H_
#define _io_k8s_api_core_v1_replication_controller_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_replication_controller_status_t io_k8s_api_core_v1_replication_controller_status_t;

#include "io_k8s_api_core_v1_replication_controller_condition.h"



typedef struct io_k8s_api_core_v1_replication_controller_status_t {
    int available_replicas; //numeric
    list_t *conditions; //nonprimitive container
    int fully_labeled_replicas; //numeric
    long observed_generation; //numeric
    int ready_replicas; //numeric
    int replicas; //numeric

} io_k8s_api_core_v1_replication_controller_status_t;

io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status_create(
    int available_replicas,
    list_t *conditions,
    int fully_labeled_replicas,
    long observed_generation,
    int ready_replicas,
    int replicas
);

void io_k8s_api_core_v1_replication_controller_status_free(io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status);

io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status_parseFromJSON(cJSON *io_k8s_api_core_v1_replication_controller_statusJSON);

cJSON *io_k8s_api_core_v1_replication_controller_status_convertToJSON(io_k8s_api_core_v1_replication_controller_status_t *io_k8s_api_core_v1_replication_controller_status);

#endif /* _io_k8s_api_core_v1_replication_controller_status_H_ */

