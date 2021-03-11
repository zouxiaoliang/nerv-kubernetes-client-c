/*
 * io_k8s_api_core_v1_vsphere_virtual_disk_volume_source.h
 *
 * Represents a vSphere volume resource.
 */

#ifndef _io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_H_
#define _io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t;




typedef struct io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t {
    char *fs_type; // string
    char *storage_policy_id; // string
    char *storage_policy_name; // string
    char *volume_path; // string

} io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t;

io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_create(
    char *fs_type,
    char *storage_policy_id,
    char *storage_policy_name,
    char *volume_path
);

void io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_free(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source);

io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_vsphere_virtual_disk_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_convertToJSON(io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_t *io_k8s_api_core_v1_vsphere_virtual_disk_volume_source);

#endif /* _io_k8s_api_core_v1_vsphere_virtual_disk_volume_source_H_ */

