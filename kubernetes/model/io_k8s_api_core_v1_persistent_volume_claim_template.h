/*
 * io_k8s_api_core_v1_persistent_volume_claim_template.h
 *
 * PersistentVolumeClaimTemplate is used to produce PersistentVolumeClaim objects as part of an EphemeralVolumeSource.
 */

#ifndef _io_k8s_api_core_v1_persistent_volume_claim_template_H_
#define _io_k8s_api_core_v1_persistent_volume_claim_template_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_persistent_volume_claim_template_t io_k8s_api_core_v1_persistent_volume_claim_template_t;

#include "io_k8s_api_core_v1_persistent_volume_claim_spec.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_persistent_volume_claim_template_t {
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_core_v1_persistent_volume_claim_spec_t *spec; //model

} io_k8s_api_core_v1_persistent_volume_claim_template_t;

io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template_create(
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_core_v1_persistent_volume_claim_spec_t *spec
);

void io_k8s_api_core_v1_persistent_volume_claim_template_free(io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template);

io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_claim_templateJSON);

cJSON *io_k8s_api_core_v1_persistent_volume_claim_template_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_template_t *io_k8s_api_core_v1_persistent_volume_claim_template);

#endif /* _io_k8s_api_core_v1_persistent_volume_claim_template_H_ */

