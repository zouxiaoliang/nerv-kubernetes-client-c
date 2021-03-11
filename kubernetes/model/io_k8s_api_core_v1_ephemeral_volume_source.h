/*
 * io_k8s_api_core_v1_ephemeral_volume_source.h
 *
 * Represents an ephemeral volume that is handled by a normal storage driver.
 */

#ifndef _io_k8s_api_core_v1_ephemeral_volume_source_H_
#define _io_k8s_api_core_v1_ephemeral_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_ephemeral_volume_source_t io_k8s_api_core_v1_ephemeral_volume_source_t;

#include "io_k8s_api_core_v1_persistent_volume_claim_template.h"



typedef struct io_k8s_api_core_v1_ephemeral_volume_source_t {
    int read_only; //boolean
    struct io_k8s_api_core_v1_persistent_volume_claim_template_t *volume_claim_template; //model

} io_k8s_api_core_v1_ephemeral_volume_source_t;

io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source_create(
    int read_only,
    io_k8s_api_core_v1_persistent_volume_claim_template_t *volume_claim_template
);

void io_k8s_api_core_v1_ephemeral_volume_source_free(io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source);

io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_ephemeral_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_ephemeral_volume_source_convertToJSON(io_k8s_api_core_v1_ephemeral_volume_source_t *io_k8s_api_core_v1_ephemeral_volume_source);

#endif /* _io_k8s_api_core_v1_ephemeral_volume_source_H_ */

