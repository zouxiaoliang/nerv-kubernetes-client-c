/*
 * io_k8s_api_core_v1_flex_volume_source.h
 *
 * FlexVolume represents a generic volume resource that is provisioned/attached using an exec based plugin.
 */

#ifndef _io_k8s_api_core_v1_flex_volume_source_H_
#define _io_k8s_api_core_v1_flex_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_flex_volume_source_t io_k8s_api_core_v1_flex_volume_source_t;

#include "io_k8s_api_core_v1_local_object_reference.h"



typedef struct io_k8s_api_core_v1_flex_volume_source_t {
    char *driver; // string
    char *fs_type; // string
    list_t* options; //map
    int read_only; //boolean
    struct io_k8s_api_core_v1_local_object_reference_t *secret_ref; //model

} io_k8s_api_core_v1_flex_volume_source_t;

io_k8s_api_core_v1_flex_volume_source_t *io_k8s_api_core_v1_flex_volume_source_create(
    char *driver,
    char *fs_type,
    list_t* options,
    int read_only,
    io_k8s_api_core_v1_local_object_reference_t *secret_ref
);

void io_k8s_api_core_v1_flex_volume_source_free(io_k8s_api_core_v1_flex_volume_source_t *io_k8s_api_core_v1_flex_volume_source);

io_k8s_api_core_v1_flex_volume_source_t *io_k8s_api_core_v1_flex_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_flex_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_flex_volume_source_convertToJSON(io_k8s_api_core_v1_flex_volume_source_t *io_k8s_api_core_v1_flex_volume_source);

#endif /* _io_k8s_api_core_v1_flex_volume_source_H_ */

