/*
 * io_k8s_api_core_v1_flocker_volume_source.h
 *
 * Represents a Flocker volume mounted by the Flocker agent. One and only one of datasetName and datasetUUID should be set. Flocker volumes do not support ownership management or SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_flocker_volume_source_H_
#define _io_k8s_api_core_v1_flocker_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_flocker_volume_source_t io_k8s_api_core_v1_flocker_volume_source_t;




typedef struct io_k8s_api_core_v1_flocker_volume_source_t {
    char *dataset_name; // string
    char *dataset_uuid; // string

} io_k8s_api_core_v1_flocker_volume_source_t;

io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source_create(
    char *dataset_name,
    char *dataset_uuid
);

void io_k8s_api_core_v1_flocker_volume_source_free(io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source);

io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_flocker_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_flocker_volume_source_convertToJSON(io_k8s_api_core_v1_flocker_volume_source_t *io_k8s_api_core_v1_flocker_volume_source);

#endif /* _io_k8s_api_core_v1_flocker_volume_source_H_ */

