/*
 * io_k8s_api_core_v1_quobyte_volume_source.h
 *
 * Represents a Quobyte mount that lasts the lifetime of a pod. Quobyte volumes do not support ownership management or SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_quobyte_volume_source_H_
#define _io_k8s_api_core_v1_quobyte_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_quobyte_volume_source_t io_k8s_api_core_v1_quobyte_volume_source_t;




typedef struct io_k8s_api_core_v1_quobyte_volume_source_t {
    char *group; // string
    int read_only; //boolean
    char *registry; // string
    char *tenant; // string
    char *user; // string
    char *volume; // string

} io_k8s_api_core_v1_quobyte_volume_source_t;

io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source_create(
    char *group,
    int read_only,
    char *registry,
    char *tenant,
    char *user,
    char *volume
);

void io_k8s_api_core_v1_quobyte_volume_source_free(io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source);

io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_quobyte_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_quobyte_volume_source_convertToJSON(io_k8s_api_core_v1_quobyte_volume_source_t *io_k8s_api_core_v1_quobyte_volume_source);

#endif /* _io_k8s_api_core_v1_quobyte_volume_source_H_ */

