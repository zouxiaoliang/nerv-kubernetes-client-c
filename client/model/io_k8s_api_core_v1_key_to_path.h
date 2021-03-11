/*
 * io_k8s_api_core_v1_key_to_path.h
 *
 * Maps a string key to a path within a volume.
 */

#ifndef _io_k8s_api_core_v1_key_to_path_H_
#define _io_k8s_api_core_v1_key_to_path_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_key_to_path_t io_k8s_api_core_v1_key_to_path_t;




typedef struct io_k8s_api_core_v1_key_to_path_t {
    char *key; // string
    int mode; //numeric
    char *path; // string

} io_k8s_api_core_v1_key_to_path_t;

io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path_create(
    char *key,
    int mode,
    char *path
);

void io_k8s_api_core_v1_key_to_path_free(io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path);

io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path_parseFromJSON(cJSON *io_k8s_api_core_v1_key_to_pathJSON);

cJSON *io_k8s_api_core_v1_key_to_path_convertToJSON(io_k8s_api_core_v1_key_to_path_t *io_k8s_api_core_v1_key_to_path);

#endif /* _io_k8s_api_core_v1_key_to_path_H_ */

