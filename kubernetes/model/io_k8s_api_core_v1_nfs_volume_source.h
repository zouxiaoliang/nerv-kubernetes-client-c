/*
 * io_k8s_api_core_v1_nfs_volume_source.h
 *
 * Represents an NFS mount that lasts the lifetime of a pod. NFS volumes do not support ownership management or SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_nfs_volume_source_H_
#define _io_k8s_api_core_v1_nfs_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_nfs_volume_source_t io_k8s_api_core_v1_nfs_volume_source_t;




typedef struct io_k8s_api_core_v1_nfs_volume_source_t {
    char *path; // string
    int read_only; //boolean
    char *server; // string

} io_k8s_api_core_v1_nfs_volume_source_t;

io_k8s_api_core_v1_nfs_volume_source_t *io_k8s_api_core_v1_nfs_volume_source_create(
    char *path,
    int read_only,
    char *server
);

void io_k8s_api_core_v1_nfs_volume_source_free(io_k8s_api_core_v1_nfs_volume_source_t *io_k8s_api_core_v1_nfs_volume_source);

io_k8s_api_core_v1_nfs_volume_source_t *io_k8s_api_core_v1_nfs_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_nfs_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_nfs_volume_source_convertToJSON(io_k8s_api_core_v1_nfs_volume_source_t *io_k8s_api_core_v1_nfs_volume_source);

#endif /* _io_k8s_api_core_v1_nfs_volume_source_H_ */

