/*
 * io_k8s_api_policy_v1beta1_allowed_flex_volume.h
 *
 * AllowedFlexVolume represents a single Flexvolume that is allowed to be used.
 */

#ifndef _io_k8s_api_policy_v1beta1_allowed_flex_volume_H_
#define _io_k8s_api_policy_v1beta1_allowed_flex_volume_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_policy_v1beta1_allowed_flex_volume_t io_k8s_api_policy_v1beta1_allowed_flex_volume_t;




typedef struct io_k8s_api_policy_v1beta1_allowed_flex_volume_t {
    char *driver; // string

} io_k8s_api_policy_v1beta1_allowed_flex_volume_t;

io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume_create(
    char *driver
);

void io_k8s_api_policy_v1beta1_allowed_flex_volume_free(io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume);

io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume_parseFromJSON(cJSON *io_k8s_api_policy_v1beta1_allowed_flex_volumeJSON);

cJSON *io_k8s_api_policy_v1beta1_allowed_flex_volume_convertToJSON(io_k8s_api_policy_v1beta1_allowed_flex_volume_t *io_k8s_api_policy_v1beta1_allowed_flex_volume);

#endif /* _io_k8s_api_policy_v1beta1_allowed_flex_volume_H_ */

