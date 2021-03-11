/*
 * io_k8s_api_core_v1_container_status.h
 *
 * ContainerStatus contains details for the current status of this container.
 */

#ifndef _io_k8s_api_core_v1_container_status_H_
#define _io_k8s_api_core_v1_container_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_container_status_t io_k8s_api_core_v1_container_status_t;

#include "io_k8s_api_core_v1_container_state.h"



typedef struct io_k8s_api_core_v1_container_status_t {
    char *container_id; // string
    char *image; // string
    char *image_id; // string
    struct io_k8s_api_core_v1_container_state_t *last_state; //model
    char *name; // string
    int ready; //boolean
    int restart_count; //numeric
    int started; //boolean
    struct io_k8s_api_core_v1_container_state_t *state; //model

} io_k8s_api_core_v1_container_status_t;

io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status_create(
    char *container_id,
    char *image,
    char *image_id,
    io_k8s_api_core_v1_container_state_t *last_state,
    char *name,
    int ready,
    int restart_count,
    int started,
    io_k8s_api_core_v1_container_state_t *state
);

void io_k8s_api_core_v1_container_status_free(io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status);

io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status_parseFromJSON(cJSON *io_k8s_api_core_v1_container_statusJSON);

cJSON *io_k8s_api_core_v1_container_status_convertToJSON(io_k8s_api_core_v1_container_status_t *io_k8s_api_core_v1_container_status);

#endif /* _io_k8s_api_core_v1_container_status_H_ */

