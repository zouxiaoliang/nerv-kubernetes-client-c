/*
 * io_k8s_api_core_v1_ceph_fs_persistent_volume_source.h
 *
 * Represents a Ceph Filesystem mount that lasts the lifetime of a pod Cephfs volumes do not support ownership management or SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_ceph_fs_persistent_volume_source_H_
#define _io_k8s_api_core_v1_ceph_fs_persistent_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t;

#include "io_k8s_api_core_v1_secret_reference.h"



typedef struct io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t {
    list_t *monitors; //primitive container
    char *path; // string
    int read_only; //boolean
    char *secret_file; // string
    struct io_k8s_api_core_v1_secret_reference_t *secret_ref; //model
    char *user; // string

} io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t;

io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t *io_k8s_api_core_v1_ceph_fs_persistent_volume_source_create(
    list_t *monitors,
    char *path,
    int read_only,
    char *secret_file,
    io_k8s_api_core_v1_secret_reference_t *secret_ref,
    char *user
);

void io_k8s_api_core_v1_ceph_fs_persistent_volume_source_free(io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t *io_k8s_api_core_v1_ceph_fs_persistent_volume_source);

io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t *io_k8s_api_core_v1_ceph_fs_persistent_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_ceph_fs_persistent_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_ceph_fs_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_ceph_fs_persistent_volume_source_t *io_k8s_api_core_v1_ceph_fs_persistent_volume_source);

#endif /* _io_k8s_api_core_v1_ceph_fs_persistent_volume_source_H_ */

