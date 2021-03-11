/*
 * io_k8s_api_node_v1alpha1_scheduling.h
 *
 * Scheduling specifies the scheduling constraints for nodes supporting a RuntimeClass.
 */

#ifndef _io_k8s_api_node_v1alpha1_scheduling_H_
#define _io_k8s_api_node_v1alpha1_scheduling_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_node_v1alpha1_scheduling_t io_k8s_api_node_v1alpha1_scheduling_t;

#include "io_k8s_api_core_v1_toleration.h"



typedef struct io_k8s_api_node_v1alpha1_scheduling_t {
    list_t* node_selector; //map
    list_t *tolerations; //nonprimitive container

} io_k8s_api_node_v1alpha1_scheduling_t;

io_k8s_api_node_v1alpha1_scheduling_t *io_k8s_api_node_v1alpha1_scheduling_create(
    list_t* node_selector,
    list_t *tolerations
);

void io_k8s_api_node_v1alpha1_scheduling_free(io_k8s_api_node_v1alpha1_scheduling_t *io_k8s_api_node_v1alpha1_scheduling);

io_k8s_api_node_v1alpha1_scheduling_t *io_k8s_api_node_v1alpha1_scheduling_parseFromJSON(cJSON *io_k8s_api_node_v1alpha1_schedulingJSON);

cJSON *io_k8s_api_node_v1alpha1_scheduling_convertToJSON(io_k8s_api_node_v1alpha1_scheduling_t *io_k8s_api_node_v1alpha1_scheduling);

#endif /* _io_k8s_api_node_v1alpha1_scheduling_H_ */

