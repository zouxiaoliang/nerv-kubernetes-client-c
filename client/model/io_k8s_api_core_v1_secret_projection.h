/*
 * io_k8s_api_core_v1_secret_projection.h
 *
 * Adapts a secret into a projected volume.  The contents of the target Secret&#39;s Data field will be presented in a projected volume as files using the keys in the Data field as the file names. Note that this is identical to a secret volume source without the default mode.
 */

#ifndef _io_k8s_api_core_v1_secret_projection_H_
#define _io_k8s_api_core_v1_secret_projection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_secret_projection_t io_k8s_api_core_v1_secret_projection_t;

#include "io_k8s_api_core_v1_key_to_path.h"



typedef struct io_k8s_api_core_v1_secret_projection_t {
    list_t *items; //nonprimitive container
    char *name; // string
    int optional; //boolean

} io_k8s_api_core_v1_secret_projection_t;

io_k8s_api_core_v1_secret_projection_t *io_k8s_api_core_v1_secret_projection_create(
    list_t *items,
    char *name,
    int optional
);

void io_k8s_api_core_v1_secret_projection_free(io_k8s_api_core_v1_secret_projection_t *io_k8s_api_core_v1_secret_projection);

io_k8s_api_core_v1_secret_projection_t *io_k8s_api_core_v1_secret_projection_parseFromJSON(cJSON *io_k8s_api_core_v1_secret_projectionJSON);

cJSON *io_k8s_api_core_v1_secret_projection_convertToJSON(io_k8s_api_core_v1_secret_projection_t *io_k8s_api_core_v1_secret_projection);

#endif /* _io_k8s_api_core_v1_secret_projection_H_ */

