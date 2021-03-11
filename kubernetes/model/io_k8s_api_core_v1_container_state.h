/*
 * io_k8s_api_core_v1_container_state.h
 *
 * ContainerState holds a possible state of container. Only one of its members may be specified. If none of them is specified, the default one is ContainerStateWaiting.
 */

#ifndef _io_k8s_api_core_v1_container_state_H_
#define _io_k8s_api_core_v1_container_state_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_container_state_t io_k8s_api_core_v1_container_state_t;

#include "io_k8s_api_core_v1_container_state_running.h"
#include "io_k8s_api_core_v1_container_state_terminated.h"
#include "io_k8s_api_core_v1_container_state_waiting.h"



typedef struct io_k8s_api_core_v1_container_state_t {
    struct io_k8s_api_core_v1_container_state_running_t *running; //model
    struct io_k8s_api_core_v1_container_state_terminated_t *terminated; //model
    struct io_k8s_api_core_v1_container_state_waiting_t *waiting; //model

} io_k8s_api_core_v1_container_state_t;

io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state_create(
    io_k8s_api_core_v1_container_state_running_t *running,
    io_k8s_api_core_v1_container_state_terminated_t *terminated,
    io_k8s_api_core_v1_container_state_waiting_t *waiting
);

void io_k8s_api_core_v1_container_state_free(io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state);

io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state_parseFromJSON(cJSON *io_k8s_api_core_v1_container_stateJSON);

cJSON *io_k8s_api_core_v1_container_state_convertToJSON(io_k8s_api_core_v1_container_state_t *io_k8s_api_core_v1_container_state);

#endif /* _io_k8s_api_core_v1_container_state_H_ */

