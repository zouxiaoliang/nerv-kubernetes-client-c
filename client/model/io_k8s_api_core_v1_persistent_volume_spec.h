/*
 * io_k8s_api_core_v1_persistent_volume_spec.h
 *
 * PersistentVolumeSpec is the specification of a persistent volume.
 */

#ifndef _io_k8s_api_core_v1_persistent_volume_spec_H_
#define _io_k8s_api_core_v1_persistent_volume_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_persistent_volume_spec_t io_k8s_api_core_v1_persistent_volume_spec_t;

#include "io_k8s_api_core_v1_aws_elastic_block_store_volume_source.h"
#include "io_k8s_api_core_v1_azure_disk_volume_source.h"
#include "io_k8s_api_core_v1_azure_file_persistent_volume_source.h"
#include "io_k8s_api_core_v1_ceph_fs_persistent_volume_source.h"
#include "io_k8s_api_core_v1_cinder_persistent_volume_source.h"
#include "io_k8s_api_core_v1_csi_persistent_volume_source.h"
#include "io_k8s_api_core_v1_fc_volume_source.h"
#include "io_k8s_api_core_v1_flex_persistent_volume_source.h"
#include "io_k8s_api_core_v1_flocker_volume_source.h"
#include "io_k8s_api_core_v1_gce_persistent_disk_volume_source.h"
#include "io_k8s_api_core_v1_glusterfs_persistent_volume_source.h"
#include "io_k8s_api_core_v1_host_path_volume_source.h"
#include "io_k8s_api_core_v1_iscsi_persistent_volume_source.h"
#include "io_k8s_api_core_v1_local_volume_source.h"
#include "io_k8s_api_core_v1_nfs_volume_source.h"
#include "io_k8s_api_core_v1_object_reference.h"
#include "io_k8s_api_core_v1_photon_persistent_disk_volume_source.h"
#include "io_k8s_api_core_v1_portworx_volume_source.h"
#include "io_k8s_api_core_v1_quobyte_volume_source.h"
#include "io_k8s_api_core_v1_rbd_persistent_volume_source.h"
#include "io_k8s_api_core_v1_scale_io_persistent_volume_source.h"
#include "io_k8s_api_core_v1_storage_os_persistent_volume_source.h"
#include "io_k8s_api_core_v1_volume_node_affinity.h"
#include "io_k8s_api_core_v1_vsphere_virtual_disk_volume_source.h"



typedef struct io_k8s_api_core_v1_persistent_volume_spec_t {
    list_t *access_modes; //primitive container
    struct io_k8s_api_core_v1_aws_elastic_block_store_volume_source_t *aws_elastic_block_store; //model
    struct io_k8s_api_core_v1_azure_disk_volume_source_t *azure_disk; //model
    struct io_k8s_api_core_v1_azure_file_persistent_volume_source_t *azure_file; //model
    list_t* capacity; //map
    struct io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t *cephfs; //model
    struct io_k8s_api_core_v1_cinder_persistent_volume_source_t *cinder; //model
    struct io_k8s_api_core_v1_object_reference_t *claim_ref; //model
    struct io_k8s_api_core_v1_csi_persistent_volume_source_t *csi; //model
    struct io_k8s_api_core_v1_fc_volume_source_t *fc; //model
    struct io_k8s_api_core_v1_flex_persistent_volume_source_t *flex_volume; //model
    struct io_k8s_api_core_v1_flocker_volume_source_t *flocker; //model
    struct io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *gce_persistent_disk; //model
    struct io_k8s_api_core_v1_glusterfs_persistent_volume_source_t *glusterfs; //model
    struct io_k8s_api_core_v1_host_path_volume_source_t *host_path; //model
    struct io_k8s_api_core_v1_iscsi_persistent_volume_source_t *iscsi; //model
    struct io_k8s_api_core_v1_local_volume_source_t *local; //model
    list_t *mount_options; //primitive container
    struct io_k8s_api_core_v1_nfs_volume_source_t *nfs; //model
    struct io_k8s_api_core_v1_volume_node_affinity_t *node_affinity; //model
    char *persistent_volume_reclaim_policy; // string
    struct io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *photon_persistent_disk; //model
    struct io_k8s_api_core_v1_portworx_volume_source_t *portworx_volume; //model
    struct io_k8s_api_core_v1_quobyte_volume_source_t *quobyte; //model
    struct io_k8s_api_core_v1_rbd_persistent_volume_source_t *rbd; //model
    struct io_k8s_api_core_v1_scale_io_persistent_volume_source_t *scale_io; //model
    char *storage_class_name; // string
    struct io_k8s_api_core_v1_storage_os_persistent_volume_source_t *storageos; //model
    char *volume_mode; // string
    struct io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *vsphere_volume; //model

} io_k8s_api_core_v1_persistent_volume_spec_t;

io_k8s_api_core_v1_persistent_volume_spec_t *io_k8s_api_core_v1_persistent_volume_spec_create(
    list_t *access_modes,
    io_k8s_api_core_v1_aws_elastic_block_store_volume_source_t *aws_elastic_block_store,
    io_k8s_api_core_v1_azure_disk_volume_source_t *azure_disk,
    io_k8s_api_core_v1_azure_file_persistent_volume_source_t *azure_file,
    list_t* capacity,
    io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t *cephfs,
    io_k8s_api_core_v1_cinder_persistent_volume_source_t *cinder,
    io_k8s_api_core_v1_object_reference_t *claim_ref,
    io_k8s_api_core_v1_csi_persistent_volume_source_t *csi,
    io_k8s_api_core_v1_fc_volume_source_t *fc,
    io_k8s_api_core_v1_flex_persistent_volume_source_t *flex_volume,
    io_k8s_api_core_v1_flocker_volume_source_t *flocker,
    io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *gce_persistent_disk,
    io_k8s_api_core_v1_glusterfs_persistent_volume_source_t *glusterfs,
    io_k8s_api_core_v1_host_path_volume_source_t *host_path,
    io_k8s_api_core_v1_iscsi_persistent_volume_source_t *iscsi,
    io_k8s_api_core_v1_local_volume_source_t *local,
    list_t *mount_options,
    io_k8s_api_core_v1_nfs_volume_source_t *nfs,
    io_k8s_api_core_v1_volume_node_affinity_t *node_affinity,
    char *persistent_volume_reclaim_policy,
    io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *photon_persistent_disk,
    io_k8s_api_core_v1_portworx_volume_source_t *portworx_volume,
    io_k8s_api_core_v1_quobyte_volume_source_t *quobyte,
    io_k8s_api_core_v1_rbd_persistent_volume_source_t *rbd,
    io_k8s_api_core_v1_scale_io_persistent_volume_source_t *scale_io,
    char *storage_class_name,
    io_k8s_api_core_v1_storage_os_persistent_volume_source_t *storageos,
    char *volume_mode,
    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *vsphere_volume
);

void io_k8s_api_core_v1_persistent_volume_spec_free(io_k8s_api_core_v1_persistent_volume_spec_t *io_k8s_api_core_v1_persistent_volume_spec);

io_k8s_api_core_v1_persistent_volume_spec_t *io_k8s_api_core_v1_persistent_volume_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_specJSON);

cJSON *io_k8s_api_core_v1_persistent_volume_spec_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec_t *io_k8s_api_core_v1_persistent_volume_spec);

#endif /* _io_k8s_api_core_v1_persistent_volume_spec_H_ */

