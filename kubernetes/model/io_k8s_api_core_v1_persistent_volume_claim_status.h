/*
 * io_k8s_api_core_v1_persistent_volume_claim_status.h
 *
 * PersistentVolumeClaimStatus is the current status of a persistent volume claim.
 */

#ifndef _io_k8s_api_core_v1_persistent_volume_claim_status_H_
#define _io_k8s_api_core_v1_persistent_volume_claim_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_persistent_volume_claim_status_t io_k8s_api_core_v1_persistent_volume_claim_status_t;

#include "io_k8s_api_core_v1_persistent_volume_claim_condition.h"



typedef struct io_k8s_api_core_v1_persistent_volume_claim_status_t {
    list_t *access_modes; //primitive container
    list_t* capacity; //map
    list_t *conditions; //nonprimitive container
    char *phase; // string

} io_k8s_api_core_v1_persistent_volume_claim_status_t;

io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status_create(
    list_t *access_modes,
    list_t* capacity,
    list_t *conditions,
    char *phase
);

void io_k8s_api_core_v1_persistent_volume_claim_status_free(io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status);

io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_claim_statusJSON);

cJSON *io_k8s_api_core_v1_persistent_volume_claim_status_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_status_t *io_k8s_api_core_v1_persistent_volume_claim_status);

#endif /* _io_k8s_api_core_v1_persistent_volume_claim_status_H_ */

