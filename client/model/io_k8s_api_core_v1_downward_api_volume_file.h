/*
 * io_k8s_api_core_v1_downward_api_volume_file.h
 *
 * DownwardAPIVolumeFile represents information to create the file containing the pod field
 */

#ifndef _io_k8s_api_core_v1_downward_api_volume_file_H_
#define _io_k8s_api_core_v1_downward_api_volume_file_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_downward_api_volume_file_t io_k8s_api_core_v1_downward_api_volume_file_t;

#include "io_k8s_api_core_v1_object_field_selector.h"
#include "io_k8s_api_core_v1_resource_field_selector.h"



typedef struct io_k8s_api_core_v1_downward_api_volume_file_t {
    struct io_k8s_api_core_v1_object_field_selector_t *field_ref; //model
    int mode; //numeric
    char *path; // string
    struct io_k8s_api_core_v1_resource_field_selector_t *resource_field_ref; //model

} io_k8s_api_core_v1_downward_api_volume_file_t;

io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file_create(
    io_k8s_api_core_v1_object_field_selector_t *field_ref,
    int mode,
    char *path,
    io_k8s_api_core_v1_resource_field_selector_t *resource_field_ref
);

void io_k8s_api_core_v1_downward_api_volume_file_free(io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file);

io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file_parseFromJSON(cJSON *io_k8s_api_core_v1_downward_api_volume_fileJSON);

cJSON *io_k8s_api_core_v1_downward_api_volume_file_convertToJSON(io_k8s_api_core_v1_downward_api_volume_file_t *io_k8s_api_core_v1_downward_api_volume_file);

#endif /* _io_k8s_api_core_v1_downward_api_volume_file_H_ */

