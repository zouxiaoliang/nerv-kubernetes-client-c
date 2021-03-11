/*
 * io_k8s_api_core_v1_pod_ip.h
 *
 * IP address information for entries in the (plural) PodIPs field. Each entry includes:    IP: An IP address allocated to the pod. Routable at least within the cluster.
 */

#ifndef _io_k8s_api_core_v1_pod_ip_H_
#define _io_k8s_api_core_v1_pod_ip_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_pod_ip_t io_k8s_api_core_v1_pod_ip_t;




typedef struct io_k8s_api_core_v1_pod_ip_t {
    char *ip; // string

} io_k8s_api_core_v1_pod_ip_t;

io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip_create(
    char *ip
);

void io_k8s_api_core_v1_pod_ip_free(io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip);

io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip_parseFromJSON(cJSON *io_k8s_api_core_v1_pod_ipJSON);

cJSON *io_k8s_api_core_v1_pod_ip_convertToJSON(io_k8s_api_core_v1_pod_ip_t *io_k8s_api_core_v1_pod_ip);

#endif /* _io_k8s_api_core_v1_pod_ip_H_ */

