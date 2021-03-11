/*
 * io_k8s_api_storage_v1beta1_volume_error.h
 *
 * VolumeError captures an error encountered during a volume operation.
 */

#ifndef _io_k8s_api_storage_v1beta1_volume_error_H_
#define _io_k8s_api_storage_v1beta1_volume_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1beta1_volume_error_t io_k8s_api_storage_v1beta1_volume_error_t;




typedef struct io_k8s_api_storage_v1beta1_volume_error_t {
    char *message; // string
    char *time; //date time

} io_k8s_api_storage_v1beta1_volume_error_t;

io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error_create(
    char *message,
    char *time
);

void io_k8s_api_storage_v1beta1_volume_error_free(io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error);

io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error_parseFromJSON(cJSON *io_k8s_api_storage_v1beta1_volume_errorJSON);

cJSON *io_k8s_api_storage_v1beta1_volume_error_convertToJSON(io_k8s_api_storage_v1beta1_volume_error_t *io_k8s_api_storage_v1beta1_volume_error);

#endif /* _io_k8s_api_storage_v1beta1_volume_error_H_ */

