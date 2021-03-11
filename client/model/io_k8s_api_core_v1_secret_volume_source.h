/*
 * io_k8s_api_core_v1_secret_volume_source.h
 *
 * Adapts a Secret into a volume.  The contents of the target Secret&#39;s Data field will be presented in a volume as files using the keys in the Data field as the file names. Secret volumes support ownership management and SELinux relabeling.
 */

#ifndef _io_k8s_api_core_v1_secret_volume_source_H_
#define _io_k8s_api_core_v1_secret_volume_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_secret_volume_source_t io_k8s_api_core_v1_secret_volume_source_t;

#include "io_k8s_api_core_v1_key_to_path.h"



typedef struct io_k8s_api_core_v1_secret_volume_source_t {
    int default_mode; //numeric
    list_t *items; //nonprimitive container
    int optional; //boolean
    char *secret_name; // string

} io_k8s_api_core_v1_secret_volume_source_t;

io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source_create(
    int default_mode,
    list_t *items,
    int optional,
    char *secret_name
);

void io_k8s_api_core_v1_secret_volume_source_free(io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source);

io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source_parseFromJSON(cJSON *io_k8s_api_core_v1_secret_volume_sourceJSON);

cJSON *io_k8s_api_core_v1_secret_volume_source_convertToJSON(io_k8s_api_core_v1_secret_volume_source_t *io_k8s_api_core_v1_secret_volume_source);

#endif /* _io_k8s_api_core_v1_secret_volume_source_H_ */

