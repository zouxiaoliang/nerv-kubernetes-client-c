/*
 * io_k8s_api_core_v1_volume_mount.h
 *
 * VolumeMount describes a mounting of a Volume within a container.
 */

#ifndef _io_k8s_api_core_v1_volume_mount_H_
#define _io_k8s_api_core_v1_volume_mount_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_volume_mount_t io_k8s_api_core_v1_volume_mount_t;




typedef struct io_k8s_api_core_v1_volume_mount_t {
    char *mount_path; // string
    char *mount_propagation; // string
    char *name; // string
    int read_only; //boolean
    char *sub_path; // string
    char *sub_path_expr; // string

} io_k8s_api_core_v1_volume_mount_t;

io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount_create(
    char *mount_path,
    char *mount_propagation,
    char *name,
    int read_only,
    char *sub_path,
    char *sub_path_expr
);

void io_k8s_api_core_v1_volume_mount_free(io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount);

io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount_parseFromJSON(cJSON *io_k8s_api_core_v1_volume_mountJSON);

cJSON *io_k8s_api_core_v1_volume_mount_convertToJSON(io_k8s_api_core_v1_volume_mount_t *io_k8s_api_core_v1_volume_mount);

#endif /* _io_k8s_api_core_v1_volume_mount_H_ */

