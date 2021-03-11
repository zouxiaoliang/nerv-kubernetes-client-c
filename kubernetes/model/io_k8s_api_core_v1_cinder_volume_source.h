/*
 * io_k8s_api_core_v1_cinder_volume_source.h
 *
 * Represents a cinder volume resource in Openstack. A Cinder volume must exist before mounting to a container. The volume must also be in the same region as the kubelet. Cinder volumes support ownership management and SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_cinder_volume_source_H_
#define _io_k8s_api_core_v1_cinder_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_cinder_volume_source_t io_k8s_api_core_v1_cinder_volume_source_t;

#include "io_k8s_api_core_v1_local_object_reference.h"



typedef struct io_k8s_api_core_v1_cinder_volume_source_t {
    char *fs_type; // string
    int read_only; //boolean
    struct io_k8s_api_core_v1_local_object_reference_t *secret_ref; //model
    char *volume_id; // string

} io_k8s_api_core_v1_cinder_volume_source_t;

io_k8s_api_core_v1_cinder_volume_source_t *io_k8s_api_core_v1_cinder_volume_source_create(
    char *fs_type,
    int read_only,
    io_k8s_api_core_v1_local_object_reference_t *secret_ref,
    char *volume_id
);

void io_k8s_api_core_v1_cinder_volume_source_free(io_k8s_api_core_v1_cinder_volume_source_t *io_k8s_api_core_v1_cinder_volume_source);

io_k8s_api_core_v1_cinder_volume_source_t *io_k8s_api_core_v1_cinder_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_cinder_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_cinder_volume_source_convertToJSON(io_k8s_api_core_v1_cinder_volume_source_t *io_k8s_api_core_v1_cinder_volume_source);

#endif /* _io_k8s_api_core_v1_cinder_volume_source_H_ */

