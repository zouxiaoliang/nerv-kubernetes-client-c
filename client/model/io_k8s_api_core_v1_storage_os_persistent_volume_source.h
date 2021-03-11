/*
 * io_k8s_api_core_v1_storage_os_persistent_volume_source.h
 *
 * Represents a StorageOS persistent volume resource.
 */

#ifndef _io_k8s_api_core_v1_storage_os_persistent_volume_source_H_
#define _io_k8s_api_core_v1_storage_os_persistent_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_storage_os_persistent_volume_source_t io_k8s_api_core_v1_storage_os_persistent_volume_source_t;

#include "io_k8s_api_core_v1_object_reference.h"



typedef struct io_k8s_api_core_v1_storage_os_persistent_volume_source_t {
    char *fs_type; // string
    int read_only; //boolean
    struct io_k8s_api_core_v1_object_reference_t *secret_ref; //model
    char *volume_name; // string
    char *volume_namespace; // string

} io_k8s_api_core_v1_storage_os_persistent_volume_source_t;

io_k8s_api_core_v1_storage_os_persistent_volume_source_t *io_k8s_api_core_v1_storage_os_persistent_volume_source_create(
    char *fs_type,
    int read_only,
    io_k8s_api_core_v1_object_reference_t *secret_ref,
    char *volume_name,
    char *volume_namespace
);

void io_k8s_api_core_v1_storage_os_persistent_volume_source_free(io_k8s_api_core_v1_storage_os_persistent_volume_source_t *io_k8s_api_core_v1_storage_os_persistent_volume_source);

io_k8s_api_core_v1_storage_os_persistent_volume_source_t *io_k8s_api_core_v1_storage_os_persistent_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_storage_os_persistent_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_storage_os_persistent_volume_source_convertToJSON(io_k8s_api_core_v1_storage_os_persistent_volume_source_t *io_k8s_api_core_v1_storage_os_persistent_volume_source);

#endif /* _io_k8s_api_core_v1_storage_os_persistent_volume_source_H_ */

