/*
 * io_k8s_api_core_v1_persistent_volume.h
 *
 * PersistentVolume (PV) is a storage resource provisioned by an administrator. It is analogous to a node. More info: https://kubernetes.io/docs/concepts/storage/persistent-volumes
 */

#ifndef _io_k8s_api_core_v1_persistent_volume_H_
#define _io_k8s_api_core_v1_persistent_volume_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_persistent_volume_t io_k8s_api_core_v1_persistent_volume_t;

#include "io_k8s_api_core_v1_persistent_volume_spec.h"
#include "io_k8s_api_core_v1_persistent_volume_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_persistent_volume_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_persistent_volume_spec_t *spec; //model
    struct io_k8s_api_core_v1_persistent_volume_status_t *status; //model

} io_k8s_api_core_v1_persistent_volume_t;

io_k8s_api_core_v1_persistent_volume_t *io_k8s_api_core_v1_persistent_volume_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_persistent_volume_spec_t *spec,
    io_k8s_api_core_v1_persistent_volume_status_t *status
);

void io_k8s_api_core_v1_persistent_volume_free(io_k8s_api_core_v1_persistent_volume_t *io_k8s_api_core_v1_persistent_volume);

io_k8s_api_core_v1_persistent_volume_t *io_k8s_api_core_v1_persistent_volume_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volumeJSON);

cJSON *io_k8s_api_core_v1_persistent_volume_convertToJSON(io_k8s_api_core_v1_persistent_volume_t *io_k8s_api_core_v1_persistent_volume);

#endif /* _io_k8s_api_core_v1_persistent_volume_H_ */

