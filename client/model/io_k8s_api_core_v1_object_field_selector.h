/*
 * io_k8s_api_core_v1_object_field_selector.h
 *
 * ObjectFieldSelector selects an APIVersioned field of an object.
 */

#ifndef _io_k8s_api_core_v1_object_field_selector_H_
#define _io_k8s_api_core_v1_object_field_selector_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_object_field_selector_t io_k8s_api_core_v1_object_field_selector_t;




typedef struct io_k8s_api_core_v1_object_field_selector_t {
    char *api_version; // string
    char *field_path; // string

} io_k8s_api_core_v1_object_field_selector_t;

io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector_create(
    char *api_version,
    char *field_path
);

void io_k8s_api_core_v1_object_field_selector_free(io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector);

io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector_parseFromJSON(cJSON *io_k8s_api_core_v1_object_field_selectorJSON);

cJSON *io_k8s_api_core_v1_object_field_selector_convertToJSON(io_k8s_api_core_v1_object_field_selector_t *io_k8s_api_core_v1_object_field_selector);

#endif /* _io_k8s_api_core_v1_object_field_selector_H_ */

