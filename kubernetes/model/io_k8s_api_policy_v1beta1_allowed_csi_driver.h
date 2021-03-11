/*
 * io_k8s_api_policy_v1beta1_allowed_csi_driver.h
 *
 * AllowedCSIDriver represents a single inline CSI Driver that is allowed to be used.
 */

#ifndef _io_k8s_api_policy_v1beta1_allowed_csi_driver_H_
#define _io_k8s_api_policy_v1beta1_allowed_csi_driver_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_allowed_csi_driver_t io_k8s_api_policy_v1beta1_allowed_csi_driver_t;




typedef struct io_k8s_api_policy_v1beta1_allowed_csi_driver_t {
    char *name; // string

} io_k8s_api_policy_v1beta1_allowed_csi_driver_t;

io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver_create(
    char *name
);

void io_k8s_api_policy_v1beta1_allowed_csi_driver_free(io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver);

io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_allowed_csi_driverJSON);

cJSON *io_k8s_api_policy_v1beta1_allowed_csi_driver_convertToJSON(io_k8s_api_policy_v1beta1_allowed_csi_driver_t *io_k8s_api_policy_v1beta1_allowed_csi_driver);

#endif /* _io_k8s_api_policy_v1beta1_allowed_csi_driver_H_ */

