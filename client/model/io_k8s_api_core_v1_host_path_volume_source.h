/*
 * io_k8s_api_core_v1_host_path_volume_source.h
 *
 * Represents a host path mapped into a pod. Host path volumes do not support ownership management or SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_host_path_volume_source_H_
#define _io_k8s_api_core_v1_host_path_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_host_path_volume_source_t io_k8s_api_core_v1_host_path_volume_source_t;




typedef struct io_k8s_api_core_v1_host_path_volume_source_t {
    char *path; // string
    char *type; // string

} io_k8s_api_core_v1_host_path_volume_source_t;

io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source_create(
    char *path,
    char *type
);

void io_k8s_api_core_v1_host_path_volume_source_free(io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source);

io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_host_path_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_host_path_volume_source_convertToJSON(io_k8s_api_core_v1_host_path_volume_source_t *io_k8s_api_core_v1_host_path_volume_source);

#endif /* _io_k8s_api_core_v1_host_path_volume_source_H_ */

