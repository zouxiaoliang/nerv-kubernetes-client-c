/*
 * io_k8s_api_core_v1_persistent_volume_claim.h
 *
 * PersistentVolumeClaim is a user&#39;s request for and claim to a persistent volume
 */

#ifndef _io_k8s_api_core_v1_persistent_volume_claim_H_
#define _io_k8s_api_core_v1_persistent_volume_claim_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_persistent_volume_claim_t io_k8s_api_core_v1_persistent_volume_claim_t;

#include "io_k8s_api_core_v1_persistent_volume_claim_spec.h"
#include "io_k8s_api_core_v1_persistent_volume_claim_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_persistent_volume_claim_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_persistent_volume_claim_spec_t *spec; //model
    struct io_k8s_api_core_v1_persistent_volume_claim_status_t *status; //model

} io_k8s_api_core_v1_persistent_volume_claim_t;

io_k8s_api_core_v1_persistent_volume_claim_t *io_k8s_api_core_v1_persistent_volume_claim_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_persistent_volume_claim_spec_t *spec,
    io_k8s_api_core_v1_persistent_volume_claim_status_t *status
);

void io_k8s_api_core_v1_persistent_volume_claim_free(io_k8s_api_core_v1_persistent_volume_claim_t *io_k8s_api_core_v1_persistent_volume_claim);

io_k8s_api_core_v1_persistent_volume_claim_t *io_k8s_api_core_v1_persistent_volume_claim_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_claimJSON);

cJSON *io_k8s_api_core_v1_persistent_volume_claim_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_t *io_k8s_api_core_v1_persistent_volume_claim);

#endif /* _io_k8s_api_core_v1_persistent_volume_claim_H_ */

