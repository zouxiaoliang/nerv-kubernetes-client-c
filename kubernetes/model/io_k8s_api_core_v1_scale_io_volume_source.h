/*
 * io_k8s_api_core_v1_scale_io_volume_source.h
 *
 * ScaleIOVolumeSource represents a persistent ScaleIO volume
 */

#ifndef _io_k8s_api_core_v1_scale_io_volume_source_H_
#define _io_k8s_api_core_v1_scale_io_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_scale_io_volume_source_t io_k8s_api_core_v1_scale_io_volume_source_t;

#include "io_k8s_api_core_v1_local_object_reference.h"



typedef struct io_k8s_api_core_v1_scale_io_volume_source_t {
    char *fs_type; // string
    char *gateway; // string
    char *protection_domain; // string
    int read_only; //boolean
    struct io_k8s_api_core_v1_local_object_reference_t *secret_ref; //model
    int ssl_enabled; //boolean
    char *storage_mode; // string
    char *storage_pool; // string
    char *system; // string
    char *volume_name; // string

} io_k8s_api_core_v1_scale_io_volume_source_t;

io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source_create(
    char *fs_type,
    char *gateway,
    char *protection_domain,
    int read_only,
    io_k8s_api_core_v1_local_object_reference_t *secret_ref,
    int ssl_enabled,
    char *storage_mode,
    char *storage_pool,
    char *system,
    char *volume_name
);

void io_k8s_api_core_v1_scale_io_volume_source_free(io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source);

io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_scale_io_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_scale_io_volume_source_convertToJSON(io_k8s_api_core_v1_scale_io_volume_source_t *io_k8s_api_core_v1_scale_io_volume_source);

#endif /* _io_k8s_api_core_v1_scale_io_volume_source_H_ */

