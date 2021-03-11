/*
 * io_k8s_api_core_v1_persistent_volume_claim_spec.h
 *
 * PersistentVolumeClaimSpec describes the common attributes of storage devices and allows a Source for provider-specific attributes
 */

#ifndef _io_k8s_api_core_v1_persistent_volume_claim_spec_H_
#define _io_k8s_api_core_v1_persistent_volume_claim_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_persistent_volume_claim_spec_t io_k8s_api_core_v1_persistent_volume_claim_spec_t;

#include "io_k8s_api_core_v1_resource_requirements.h"
#include "io_k8s_api_core_v1_typed_local_object_reference.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_label_selector.h"



typedef struct io_k8s_api_core_v1_persistent_volume_claim_spec_t {
    list_t *access_modes; //primitive container
    struct io_k8s_api_core_v1_typed_local_object_reference_t *data_source; //model
    struct io_k8s_api_core_v1_resource_requirements_t *resources; //model
    struct io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector; //model
    char *storage_class_name; // string
    char *volume_mode; // string
    char *volume_name; // string

} io_k8s_api_core_v1_persistent_volume_claim_spec_t;

io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec_create(
    list_t *access_modes,
    io_k8s_api_core_v1_typed_local_object_reference_t *data_source,
    io_k8s_api_core_v1_resource_requirements_t *resources,
    io_k8s_apimachinery_pkg_apis_meta_v1_label_selector_t *selector,
    char *storage_class_name,
    char *volume_mode,
    char *volume_name
);

void io_k8s_api_core_v1_persistent_volume_claim_spec_free(io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec);

io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec_parseFromJSON(cJSON *io_k8s_api_core_v1_persistent_volume_claim_specJSON);

cJSON *io_k8s_api_core_v1_persistent_volume_claim_spec_convertToJSON(io_k8s_api_core_v1_persistent_volume_claim_spec_t *io_k8s_api_core_v1_persistent_volume_claim_spec);

#endif /* _io_k8s_api_core_v1_persistent_volume_claim_spec_H_ */

