/*
 * io_k8s_api_core_v1_persistent_volume_status.h
 *
 * PersistentVolumeStatus is the current status of a persistent volume.
 */

#ifndef _io_k8s_api_core_v1_persistent_volume_status_H_
#define _io_k8s_api_core_v1_persistent_volume_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_persistent_volume_status_t io_k8s_api_core_v1_persistent_volume_status_t;




typedef struct io_k8s_api_core_v1_persistent_volume_status_t {
    char *message; // string
    char *phase; // string
    char *reason; // string

} io_k8s_api_core_v1_persistent_volume_status_t;

io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status_create(
    char *message,
    char *phase,
    char *reason
);

void io_k8s_api_core_v1_persistent_volume_status_free(io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status);

io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_statusJSON);

cJSON *io_k8s_api_core_v1_persistent_volume_status_convertToJSON(io_k8s_api_core_v1_persistent_volume_status_t *io_k8s_api_core_v1_persistent_volume_status);

#endif /* _io_k8s_api_core_v1_persistent_volume_status_H_ */

