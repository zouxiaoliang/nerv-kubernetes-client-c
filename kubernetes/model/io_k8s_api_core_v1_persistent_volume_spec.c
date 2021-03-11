#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "io_k8s_api_core_v1_persistent_volume_spec.h"



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
    ) {
    io_k8s_api_core_v1_persistent_volume_spec_t *io_k8s_api_core_v1_persistent_volume_spec_local_var = malloc(sizeof(io_k8s_api_core_v1_persistent_volume_spec_t));
    if (!io_k8s_api_core_v1_persistent_volume_spec_local_var) {
        return NULL;
    }
    io_k8s_api_core_v1_persistent_volume_spec_local_var->access_modes = access_modes;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->aws_elastic_block_store = aws_elastic_block_store;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->azure_disk = azure_disk;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->azure_file = azure_file;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->capacity = capacity;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->cephfs = cephfs;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->cinder = cinder;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->claim_ref = claim_ref;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->csi = csi;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->fc = fc;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->flex_volume = flex_volume;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->flocker = flocker;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->gce_persistent_disk = gce_persistent_disk;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->glusterfs = glusterfs;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->host_path = host_path;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->iscsi = iscsi;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->local = local;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->mount_options = mount_options;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->nfs = nfs;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->node_affinity = node_affinity;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->persistent_volume_reclaim_policy = persistent_volume_reclaim_policy;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->photon_persistent_disk = photon_persistent_disk;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->portworx_volume = portworx_volume;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->quobyte = quobyte;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->rbd = rbd;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->scale_io = scale_io;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->storage_class_name = storage_class_name;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->storageos = storageos;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->volume_mode = volume_mode;
    io_k8s_api_core_v1_persistent_volume_spec_local_var->vsphere_volume = vsphere_volume;

    return io_k8s_api_core_v1_persistent_volume_spec_local_var;
}


void io_k8s_api_core_v1_persistent_volume_spec_free(io_k8s_api_core_v1_persistent_volume_spec_t *io_k8s_api_core_v1_persistent_volume_spec) {
    if(NULL == io_k8s_api_core_v1_persistent_volume_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (io_k8s_api_core_v1_persistent_volume_spec->access_modes) {
        list_ForEach(listEntry, io_k8s_api_core_v1_persistent_volume_spec->access_modes) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_persistent_volume_spec->access_modes);
        io_k8s_api_core_v1_persistent_volume_spec->access_modes = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->aws_elastic_block_store) {
        io_k8s_api_core_v1_aws_elastic_block_store_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->aws_elastic_block_store);
        io_k8s_api_core_v1_persistent_volume_spec->aws_elastic_block_store = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->azure_disk) {
        io_k8s_api_core_v1_azure_disk_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->azure_disk);
        io_k8s_api_core_v1_persistent_volume_spec->azure_disk = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->azure_file) {
        io_k8s_api_core_v1_azure_file_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->azure_file);
        io_k8s_api_core_v1_persistent_volume_spec->azure_file = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->capacity) {
        list_ForEach(listEntry, io_k8s_api_core_v1_persistent_volume_spec->capacity) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_free(io_k8s_api_core_v1_persistent_volume_spec->capacity);
        io_k8s_api_core_v1_persistent_volume_spec->capacity = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->cephfs) {
        io_k8s_api_core_v1_ceph_fs_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->cephfs);
        io_k8s_api_core_v1_persistent_volume_spec->cephfs = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->cinder) {
        io_k8s_api_core_v1_cinder_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->cinder);
        io_k8s_api_core_v1_persistent_volume_spec->cinder = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->claim_ref) {
        io_k8s_api_core_v1_object_reference_free(io_k8s_api_core_v1_persistent_volume_spec->claim_ref);
        io_k8s_api_core_v1_persistent_volume_spec->claim_ref = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->csi) {
        io_k8s_api_core_v1_csi_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->csi);
        io_k8s_api_core_v1_persistent_volume_spec->csi = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->fc) {
        io_k8s_api_core_v1_fc_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->fc);
        io_k8s_api_core_v1_persistent_volume_spec->fc = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->flex_volume) {
        io_k8s_api_core_v1_flex_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->flex_volume);
        io_k8s_api_core_v1_persistent_volume_spec->flex_volume = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->flocker) {
        io_k8s_api_core_v1_flocker_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->flocker);
        io_k8s_api_core_v1_persistent_volume_spec->flocker = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->gce_persistent_disk) {
        io_k8s_api_core_v1_gce_persistent_disk_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->gce_persistent_disk);
        io_k8s_api_core_v1_persistent_volume_spec->gce_persistent_disk = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->glusterfs) {
        io_k8s_api_core_v1_glusterfs_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->glusterfs);
        io_k8s_api_core_v1_persistent_volume_spec->glusterfs = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->host_path) {
        io_k8s_api_core_v1_host_path_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->host_path);
        io_k8s_api_core_v1_persistent_volume_spec->host_path = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->iscsi) {
        io_k8s_api_core_v1_iscsi_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->iscsi);
        io_k8s_api_core_v1_persistent_volume_spec->iscsi = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->local) {
        io_k8s_api_core_v1_local_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->local);
        io_k8s_api_core_v1_persistent_volume_spec->local = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->mount_options) {
        list_ForEach(listEntry, io_k8s_api_core_v1_persistent_volume_spec->mount_options) {
            free(listEntry->data);
        }
        list_free(io_k8s_api_core_v1_persistent_volume_spec->mount_options);
        io_k8s_api_core_v1_persistent_volume_spec->mount_options = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->nfs) {
        io_k8s_api_core_v1_nfs_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->nfs);
        io_k8s_api_core_v1_persistent_volume_spec->nfs = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->node_affinity) {
        io_k8s_api_core_v1_volume_node_affinity_free(io_k8s_api_core_v1_persistent_volume_spec->node_affinity);
        io_k8s_api_core_v1_persistent_volume_spec->node_affinity = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->persistent_volume_reclaim_policy) {
        free(io_k8s_api_core_v1_persistent_volume_spec->persistent_volume_reclaim_policy);
        io_k8s_api_core_v1_persistent_volume_spec->persistent_volume_reclaim_policy = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->photon_persistent_disk) {
        io_k8s_api_core_v1_photon_persistent_disk_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->photon_persistent_disk);
        io_k8s_api_core_v1_persistent_volume_spec->photon_persistent_disk = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->portworx_volume) {
        io_k8s_api_core_v1_portworx_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->portworx_volume);
        io_k8s_api_core_v1_persistent_volume_spec->portworx_volume = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->quobyte) {
        io_k8s_api_core_v1_quobyte_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->quobyte);
        io_k8s_api_core_v1_persistent_volume_spec->quobyte = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->rbd) {
        io_k8s_api_core_v1_rbd_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->rbd);
        io_k8s_api_core_v1_persistent_volume_spec->rbd = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->scale_io) {
        io_k8s_api_core_v1_scale_io_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->scale_io);
        io_k8s_api_core_v1_persistent_volume_spec->scale_io = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->storage_class_name) {
        free(io_k8s_api_core_v1_persistent_volume_spec->storage_class_name);
        io_k8s_api_core_v1_persistent_volume_spec->storage_class_name = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->storageos) {
        io_k8s_api_core_v1_storage_os_persistent_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->storageos);
        io_k8s_api_core_v1_persistent_volume_spec->storageos = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->volume_mode) {
        free(io_k8s_api_core_v1_persistent_volume_spec->volume_mode);
        io_k8s_api_core_v1_persistent_volume_spec->volume_mode = NULL;
    }
    if (io_k8s_api_core_v1_persistent_volume_spec->vsphere_volume) {
        io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_free(io_k8s_api_core_v1_persistent_volume_spec->vsphere_volume);
        io_k8s_api_core_v1_persistent_volume_spec->vsphere_volume = NULL;
    }
    free(io_k8s_api_core_v1_persistent_volume_spec);
}

cJSON *io_k8s_api_core_v1_persistent_volume_spec_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec_t *io_k8s_api_core_v1_persistent_volume_spec) {
    cJSON *item = cJSON_CreateObject();

    // io_k8s_api_core_v1_persistent_volume_spec->access_modes
    if(io_k8s_api_core_v1_persistent_volume_spec->access_modes) { 
    cJSON *access_modes = cJSON_AddArrayToObject(item, "accessModes");
    if(access_modes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *access_modesListEntry;
    list_ForEach(access_modesListEntry, io_k8s_api_core_v1_persistent_volume_spec->access_modes) {
    if(cJSON_AddStringToObject(access_modes, "", (char*)access_modesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->aws_elastic_block_store
    if(io_k8s_api_core_v1_persistent_volume_spec->aws_elastic_block_store) { 
    cJSON *aws_elastic_block_store_local_JSON = io_k8s_api_core_v1_aws_elastic_block_store_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->aws_elastic_block_store);
    if(aws_elastic_block_store_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "awsElasticBlockStore", aws_elastic_block_store_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->azure_disk
    if(io_k8s_api_core_v1_persistent_volume_spec->azure_disk) { 
    cJSON *azure_disk_local_JSON = io_k8s_api_core_v1_azure_disk_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->azure_disk);
    if(azure_disk_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "azureDisk", azure_disk_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->azure_file
    if(io_k8s_api_core_v1_persistent_volume_spec->azure_file) { 
    cJSON *azure_file_local_JSON = io_k8s_api_core_v1_azure_file_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->azure_file);
    if(azure_file_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "azureFile", azure_file_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->capacity
    if(io_k8s_api_core_v1_persistent_volume_spec->capacity) { 
    cJSON *capacity = cJSON_AddObjectToObject(item, "capacity");
    if(capacity == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = capacity;
    listEntry_t *capacityListEntry;
    if (io_k8s_api_core_v1_persistent_volume_spec->capacity) {
    list_ForEach(capacityListEntry, io_k8s_api_core_v1_persistent_volume_spec->capacity) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)capacityListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, (char*)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->cephfs
    if(io_k8s_api_core_v1_persistent_volume_spec->cephfs) { 
    cJSON *cephfs_local_JSON = io_k8s_api_core_v1_ceph_fs_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->cephfs);
    if(cephfs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cephfs", cephfs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->cinder
    if(io_k8s_api_core_v1_persistent_volume_spec->cinder) { 
    cJSON *cinder_local_JSON = io_k8s_api_core_v1_cinder_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->cinder);
    if(cinder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cinder", cinder_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->claim_ref
    if(io_k8s_api_core_v1_persistent_volume_spec->claim_ref) { 
    cJSON *claim_ref_local_JSON = io_k8s_api_core_v1_object_reference_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->claim_ref);
    if(claim_ref_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "claimRef", claim_ref_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->csi
    if(io_k8s_api_core_v1_persistent_volume_spec->csi) { 
    cJSON *csi_local_JSON = io_k8s_api_core_v1_csi_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->csi);
    if(csi_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "csi", csi_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->fc
    if(io_k8s_api_core_v1_persistent_volume_spec->fc) { 
    cJSON *fc_local_JSON = io_k8s_api_core_v1_fc_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->fc);
    if(fc_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fc", fc_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->flex_volume
    if(io_k8s_api_core_v1_persistent_volume_spec->flex_volume) { 
    cJSON *flex_volume_local_JSON = io_k8s_api_core_v1_flex_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->flex_volume);
    if(flex_volume_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "flexVolume", flex_volume_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->flocker
    if(io_k8s_api_core_v1_persistent_volume_spec->flocker) { 
    cJSON *flocker_local_JSON = io_k8s_api_core_v1_flocker_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->flocker);
    if(flocker_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "flocker", flocker_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->gce_persistent_disk
    if(io_k8s_api_core_v1_persistent_volume_spec->gce_persistent_disk) { 
    cJSON *gce_persistent_disk_local_JSON = io_k8s_api_core_v1_gce_persistent_disk_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->gce_persistent_disk);
    if(gce_persistent_disk_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "gcePersistentDisk", gce_persistent_disk_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->glusterfs
    if(io_k8s_api_core_v1_persistent_volume_spec->glusterfs) { 
    cJSON *glusterfs_local_JSON = io_k8s_api_core_v1_glusterfs_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->glusterfs);
    if(glusterfs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "glusterfs", glusterfs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->host_path
    if(io_k8s_api_core_v1_persistent_volume_spec->host_path) { 
    cJSON *host_path_local_JSON = io_k8s_api_core_v1_host_path_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->host_path);
    if(host_path_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "hostPath", host_path_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->iscsi
    if(io_k8s_api_core_v1_persistent_volume_spec->iscsi) { 
    cJSON *iscsi_local_JSON = io_k8s_api_core_v1_iscsi_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->iscsi);
    if(iscsi_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "iscsi", iscsi_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->local
    if(io_k8s_api_core_v1_persistent_volume_spec->local) { 
    cJSON *local_local_JSON = io_k8s_api_core_v1_local_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->local);
    if(local_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "local", local_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->mount_options
    if(io_k8s_api_core_v1_persistent_volume_spec->mount_options) { 
    cJSON *mount_options = cJSON_AddArrayToObject(item, "mountOptions");
    if(mount_options == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *mount_optionsListEntry;
    list_ForEach(mount_optionsListEntry, io_k8s_api_core_v1_persistent_volume_spec->mount_options) {
    if(cJSON_AddStringToObject(mount_options, "", (char*)mount_optionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->nfs
    if(io_k8s_api_core_v1_persistent_volume_spec->nfs) { 
    cJSON *nfs_local_JSON = io_k8s_api_core_v1_nfs_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->nfs);
    if(nfs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nfs", nfs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->node_affinity
    if(io_k8s_api_core_v1_persistent_volume_spec->node_affinity) { 
    cJSON *node_affinity_local_JSON = io_k8s_api_core_v1_volume_node_affinity_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->node_affinity);
    if(node_affinity_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nodeAffinity", node_affinity_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->persistent_volume_reclaim_policy
    if(io_k8s_api_core_v1_persistent_volume_spec->persistent_volume_reclaim_policy) { 
    if(cJSON_AddStringToObject(item, "persistentVolumeReclaimPolicy", io_k8s_api_core_v1_persistent_volume_spec->persistent_volume_reclaim_policy) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->photon_persistent_disk
    if(io_k8s_api_core_v1_persistent_volume_spec->photon_persistent_disk) { 
    cJSON *photon_persistent_disk_local_JSON = io_k8s_api_core_v1_photon_persistent_disk_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->photon_persistent_disk);
    if(photon_persistent_disk_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "photonPersistentDisk", photon_persistent_disk_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->portworx_volume
    if(io_k8s_api_core_v1_persistent_volume_spec->portworx_volume) { 
    cJSON *portworx_volume_local_JSON = io_k8s_api_core_v1_portworx_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->portworx_volume);
    if(portworx_volume_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "portworxVolume", portworx_volume_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->quobyte
    if(io_k8s_api_core_v1_persistent_volume_spec->quobyte) { 
    cJSON *quobyte_local_JSON = io_k8s_api_core_v1_quobyte_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->quobyte);
    if(quobyte_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "quobyte", quobyte_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->rbd
    if(io_k8s_api_core_v1_persistent_volume_spec->rbd) { 
    cJSON *rbd_local_JSON = io_k8s_api_core_v1_rbd_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->rbd);
    if(rbd_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rbd", rbd_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->scale_io
    if(io_k8s_api_core_v1_persistent_volume_spec->scale_io) { 
    cJSON *scale_io_local_JSON = io_k8s_api_core_v1_scale_io_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->scale_io);
    if(scale_io_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scaleIO", scale_io_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->storage_class_name
    if(io_k8s_api_core_v1_persistent_volume_spec->storage_class_name) { 
    if(cJSON_AddStringToObject(item, "storageClassName", io_k8s_api_core_v1_persistent_volume_spec->storage_class_name) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->storageos
    if(io_k8s_api_core_v1_persistent_volume_spec->storageos) { 
    cJSON *storageos_local_JSON = io_k8s_api_core_v1_storage_os_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->storageos);
    if(storageos_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "storageos", storageos_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->volume_mode
    if(io_k8s_api_core_v1_persistent_volume_spec->volume_mode) { 
    if(cJSON_AddStringToObject(item, "volumeMode", io_k8s_api_core_v1_persistent_volume_spec->volume_mode) == NULL) {
    goto fail; //String
    }
     } 


    // io_k8s_api_core_v1_persistent_volume_spec->vsphere_volume
    if(io_k8s_api_core_v1_persistent_volume_spec->vsphere_volume) { 
    cJSON *vsphere_volume_local_JSON = io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_convertToJSON(io_k8s_api_core_v1_persistent_volume_spec->vsphere_volume);
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

io_k8s_api_core_v1_persistent_volume_spec_t *io_k8s_api_core_v1_persistent_volume_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_specJSON){

    io_k8s_api_core_v1_persistent_volume_spec_t *io_k8s_api_core_v1_persistent_volume_spec_local_var = NULL;

    // io_k8s_api_core_v1_persistent_volume_spec->access_modes
    cJSON *access_modes = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "accessModes");
    list_t *access_modesList;
    if (access_modes) { 
    cJSON *access_modes_local;
    if(!cJSON_IsArray(access_modes)) {
        goto end;//primitive container
    }
    access_modesList = list_create();

    cJSON_ArrayForEach(access_modes_local, access_modes)
    {
        if(!cJSON_IsString(access_modes_local))
        {
            goto end;
        }
        list_addElement(access_modesList , strdup(access_modes_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_persistent_volume_spec->aws_elastic_block_store
    cJSON *aws_elastic_block_store = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "awsElasticBlockStore");
    io_k8s_api_core_v1_aws_elastic_block_store_volume_source_t *aws_elastic_block_store_local_nonprim = NULL;
    if (aws_elastic_block_store) { 
    aws_elastic_block_store_local_nonprim = io_k8s_api_core_v1_aws_elastic_block_store_volume_source_parseFromJSON(aws_elastic_block_store); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->azure_disk
    cJSON *azure_disk = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "azureDisk");
    io_k8s_api_core_v1_azure_disk_volume_source_t *azure_disk_local_nonprim = NULL;
    if (azure_disk) { 
    azure_disk_local_nonprim = io_k8s_api_core_v1_azure_disk_volume_source_parseFromJSON(azure_disk); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->azure_file
    cJSON *azure_file = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "azureFile");
    io_k8s_api_core_v1_azure_file_persistent_volume_source_t *azure_file_local_nonprim = NULL;
    if (azure_file) { 
    azure_file_local_nonprim = io_k8s_api_core_v1_azure_file_persistent_volume_source_parseFromJSON(azure_file); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->capacity
    cJSON *capacity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "capacity");
    list_t *capacityList;
    if (capacity) { 
    cJSON *capacity_local_map;
    if(!cJSON_IsObject(capacity)) {
        goto end;//primitive map container
    }
    capacityList = list_create();
    keyValuePair_t *localMapKeyPair;
    cJSON_ArrayForEach(capacity_local_map, capacity)
    {
		cJSON *localMapObject = capacity_local_map;
        if(!cJSON_IsString(localMapObject))
        {
            goto end;
        }
        localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
        list_addElement(capacityList , localMapKeyPair);
    }
    }

    // io_k8s_api_core_v1_persistent_volume_spec->cephfs
    cJSON *cephfs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "cephfs");
    io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t *cephfs_local_nonprim = NULL;
    if (cephfs) { 
    cephfs_local_nonprim = io_k8s_api_core_v1_ceph_fs_persistent_volume_source_parseFromJSON(cephfs); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->cinder
    cJSON *cinder = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "cinder");
    io_k8s_api_core_v1_cinder_persistent_volume_source_t *cinder_local_nonprim = NULL;
    if (cinder) { 
    cinder_local_nonprim = io_k8s_api_core_v1_cinder_persistent_volume_source_parseFromJSON(cinder); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->claim_ref
    cJSON *claim_ref = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "claimRef");
    io_k8s_api_core_v1_object_reference_t *claim_ref_local_nonprim = NULL;
    if (claim_ref) { 
    claim_ref_local_nonprim = io_k8s_api_core_v1_object_reference_parseFromJSON(claim_ref); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->csi
    cJSON *csi = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "csi");
    io_k8s_api_core_v1_csi_persistent_volume_source_t *csi_local_nonprim = NULL;
    if (csi) { 
    csi_local_nonprim = io_k8s_api_core_v1_csi_persistent_volume_source_parseFromJSON(csi); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->fc
    cJSON *fc = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "fc");
    io_k8s_api_core_v1_fc_volume_source_t *fc_local_nonprim = NULL;
    if (fc) { 
    fc_local_nonprim = io_k8s_api_core_v1_fc_volume_source_parseFromJSON(fc); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->flex_volume
    cJSON *flex_volume = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "flexVolume");
    io_k8s_api_core_v1_flex_persistent_volume_source_t *flex_volume_local_nonprim = NULL;
    if (flex_volume) { 
    flex_volume_local_nonprim = io_k8s_api_core_v1_flex_persistent_volume_source_parseFromJSON(flex_volume); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->flocker
    cJSON *flocker = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "flocker");
    io_k8s_api_core_v1_flocker_volume_source_t *flocker_local_nonprim = NULL;
    if (flocker) { 
    flocker_local_nonprim = io_k8s_api_core_v1_flocker_volume_source_parseFromJSON(flocker); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->gce_persistent_disk
    cJSON *gce_persistent_disk = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "gcePersistentDisk");
    io_k8s_api_core_v1_gce_persistent_disk_volume_source_t *gce_persistent_disk_local_nonprim = NULL;
    if (gce_persistent_disk) { 
    gce_persistent_disk_local_nonprim = io_k8s_api_core_v1_gce_persistent_disk_volume_source_parseFromJSON(gce_persistent_disk); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->glusterfs
    cJSON *glusterfs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "glusterfs");
    io_k8s_api_core_v1_glusterfs_persistent_volume_source_t *glusterfs_local_nonprim = NULL;
    if (glusterfs) { 
    glusterfs_local_nonprim = io_k8s_api_core_v1_glusterfs_persistent_volume_source_parseFromJSON(glusterfs); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->host_path
    cJSON *host_path = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "hostPath");
    io_k8s_api_core_v1_host_path_volume_source_t *host_path_local_nonprim = NULL;
    if (host_path) { 
    host_path_local_nonprim = io_k8s_api_core_v1_host_path_volume_source_parseFromJSON(host_path); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->iscsi
    cJSON *iscsi = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "iscsi");
    io_k8s_api_core_v1_iscsi_persistent_volume_source_t *iscsi_local_nonprim = NULL;
    if (iscsi) { 
    iscsi_local_nonprim = io_k8s_api_core_v1_iscsi_persistent_volume_source_parseFromJSON(iscsi); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->local
    cJSON *local = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "local");
    io_k8s_api_core_v1_local_volume_source_t *local_local_nonprim = NULL;
    if (local) { 
    local_local_nonprim = io_k8s_api_core_v1_local_volume_source_parseFromJSON(local); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->mount_options
    cJSON *mount_options = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "mountOptions");
    list_t *mount_optionsList;
    if (mount_options) { 
    cJSON *mount_options_local;
    if(!cJSON_IsArray(mount_options)) {
        goto end;//primitive container
    }
    mount_optionsList = list_create();

    cJSON_ArrayForEach(mount_options_local, mount_options)
    {
        if(!cJSON_IsString(mount_options_local))
        {
            goto end;
        }
        list_addElement(mount_optionsList , strdup(mount_options_local->valuestring));
    }
    }

    // io_k8s_api_core_v1_persistent_volume_spec->nfs
    cJSON *nfs = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "nfs");
    io_k8s_api_core_v1_nfs_volume_source_t *nfs_local_nonprim = NULL;
    if (nfs) { 
    nfs_local_nonprim = io_k8s_api_core_v1_nfs_volume_source_parseFromJSON(nfs); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->node_affinity
    cJSON *node_affinity = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "nodeAffinity");
    io_k8s_api_core_v1_volume_node_affinity_t *node_affinity_local_nonprim = NULL;
    if (node_affinity) { 
    node_affinity_local_nonprim = io_k8s_api_core_v1_volume_node_affinity_parseFromJSON(node_affinity); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->persistent_volume_reclaim_policy
    cJSON *persistent_volume_reclaim_policy = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "persistentVolumeReclaimPolicy");
    if (persistent_volume_reclaim_policy) { 
    if(!cJSON_IsString(persistent_volume_reclaim_policy))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_persistent_volume_spec->photon_persistent_disk
    cJSON *photon_persistent_disk = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "photonPersistentDisk");
    io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *photon_persistent_disk_local_nonprim = NULL;
    if (photon_persistent_disk) { 
    photon_persistent_disk_local_nonprim = io_k8s_api_core_v1_photon_persistent_disk_volume_source_parseFromJSON(photon_persistent_disk); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->portworx_volume
    cJSON *portworx_volume = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "portworxVolume");
    io_k8s_api_core_v1_portworx_volume_source_t *portworx_volume_local_nonprim = NULL;
    if (portworx_volume) { 
    portworx_volume_local_nonprim = io_k8s_api_core_v1_portworx_volume_source_parseFromJSON(portworx_volume); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->quobyte
    cJSON *quobyte = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "quobyte");
    io_k8s_api_core_v1_quobyte_volume_source_t *quobyte_local_nonprim = NULL;
    if (quobyte) { 
    quobyte_local_nonprim = io_k8s_api_core_v1_quobyte_volume_source_parseFromJSON(quobyte); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->rbd
    cJSON *rbd = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "rbd");
    io_k8s_api_core_v1_rbd_persistent_volume_source_t *rbd_local_nonprim = NULL;
    if (rbd) { 
    rbd_local_nonprim = io_k8s_api_core_v1_rbd_persistent_volume_source_parseFromJSON(rbd); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->scale_io
    cJSON *scale_io = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "scaleIO");
    io_k8s_api_core_v1_scale_io_persistent_volume_source_t *scale_io_local_nonprim = NULL;
    if (scale_io) { 
    scale_io_local_nonprim = io_k8s_api_core_v1_scale_io_persistent_volume_source_parseFromJSON(scale_io); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->storage_class_name
    cJSON *storage_class_name = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "storageClassName");
    if (storage_class_name) { 
    if(!cJSON_IsString(storage_class_name))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_persistent_volume_spec->storageos
    cJSON *storageos = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "storageos");
    io_k8s_api_core_v1_storage_os_persistent_volume_source_t *storageos_local_nonprim = NULL;
    if (storageos) { 
    storageos_local_nonprim = io_k8s_api_core_v1_storage_os_persistent_volume_source_parseFromJSON(storageos); //nonprimitive
    }

    // io_k8s_api_core_v1_persistent_volume_spec->volume_mode
    cJSON *volume_mode = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "volumeMode");
    if (volume_mode) { 
    if(!cJSON_IsString(volume_mode))
    {
    goto end; //String
    }
    }

    // io_k8s_api_core_v1_persistent_volume_spec->vsphere_volume
    cJSON *vsphere_volume = cJSON_GetObjectItemCaseSensitive(io_k8s_api_core_v1_persistent_volume_specJSON, "vsphereVolume");
    io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *vsphere_volume_local_nonprim = NULL;
    if (vsphere_volume) { 
    vsphere_volume_local_nonprim = io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_parseFromJSON(vsphere_volume); //nonprimitive
    }


    io_k8s_api_core_v1_persistent_volume_spec_local_var = io_k8s_api_core_v1_persistent_volume_spec_create (
        access_modes ? access_modesList : NULL,
        aws_elastic_block_store ? aws_elastic_block_store_local_nonprim : NULL,
        azure_disk ? azure_disk_local_nonprim : NULL,
        azure_file ? azure_file_local_nonprim : NULL,
        capacity ? capacityList : NULL,
        cephfs ? cephfs_local_nonprim : NULL,
        cinder ? cinder_local_nonprim : NULL,
        claim_ref ? claim_ref_local_nonprim : NULL,
        csi ? csi_local_nonprim : NULL,
        fc ? fc_local_nonprim : NULL,
        flex_volume ? flex_volume_local_nonprim : NULL,
        flocker ? flocker_local_nonprim : NULL,
        gce_persistent_disk ? gce_persistent_disk_local_nonprim : NULL,
        glusterfs ? glusterfs_local_nonprim : NULL,
        host_path ? host_path_local_nonprim : NULL,
        iscsi ? iscsi_local_nonprim : NULL,
        local ? local_local_nonprim : NULL,
        mount_options ? mount_optionsList : NULL,
        nfs ? nfs_local_nonprim : NULL,
        node_affinity ? node_affinity_local_nonprim : NULL,
        persistent_volume_reclaim_policy ? strdup(persistent_volume_reclaim_policy->valuestring) : NULL,
        photon_persistent_disk ? photon_persistent_disk_local_nonprim : NULL,
        portworx_volume ? portworx_volume_local_nonprim : NULL,
        quobyte ? quobyte_local_nonprim : NULL,
        rbd ? rbd_local_nonprim : NULL,
        scale_io ? scale_io_local_nonprim : NULL,
        storage_class_name ? strdup(storage_class_name->valuestring) : NULL,
        storageos ? storageos_local_nonprim : NULL,
        volume_mode ? strdup(volume_mode->valuestring) : NULL,
        vsphere_volume ? vsphere_volume_local_nonprim : NULL
        );

    return io_k8s_api_core_v1_persistent_volume_spec_local_var;
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
        io_k8s_api_core_v1_azure_file_persistent_volume_source_free(azure_file_local_nonprim);
        azure_file_local_nonprim = NULL;
    }
    if (cephfs_local_nonprim) {
        io_k8s_api_core_v1_ceph_fs_persistent_volume_source_free(cephfs_local_nonprim);
        cephfs_local_nonprim = NULL;
    }
    if (cinder_local_nonprim) {
        io_k8s_api_core_v1_cinder_persistent_volume_source_free(cinder_local_nonprim);
        cinder_local_nonprim = NULL;
    }
    if (claim_ref_local_nonprim) {
        io_k8s_api_core_v1_object_reference_free(claim_ref_local_nonprim);
        claim_ref_local_nonprim = NULL;
    }
    if (csi_local_nonprim) {
        io_k8s_api_core_v1_csi_persistent_volume_source_free(csi_local_nonprim);
        csi_local_nonprim = NULL;
    }
    if (fc_local_nonprim) {
        io_k8s_api_core_v1_fc_volume_source_free(fc_local_nonprim);
        fc_local_nonprim = NULL;
    }
    if (flex_volume_local_nonprim) {
        io_k8s_api_core_v1_flex_persistent_volume_source_free(flex_volume_local_nonprim);
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
    if (glusterfs_local_nonprim) {
        io_k8s_api_core_v1_glusterfs_persistent_volume_source_free(glusterfs_local_nonprim);
        glusterfs_local_nonprim = NULL;
    }
    if (host_path_local_nonprim) {
        io_k8s_api_core_v1_host_path_volume_source_free(host_path_local_nonprim);
        host_path_local_nonprim = NULL;
    }
    if (iscsi_local_nonprim) {
        io_k8s_api_core_v1_iscsi_persistent_volume_source_free(iscsi_local_nonprim);
        iscsi_local_nonprim = NULL;
    }
    if (local_local_nonprim) {
        io_k8s_api_core_v1_local_volume_source_free(local_local_nonprim);
        local_local_nonprim = NULL;
    }
    if (nfs_local_nonprim) {
        io_k8s_api_core_v1_nfs_volume_source_free(nfs_local_nonprim);
        nfs_local_nonprim = NULL;
    }
    if (node_affinity_local_nonprim) {
        io_k8s_api_core_v1_volume_node_affinity_free(node_affinity_local_nonprim);
        node_affinity_local_nonprim = NULL;
    }
    if (photon_persistent_disk_local_nonprim) {
        io_k8s_api_core_v1_photon_persistent_disk_volume_source_free(photon_persistent_disk_local_nonprim);
        photon_persistent_disk_local_nonprim = NULL;
    }
    if (portworx_volume_local_nonprim) {
        io_k8s_api_core_v1_portworx_volume_source_free(portworx_volume_local_nonprim);
        portworx_volume_local_nonprim = NULL;
    }
    if (quobyte_local_nonprim) {
        io_k8s_api_core_v1_quobyte_volume_source_free(quobyte_local_nonprim);
        quobyte_local_nonprim = NULL;
    }
    if (rbd_local_nonprim) {
        io_k8s_api_core_v1_rbd_persistent_volume_source_free(rbd_local_nonprim);
        rbd_local_nonprim = NULL;
    }
    if (scale_io_local_nonprim) {
        io_k8s_api_core_v1_scale_io_persistent_volume_source_free(scale_io_local_nonprim);
        scale_io_local_nonprim = NULL;
    }
    if (storageos_local_nonprim) {
        io_k8s_api_core_v1_storage_os_persistent_volume_source_free(storageos_local_nonprim);
        storageos_local_nonprim = NULL;
    }
    if (vsphere_volume_local_nonprim) {
        io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_free(vsphere_volume_local_nonprim);
        vsphere_volume_local_nonprim = NULL;
    }
    return NULL;

}
