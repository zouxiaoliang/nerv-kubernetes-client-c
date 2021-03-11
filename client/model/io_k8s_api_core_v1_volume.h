/*
 * io_k8s_api_core_v1_volume.h
 *
 * Volume represents a named volume in a pod that may be accessed by any container in the pod.
 */

#ifndef _io_k8s_api_core_v1_volume_H_
#define _io_k8s_api_core_v1_volume_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_volume_t io_k8s_api_core_v1_volume_t;

#include "io_k8s_api_core_v1_aws_elastic_block_store_volume_source.h"
#include "io_k8s_api_core_v1_azure_disk_volume_source.h"
#include "io_k8s_api_core_v1_azure_file_volume_source.h"
#include "io_k8s_api_core_v1_ceph_fs_volume_source.h"
#include "io_k8s_api_core_v1_cinder_volume_source.h"
#include "io_k8s_api_core_v1_config_map_volume_source.h"
#include "io_k8s_api_core_v1_csi_volume_source.h"
#include "io_k8s_api_core_v1_downward_api_volume_source.h"
#include "io_k8s_api_core_v1_empty_dir_volume_source.h"
#include "io_k8s_api_core_v1_ephemeral_volume_source.h"
#include "io_k8s_api_core_v1_fc_volume_source.h"
#include "io_k8s_api_core_v1_flex_volume_source.h"
#include "io_k8s_api_core_v1_flocker_volume_source.h"
#include "io_k8s_api_core_v1_gce_persistent_disk_volume_source.h"
#include "io_k8s_api_core_v1_git_repo_volume_source.h"
#include "io_k8s_api_core_v1_glusterfs_volume_source.h"
#include "io_k8s_api_core_v1_host_path_volume_source.h"
#include "io_k8s_api_core_v1_iscsi_volume_source.h"
#include "io_k8s_api_core_v1_nfs_volume_source.h"
#include "io_k8s_api_core_v1_persistent_volume_claim_volume_source.h"
#include "io_k8s_api_core_v1_photon_persistent_disk_volume_source.h"
#include "io_k8s_api_core_v1_portworx_volume_source.h"
#include "io_k8s_api_core_v1_projected_volume_source.h"
#include "io_k8s_api_core_v1_quobyte_volume_source.h"
#include "io_k8s_api_core_v1_rbd_volume_source.h"
#include "io_k8s_api_core_v1_scale_io_volume_source.h"
#include "io_k8s_api_core_v1_secret_volume_source.h"
#include "io_k8s_api_core_v1_storage_os_volume_source.h"
#include "io_k8s_api_core_v1_vsphere_virtual_disk_volume_source.h"



typedef struct io_k8s_api_core_v1_volume_t {
    struct io_k8s_api_core_v1_aws_elastic_block_store_volume_source_t *aws_elastic_block_store; //model
    struct io_k8s_api_core_v1_azure_disk_volume_source_t *azure_disk; //model
    struct io_k8s_api_core_v1_azure_file_volume_source_t *azure_file; //model
    struct io_k8s_api_core_v1_ceph_fs_volume_source_t *cephfs; //model
    struct io_k8s_api_core_v1_cinder_volume_source_t *cinder; //model
    struct io_k8s_api_core_v1_config_map_volume_source_t *config_map; //model
    struct io_k8s_api_core_v1_csi_volume_source_t *csi; //model
    struct io_k8s_api_core_v1_downward_api_volume_source_t *downward_api; //model
    struct io_k8s_api_core_v1_empty_dir_volume_source_t *empty_dir; //model
    struct io_k8s_api_core_v1_ephemeral_volume_source_t *ephemeral; //model
    struct io_k8s_api_core_v1_fc_volume_source_t *fc; //model
    struct io_k8s_api_core_v1_flex_volume_source_t *flex_volume; //model
    struct io_k8s_api_core_v1_flocker_volume_source_t *flocker; //model
    struct io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *gce_persistent_disk; //model
    struct io_k8s_api_core_v1_git_repo_volume_source_t *git_repo; //model
    struct io_k8s_api_core_v1_glusterfs_volume_source_t *glusterfs; //model
    struct io_k8s_api_core_v1_host_path_volume_source_t *host_path; //model
    struct io_k8s_api_core_v1_iscsi_volume_source_t *iscsi; //model
    char *name; // string
    struct io_k8s_api_core_v1_nfs_volume_source_t *nfs; //model
    struct io_k8s_api_core_v1_persistent_volume_claim_volume_source_t *persistent_volume_claim; //model
    struct io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *photon_persistent_disk; //model
    struct io_k8s_api_core_v1_portworx_volume_source_t *portworx_volume; //model
    struct io_k8s_api_core_v1_projected_volume_source_t *projected; //model
    struct io_k8s_api_core_v1_quobyte_volume_source_t *quobyte; //model
    struct io_k8s_api_core_v1_rbd_volume_source_t *rbd; //model
    struct io_k8s_api_core_v1_scale_io_volume_source_t *scale_io; //model
    struct io_k8s_api_core_v1_secret_volume_source_t *secret; //model
    struct io_k8s_api_core_v1_storage_os_volume_source_t *storageos; //model
    struct io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *vsphere_volume; //model

} io_k8s_api_core_v1_volume_t;

io_k8s_api_core_v1_volume_t *io_k8s_api_core_v1_volume_create(
    io_k8s_api_core_v1_aws_elastic_block_store_volume_source_t *aws_elastic_block_store,
    io_k8s_api_core_v1_azure_disk_volume_source_t *azure_disk,
    io_k8s_api_core_v1_azure_file_volume_source_t *azure_file,
    io_k8s_api_core_v1_ceph_fs_volume_source_t *cephfs,
    io_k8s_api_core_v1_cinder_volume_source_t *cinder,
    io_k8s_api_core_v1_config_map_volume_source_t *config_map,
    io_k8s_api_core_v1_csi_volume_source_t *csi,
    io_k8s_api_core_v1_downward_api_volume_source_t *downward_api,
    io_k8s_api_core_v1_empty_dir_volume_source_t *empty_dir,
    io_k8s_api_core_v1_ephemeral_volume_source_t *ephemeral,
    io_k8s_api_core_v1_fc_volume_source_t *fc,
    io_k8s_api_core_v1_flex_volume_source_t *flex_volume,
    io_k8s_api_core_v1_flocker_volume_source_t *flocker,
    io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *gce_persistent_disk,
    io_k8s_api_core_v1_git_repo_volume_source_t *git_repo,
    io_k8s_api_core_v1_glusterfs_volume_source_t *glusterfs,
    io_k8s_api_core_v1_host_path_volume_source_t *host_path,
    io_k8s_api_core_v1_iscsi_volume_source_t *iscsi,
    char *name,
    io_k8s_api_core_v1_nfs_volume_source_t *nfs,
    io_k8s_api_core_v1_persistent_volume_claim_volume_source_t *persistent_volume_claim,
    io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *photon_persistent_disk,
    io_k8s_api_core_v1_portworx_volume_source_t *portworx_volume,
    io_k8s_api_core_v1_projected_volume_source_t *projected,
    io_k8s_api_core_v1_quobyte_volume_source_t *quobyte,
    io_k8s_api_core_v1_rbd_volume_source_t *rbd,
    io_k8s_api_core_v1_scale_io_volume_source_t *scale_io,
    io_k8s_api_core_v1_secret_volume_source_t *secret,
    io_k8s_api_core_v1_storage_os_volume_source_t *storageos,
    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *vsphere_volume
);

void io_k8s_api_core_v1_volume_free(io_k8s_api_core_v1_volume_t *io_k8s_api_core_v1_volume);

io_k8s_api_core_v1_volume_t *io_k8s_api_core_v1_volume_parseFromJSON(cJSON *io_k8s_api_core_v1_volumeJSON);

cJSON *io_k8s_api_core_v1_volume_convertToJSON(io_k8s_api_core_v1_volume_t *io_k8s_api_core_v1_volume);

#endif /* _io_k8s_api_core_v1_volume_H_ */

