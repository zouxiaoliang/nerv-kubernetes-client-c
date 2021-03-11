/*
 * io_k8s_api_core_v1_fc_volume_source.h
 *
 * Represents a Fibre Channel volume. Fibre Channel volumes can only be mounted as read/write once. Fibre Channel volumes support ownership management and SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_fc_volume_source_H_
#define _io_k8s_api_core_v1_fc_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_fc_volume_source_t io_k8s_api_core_v1_fc_volume_source_t;




typedef struct io_k8s_api_core_v1_fc_volume_source_t {
    char *fs_type; // string
    int lun; //numeric
    int read_only; //boolean
    list_t *target_wwns; //primitive container
    list_t *wwids; //primitive container

} io_k8s_api_core_v1_fc_volume_source_t;

io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source_create(
    char *fs_type,
    int lun,
    int read_only,
    list_t *target_wwns,
    list_t *wwids
);

void io_k8s_api_core_v1_fc_volume_source_free(io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source);

io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_fc_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_fc_volume_source_convertToJSON(io_k8s_api_core_v1_fc_volume_source_t *io_k8s_api_core_v1_fc_volume_source);

#endif /* _io_k8s_api_core_v1_fc_volume_source_H_ */

