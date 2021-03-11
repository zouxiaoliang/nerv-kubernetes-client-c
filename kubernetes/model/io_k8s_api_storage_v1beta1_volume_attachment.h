/*
 * io_k8s_api_storage_v1beta1_volume_attachment.h
 *
 * VolumeAttachment captures the intent to attach or detach the specified volume to/from the specified node.  VolumeAttachment objects are non-namespaced.
 */

#ifndef _io_k8s_api_storage_v1beta1_volume_attachment_H_
#define _io_k8s_api_storage_v1beta1_volume_attachment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1beta1_volume_attachment_t io_k8s_api_storage_v1beta1_volume_attachment_t;

#include "io_k8s_api_storage_v1beta1_volume_attachment_spec.h"
#include "io_k8s_api_storage_v1beta1_volume_attachment_status.h"
#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_storage_v1beta1_volume_attachment_t {
    char *api_version; // string
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    struct io_k8s_api_storage_v1beta1_volume_attachment_spec_t *spec; //model
    struct io_k8s_api_storage_v1beta1_volume_attachment_status_t *status; //model

} io_k8s_api_storage_v1beta1_volume_attachment_t;

io_k8s_api_storage_v1beta1_volume_attachment_t *io_k8s_api_storage_v1beta1_volume_attachment_create(
    char *api_version,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    io_k8s_api_storage_v1beta1_volume_attachment_spec_t *spec,
    io_k8s_api_storage_v1beta1_volume_attachment_status_t *status
);

void io_k8s_api_storage_v1beta1_volume_attachment_free(io_k8s_api_storage_v1beta1_volume_attachment_t *io_k8s_api_storage_v1beta1_volume_attachment);

io_k8s_api_storage_v1beta1_volume_attachment_t *io_k8s_api_storage_v1beta1_volume_attachment_parseFromJSON(cJSON *io_k8s_api_storage_v1beta1_volume_attachmentJSON);

cJSON *io_k8s_api_storage_v1beta1_volume_attachment_convertToJSON(io_k8s_api_storage_v1beta1_volume_attachment_t *io_k8s_api_storage_v1beta1_volume_attachment);

#endif /* _io_k8s_api_storage_v1beta1_volume_attachment_H_ */

