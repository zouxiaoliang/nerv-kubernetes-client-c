/*
 * io_k8s_api_core_v1_container_state_waiting.h
 *
 * ContainerStateWaiting is a waiting state of a container.
 */

#ifndef _io_k8s_api_core_v1_container_state_waiting_H_
#define _io_k8s_api_core_v1_container_state_waiting_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_container_state_waiting_t io_k8s_api_core_v1_container_state_waiting_t;




typedef struct io_k8s_api_core_v1_container_state_waiting_t {
    char *message; // string
    char *reason; // string

} io_k8s_api_core_v1_container_state_waiting_t;

io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting_create(
    char *message,
    char *reason
);

void io_k8s_api_core_v1_container_state_waiting_free(io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting);

io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting_parseFromJSON(cJSON *io_k8s_api_core_v1_container_state_waitingJSON);

cJSON *io_k8s_api_core_v1_container_state_waiting_convertToJSON(io_k8s_api_core_v1_container_state_waiting_t *io_k8s_api_core_v1_container_state_waiting);

#endif /* _io_k8s_api_core_v1_container_state_waiting_H_ */

