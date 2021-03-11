/*
 * io_k8s_api_node_v1_overhead.h
 *
 * Overhead structure represents the resource overhead associated with running a pod.
 */

#ifndef _io_k8s_api_node_v1_overhead_H_
#define _io_k8s_api_node_v1_overhead_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_node_v1_overhead_t io_k8s_api_node_v1_overhead_t;




typedef struct io_k8s_api_node_v1_overhead_t {
    list_t* pod_fixed; //map

} io_k8s_api_node_v1_overhead_t;

io_k8s_api_node_v1_overhead_t *io_k8s_api_node_v1_overhead_create(
    list_t* pod_fixed
);

void io_k8s_api_node_v1_overhead_free(io_k8s_api_node_v1_overhead_t *io_k8s_api_node_v1_overhead);

io_k8s_api_node_v1_overhead_t *io_k8s_api_node_v1_overhead_parseFromJSON(cJSON *io_k8s_api_node_v1_overheadJSON);

cJSON *io_k8s_api_node_v1_overhead_convertToJSON(io_k8s_api_node_v1_overhead_t *io_k8s_api_node_v1_overhead);

#endif /* _io_k8s_api_node_v1_overhead_H_ */

