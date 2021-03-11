/*
 * io_k8s_api_core_v1_http_header.h
 *
 * HTTPHeader describes a custom header to be used in HTTP probes
 */

#ifndef _io_k8s_api_core_v1_http_header_H_
#define _io_k8s_api_core_v1_http_header_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_core_v1_http_header_t io_k8s_api_core_v1_http_header_t;




typedef struct io_k8s_api_core_v1_http_header_t {
    char *name; // string
    char *value; // string

} io_k8s_api_core_v1_http_header_t;

io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header_create(
    char *name,
    char *value
);

void io_k8s_api_core_v1_http_header_free(io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header);

io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header_parseFromJSON(cJSON *io_k8s_api_core_v1_http_headerJSON);

cJSON *io_k8s_api_core_v1_http_header_convertToJSON(io_k8s_api_core_v1_http_header_t *io_k8s_api_core_v1_http_header);

#endif /* _io_k8s_api_core_v1_http_header_H_ */

