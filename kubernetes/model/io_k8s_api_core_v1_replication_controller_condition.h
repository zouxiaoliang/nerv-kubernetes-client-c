/*
 * io_k8s_api_core_v1_replication_controller_condition.h
 *
 * ReplicationControllerCondition describes the state of a replication controller at a certain point.
 */

#ifndef _io_k8s_api_core_v1_replication_controller_condition_H_
#define _io_k8s_api_core_v1_replication_controller_condition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_replication_controller_condition_t io_k8s_api_core_v1_replication_controller_condition_t;




typedef struct io_k8s_api_core_v1_replication_controller_condition_t {
    char *last_transition_time; //date time
    char *message; // string
    char *reason; // string
    char *status; // string
    char *type; // string

} io_k8s_api_core_v1_replication_controller_condition_t;

io_k8s_api_core_v1_replication_controller_condition_t *io_k8s_api_core_v1_replication_controller_condition_create(
    char *last_transition_time,
    char *message,
    char *reason,
    char *status,
    char *type
);

void io_k8s_api_core_v1_replication_controller_condition_free(io_k8s_api_core_v1_replication_controller_condition_t *io_k8s_api_core_v1_replication_controller_condition);

io_k8s_api_core_v1_replication_controller_condition_t *io_k8s_api_core_v1_replication_controller_condition_parseFromJSON(cJSON *io_k8s_api_core_v1_replication_controller_conditionJSON);

cJSON *io_k8s_api_core_v1_replication_controller_condition_convertToJSON(io_k8s_api_core_v1_replication_controller_condition_t *io_k8s_api_core_v1_replication_controller_condition);

#endif /* _io_k8s_api_core_v1_replication_controller_condition_H_ */

