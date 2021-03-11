/*
 * io_k8s_api_core_v1_attached_volume.h
 *
 * AttachedVolume describes a volume attached to a node
 */

#ifndef _io_k8s_api_core_v1_attached_volume_H_
#define _io_k8s_api_core_v1_attached_volume_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_attached_volume_t io_k8s_api_core_v1_attached_volume_t;




typedef struct io_k8s_api_core_v1_attached_volume_t {
    char *device_path; // string
    char *name; // string

} io_k8s_api_core_v1_attached_volume_t;

io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume_create(
    char *device_path,
    char *name
);

void io_k8s_api_core_v1_attached_volume_free(io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume);

io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume_parseFromJSON(cJSON *io_k8s_api_core_v1_attached_volumeJSON);

cJSON *io_k8s_api_core_v1_attached_volume_convertToJSON(io_k8s_api_core_v1_attached_volume_t *io_k8s_api_core_v1_attached_volume);

#endif /* _io_k8s_api_core_v1_attached_volume_H_ */

