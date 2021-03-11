/*
 * io_k8s_api_core_v1_photon_persistent_disk_volume_source.h
 *
 * Represents a Photon Controller persistent disk resource.
 */

#ifndef _io_k8s_api_core_v1_photon_persistent_disk_volume_source_H_
#define _io_k8s_api_core_v1_photon_persistent_disk_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_photon_persistent_disk_volume_source_t io_k8s_api_core_v1_photon_persistent_disk_volume_source_t;




typedef struct io_k8s_api_core_v1_photon_persistent_disk_volume_source_t {
    char *fs_type; // string
    char *pd_id; // string

} io_k8s_api_core_v1_photon_persistent_disk_volume_source_t;

io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *io_k8s_api_core_v1_photon_persistent_disk_volume_source_create(
    char *fs_type,
    char *pd_id
);

void io_k8s_api_core_v1_photon_persistent_disk_volume_source_free(io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *io_k8s_api_core_v1_photon_persistent_disk_volume_source);

io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *io_k8s_api_core_v1_photon_persistent_disk_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_photon_persistent_disk_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_photon_persistent_disk_volume_source_convertToJSON(io_k8s_api_core_v1_photon_persistent_disk_volume_source_t *io_k8s_api_core_v1_photon_persistent_disk_volume_source);

#endif /* _io_k8s_api_core_v1_photon_persistent_disk_volume_source_H_ */

