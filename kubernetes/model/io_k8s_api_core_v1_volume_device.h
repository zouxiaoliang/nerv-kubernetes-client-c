/*
 * io_k8s_api_core_v1_volume_device.h
 *
 * volumeDevice describes a mapping of a raw block device within a container.
 */

#ifndef _io_k8s_api_core_v1_volume_device_H_
#define _io_k8s_api_core_v1_volume_device_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_volume_device_t io_k8s_api_core_v1_volume_device_t;




typedef struct io_k8s_api_core_v1_volume_device_t {
    char *device_path; // string
    char *name; // string

} io_k8s_api_core_v1_volume_device_t;

io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device_create(
    char *device_path,
    char *name
);

void io_k8s_api_core_v1_volume_device_free(io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device);

io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device_parseFromJSON(cJSON *io_k8s_api_core_v1_volume_deviceJSON);

cJSON *io_k8s_api_core_v1_volume_device_convertToJSON(io_k8s_api_core_v1_volume_device_t *io_k8s_api_core_v1_volume_device);

#endif /* _io_k8s_api_core_v1_volume_device_H_ */

