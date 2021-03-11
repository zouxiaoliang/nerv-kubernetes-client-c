/*
 * io_k8s_api_core_v1_portworx_volume_source.h
 *
 * PortworxVolumeSource represents a Portworx volume resource.
 */

#ifndef _io_k8s_api_core_v1_portworx_volume_source_H_
#define _io_k8s_api_core_v1_portworx_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_portworx_volume_source_t io_k8s_api_core_v1_portworx_volume_source_t;




typedef struct io_k8s_api_core_v1_portworx_volume_source_t {
    char *fs_type; // string
    int read_only; //boolean
    char *volume_id; // string

} io_k8s_api_core_v1_portworx_volume_source_t;

io_k8s_api_core_v1_portworx_volume_source_t *io_k8s_api_core_v1_portworx_volume_source_create(
    char *fs_type,
    int read_only,
    char *volume_id
);

void io_k8s_api_core_v1_portworx_volume_source_free(io_k8s_api_core_v1_portworx_volume_source_t *io_k8s_api_core_v1_portworx_volume_source);

io_k8s_api_core_v1_portworx_volume_source_t *io_k8s_api_core_v1_portworx_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_portworx_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_portworx_volume_source_convertToJSON(io_k8s_api_core_v1_portworx_volume_source_t *io_k8s_api_core_v1_portworx_volume_source);

#endif /* _io_k8s_api_core_v1_portworx_volume_source_H_ */

