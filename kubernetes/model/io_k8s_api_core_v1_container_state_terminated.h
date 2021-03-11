/*
 * io_k8s_api_core_v1_container_state_terminated.h
 *
 * ContainerStateTerminated is a terminated state of a container.
 */

#ifndef _io_k8s_api_core_v1_container_state_terminated_H_
#define _io_k8s_api_core_v1_container_state_terminated_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_container_state_terminated_t io_k8s_api_core_v1_container_state_terminated_t;




typedef struct io_k8s_api_core_v1_container_state_terminated_t {
    char *container_id; // string
    int exit_code; //numeric
    char *finished_at; //date time
    char *message; // string
    char *reason; // string
    int signal; //numeric
    char *started_at; //date time

} io_k8s_api_core_v1_container_state_terminated_t;

io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated_create(
    char *container_id,
    int exit_code,
    char *finished_at,
    char *message,
    char *reason,
    int signal,
    char *started_at
);

void io_k8s_api_core_v1_container_state_terminated_free(io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated);

io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated_parseFromJSON(cJSON *io_k8s_api_core_v1_container_state_terminatedJSON);

cJSON *io_k8s_api_core_v1_container_state_terminated_convertToJSON(io_k8s_api_core_v1_container_state_terminated_t *io_k8s_api_core_v1_container_state_terminated);

#endif /* _io_k8s_api_core_v1_container_state_terminated_H_ */

