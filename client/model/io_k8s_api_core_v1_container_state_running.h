/*
 * io_k8s_api_core_v1_container_state_running.h
 *
 * ContainerStateRunning is a running state of a container.
 */

#ifndef _io_k8s_api_core_v1_container_state_running_H_
#define _io_k8s_api_core_v1_container_state_running_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_container_state_running_t io_k8s_api_core_v1_container_state_running_t;




typedef struct io_k8s_api_core_v1_container_state_running_t {
    char *started_at; //date time

} io_k8s_api_core_v1_container_state_running_t;

io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running_create(
    char *started_at
);

void io_k8s_api_core_v1_container_state_running_free(io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running);

io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running_parseFromJSON(cJSON *io_k8s_api_core_v1_container_state_runningJSON);

cJSON *io_k8s_api_core_v1_container_state_running_convertToJSON(io_k8s_api_core_v1_container_state_running_t *io_k8s_api_core_v1_container_state_running);

#endif /* _io_k8s_api_core_v1_container_state_running_H_ */

