/*
 * io_k8s_api_storage_v1_csi_node_spec.h
 *
 * CSINodeSpec holds information about the specification of all CSI drivers installed on a node
 */

#ifndef _io_k8s_api_storage_v1_csi_node_spec_H_
#define _io_k8s_api_storage_v1_csi_node_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1_csi_node_spec_t io_k8s_api_storage_v1_csi_node_spec_t;

#include "io_k8s_api_storage_v1_csi_node_driver.h"



typedef struct io_k8s_api_storage_v1_csi_node_spec_t {
    list_t *drivers; //nonprimitive container

} io_k8s_api_storage_v1_csi_node_spec_t;

io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec_create(
    list_t *drivers
);

void io_k8s_api_storage_v1_csi_node_spec_free(io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec);

io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec_parseFromJSON(cJSON *io_k8s_api_storage_v1_csi_node_specJSON);

cJSON *io_k8s_api_storage_v1_csi_node_spec_convertToJSON(io_k8s_api_storage_v1_csi_node_spec_t *io_k8s_api_storage_v1_csi_node_spec);

#endif /* _io_k8s_api_storage_v1_csi_node_spec_H_ */

