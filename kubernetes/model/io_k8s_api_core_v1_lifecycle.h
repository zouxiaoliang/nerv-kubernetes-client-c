/*
 * io_k8s_api_core_v1_lifecycle.h
 *
 * Lifecycle describes actions that the management system should take in response to container lifecycle events. For the PostStart and PreStop lifecycle handlers, management of the container blocks until the action is complete, unless the container process fails, in which case the handler is aborted.
 */

#ifndef _io_k8s_api_core_v1_lifecycle_H_
#define _io_k8s_api_core_v1_lifecycle_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_lifecycle_t io_k8s_api_core_v1_lifecycle_t;

#include "io_k8s_api_core_v1_handler.h"



typedef struct io_k8s_api_core_v1_lifecycle_t {
    struct io_k8s_api_core_v1_handler_t *post_start; //model
    struct io_k8s_api_core_v1_handler_t *pre_stop; //model

} io_k8s_api_core_v1_lifecycle_t;

io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle_create(
    io_k8s_api_core_v1_handler_t *post_start,
    io_k8s_api_core_v1_handler_t *pre_stop
);

void io_k8s_api_core_v1_lifecycle_free(io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle);

io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle_parseFromJSON(cJSON *io_k8s_api_core_v1_lifecycleJSON);

cJSON *io_k8s_api_core_v1_lifecycle_convertToJSON(io_k8s_api_core_v1_lifecycle_t *io_k8s_api_core_v1_lifecycle);

#endif /* _io_k8s_api_core_v1_lifecycle_H_ */

