/*
 * io_k8s_api_storage_v1alpha1_volume_attachment_source.h
 *
 * VolumeAttachmentSource represents a volume that should be attached. Right now only PersistenVolumes can be attached via external attacher, in future we may allow also inline volumes in pods. Exactly one member can be set.
 */

#ifndef _io_k8s_api_storage_v1alpha1_volume_attachment_source_H_
#define _io_k8s_api_storage_v1alpha1_volume_attachment_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_storage_v1alpha1_volume_attachment_source_t io_k8s_api_storage_v1alpha1_volume_attachment_source_t;

#include "io_k8s_api_core_v1_persistent_volume_spec.h"



typedef struct io_k8s_api_storage_v1alpha1_volume_attachment_source_t {
    struct io_k8s_api_core_v1_persistent_volume_spec_t *inline_volume_spec; //model
    char *persistent_volume_name; // string

} io_k8s_api_storage_v1alpha1_volume_attachment_source_t;

io_k8s_api_storage_v1alpha1_volume_attachment_source_t *io_k8s_api_storage_v1alpha1_volume_attachment_source_create(
    io_k8s_api_core_v1_persistent_volume_spec_t *inline_volume_spec,
    char *persistent_volume_name
);

void io_k8s_api_storage_v1alpha1_volume_attachment_source_free(io_k8s_api_storage_v1alpha1_volume_attachment_source_t *io_k8s_api_storage_v1alpha1_volume_attachment_source);

io_k8s_api_storage_v1alpha1_volume_attachment_source_t *io_k8s_api_storage_v1alpha1_volume_attachment_source_parseFromJSON(cJSON *io_k8s_api_storage_v1alpha1_volume_attachment_sourceJSON);

cJSON *io_k8s_api_storage_v1alpha1_volume_attachment_source_convertToJSON(io_k8s_api_storage_v1alpha1_volume_attachment_source_t *io_k8s_api_storage_v1alpha1_volume_attachment_source);

#endif /* _io_k8s_api_storage_v1alpha1_volume_attachment_source_H_ */

