/*
 * io_k8s_api_core_v1_namespace_status.h
 *
 * NamespaceStatus is information about the current status of a Namespace.
 */

#ifndef _io_k8s_api_core_v1_namespace_status_H_
#define _io_k8s_api_core_v1_namespace_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_namespace_status_t io_k8s_api_core_v1_namespace_status_t;

#include "io_k8s_api_core_v1_namespace_condition.h"



typedef struct io_k8s_api_core_v1_namespace_status_t {
    list_t *conditions; //nonprimitive container
    char *phase; // string

} io_k8s_api_core_v1_namespace_status_t;

io_k8s_api_core_v1_namespace_status_t *io_k8s_api_core_v1_namespace_status_create(
    list_t *conditions,
    char *phase
);

void io_k8s_api_core_v1_namespace_status_free(io_k8s_api_core_v1_namespace_status_t *io_k8s_api_core_v1_namespace_status);

io_k8s_api_core_v1_namespace_status_t *io_k8s_api_core_v1_namespace_status_parseFromJSON(cJSON *io_k8s_api_core_v1_namespace_statusJSON);

cJSON *io_k8s_api_core_v1_namespace_status_convertToJSON(io_k8s_api_core_v1_namespace_status_t *io_k8s_api_core_v1_namespace_status);

#endif /* _io_k8s_api_core_v1_namespace_status_H_ */

