/*
 * io_k8s_api_storage_v1_csi_node_driver.h
 *
 * CSINodeDriver holds information about the specification of one CSI driver installed on a node
 */

#ifndef _io_k8s_api_storage_v1_csi_node_driver_H_
#define _io_k8s_api_storage_v1_csi_node_driver_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1_csi_node_driver_t io_k8s_api_storage_v1_csi_node_driver_t;

#include "io_k8s_api_storage_v1_volume_node_resources.h"



typedef struct io_k8s_api_storage_v1_csi_node_driver_t {
    struct io_k8s_api_storage_v1_volume_node_resources_t *allocatable; //model
    char *name; // string
    char *node_id; // string
    list_t *topology_keys; //primitive container

} io_k8s_api_storage_v1_csi_node_driver_t;

io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver_create(
    io_k8s_api_storage_v1_volume_node_resources_t *allocatable,
    char *name,
    char *node_id,
    list_t *topology_keys
);

void io_k8s_api_storage_v1_csi_node_driver_free(io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver);

io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver_parseFromJSON(cJSON *io_k8s_api_storage_v1_csi_node_driverJSON);

cJSON *io_k8s_api_storage_v1_csi_node_driver_convertToJSON(io_k8s_api_storage_v1_csi_node_driver_t *io_k8s_api_storage_v1_csi_node_driver);

#endif /* _io_k8s_api_storage_v1_csi_node_driver_H_ */

