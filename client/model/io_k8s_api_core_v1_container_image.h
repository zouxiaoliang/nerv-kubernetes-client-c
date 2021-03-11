/*
 * io_k8s_api_core_v1_container_image.h
 *
 * Describe a container image
 */

#ifndef _io_k8s_api_core_v1_container_image_H_
#define _io_k8s_api_core_v1_container_image_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_container_image_t io_k8s_api_core_v1_container_image_t;




typedef struct io_k8s_api_core_v1_container_image_t {
    list_t *names; //primitive container
    long size_bytes; //numeric

} io_k8s_api_core_v1_container_image_t;

io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image_create(
    list_t *names,
    long size_bytes
);

void io_k8s_api_core_v1_container_image_free(io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image);

io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image_parseFromJSON(cJSON *io_k8s_api_core_v1_container_imageJSON);

cJSON *io_k8s_api_core_v1_container_image_convertToJSON(io_k8s_api_core_v1_container_image_t *io_k8s_api_core_v1_container_image);

#endif /* _io_k8s_api_core_v1_container_image_H_ */

