/*
 * io_k8s_api_networking_v1beta1_http_ingress_path.h
 *
 * HTTPIngressPath associates a path with a backend. Incoming urls matching the path are forwarded to the backend.
 */

#ifndef _io_k8s_api_networking_v1beta1_http_ingress_path_H_
#define _io_k8s_api_networking_v1beta1_http_ingress_path_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct io_k8s_api_networking_v1beta1_http_ingress_path_t io_k8s_api_networking_v1beta1_http_ingress_path_t;

#include "io_k8s_api_networking_v1beta1_ingress_backend.h"



typedef struct io_k8s_api_networking_v1beta1_http_ingress_path_t {
    struct io_k8s_api_networking_v1beta1_ingress_backend_t *backend; //model
    char *path; // string
    char *path_type; // string

} io_k8s_api_networking_v1beta1_http_ingress_path_t;

io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path_create(
    io_k8s_api_networking_v1beta1_ingress_backend_t *backend,
    char *path,
    char *path_type
);

void io_k8s_api_networking_v1beta1_http_ingress_path_free(io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path);

io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path_parseFromJSON(cJSON *io_k8s_api_networking_v1beta1_http_ingress_pathJSON);

cJSON *io_k8s_api_networking_v1beta1_http_ingress_path_convertToJSON(io_k8s_api_networking_v1beta1_http_ingress_path_t *io_k8s_api_networking_v1beta1_http_ingress_path);

#endif /* _io_k8s_api_networking_v1beta1_http_ingress_path_H_ */

