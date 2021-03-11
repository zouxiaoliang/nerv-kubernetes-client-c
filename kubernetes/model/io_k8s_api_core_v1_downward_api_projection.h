/*
 * io_k8s_api_core_v1_downward_api_projection.h
 *
 * Represents downward API info for projecting into a projected volume. Note that this is identical to a downwardAPI volume source without the default mode.
 */

#ifndef _io_k8s_api_core_v1_downward_api_projection_H_
#define _io_k8s_api_core_v1_downward_api_projection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_downward_api_projection_t io_k8s_api_core_v1_downward_api_projection_t;

#include "io_k8s_api_core_v1_downward_api_volume_file.h"



typedef struct io_k8s_api_core_v1_downward_api_projection_t {
    list_t *items; //nonprimitive container

} io_k8s_api_core_v1_downward_api_projection_t;

io_k8s_api_core_v1_downward_api_projection_t *io_k8s_api_core_v1_downward_api_projection_create(
    list_t *items
);

void io_k8s_api_core_v1_downward_api_projection_free(io_k8s_api_core_v1_downward_api_projection_t *io_k8s_api_core_v1_downward_api_projection);

io_k8s_api_core_v1_downward_api_projection_t *io_k8s_api_core_v1_downward_api_projection_parseFromJSON(cJSON *io_k8s_api_core_v1_downward_api_projectionJSON);

cJSON *io_k8s_api_core_v1_downward_api_projection_convertToJSON(io_k8s_api_core_v1_downward_api_projection_t *io_k8s_api_core_v1_downward_api_projection);

#endif /* _io_k8s_api_core_v1_downward_api_projection_H_ */

