/*
 * io_k8s_api_storage_v1_csi_node.h
 *
 * CSINode holds information about all CSI drivers installed on a node. CSI drivers do not need to create the CSINode object directly. As long as they use the node-driver-registrar sidecar container, the kubelet will automatically populate the CSINode object for the CSI driver as part of kubelet plugin registration. CSINode has the same name as a node. If the object is missing, it means either there are no CSI Drivers available on the node, or the Kubelet version is low enough that it doesn&#39;t create this object. CSINode has an OwnerReference that points to the corresponding node object.
 */

#ifndef _io_k8s_api_storage_v1_csi_node_H_
#define _io_k8s_api_storage_v1_csi_node_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1_csi_node_t io_k8s_api_storage_v1_csi_node_t;

#include "io_k8s_api_storage_v1_csi_node_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_storage_v1_csi_node_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_storage_v1_csi_node_spec_t *spec; //model

} io_k8s_api_storage_v1_csi_node_t;

io_k8s_api_storage_v1_csi_node_t *io_k8s_api_storage_v1_csi_node_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_storage_v1_csi_node_spec_t *spec
);

void io_k8s_api_storage_v1_csi_node_free(io_k8s_api_storage_v1_csi_node_t *io_k8s_api_storage_v1_csi_node);

io_k8s_api_storage_v1_csi_node_t *io_k8s_api_storage_v1_csi_node_parseFromJSON(cJSON *io_k8s_api_storage_v1_csi_nodeJSON);

cJSON *io_k8s_api_storage_v1_csi_node_convertToJSON(io_k8s_api_storage_v1_csi_node_t *io_k8s_api_storage_v1_csi_node);

#endif /* _io_k8s_api_storage_v1_csi_node_H_ */

