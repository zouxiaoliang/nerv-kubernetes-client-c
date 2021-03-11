/*
 * io_k8s_api_core_v1_node_system_info.h
 *
 * NodeSystemInfo is a set of ids/uuids to uniquely identify the node.
 */

#ifndef _io_k8s_api_core_v1_node_system_info_H_
#define _io_k8s_api_core_v1_node_system_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_node_system_info_t io_k8s_api_core_v1_node_system_info_t;




typedef struct io_k8s_api_core_v1_node_system_info_t {
    char *architecture; // string
    char *boot_id; // string
    char *container_runtime_version; // string
    char *kernel_version; // string
    char *kube_proxy_version; // string
    char *kubelet_version; // string
    char *machine_id; // string
    char *operating_system; // string
    char *os_image; // string
    char *system_uuid; // string

} io_k8s_api_core_v1_node_system_info_t;

io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info_create(
    char *architecture,
    char *boot_id,
    char *container_runtime_version,
    char *kernel_version,
    char *kube_proxy_version,
    char *kubelet_version,
    char *machine_id,
    char *operating_system,
    char *os_image,
    char *system_uuid
);

void io_k8s_api_core_v1_node_system_info_free(io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info);

io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info_parseFromJSON(cJSON *io_k8s_api_core_v1_node_system_infoJSON);

cJSON *io_k8s_api_core_v1_node_system_info_convertToJSON(io_k8s_api_core_v1_node_system_info_t *io_k8s_api_core_v1_node_system_info);

#endif /* _io_k8s_api_core_v1_node_system_info_H_ */

