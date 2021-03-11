/*
 * io_k8s_api_storage_v1beta1_csi_driver_spec.h
 *
 * CSIDriverSpec is the specification of a CSIDriver.
 */

#ifndef _io_k8s_api_storage_v1beta1_csi_driver_spec_H_
#define _io_k8s_api_storage_v1beta1_csi_driver_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1beta1_csi_driver_spec_t io_k8s_api_storage_v1beta1_csi_driver_spec_t;

#include "io_k8s_api_storage_v1beta1_token_request.h"



typedef struct io_k8s_api_storage_v1beta1_csi_driver_spec_t {
    int attach_required; //boolean
    char *fs_group_policy; // string
    int pod_info_on_mount; //boolean
    int requires_republish; //boolean
    int storage_capacity; //boolean
    list_t *token_requests; //nonprimitive container
    list_t *volume_lifecycle_modes; //primitive container

} io_k8s_api_storage_v1beta1_csi_driver_spec_t;

io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec_create(
    int attach_required,
    char *fs_group_policy,
    int pod_info_on_mount,
    int requires_republish,
    int storage_capacity,
    list_t *token_requests,
    list_t *volume_lifecycle_modes
);

void io_k8s_api_storage_v1beta1_csi_driver_spec_free(io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec);

io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec_parseFromJSON(cJSON *io_k8s_api_storage_v1beta1_csi_driver_specJSON);

cJSON *io_k8s_api_storage_v1beta1_csi_driver_spec_convertToJSON(io_k8s_api_storage_v1beta1_csi_driver_spec_t *io_k8s_api_storage_v1beta1_csi_driver_spec);

#endif /* _io_k8s_api_storage_v1beta1_csi_driver_spec_H_ */

