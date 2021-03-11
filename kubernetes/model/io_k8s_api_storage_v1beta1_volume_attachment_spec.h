/*
 * io_k8s_api_storage_v1beta1_volume_attachment_spec.h
 *
 * VolumeAttachmentSpec is the specification of a VolumeAttachment request.
 */

#ifndef _io_k8s_api_storage_v1beta1_volume_attachment_spec_H_
#define _io_k8s_api_storage_v1beta1_volume_attachment_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1beta1_volume_attachment_spec_t io_k8s_api_storage_v1beta1_volume_attachment_spec_t;

#include "io_k8s_api_storage_v1beta1_volume_attachment_source.h"



typedef struct io_k8s_api_storage_v1beta1_volume_attachment_spec_t {
    char *attacher; // string
    char *node_name; // string
    struct io_k8s_api_storage_v1beta1_volume_attachment_source_t *source; //model

} io_k8s_api_storage_v1beta1_volume_attachment_spec_t;

io_k8s_api_storage_v1beta1_volume_attachment_spec_t *io_k8s_api_storage_v1beta1_volume_attachment_spec_create(
    char *attacher,
    char *node_name,
    io_k8s_api_storage_v1beta1_volume_attachment_source_t *source
);

void io_k8s_api_storage_v1beta1_volume_attachment_spec_free(io_k8s_api_storage_v1beta1_volume_attachment_spec_t *io_k8s_api_storage_v1beta1_volume_attachment_spec);

io_k8s_api_storage_v1beta1_volume_attachment_spec_t *io_k8s_api_storage_v1beta1_volume_attachment_spec_parseFromJSON(cJSON *io_k8s_api_storage_v1beta1_volume_attachment_specJSON);

cJSON *io_k8s_api_storage_v1beta1_volume_attachment_spec_convertToJSON(io_k8s_api_storage_v1beta1_volume_attachment_spec_t *io_k8s_api_storage_v1beta1_volume_attachment_spec);

#endif /* _io_k8s_api_storage_v1beta1_volume_attachment_spec_H_ */

