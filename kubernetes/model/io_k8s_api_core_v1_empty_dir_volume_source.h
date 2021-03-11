/*
 * io_k8s_api_core_v1_empty_dir_volume_source.h
 *
 * Represents an empty directory for a pod. Empty directory volumes support ownership management and SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_empty_dir_volume_source_H_
#define _io_k8s_api_core_v1_empty_dir_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_empty_dir_volume_source_t io_k8s_api_core_v1_empty_dir_volume_source_t;




typedef struct io_k8s_api_core_v1_empty_dir_volume_source_t {
    char *medium; // string
    char *size_limit; // string

} io_k8s_api_core_v1_empty_dir_volume_source_t;

io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source_create(
    char *medium,
    char *size_limit
);

void io_k8s_api_core_v1_empty_dir_volume_source_free(io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source);

io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_empty_dir_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_empty_dir_volume_source_convertToJSON(io_k8s_api_core_v1_empty_dir_volume_source_t *io_k8s_api_core_v1_empty_dir_volume_source);

#endif /* _io_k8s_api_core_v1_empty_dir_volume_source_H_ */

