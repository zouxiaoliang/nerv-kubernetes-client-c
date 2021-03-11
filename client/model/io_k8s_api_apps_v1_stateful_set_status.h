/*
 * io_k8s_api_apps_v1_stateful_set_status.h
 *
 * StatefulSetStatus represents the current state of a StatefulSet.
 */

#ifndef _io_k8s_api_apps_v1_stateful_set_status_H_
#define _io_k8s_api_apps_v1_stateful_set_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_apps_v1_stateful_set_status_t io_k8s_api_apps_v1_stateful_set_status_t;

#include "io_k8s_api_apps_v1_stateful_set_condition.h"



typedef struct io_k8s_api_apps_v1_stateful_set_status_t {
    int collision_count; //numeric
    list_t *conditions; //nonprimitive container
    int current_replicas; //numeric
    char *current_revision; // string
    long observed_generation; //numeric
    int ready_replicas; //numeric
    int replicas; //numeric
    char *update_revision; // string
    int updated_replicas; //numeric

} io_k8s_api_apps_v1_stateful_set_status_t;

io_k8s_api_apps_v1_stateful_set_status_t *io_k8s_api_apps_v1_stateful_set_status_create(
    int collision_count,
    list_t *conditions,
    int current_replicas,
    char *current_revision,
    long observed_generation,
    int ready_replicas,
    int replicas,
    char *update_revision,
    int updated_replicas
);

void io_k8s_api_apps_v1_stateful_set_status_free(io_k8s_api_apps_v1_stateful_set_status_t *io_k8s_api_apps_v1_stateful_set_status);

io_k8s_api_apps_v1_stateful_set_status_t *io_k8s_api_apps_v1_stateful_set_status_parseFromJSON(cJSON *io_k8s_api_apps_v1_stateful_set_statusJSON);

cJSON *io_k8s_api_apps_v1_stateful_set_status_convertToJSON(io_k8s_api_apps_v1_stateful_set_status_t *io_k8s_api_apps_v1_stateful_set_status);

#endif /* _io_k8s_api_apps_v1_stateful_set_status_H_ */

