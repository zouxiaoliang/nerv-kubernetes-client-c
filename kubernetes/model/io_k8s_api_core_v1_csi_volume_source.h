/*
 * io_k8s_api_core_v1_csi_volume_source.h
 *
 * Represents a source location of a volume to mount, managed by an external CSI driver
 */

#ifndef _io_k8s_api_core_v1_csi_volume_source_H_
#define _io_k8s_api_core_v1_csi_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_csi_volume_source_t io_k8s_api_core_v1_csi_volume_source_t;

#include "io_k8s_api_core_v1_local_object_reference.h"



typedef struct io_k8s_api_core_v1_csi_volume_source_t {
    char *driver; // string
    char *fs_type; // string
    struct io_k8s_api_core_v1_local_object_reference_t *node_publish_secret_ref; //model
    int read_only; //boolean
    list_t* volume_attributes; //map

} io_k8s_api_core_v1_csi_volume_source_t;

io_k8s_api_core_v1_csi_volume_source_t *io_k8s_api_core_v1_csi_volume_source_create(
    char *driver,
    char *fs_type,
    io_k8s_api_core_v1_local_object_reference_t *node_publish_secret_ref,
    int read_only,
    list_t* volume_attributes
);

void io_k8s_api_core_v1_csi_volume_source_free(io_k8s_api_core_v1_csi_volume_source_t *io_k8s_api_core_v1_csi_volume_source);

io_k8s_api_core_v1_csi_volume_source_t *io_k8s_api_core_v1_csi_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_csi_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_csi_volume_source_convertToJSON(io_k8s_api_core_v1_csi_volume_source_t *io_k8s_api_core_v1_csi_volume_source);

#endif /* _io_k8s_api_core_v1_csi_volume_source_H_ */

