/*
 * io_k8s_api_core_v1_resource_requirements.h
 *
 * ResourceRequirements describes the compute resource requirements.
 */

#ifndef _io_k8s_api_core_v1_resource_requirements_H_
#define _io_k8s_api_core_v1_resource_requirements_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_resource_requirements_t io_k8s_api_core_v1_resource_requirements_t;




typedef struct io_k8s_api_core_v1_resource_requirements_t {
    list_t* limits; //map
    list_t* requests; //map

} io_k8s_api_core_v1_resource_requirements_t;

io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements_create(
    list_t* limits,
    list_t* requests
);

void io_k8s_api_core_v1_resource_requirements_free(io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements);

io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements_parseFromJSON(cJSON *io_k8s_api_core_v1_resource_requirementsJSON);

cJSON *io_k8s_api_core_v1_resource_requirements_convertToJSON(io_k8s_api_core_v1_resource_requirements_t *io_k8s_api_core_v1_resource_requirements);

#endif /* _io_k8s_api_core_v1_resource_requirements_H_ */

