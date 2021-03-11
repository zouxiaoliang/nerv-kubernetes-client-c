#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_volume.h"



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
    ) {
    io_k8s_api_core_v1_volume_t *io_k8s_api_core_v1_volume_local_var = malloc(sizeof(io_k8s_api_core_v1_volume_t));
    if (!io_k8s_api_core_v1_volume_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_volume_local_var->aws_elastic_block_store = aws_elastic_block_store;
    io_k8s_api_core_v1_volume_local_var->azure_disk = azure_disk;
    io_k8s_api_core_v1_volume_local_var->azure_file = azure_file;
    io_k8s_api_core_v1_volume_local_var->cephfs = cephfs;
    io_k8s_api_core_v1_volume_local_var->cinder = cinder;
    io_k8s_api_core_v1_volume_local_var->config_map = config_map;
    io_k8s_api_core_v1_volume_local_var->csi = csi;
    io_k8s_api_core_v1_volume_local_var->downward_api = downward_api;
    io_k8s_api_core_v1_volume_local_var->empty_dir = empty_dir;
    io_k8s_api_core_v1_volume_local_var->ephemeral = ephemeral;
    io_k8s_api_core_v1_volume_local_var->fc = fc;
    io_k8s_api_core_v1_volume_local_var->flex_volume = flex_volume;
    io_k8s_api_core_v1_volume_local_var->flocker = flocker;
    io_k8s_api_core_v1_volume_local_var->gce_persistent_disk = gce_persistent_disk;
    io_k8s_api_core_v1_volume_local_var->git_repo = git_repo;
    io_k8s_api_core_v1_volume_local_var->glusterfs = glusterfs;
    io_k8s_api_core_v1_volume_local_var->host_path = host_path;
    io_k8s_api_core_v1_volume_local_var->iscsi = iscsi;
    io_k8s_api_core_v1_volume_local_var->name = name;
    io_k8s_api_core_v1_volume_local_var->nfs = nfs;
    io_k8s_api_core_v1_volume_local_var->persistent_volume_claim = persistent_volume_claim;
    io_k8s_api_core_v1_volume_local_var->photon_persistent_disk = photon_persistent_disk;
    io_k8s_api_core_v1_volume_local_var->portworx_volume = portworx_volume;
    io_k8s_api_core_v1_volume_local_var->projected = projected;
    io_k8s_api_core_v1_volume_local_var->quobyte = quobyte;
    io_k8s_api_core_v1_volume_local_var->rbd = rbd;
    io_k8s_api_core_v1_volume_local_var->scale_io = scale_io;
    io_k8s_api_core_v1_volume_local_var->secret = secret;
    io_k8s_api_core_v1_volume_local_var->storageos = storageos;
    io_k8s_api_core_v1_volume_local_var->vsphere_volume = vsphere_volume;

    return io_k8s_api_core_v1_volume_local_var;
}


void io_k8s_api_core_v1_volume_free(io_k8s_api_core_v1_volume_t *io_k8s_api_core_v1_volume) {
    if(NULL == io_k8s_api_core_v1_volume){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_volume->aws_elastic_block_store) {
        io_k8s_api_core_v1_aws_elastic_block_store_volume_source_free(io_k8s_api_core_v1_volume->aws_elastic_block_store);
        io_k8s_api_core_v1_volume->aws_elastic_block_store = NULL;
    }
    if (io_k8s_api_core_v1_volume->azure_disk) {
        io_k8s_api_core_v1_azure_disk_volume_source_free(io_k8s_api_core_v1_volume->azure_disk);
        io_k8s_api_core_v1_volume->azure_disk = NULL;
    }
    if (io_k8s_api_core_v1_volume->azure_file) {
        io_k8s_api_core_v1_azure_file_volume_source_free(io_k8s_api_core_v1_volume->azure_file);
        io_k8s_api_core_v1_volume->azure_file = NULL;
    }
    if (io_k8s_api_core_v1_volume->cephfs) {
        io_k8s_api_core_v1_ceph_fs_volume_source_free(io_k8s_api_core_v1_volume->cephfs);
        io_k8s_api_core_v1_volume->cephfs = NULL;
    }
    if (io_k8s_api_core_v1_volume->cinder) {
        io_k8s_api_core_v1_cinder_volume_source_free(io_k8s_api_core_v1_volume->cinder);
        io_k8s_api_core_v1_volume->cinder = NULL;
    }
    if (io_k8s_api_core_v1_volume->config_map) {
        io_k8s_api_core_v1_config_map_volume_source_free(io_k8s_api_core_v1_volume->config_map);
        io_k8s_api_core_v1_volume->config_map = NULL;
    }
    if (io_k8s_api_core_v1_volume->csi) {
        io_k8s_api_core_v1_csi_volume_source_free(io_k8s_api_core_v1_volume->csi);
        io_k8s_api_core_v1_volume->csi = NULL;
    }
    if (io_k8s_api_core_v1_volume->downward_api) {
        io_k8s_api_core_v1_downward_api_volume_source_free(io_k8s_api_core_v1_volume->downward_api);
        io_k8s_api_core_v1_volume->downward_api = NULL;
    }
    if (io_k8s_api_core_v1_volume->empty_dir) {
        io_k8s_api_core_v1_empty_dir_volume_source_free(io_k8s_api_core_v1_volume->empty_dir);
        io_k8s_api_core_v1_volume->empty_dir = NULL;
    }
    if (io_k8s_api_core_v1_volume->ephemeral) {
        io_k8s_api_core_v1_ephemeral_volume_source_free(io_k8s_api_core_v1_volume->ephemeral);
        io_k8s_api_core_v1_volume->ephemeral = NULL;
    }
    if (io_k8s_api_core_v1_volume->fc) {
        io_k8s_api_core_v1_fc_volume_source_free(io_k8s_api_core_v1_volume->fc);
        io_k8s_api_core_v1_volume->fc = NULL;
    }
    if (io_k8s_api_core_v1_volume->flex_volume) {
        io_k8s_api_core_v1_flex_volume_source_free(io_k8s_api_core_v1_volume->flex_volume);
        io_k8s_api_core_v1_volume->flex_volume = NULL;
    }
    if (io_k8s_api_core_v1_volume->flocker) {
        io_k8s_api_core_v1_flocker_volume_source_free(io_k8s_api_core_v1_volume->flocker);
        io_k8s_api_core_v1_volume->flocker = NULL;
    }
    if (io_k8s_api_core_v1_volume->gce_persistent_disk) {
        io_k8s_api_core_v1_gce_persistent_disk_volume_source_free(io_k8s_api_core_v1_volume->gce_persistent_disk);
        io_k8s_api_core_v1_volume->gce_persistent_disk = NULL;
    }
    if (io_k8s_api_core_v1_volume->git_repo) {
        io_k8s_api_core_v1_git_repo_volume_source_free(io_k8s_api_core_v1_volume->git_repo);
        io_k8s_api_core_v1_volume->git_repo = NULL;
    }
    if (io_k8s_api_core_v1_volume->glusterfs) {
        io_k8s_api_core_v1_glusterfs_volume_source_free(io_k8s_api_core_v1_volume->glusterfs);
        io_k8s_api_core_v1_volume->glusterfs = NULL;
    }
    if (io_k8s_api_core_v1_volume->host_path) {
        io_k8s_api_core_v1_host_path_volume_source_free(io_k8s_api_core_v1_volume->host_path);
        io_k8s_api_core_v1_volume->host_path = NULL;
    }
    if (io_k8s_api_core_v1_volume->iscsi) {
        io_k8s_api_core_v1_iscsi_volume_source_free(io_k8s_api_core_v1_volume->iscsi);
        io_k8s_api_core_v1_volume->iscsi = NULL;
    }
    if (io_k8s_api_core_v1_volume->name) {
        free(io_k8s_api_core_v1_volume->name);
        io_k8s_api_core_v1_volume->name = NULL;
    }
    if (io_k8s_api_core_v1_volume->nfs) {
        io_k8s_api_core_v1_nfs_volume_source_free(io_k8s_api_core_v1_volume->nfs);
        io_k8s_api_core_v1_volume->nfs = NULL;
    }
    if (io_k8s_api_core_v1_volume->persistent_volume_claim) {
        io_k8s_api_core_v1_persistent_volume_claim_volume_source_free(io_k8s_api_core_v1_volume->persistent_volume_claim);
        io_k8s_api_core_v1_volume->persistent_volume_claim = NULL;
    }
    if (io_k8s_api_core_v1_volume->photon_persistent_disk) {
        io_k8s_api_core_v1_photon_persistent_disk_volume_source_free(io_k8s_api_core_v1_volume->photon_persistent_disk);
        io_k8s_api_core_v1_volume->photon_persistent_disk = NULL;
    }
    if (io_k8s_api_core_v1_volume->portworx_volume) {
        io_k8s_api_core_v1_portworx_volume_source_free(io_k8s_api_core_v1_volume->portworx_volume);
        io_k8s_api_core_v1_volume->portworx_volume = NULL;
    }
    if (io_k8s_api_core_v1_volume->projected) {
        io_k8s_api_core_v1_projected_volume_source_free(io_k8s_api_core_v1_volume->projected);
        io_k8s_api_core_v1_volume->projected = NULL;
    }
    if (io_k8s_api_core_v1_volume->quobyte) {
        io_k8s_api_core_v1_quobyte_volume_source_free(io_k8s_api_core_v1_volume->quobyte);
        io_k8s_api_core_v1_volume->quobyte = NULL;
    }
    if (io_k8s_api_core_v1_volume->rbd) {
        io_k8s_api_core_v1_rbd_volume_source_free(io_k8s_api_core_v1_volume->rbd);
        io_k8s_api_core_v1_volume->rbd = NULL;
    }
    if (io_k8s_api_core_v1_volume->scale_io) {
        io_k8s_api_core_v1_scale_io_volume_source_free(io_k8s_api_core_v1_volume->scale_io);
        io_k8s_api_core_v1_volume->scale_io = NULL;
    }
    if (io_k8s_api_core_v1_volume->secret) {
        io_k8s_api_core_v1_secret_volume_source_free(io_k8s_api_core_v1_volume->secret);
        io_k8s_api_core_v1_volume->secret = NULL;
    }
    if (io_k8s_api_core_v1_volume->storageos) {
        io_k8s_api_core_v1_storage_os_volume_source_free(io_k8s_api_core_v1_volume->storageos);
        io_k8s_api_core_v1_volume->storageos = NULL;
    }
    if (io_k8s_api_core_v1_volume->vsphere_volume) {
        io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_free(io_k8s_api_core_v1_volume->vsphere_volume);
        io_k8s_api_core_v1_volume->vsphere_volume = NULL;
    }
    free(io_k8s_api_core_v1_volume);
}

cJSON *io_k8s_api_core_v1_volume_convertToJSON(io_k8s_api_core_v1_volume_t *io_k8s_api_core_v1_volume) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_volume->aws_elastic_block_store
    if(io_k8s_api_core_v1_volume->aws_elastic_block_store) { 
    cJSON *aws_elastic_block_store_local_JSON = io_k8s_api_core_v1_aws_elastic_block_store_volume_source_convertToJSON(io_k8s_api_core_v1_volume->aws_elastic_block_store);
    if(aws_elastic_block_store_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "awsElasticBlockStore", aws_elastic_block_store_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->azure_disk
    if(io_k8s_api_core_v1_volume->azure_disk) { 
    cJSON *azure_disk_local_JSON = io_k8s_api_core_v1_azure_disk_volume_source_convertToJSON(io_k8s_api_core_v1_volume->azure_disk);
    if(azure_disk_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "azureDisk", azure_disk_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->azure_file
    if(io_k8s_api_core_v1_volume->azure_file) { 
    cJSON *azure_file_local_JSON = io_k8s_api_core_v1_azure_file_volume_source_convertToJSON(io_k8s_api_core_v1_volume->azure_file);
    if(azure_file_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "azureFile", azure_file_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->cephfs
    if(io_k8s_api_core_v1_volume->cephfs) { 
    cJSON *cephfs_local_JSON = io_k8s_api_core_v1_ceph_fs_volume_source_convertToJSON(io_k8s_api_core_v1_volume->cephfs);
    if(cephfs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cephfs", cephfs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->cinder
    if(io_k8s_api_core_v1_volume->cinder) { 
    cJSON *cinder_local_JSON = io_k8s_api_core_v1_cinder_volume_source_convertToJSON(io_k8s_api_core_v1_volume->cinder);
    if(cinder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cinder", cinder_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->config_map
    if(io_k8s_api_core_v1_volume->config_map) { 
    cJSON *config_map_local_JSON = io_k8s_api_core_v1_config_map_volume_source_convertToJSON(io_k8s_api_core_v1_volume->config_map);
    if(config_map_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "configMap", config_map_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->csi
    if(io_k8s_api_core_v1_volume->csi) { 
    cJSON *csi_local_JSON = io_k8s_api_core_v1_csi_volume_source_convertToJSON(io_k8s_api_core_v1_volume->csi);
    if(csi_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "csi", csi_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->downward_api
    if(io_k8s_api_core_v1_volume->downward_api) { 
    cJSON *downward_api_local_JSON = io_k8s_api_core_v1_downward_api_volume_source_convertToJSON(io_k8s_api_core_v1_volume->downward_api);
    if(downward_api_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "downwardAPI", downward_api_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->empty_dir
    if(io_k8s_api_core_v1_volume->empty_dir) { 
    cJSON *empty_dir_local_JSON = io_k8s_api_core_v1_empty_dir_volume_source_convertToJSON(io_k8s_api_core_v1_volume->empty_dir);
    if(empty_dir_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "emptyDir", empty_dir_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->ephemeral
    if(io_k8s_api_core_v1_volume->ephemeral) { 
    cJSON *ephemeral_local_JSON = io_k8s_api_core_v1_ephemeral_volume_source_convertToJSON(io_k8s_api_core_v1_volume->ephemeral);
    if(ephemeral_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ephemeral", ephemeral_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->fc
    if(io_k8s_api_core_v1_volume->fc) { 
    cJSON *fc_local_JSON = io_k8s_api_core_v1_fc_volume_source_convertToJSON(io_k8s_api_core_v1_volume->fc);
    if(fc_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fc", fc_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->flex_volume
    if(io_k8s_api_core_v1_volume->flex_volume) { 
    cJSON *flex_volume_local_JSON = io_k8s_api_core_v1_flex_volume_source_convertToJSON(io_k8s_api_core_v1_volume->flex_volume);
    if(flex_volume_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "flexVolume", flex_volume_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->flocker
    if(io_k8s_api_core_v1_volume->flocker) { 
    cJSON *flocker_local_JSON = io_k8s_api_core_v1_flocker_volume_source_convertToJSON(io_k8s_api_core_v1_volume->flocker);
    if(flocker_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "flocker", flocker_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->gce_persistent_disk
    if(io_k8s_api_core_v1_volume->gce_persistent_disk) { 
    cJSON *gce_persistent_disk_local_JSON = io_k8s_api_core_v1_gce_persistent_disk_volume_source_convertToJSON(io_k8s_api_core_v1_volume->gce_persistent_disk);
    if(gce_persistent_disk_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "gcePersistentDisk", gce_persistent_disk_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->git_repo
    if(io_k8s_api_core_v1_volume->git_repo) { 
    cJSON *git_repo_local_JSON = io_k8s_api_core_v1_git_repo_volume_source_convertToJSON(io_k8s_api_core_v1_volume->git_repo);
    if(git_repo_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "gitRepo", git_repo_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->glusterfs
    if(io_k8s_api_core_v1_volume->glusterfs) { 
    cJSON *glusterfs_local_JSON = io_k8s_api_core_v1_glusterfs_volume_source_convertToJSON(io_k8s_api_core_v1_volume->glusterfs);
    if(glusterfs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "glusterfs", glusterfs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->host_path
    if(io_k8s_api_core_v1_volume->host_path) { 
    cJSON *host_path_local_JSON = io_k8s_api_core_v1_host_path_volume_source_convertToJSON(io_k8s_api_core_v1_volume->host_path);
    if(host_path_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "hostPath", host_path_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->iscsi
    if(io_k8s_api_core_v1_volume->iscsi) { 
    cJSON *iscsi_local_JSON = io_k8s_api_core_v1_iscsi_volume_source_convertToJSON(io_k8s_api_core_v1_volume->iscsi);
    if(iscsi_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "iscsi", iscsi_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->name
    if (!io_k8s_api_core_v1_volume->name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "name", io_k8s_api_core_v1_volume->name) == NULL) {
    goto fail; //String
    }


    // io_k8s_api_core_v1_volume->nfs
    if(io_k8s_api_core_v1_volume->nfs) { 
    cJSON *nfs_local_JSON = io_k8s_api_core_v1_nfs_volume_source_convertToJSON(io_k8s_api_core_v1_volume->nfs);
    if(nfs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nfs", nfs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->persistent_volume_claim
    if(io_k8s_api_core_v1_volume->persistent_volume_claim) { 
    cJSON *persistent_volume_claim_local_JSON = io_k8s_api_core_v1_persistent_volume_claim_volume_source_convertToJSON(io_k8s_api_core_v1_volume->persistent_volume_claim);
    if(persistent_volume_claim_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "persistentVolumeClaim", persistent_volume_claim_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->photon_persistent_disk
    if(io_k8s_api_core_v1_volume->photon_persistent_disk) { 
    cJSON *photon_persistent_disk_local_JSON = io_k8s_api_core_v1_photon_persistent_disk_volume_source_convertToJSON(io_k8s_api_core_v1_volume->photon_persistent_disk);
    if(photon_persistent_disk_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "photonPersistentDisk", photon_persistent_disk_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->portworx_volume
    if(io_k8s_api_core_v1_volume->portworx_volume) { 
    cJSON *portworx_volume_local_JSON = io_k8s_api_core_v1_portworx_volume_source_convertToJSON(io_k8s_api_core_v1_volume->portworx_volume);
    if(portworx_volume_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "portworxVolume", portworx_volume_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->projected
    if(io_k8s_api_core_v1_volume->projected) { 
    cJSON *projected_local_JSON = io_k8s_api_core_v1_projected_volume_source_convertToJSON(io_k8s_api_core_v1_volume->projected);
    if(projected_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "projected", projected_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->quobyte
    if(io_k8s_api_core_v1_volume->quobyte) { 
    cJSON *quobyte_local_JSON = io_k8s_api_core_v1_quobyte_volume_source_convertToJSON(io_k8s_api_core_v1_volume->quobyte);
    if(quobyte_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "quobyte", quobyte_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->rbd
    if(io_k8s_api_core_v1_volume->rbd) { 
    cJSON *rbd_local_JSON = io_k8s_api_core_v1_rbd_volume_source_convertToJSON(io_k8s_api_core_v1_volume->rbd);
    if(rbd_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rbd", rbd_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->scale_io
    if(io_k8s_api_core_v1_volume->scale_io) { 
    cJSON *scale_io_local_JSON = io_k8s_api_core_v1_scale_io_volume_source_convertToJSON(io_k8s_api_core_v1_volume->scale_io);
    if(scale_io_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scaleIO", scale_io_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->secret
    if(io_k8s_api_core_v1_volume->secret) { 
    cJSON *secret_local_JSON = io_k8s_api_core_v1_secret_volume_source_convertToJSON(io_k8s_api_core_v1_volume->secret);
    if(secret_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "secret", secret_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->storageos
    if(io_k8s_api_core_v1_volume->storageos) { 
    cJSON *storageos_local_JSON = io_k8s_api_core_v1_storage_os_volume_source_convertToJSON(io_k8s_api_core_v1_volume->storageos);
    if(storageos_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "storageos", storageos_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_volume->vsphere_volume
    if(io_k8s_api_core_v1_volume->vsphere_volume) { 
    cJSON *vsphere_volume_local_JSON = io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_convertToJSON(io_k8s_api_core_v1_volume->vsphere_volume);
    if(vsphere_volume_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "vsphereVolume", vsphere_volume_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

io_k8s_api_core_v1_volume_t *io_k8s_api_core_v1_volume_parseFromJSON(cJSON *io_k8s_api_core_v1_volumeJSON){

    io_k8s_api_core_v1_volume_t *io_k8s_api_core_v1_volume_local_var = NULL;

    // io_k8s_api_core_v1_volume->aws_elastic_block_store
    cJSON *aws_elastic_block_store = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "awsElasticBlockStore");
    io_k8s_api_core_v1_aws_elastic_block_store_volume_source_t *aws_elastic_block_store_local_nonprim = NULL;
    if (aws_elastic_block_store) { 
    aws_elastic_block_store_local_nonprim = io_k8s_api_core_v1_aws_elastic_block_store_volume_source_parseFromJSON(aws_elastic_block_store); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->azure_disk
    cJSON *azure_disk = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "azureDisk");
    io_k8s_api_core_v1_azure_disk_volume_source_t *azure_disk_local_nonprim = NULL;
    if (azure_disk) { 
    azure_disk_local_nonprim = io_k8s_api_core_v1_azure_disk_volume_source_parseFromJSON(azure_disk); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->azure_file
    cJSON *azure_file = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "azureFile");
    io_k8s_api_core_v1_azure_file_volume_source_t *azure_file_local_nonprim = NULL;
    if (azure_file) { 
    azure_file_local_nonprim = io_k8s_api_core_v1_azure_file_volume_source_parseFromJSON(azure_file); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->cephfs
    cJSON *cephfs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "cephfs");
    io_k8s_api_core_v1_ceph_fs_volume_source_t *cephfs_local_nonprim = NULL;
    if (cephfs) { 
    cephfs_local_nonprim = io_k8s_api_core_v1_ceph_fs_volume_source_parseFromJSON(cephfs); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->cinder
    cJSON *cinder = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "cinder");
    io_k8s_api_core_v1_cinder_volume_source_t *cinder_local_nonprim = NULL;
    if (cinder) { 
    cinder_local_nonprim = io_k8s_api_core_v1_cinder_volume_source_parseFromJSON(cinder); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->config_map
    cJSON *config_map = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "configMap");
    io_k8s_api_core_v1_config_map_volume_source_t *config_map_local_nonprim = NULL;
    if (config_map) { 
    config_map_local_nonprim = io_k8s_api_core_v1_config_map_volume_source_parseFromJSON(config_map); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->csi
    cJSON *csi = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "csi");
    io_k8s_api_core_v1_csi_volume_source_t *csi_local_nonprim = NULL;
    if (csi) { 
    csi_local_nonprim = io_k8s_api_core_v1_csi_volume_source_parseFromJSON(csi); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->downward_api
    cJSON *downward_api = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "downwardAPI");
    io_k8s_api_core_v1_downward_api_volume_source_t *downward_api_local_nonprim = NULL;
    if (downward_api) { 
    downward_api_local_nonprim = io_k8s_api_core_v1_downward_api_volume_source_parseFromJSON(downward_api); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->empty_dir
    cJSON *empty_dir = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "emptyDir");
    io_k8s_api_core_v1_empty_dir_volume_source_t *empty_dir_local_nonprim = NULL;
    if (empty_dir) { 
    empty_dir_local_nonprim = io_k8s_api_core_v1_empty_dir_volume_source_parseFromJSON(empty_dir); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->ephemeral
    cJSON *ephemeral = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "ephemeral");
    io_k8s_api_core_v1_ephemeral_volume_source_t *ephemeral_local_nonprim = NULL;
    if (ephemeral) { 
    ephemeral_local_nonprim = io_k8s_api_core_v1_ephemeral_volume_source_parseFromJSON(ephemeral); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->fc
    cJSON *fc = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "fc");
    io_k8s_api_core_v1_fc_volume_source_t *fc_local_nonprim = NULL;
    if (fc) { 
    fc_local_nonprim = io_k8s_api_core_v1_fc_volume_source_parseFromJSON(fc); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->flex_volume
    cJSON *flex_volume = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "flexVolume");
    io_k8s_api_core_v1_flex_volume_source_t *flex_volume_local_nonprim = NULL;
    if (flex_volume) { 
    flex_volume_local_nonprim = io_k8s_api_core_v1_flex_volume_source_parseFromJSON(flex_volume); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->flocker
    cJSON *flocker = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "flocker");
    io_k8s_api_core_v1_flocker_volume_source_t *flocker_local_nonprim = NULL;
    if (flocker) { 
    flocker_local_nonprim = io_k8s_api_core_v1_flocker_volume_source_parseFromJSON(flocker); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->gce_persistent_disk
    cJSON *gce_persistent_disk = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "gcePersistentDisk");
    io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *gce_persistent_disk_local_nonprim = NULL;
    if (gce_persistent_disk) { 
    gce_persistent_disk_local_nonprim = io_k8s_api_core_v1_gce_persistent_disk_volume_source_parseFromJSON(gce_persistent_disk); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->git_repo
    cJSON *git_repo = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "gitRepo");
    io_k8s_api_core_v1_git_repo_volume_source_t *git_repo_local_nonprim = NULL;
    if (git_repo) { 
    git_repo_local_nonprim = io_k8s_api_core_v1_git_repo_volume_source_parseFromJSON(git_repo); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->glusterfs
    cJSON *glusterfs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "glusterfs");
    io_k8s_api_core_v1_glusterfs_volume_source_t *glusterfs_local_nonprim = NULL;
    if (glusterfs) { 
    glusterfs_local_nonprim = io_k8s_api_core_v1_glusterfs_volume_source_parseFromJSON(glusterfs); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->host_path
    cJSON *host_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "hostPath");
    io_k8s_api_core_v1_host_path_volume_source_t *host_path_local_nonprim = NULL;
    if (host_path) { 
    host_path_local_nonprim = io_k8s_api_core_v1_host_path_volume_source_parseFromJSON(host_path); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->iscsi
    cJSON *iscsi = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "iscsi");
    io_k8s_api_core_v1_iscsi_volume_source_t *iscsi_local_nonprim = NULL;
    if (iscsi) { 
    iscsi_local_nonprim = io_k8s_api_core_v1_iscsi_volume_source_parseFromJSON(iscsi); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // io_k8s_api_core_v1_volume->nfs
    cJSON *nfs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "nfs");
    io_k8s_api_core_v1_nfs_volume_source_t *nfs_local_nonprim = NULL;
    if (nfs) { 
    nfs_local_nonprim = io_k8s_api_core_v1_nfs_volume_source_parseFromJSON(nfs); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->persistent_volume_claim
    cJSON *persistent_volume_claim = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "persistentVolumeClaim");
    io_k8s_api_core_v1_persistent_volume_claim_volume_source_t *persistent_volume_claim_local_nonprim = NULL;
    if (persistent_volume_claim) { 
    persistent_volume_claim_local_nonprim = io_k8s_api_core_v1_persistent_volume_claim_volume_source_parseFromJSON(persistent_volume_claim); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->photon_persistent_disk
    cJSON *photon_persistent_disk = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "photonPersistentDisk");
    io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *photon_persistent_disk_local_nonprim = NULL;
    if (photon_persistent_disk) { 
    photon_persistent_disk_local_nonprim = io_k8s_api_core_v1_photon_persistent_disk_volume_source_parseFromJSON(photon_persistent_disk); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->portworx_volume
    cJSON *portworx_volume = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "portworxVolume");
    io_k8s_api_core_v1_portworx_volume_source_t *portworx_volume_local_nonprim = NULL;
    if (portworx_volume) { 
    portworx_volume_local_nonprim = io_k8s_api_core_v1_portworx_volume_source_parseFromJSON(portworx_volume); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->projected
    cJSON *projected = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "projected");
    io_k8s_api_core_v1_projected_volume_source_t *projected_local_nonprim = NULL;
    if (projected) { 
    projected_local_nonprim = io_k8s_api_core_v1_projected_volume_source_parseFromJSON(projected); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->quobyte
    cJSON *quobyte = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "quobyte");
    io_k8s_api_core_v1_quobyte_volume_source_t *quobyte_local_nonprim = NULL;
    if (quobyte) { 
    quobyte_local_nonprim = io_k8s_api_core_v1_quobyte_volume_source_parseFromJSON(quobyte); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->rbd
    cJSON *rbd = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "rbd");
    io_k8s_api_core_v1_rbd_volume_source_t *rbd_local_nonprim = NULL;
    if (rbd) { 
    rbd_local_nonprim = io_k8s_api_core_v1_rbd_volume_source_parseFromJSON(rbd); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->scale_io
    cJSON *scale_io = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "scaleIO");
    io_k8s_api_core_v1_scale_io_volume_source_t *scale_io_local_nonprim = NULL;
    if (scale_io) { 
    scale_io_local_nonprim = io_k8s_api_core_v1_scale_io_volume_source_parseFromJSON(scale_io); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->secret
    cJSON *secret = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "secret");
    io_k8s_api_core_v1_secret_volume_source_t *secret_local_nonprim = NULL;
    if (secret) { 
    secret_local_nonprim = io_k8s_api_core_v1_secret_volume_source_parseFromJSON(secret); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->storageos
    cJSON *storageos = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "storageos");
    io_k8s_api_core_v1_storage_os_volume_source_t *storageos_local_nonprim = NULL;
    if (storageos) { 
    storageos_local_nonprim = io_k8s_api_core_v1_storage_os_volume_source_parseFromJSON(storageos); //nonprimitive
    }

    // io_k8s_api_core_v1_volume->vsphere_volume
    cJSON *vsphere_volume = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_volumeJSON, "vsphereVolume");
    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *vsphere_volume_local_nonprim = NULL;
    if (vsphere_volume) { 
    vsphere_volume_local_nonprim = io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_parseFromJSON(vsphere_volume); //nonprimitive
    }


    io_k8s_api_core_v1_volume_local_var = io_k8s_api_core_v1_volume_create (
        aws_elastic_block_store ? aws_elastic_block_store_local_nonprim : NULL,
        azure_disk ? azure_disk_local_nonprim : NULL,
        azure_file ? azure_file_local_nonprim : NULL,
        cephfs ? cephfs_local_nonprim : NULL,
        cinder ? cinder_local_nonprim : NULL,
        config_map ? config_map_local_nonprim : NULL,
        csi ? csi_local_nonprim : NULL,
        downward_api ? downward_api_local_nonprim : NULL,
        empty_dir ? empty_dir_local_nonprim : NULL,
        ephemeral ? ephemeral_local_nonprim : NULL,
        fc ? fc_local_nonprim : NULL,
        flex_volume ? flex_volume_local_nonprim : NULL,
        flocker ? flocker_local_nonprim : NULL,
        gce_persistent_disk ? gce_persistent_disk_local_nonprim : NULL,
        git_repo ? git_repo_local_nonprim : NULL,
        glusterfs ? glusterfs_local_nonprim : NULL,
        host_path ? host_path_local_nonprim : NULL,
        iscsi ? iscsi_local_nonprim : NULL,
        strdup(name->valuestring),
        nfs ? nfs_local_nonprim : NULL,
        persistent_volume_claim ? persistent_volume_claim_local_nonprim : NULL,
        photon_persistent_disk ? photon_persistent_disk_local_nonprim : NULL,
        portworx_volume ? portworx_volume_local_nonprim : NULL,
        projected ? projected_local_nonprim : NULL,
        quobyte ? quobyte_local_nonprim : NULL,
        rbd ? rbd_local_nonprim : NULL,
        scale_io ? scale_io_local_nonprim : NULL,
        secret ? secret_local_nonprim : NULL,
        storageos ? storageos_local_nonprim : NULL,
        vsphere_volume ? vsphere_volume_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_volume_local_var;
end:
    if (aws_elastic_block_store_local_nonprim) {
        io_k8s_api_core_v1_aws_elastic_block_store_volume_source_free(aws_elastic_block_store_local_nonprim);
        aws_elastic_block_store_local_nonprim = NULL;
    }
    if (azure_disk_local_nonprim) {
        io_k8s_api_core_v1_azure_disk_volume_source_free(azure_disk_local_nonprim);
        azure_disk_local_nonprim = NULL;
    }
    if (azure_file_local_nonprim) {
        io_k8s_api_core_v1_azure_file_volume_source_free(azure_file_local_nonprim);
        azure_file_local_nonprim = NULL;
    }
    if (cephfs_local_nonprim) {
        io_k8s_api_core_v1_ceph_fs_volume_source_free(cephfs_local_nonprim);
        cephfs_local_nonprim = NULL;
    }
    if (cinder_local_nonprim) {
        io_k8s_api_core_v1_cinder_volume_source_free(cinder_local_nonprim);
        cinder_local_nonprim = NULL;
    }
    if (config_map_local_nonprim) {
        io_k8s_api_core_v1_config_map_volume_source_free(config_map_local_nonprim);
        config_map_local_nonprim = NULL;
    }
    if (csi_local_nonprim) {
        io_k8s_api_core_v1_csi_volume_source_free(csi_local_nonprim);
        csi_local_nonprim = NULL;
    }
    if (downward_api_local_nonprim) {
        io_k8s_api_core_v1_downward_api_volume_source_free(downward_api_local_nonprim);
        downward_api_local_nonprim = NULL;
    }
    if (empty_dir_local_nonprim) {
        io_k8s_api_core_v1_empty_dir_volume_source_free(empty_dir_local_nonprim);
        empty_dir_local_nonprim = NULL;
    }
    if (ephemeral_local_nonprim) {
        io_k8s_api_core_v1_ephemeral_volume_source_free(ephemeral_local_nonprim);
        ephemeral_local_nonprim = NULL;
    }
    if (fc_local_nonprim) {
        io_k8s_api_core_v1_fc_volume_source_free(fc_local_nonprim);
        fc_local_nonprim = NULL;
    }
    if (flex_volume_local_nonprim) {
        io_k8s_api_core_v1_flex_volume_source_free(flex_volume_local_nonprim);
        flex_volume_local_nonprim = NULL;
    }
    if (flocker_local_nonprim) {
        io_k8s_api_core_v1_flocker_volume_source_free(flocker_local_nonprim);
        flocker_local_nonprim = NULL;
    }
    if (gce_persistent_disk_local_nonprim) {
        io_k8s_api_core_v1_gce_persistent_disk_volume_source_free(gce_persistent_disk_local_nonprim);
        gce_persistent_disk_local_nonprim = NULL;
    }
    if (git_repo_local_nonprim) {
        io_k8s_api_core_v1_git_repo_volume_source_free(git_repo_local_nonprim);
        git_repo_local_nonprim = NULL;
    }
    if (glusterfs_local_nonprim) {
        io_k8s_api_core_v1_glusterfs_volume_source_free(glusterfs_local_nonprim);
        glusterfs_local_nonprim = NULL;
    }
    if (host_path_local_nonprim) {
        io_k8s_api_core_v1_host_path_volume_source_free(host_path_local_nonprim);
        host_path_local_nonprim = NULL;
    }
    if (iscsi_local_nonprim) {
        io_k8s_api_core_v1_iscsi_volume_source_free(iscsi_local_nonprim);
        iscsi_local_nonprim = NULL;
    }
    if (nfs_local_nonprim) {
        io_k8s_api_core_v1_nfs_volume_source_free(nfs_local_nonprim);
        nfs_local_nonprim = NULL;
    }
    if (persistent_volume_claim_local_nonprim) {
        io_k8s_api_core_v1_persistent_volume_claim_volume_source_free(persistent_volume_claim_local_nonprim);
        persistent_volume_claim_local_nonprim = NULL;
    }
    if (photon_persistent_disk_local_nonprim) {
        io_k8s_api_core_v1_photon_persistent_disk_volume_source_free(photon_persistent_disk_local_nonprim);
        photon_persistent_disk_local_nonprim = NULL;
    }
    if (portworx_volume_local_nonprim) {
        io_k8s_api_core_v1_portworx_volume_source_free(portworx_volume_local_nonprim);
        portworx_volume_local_nonprim = NULL;
    }
    if (projected_local_nonprim) {
        io_k8s_api_core_v1_projected_volume_source_free(projected_local_nonprim);
        projected_local_nonprim = NULL;
    }
    if (quobyte_local_nonprim) {
        io_k8s_api_core_v1_quobyte_volume_source_free(quobyte_local_nonprim);
        quobyte_local_nonprim = NULL;
    }
    if (rbd_local_nonprim) {
        io_k8s_api_core_v1_rbd_volume_source_free(rbd_local_nonprim);
        rbd_local_nonprim = NULL;
    }
    if (scale_io_local_nonprim) {
        io_k8s_api_core_v1_scale_io_volume_source_free(scale_io_local_nonprim);
        scale_io_local_nonprim = NULL;
    }
    if (secret_local_nonprim) {
        io_k8s_api_core_v1_secret_volume_source_free(secret_local_nonprim);
        secret_local_nonprim = NULL;
    }
    if (storageos_local_nonprim) {
        io_k8s_api_core_v1_storage_os_volume_source_free(storageos_local_nonprim);
        storageos_local_nonprim = NULL;
    }
    if (vsphere_volume_local_nonprim) {
        io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_free(vsphere_volume_local_nonprim);
        vsphere_volume_local_nonprim = NULL;
    }
    return NULL;

}
