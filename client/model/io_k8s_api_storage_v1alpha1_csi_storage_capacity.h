/*
 * io_k8s_api_storage_v1alpha1_csi_storage_capacity.h
 *
 * CSIStorageCapacity stores the result of one CSI GetCapacity call. For a given StorageClass, this describes the available capacity in a particular topology segment.  This can be used when considering where to instantiate new PersistentVolumes.  For example this can express things like: - StorageClass \&quot;standard\&quot; has \&quot;1234 GiB\&quot; available in \&quot;topology.kubernetes.io/zone&#x3D;us-east1\&quot; - StorageClass \&quot;localssd\&quot; has \&quot;10 GiB\&quot; available in \&quot;kubernetes.io/hostname&#x3D;knode-abc123\&quot;  The following three cases all imply that no capacity is available for a certain combination: - no object exists with suitable topology and storage class name - such an object exists, but the capacity is unset - such an object exists, but the capacity is zero  The producer of these objects can decide which approach is more suitable.  This is an alpha feature and only available when the CSIStorageCapacity feature is enabled.
 */

#ifndef _io_k8s_api_storage_v1alpha1_csi_storage_capacity_H_
#define _io_k8s_api_storage_v1alpha1_csi_storage_capacity_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1alpha1_csi_storage_capacity_t io_k8s_api_storage_v1alpha1_csi_storage_capacity_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_storage_v1alpha1_csi_storage_capacity_t {
    char *api_version; // string
    char *capacity; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *node_topology; //model
    char *storage_class_name; // string

} io_k8s_api_storage_v1alpha1_csi_storage_capacity_t;

io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity_create(
    char *api_version,
    char *capacity,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *node_topology,
    char *storage_class_name
);

void io_k8s_api_storage_v1alpha1_csi_storage_capacity_free(io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity);

io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity_parseFromJSON(cJSON *io_k8s_api_storage_v1alpha1_csi_storage_capacityJSON);

cJSON *io_k8s_api_storage_v1alpha1_csi_storage_capacity_convertToJSON(io_k8s_api_storage_v1alpha1_csi_storage_capacity_t *io_k8s_api_storage_v1alpha1_csi_storage_capacity);

#endif /* _io_k8s_api_storage_v1alpha1_csi_storage_capacity_H_ */

