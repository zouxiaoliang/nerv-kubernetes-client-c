/*
 * io_k8s_api_core_v1_service_status.h
 *
 * ServiceStatus represents the current status of a service.
 */

#ifndef _io_k8s_api_core_v1_service_status_H_
#define _io_k8s_api_core_v1_service_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_service_status_t io_k8s_api_core_v1_service_status_t;

#include "io_k8s_api_core_v1_load_balancer_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_condition.h"



typedef struct io_k8s_api_core_v1_service_status_t {
    list_t *conditions; //nonprimitive container
    struct io_k8s_api_core_v1_load_balancer_status_t *load_balancer; //model

} io_k8s_api_core_v1_service_status_t;

io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status_create(
    list_t *conditions,
    io_k8s_api_core_v1_load_balancer_status_t *load_balancer
);

void io_k8s_api_core_v1_service_status_free(io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status);

io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status_parseFromJSON(cJSON *io_k8s_api_core_v1_service_statusJSON);

cJSON *io_k8s_api_core_v1_service_status_convertToJSON(io_k8s_api_core_v1_service_status_t *io_k8s_api_core_v1_service_status);

#endif /* _io_k8s_api_core_v1_service_status_H_ */

