/*
 * io_k8s_api_storage_v1_volume_attachment_status.h
 *
 * VolumeAttachmentStatus is the status of a VolumeAttachment request.
 */

#ifndef _io_k8s_api_storage_v1_volume_attachment_status_H_
#define _io_k8s_api_storage_v1_volume_attachment_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1_volume_attachment_status_t io_k8s_api_storage_v1_volume_attachment_status_t;

#include "io_k8s_api_storage_v1_volume_error.h"



typedef struct io_k8s_api_storage_v1_volume_attachment_status_t {
    struct io_k8s_api_storage_v1_volume_error_t *attach_error; //model
    int attached; //boolean
    list_t* attachment_metadata; //map
    struct io_k8s_api_storage_v1_volume_error_t *detach_error; //model

} io_k8s_api_storage_v1_volume_attachment_status_t;

io_k8s_api_storage_v1_volume_attachment_status_t *io_k8s_api_storage_v1_volume_attachment_status_create(
    io_k8s_api_storage_v1_volume_error_t *attach_error,
    int attached,
    list_t* attachment_metadata,
    io_k8s_api_storage_v1_volume_error_t *detach_error
);

void io_k8s_api_storage_v1_volume_attachment_status_free(io_k8s_api_storage_v1_volume_attachment_status_t *io_k8s_api_storage_v1_volume_attachment_status);

io_k8s_api_storage_v1_volume_attachment_status_t *io_k8s_api_storage_v1_volume_attachment_status_parseFromJSON(cJSON *io_k8s_api_storage_v1_volume_attachment_statusJSON);

cJSON *io_k8s_api_storage_v1_volume_attachment_status_convertToJSON(io_k8s_api_storage_v1_volume_attachment_status_t *io_k8s_api_storage_v1_volume_attachment_status);

#endif /* _io_k8s_api_storage_v1_volume_attachment_status_H_ */

