/*
 * io_k8s_api_core_v1_secret.h
 *
 * Secret holds secret data of a certain type. The total bytes of the values in the Data field must be less than MaxSecretSize bytes.
 */

#ifndef _io_k8s_api_core_v1_secret_H_
#define _io_k8s_api_core_v1_secret_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_secret_t io_k8s_api_core_v1_secret_t;

#include "io_k8s_apimachinery_pkg_apis_meta_v1_object_meta.h"



typedef struct io_k8s_api_core_v1_secret_t {
    char *api_version; // string
    list_t* data; //map
    int immutable; //boolean
    char *kind; // string
    struct io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata; //model
    list_t* string_data; //map
    char *type; // string

} io_k8s_api_core_v1_secret_t;

io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret_create(
    char *api_version,
    list_t* data,
    int immutable,
    char *kind,
    io_k8s_apimachinery_pkg_apis_meta_v1_object_meta_t *metadata,
    list_t* string_data,
    char *type
);

void io_k8s_api_core_v1_secret_free(io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret);

io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret_parseFromJSON(cJSON *io_k8s_api_core_v1_secretJSON);

cJSON *io_k8s_api_core_v1_secret_convertToJSON(io_k8s_api_core_v1_secret_t *io_k8s_api_core_v1_secret);

#endif /* _io_k8s_api_core_v1_secret_H_ */

