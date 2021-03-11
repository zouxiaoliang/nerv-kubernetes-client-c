/*
 * io_k8s_api_core_v1_volume_projection.h
 *
 * Projection that may be projected along with other supported volume types
 */

#ifndef _io_k8s_api_core_v1_volume_projection_H_
#define _io_k8s_api_core_v1_volume_projection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_volume_projection_t io_k8s_api_core_v1_volume_projection_t;

#include "io_k8s_api_core_v1_config_map_projection.h"
#include "io_k8s_api_core_v1_downward_api_projection.h"
#include "io_k8s_api_core_v1_secret_projection.h"
#include "io_k8s_api_core_v1_service_account_token_projection.h"



typedef struct io_k8s_api_core_v1_volume_projection_t {
    struct io_k8s_api_core_v1_config_map_projection_t *config_map; //model
    struct io_k8s_api_core_v1_downward_api_projection_t *downward_api; //model
    struct io_k8s_api_core_v1_secret_projection_t *secret; //model
    struct io_k8s_api_core_v1_service_account_token_projection_t *service_account_token; //model

} io_k8s_api_core_v1_volume_projection_t;

io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection_create(
    io_k8s_api_core_v1_config_map_projection_t *config_map,
    io_k8s_api_core_v1_downward_api_projection_t *downward_api,
    io_k8s_api_core_v1_secret_projection_t *secret,
    io_k8s_api_core_v1_service_account_token_projection_t *service_account_token
);

void io_k8s_api_core_v1_volume_projection_free(io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection);

io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection_parseFromJSON(cJSON *io_k8s_api_core_v1_volume_projectionJSON);

cJSON *io_k8s_api_core_v1_volume_projection_convertToJSON(io_k8s_api_core_v1_volume_projection_t *io_k8s_api_core_v1_volume_projection);

#endif /* _io_k8s_api_core_v1_volume_projection_H_ */

