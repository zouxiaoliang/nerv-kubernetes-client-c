/*
 * io_k8s_api_core_v1_projected_volume_source.h
 *
 * Represents a projected volume source
 */

#ifndef _io_k8s_api_core_v1_projected_volume_source_H_
#define _io_k8s_api_core_v1_projected_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_projected_volume_source_t io_k8s_api_core_v1_projected_volume_source_t;

#include "io_k8s_api_core_v1_volume_projection.h"



typedef struct io_k8s_api_core_v1_projected_volume_source_t {
    int default_mode; //numeric
    list_t *sources; //nonprimitive container

} io_k8s_api_core_v1_projected_volume_source_t;

io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source_create(
    int default_mode,
    list_t *sources
);

void io_k8s_api_core_v1_projected_volume_source_free(io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source);

io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_projected_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_projected_volume_source_convertToJSON(io_k8s_api_core_v1_projected_volume_source_t *io_k8s_api_core_v1_projected_volume_source);

#endif /* _io_k8s_api_core_v1_projected_volume_source_H_ */

