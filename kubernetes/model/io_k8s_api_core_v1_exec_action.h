/*
 * io_k8s_api_core_v1_exec_action.h
 *
 * ExecAction describes a \&quot;run in container\&quot; action.
 */

#ifndef _io_k8s_api_core_v1_exec_action_H_
#define _io_k8s_api_core_v1_exec_action_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_exec_action_t io_k8s_api_core_v1_exec_action_t;




typedef struct io_k8s_api_core_v1_exec_action_t {
    list_t *command; //primitive container

} io_k8s_api_core_v1_exec_action_t;

io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action_create(
    list_t *command
);

void io_k8s_api_core_v1_exec_action_free(io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action);

io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action_parseFromJSON(cJSON *io_k8s_api_core_v1_exec_actionJSON);

cJSON *io_k8s_api_core_v1_exec_action_convertToJSON(io_k8s_api_core_v1_exec_action_t *io_k8s_api_core_v1_exec_action);

#endif /* _io_k8s_api_core_v1_exec_action_H_ */

