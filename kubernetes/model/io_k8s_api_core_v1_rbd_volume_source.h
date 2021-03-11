/*
 * io_k8s_api_core_v1_rbd_volume_source.h
 *
 * Represents a Rados Block Device mount that lasts the lifetime of a pod. RBD volumes support ownership management and SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_rbd_volume_source_H_
#define _io_k8s_api_core_v1_rbd_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_rbd_volume_source_t io_k8s_api_core_v1_rbd_volume_source_t;

#include "io_k8s_api_core_v1_local_object_reference.h"



typedef struct io_k8s_api_core_v1_rbd_volume_source_t {
    char *fs_type; // string
    char *image; // string
    char *keyring; // string
    list_t *monitors; //primitive container
    char *pool; // string
    int read_only; //boolean
    struct io_k8s_api_core_v1_local_object_reference_t *secret_ref; //model
    char *user; // string

} io_k8s_api_core_v1_rbd_volume_source_t;

io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source_create(
    char *fs_type,
    char *image,
    char *keyring,
    list_t *monitors,
    char *pool,
    int read_only,
    io_k8s_api_core_v1_local_object_reference_t *secret_ref,
    char *user
);

void io_k8s_api_core_v1_rbd_volume_source_free(io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source);

io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_rbd_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_rbd_volume_source_convertToJSON(io_k8s_api_core_v1_rbd_volume_source_t *io_k8s_api_core_v1_rbd_volume_source);

#endif /* _io_k8s_api_core_v1_rbd_volume_source_H_ */

