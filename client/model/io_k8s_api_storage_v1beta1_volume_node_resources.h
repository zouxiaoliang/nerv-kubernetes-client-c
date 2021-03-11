/*
 * io_k8s_api_storage_v1beta1_volume_node_resources.h
 *
 * VolumeNodeResources is a set of resource limits for scheduling of volumes.
 */

#ifndef _io_k8s_api_storage_v1beta1_volume_node_resources_H_
#define _io_k8s_api_storage_v1beta1_volume_node_resources_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1beta1_volume_node_resources_t io_k8s_api_storage_v1beta1_volume_node_resources_t;




typedef struct io_k8s_api_storage_v1beta1_volume_node_resources_t {
    int count; //numeric

} io_k8s_api_storage_v1beta1_volume_node_resources_t;

io_k8s_api_storage_v1beta1_volume_node_resources_t *io_k8s_api_storage_v1beta1_volume_node_resources_create(
    int count
);

void io_k8s_api_storage_v1beta1_volume_node_resources_free(io_k8s_api_storage_v1beta1_volume_node_resources_t *io_k8s_api_storage_v1beta1_volume_node_resources);

io_k8s_api_storage_v1beta1_volume_node_resources_t *io_k8s_api_storage_v1beta1_volume_node_resources_parseFromJSON(cJSON *io_k8s_api_storage_v1beta1_volume_node_resourcesJSON);

cJSON *io_k8s_api_storage_v1beta1_volume_node_resources_convertToJSON(io_k8s_api_storage_v1beta1_volume_node_resources_t *io_k8s_api_storage_v1beta1_volume_node_resources);

#endif /* _io_k8s_api_storage_v1beta1_volume_node_resources_H_ */

